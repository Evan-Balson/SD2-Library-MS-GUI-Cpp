

#include "manage_books.h"

ManageBooks::ManageBooks(Program_Data& pd, Input_Validations& iv) : pd(pd), iv(iv) {}

void ManageBooks::Register_book(string nbTitle, string nbAuthors, int nbYear, string nbPublisher, int nbQTY, string nbSubjects) {


    nbTitle = iv.convert_to_upper(nbTitle);
    cout << endl;

    nbAuthors = iv.convert_to_upper(nbAuthors);

    vectAuthors = parseString(nbAuthors);

    nbPublisher = iv.convert_to_upper(nbPublisher);
    cout << endl;


    nbInStock = nbQTY;


    nbSubjects = iv.convert_to_upper(nbSubjects);
    vect_Update = parseString(nbSubjects);

   

    pd.latest_BID = pd.latest_BID + 1;
    string UIDGen = std::to_string(pd.latest_BID) + nbTitle.substr(0, 4) + std::to_string(nbYear); // come up with a id generator class

    pd.recentBK_registration = UIDGen;

    pd.libBooks.insert({
    { {UIDGen},{nbTitle, vectAuthors, nbYear, nbPublisher, nbQTY, nbInStock, vect_Update }} });

    nbAuthors = "";
    nbSubjects = "";


}

void ManageBooks::Delete_book(string search) {

    pd.libBooks.erase(search);

}

void ManageBooks::Update_book(string BookID, string nbTitle, string nbAuthors, int nbYear, string nbPublisher, int nbQTY, string nbSubjects) {

            search = BookID;
            nbTitle = iv.convert_to_upper(nbTitle);
            cout << endl;

            
            nbAuthors = iv.convert_to_upper(nbAuthors);
            vectAuthors = parseString(nbAuthors);

            nbPublisher = iv.convert_to_upper(nbPublisher);
            cout << endl;

            nbSubjects = iv.convert_to_upper(nbSubjects);
            vect_Update = parseString(nbSubjects);



            if (pd.libBooks[search].QTY > nbQTY) {

                nbInStock = pd.libBooks[search].InStock - (pd.libBooks[search].QTY - nbQTY);

            }
            else if (pd.libBooks[search].QTY < nbQTY) {

                nbInStock = pd.libBooks[search].InStock + (nbQTY - pd.libBooks[search].QTY);


            }
            else { // pd.libBooks[search].QTY == nbQTY

                nbInStock = pd.libBooks[search].InStock;

            }


            // update values
            pd.libBooks[search].Title = nbTitle;
            pd.libBooks[search].Authors = vectAuthors;
            pd.libBooks[search].Year = nbYear;
            pd.libBooks[search].Publisher = nbPublisher;
            pd.libBooks[search].QTY = nbQTY;
            pd.libBooks[search].InStock = nbInStock;
            pd.libBooks[search].Subjects = vect_Update;

            nbAuthors = "";
            nbSubjects = "";

        
}


std::vector<std::string> ManageBooks::parseString(const std::string& input) {
    std::vector<std::string> result;
    std::istringstream iss(input);
    std::string token;
    while (std::getline(iss, token, ',')) {
        result.push_back(token);
    }
    return result;
}