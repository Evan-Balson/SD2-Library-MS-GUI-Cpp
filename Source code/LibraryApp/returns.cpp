#include "returns.h"
#include "transaction.h"

RetBook::RetBook(SearchLibrary& sl, Program_Data& pd, Input_Validations& iv, fineCalculator& fc, manage_transactions& mt) : sl(sl), pd(pd), iv(iv), fc(fc), mt(mt) {}



void RetBook::returnaBook(string user_id, string bookSearch_ID) {

    search = bookSearch_ID;

        retDate = iv.formattedDate();
        total_fees = fc.calculate_fines(user_id, retDate, search);
            
        transaction = mt.process_payment(user_id, total_fees, search);


        if (pd.Book_returns.find(user_id) == pd.Book_returns.end()) {
            pd.Book_returns.insert({ {user_id}, {{retDate}, {search}, {total_fees}, {transaction}} });
        }
        else {
            pd.Book_returns[user_id].return_Date.push_back(retDate);
            pd.Book_returns[user_id].returned_Book.push_back(search);
            pd.Book_returns[user_id].totalFees.push_back(total_fees);
            pd.Book_returns[user_id].transaction_ID.push_back(transaction);
        }

        for (int i = 0; i < pd.sys_Users[user_id].currentBook.size(); i++) {
            if (search == pd.sys_Users[user_id].currentBook[i]) {
                user_position = i;
                break;
            }
        }

        for (int i = 0; i < pd.Borrow_details[user_id].Borrowed_Book.size(); i++) {
            if (search == pd.Borrow_details[user_id].Borrowed_Book[i]) {
                borrow_position = i;
                break;
            }
        }

        pd.Borrow_details[user_id].Borrowed_Book.erase(pd.Borrow_details[user_id].Borrowed_Book.begin() + borrow_position);
        pd.Borrow_details[user_id].Borrow_date.erase(pd.Borrow_details[user_id].Borrow_date.begin() + borrow_position);
        pd.sys_Users[user_id].currentBook.erase(pd.sys_Users[user_id].currentBook.begin() + user_position);
        pd.libBooks[search].InStock += 1;
       
}
