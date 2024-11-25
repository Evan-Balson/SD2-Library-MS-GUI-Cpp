#include "get_a_book.h"


GetBook::GetBook(SearchLibrary& sl, Program_Data& pd, Input_Validations& iv, manage_transactions& mt) : sl(sl), pd(pd), iv(iv), mt(mt) {}



void GetBook::rentaBook(std::string user_id, string book) {

    search = book;

    Borrow_date = iv.formattedDate();
    if (pd.Borrow_details.find(user_id) == pd.Borrow_details.end()) {
        pd.Borrow_details.insert({ {user_id}, {{Borrow_date}, {search}} });
    }
    else {
        pd.Borrow_details[user_id].Borrow_date.push_back(Borrow_date);
        pd.Borrow_details[user_id].Borrowed_Book.push_back(search);
    }
    pd.libBooks[search].InStock -= 1;
    pd.sys_Users[user_id].currentBook.push_back(search);

}
