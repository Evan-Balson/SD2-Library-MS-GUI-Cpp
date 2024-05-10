#include "Processes.h"

// Functional code headers
# include "program_data.h"
# include "validations.h"
# include "user_login.h"
# include "manage_user.h"
# include "search_library.h"
# include "manage_books.h"
# include "fines.h"
# include "returns.h"
# include "get_a_book.h"
# include "handling.h"
# include "dashboard.h"
# include "transaction.h"

/*

Program_Data loading;

	Input_Validations valid(loading);
	UserLogin gotologin(loading);
	Manage_users manage_userdata(loading, valid);
	SearchLibrary search(loading);
	ManageBooks manage(loading, valid);
	manage_transactions bank(loading, valid);
	fineCalculator fines(loading, valid);
	RetBook ret(search, loading, valid, fines,bank);
	GetBook rent(search, loading, valid,bank);
	file_handling files(loading);

*/


// These initialize objects so that we can pass data from the various classes

void Processes::beginProcesses() {



	Program_Data loading;
	file_handling files(loading);

	files.file_handling_chk();


}

void Processes::update_file() {

	Program_Data loading;
	file_handling files(loading);

	files.update_file();
	files.writeToCSV();

	files.update_file();


}
void Processes::writeToCSV() {
	Program_Data loading;
	file_handling files(loading);

	
	files.writeToCSV();


}

