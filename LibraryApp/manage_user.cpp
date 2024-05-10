
#include "manage_user.h"

Manage_users::Manage_users(Program_Data& pd, Input_Validations& iv) : pd(pd), iv(iv) {}



void Manage_users::Register_user(string fName, string lName, string nwRole, string nwpassword) {

            
    fName = iv.convert_to_upper(fName);
    cout << endl;
            
    lName = iv.convert_to_upper(lName);
    cout << endl;


    nwName = fName + " " + lName;

    
    nwRole = iv.convert_to_lower(nwRole);
    cout << endl;
        
    pd.latest_UID = pd.latest_UID + 1;
    string UIDGen = nwName.substr(0, 3) + std::to_string(pd.latest_UID); // come up with a id generator class
    pd.NewUser_ID = UIDGen;
 
    pd.sys_Users.insert({
    { UIDGen, {nwName, nwpassword, nwRole, nwlist}} });


}

void Manage_users::Remove_user(string search) {

        pd.sys_Users.erase(search);


}

void Manage_users::Update_user(string search, string fName, string lName, string nwRole, string nwpassword) {
    
    
       
        fName = iv.convert_to_upper(fName);
        cout << endl;

        
        lName = iv.convert_to_upper(lName);
        cout << endl;

        // combine the first name and last name
        nwName = fName + " " + lName;

        
        nwRole = iv.convert_to_lower(nwRole);
        cout << endl;

       
        pd.sys_Users[search].user_name = nwName;
        pd.sys_Users[search].role = nwRole;
        pd.sys_Users[search].password = nwpassword;
   




}

