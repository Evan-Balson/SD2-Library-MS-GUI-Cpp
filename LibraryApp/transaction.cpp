#include "transaction.h"
#include "System_Directory_Scan.h"

using namespace std;


manage_transactions::manage_transactions(Program_Data& pd, Input_Validations& iv) : pd(pd), iv(iv) {}


void manage_transactions::add_payment_method(string user, string card, string code, string pin, string date) {

	int convert_pin = stoi(pin);

	pd.Payment_Method[user].card_number = card;
	pd.Payment_Method[user].sortcode = code;
	pd.Payment_Method[user].pin = convert_pin;
	pd.Payment_Method[user].expiration_date = date;

}

string manage_transactions::process_payment(string user, float fees, string book_id) {

	date = pd.Payment_Method[user].expiration_date;
	validity = iv.isDateExpired(date);
	if (validity == true) {
		/*process payment*/
			/*generating transaction ID*/
		transaction_ID = "UK-BANK-" + to_string(pd.Transaction_IDC);
		pd.Transaction_IDC += 1;

		receipt(transaction_ID, user, book_id, fees);
		cout << "Payment Successfull!" << endl;
		return transaction_ID;


	}
	else {
			return "failed";
		
	}

	
}



// reciept layout
int manage_transactions::receipt(string transaction_ID, string user_id, string book_id, float fees) {

	//initializing system object
	System_Directory_Scan system;


	// create name the new directory for receipts:
	string newDirPath = "receipts";
	string fullPath;

	// creating the filne name string with transaction_ID:
	string filename = "receipts/receipt-" + transaction_ID + ".txt";

	// Create the directory
	if (system.createDirectory(newDirPath, fullPath)) {
		cout << endl;
		//std::cout << "New directory path: " << fullPath << std::endl;
	}

	// Open the file for writing
	ofstream outputFile(filename);

	// Check if the file is opened successfully
	if (!outputFile) {
		cerr << "Failed to open the file." << endl;
		return 1;
	}


	// Get the length of the string
	size_t length = pd.Payment_Method[user_id].card_number.length();

	// Get the last four characters using substr
	std::string lastFour = pd.Payment_Method[user_id].card_number.substr(length - 4);

	// Write the receipt content to the file
	outputFile << "STEPWISE UNIVERSITY LIBRARY POS" << endl;
	outputFile << "     50032 Eaton Drive" << endl;
	outputFile << "         Digby 528" << endl;
	outputFile << "   South Ham London 4HJ01" << endl;
	outputFile << "        United Kingdom" << endl << endl;

	outputFile << "      " << iv.get_current_date() << endl;
	outputFile << "    Order ID: " << transaction_ID << endl;
	outputFile << " ----------------------------" << endl << endl;

	outputFile << " Book ID:     " << book_id << endl;
	outputFile << " Fee:" << "\t" << "\t" << "\t" << fees << endl << endl;

	outputFile << " Sub Total:" << "\t" << "\t" << fees << endl;
	outputFile << "----------------------------" << endl << endl;

	outputFile << " Grand Total:" << "\t" << "\t" << fees << endl;
	outputFile << " ----------------------------" << endl << endl;

	outputFile << "Card:\tXXXX-XXXX-XXXX-" << lastFour << endl;
	outputFile << "        THANK YOU!" << endl << endl;

	// Close the file
	outputFile.close();

	int  print = system.launch_receipt_file(filename);

	if (print == 1) {

		cout << "Sorry, cannot detect operating system." << endl;
	}
	return 0;
}



