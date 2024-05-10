#pragma once
#include "Processes.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "program_data.h"
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
#include <msclr/marshal_cppstd.h>

using std::string;







namespace LibraryApp {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop; // Include this namespace for conversion
	using namespace Collections::Generic; // Include this for Dictionary
	Program_Data loading;
	Input_Validations valid(loading);
	UserLogin gotologin(loading);
	Manage_users manage_userdata(loading, valid);
	SearchLibrary search(loading);
	ManageBooks manage(loading, valid);
	manage_transactions bank(loading, valid);
	fineCalculator fines(loading, valid);
	RetBook ret(search, loading, valid, fines, bank);
	GetBook rent(search, loading, valid, bank);
	file_handling files(loading);

	
	string active_user_ID;
	string user_query_ID;
	//float balance = 0.00;
	bool payment_method_status;





	/// <summary>
	/// Summary for launchForm
	/// </summary>
	public ref class launchForm : public System::Windows::Forms::Form
	{

	public:
		launchForm(void)
		{

			
			InitializeComponent();

			
			files.file_handling_chk();

			//files.update_file();
			//files.writeToCSV();

			

			Stu_Dashboard->Hide();
			Lib_Dashboard->Hide();
			accountFees->Hide();
			returnspage->Hide();
			borrowPage->Hide();
			borrow_searchView->Hide();
			Manage_books_nav->Hide();
			add_payment_panel->Hide();
			lib_acc_search->Hide();
			new_PAY_lib->Hide();
			panel11->Hide();
			lib_brw_page->Hide();
			add_new_user_page->Hide();
			manageuser_page->Hide();
			update_userInfo_page->Hide();
			ManageBookPage->Hide();
			register_book_page->Hide();
			Update_Book_page->Hide();
			Book_availability_page->Hide();



			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~launchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit_Button;
	protected:
	private: System::Windows::Forms::Button^ sign_in_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ Agree_To_Terms;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ user_password_input;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ user_id_input;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Stu_Dashboard;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ goToReturnsPage;





	private: System::Windows::Forms::Button^ button5;


















	private: System::Windows::Forms::Button^ calculateFees;
	private: System::Windows::Forms::Panel^ Book_availability_page;









































private: System::Windows::Forms::DataGridView^ dataGridView1;


private: System::Windows::Forms::Button^ button12;


private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number_Available;
private: System::Windows::Forms::Panel^ Manage_books_nav;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Panel^ borrowPage;






private: System::Windows::Forms::DataGridView^ borrow_searchView;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookTitle;
private: System::Windows::Forms::Label^ moreInfo_Borrow;
private: System::Windows::Forms::Label^ BorrowStatus;
private: System::Windows::Forms::Button^ search_Borrow;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ btnBorrow_book;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ Borrow_input;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ Lib_Dashboard;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ lib_Account;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Panel^ returnspage;
private: System::Windows::Forms::Label^ FeeStatus;
private: System::Windows::Forms::Label^ searchStatus;
private: System::Windows::Forms::Button^ returns_searchBK;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ btnReturnBook;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ returnsBK_input;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ accountFees;
private: System::Windows::Forms::Panel^ add_payment_panel;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ cardDate;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ pin;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ sortcode;
private: System::Windows::Forms::Label^ scode;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ cardno;
private: System::Windows::Forms::Label^ cno;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ displayFees;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ btnAddPayMethod;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Panel^ lib_acc_search;
















private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ acc_NEW_pay;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ account_UID_input;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ acc_UID_search;
private: System::Windows::Forms::Panel^ new_PAY_lib;

private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::TextBox^ card_no_lib;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ lib_ret_status;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Button^ lib_ret_search;

private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ lib_ret_btn;

private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Panel^ lib_brw_page;

private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::TextBox^ brw_UID_input;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ brw_pg_status;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ brw_search_btn;

private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ brw_lib_btn;

private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::TextBox^ brw_BID_input;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Panel^ manageuser_page;




























private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Panel^ add_new_user_page;

private: System::Windows::Forms::Button^ add_new_user_btn;

private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::TextBox^ new_user_password;


private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::TextBox^ new_user_role;



private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::TextBox^ user_Lname;


private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::TextBox^ user_Fname;


private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Panel^ update_userInfo_page;

private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::TextBox^ UP_ID_search_input;

private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ UP_ID_search_btn;

private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ up_user_submit;

private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::TextBox^ up_pass_input;

private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::TextBox^ up_role_input;

private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::TextBox^ up_LName_input;

private: System::Windows::Forms::Label^ label41;

private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::TextBox^ up_fName_input;

private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ del_status;
private: System::Windows::Forms::Panel^ underline_textbox;


private: System::Windows::Forms::TextBox^ del_user_input;
private: System::Windows::Forms::Label^ del_user_title;
private: System::Windows::Forms::Button^ del_search_btn;
private: System::Windows::Forms::Button^ del_user_btn;
private: System::Windows::Forms::Panel^ ManageBookPage;

private: System::Windows::Forms::Label^ del_book_status;



private: System::Windows::Forms::TextBox^ del_book_input;
private: System::Windows::Forms::Label^ del_book_title;
private: System::Windows::Forms::Button^ del_book_search_btn;
private: System::Windows::Forms::Button^ delete_the_book_btn;




























private: System::Windows::Forms::Panel^ register_book_page;

private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::TextBox^ Pub_reg;

private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::TextBox^ Sub_reg;

private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Panel^ panel40;
private: System::Windows::Forms::TextBox^ auth_reg;

private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::TextBox^ BT_reg;

private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::TextBox^ QTY_reg;

private: System::Windows::Forms::Label^ label73;



private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Panel^ panel37;
private: System::Windows::Forms::TextBox^ Year_reg;

private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Panel^ Update_Book_page;




private: System::Windows::Forms::Label^ label56;

private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::TextBox^ Year_up;

private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::TextBox^ QTY_up;

private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::TextBox^ Pub_up;

private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::TextBox^ Sub_up;

private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::TextBox^ Auth_up;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::TextBox^ BT_up;

private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ search_up_status;




private: System::Windows::Forms::TextBox^ search_up_input;
private: System::Windows::Forms::Label^ search_up_title;


private: System::Windows::Forms::Button^ search_up_btn;
private: System::Windows::Forms::Button^ update_confim;
























































































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(launchForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Exit_Button = (gcnew System::Windows::Forms::Button());
			this->sign_in_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Agree_To_Terms = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->user_password_input = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->user_id_input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Stu_Dashboard = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->goToReturnsPage = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->calculateFees = (gcnew System::Windows::Forms::Button());
			this->Book_availability_page = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Number_Available = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Manage_books_nav = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->borrowPage = (gcnew System::Windows::Forms::Panel());
			this->borrow_searchView = (gcnew System::Windows::Forms::DataGridView());
			this->BookID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->moreInfo_Borrow = (gcnew System::Windows::Forms::Label());
			this->BorrowStatus = (gcnew System::Windows::Forms::Label());
			this->search_Borrow = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btnBorrow_book = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Borrow_input = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Lib_Dashboard = (gcnew System::Windows::Forms::Panel());
			this->lib_acc_search = (gcnew System::Windows::Forms::Panel());
			this->new_PAY_lib = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->card_no_lib = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->acc_UID_search = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->account_UID_input = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->acc_NEW_pay = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lib_Account = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->returnspage = (gcnew System::Windows::Forms::Panel());
			this->FeeStatus = (gcnew System::Windows::Forms::Label());
			this->searchStatus = (gcnew System::Windows::Forms::Label());
			this->returns_searchBK = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnReturnBook = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->returnsBK_input = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->accountFees = (gcnew System::Windows::Forms::Panel());
			this->add_payment_panel = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->cardDate = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pin = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->sortcode = (gcnew System::Windows::Forms::TextBox());
			this->scode = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->cardno = (gcnew System::Windows::Forms::TextBox());
			this->cno = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->displayFees = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btnAddPayMethod = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->lib_ret_status = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->lib_ret_search = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->lib_ret_btn = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->lib_brw_page = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->brw_UID_input = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->brw_pg_status = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->brw_search_btn = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->brw_lib_btn = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->brw_BID_input = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->manageuser_page = (gcnew System::Windows::Forms::Panel());
			this->del_status = (gcnew System::Windows::Forms::Label());
			this->underline_textbox = (gcnew System::Windows::Forms::Panel());
			this->del_user_input = (gcnew System::Windows::Forms::TextBox());
			this->del_user_title = (gcnew System::Windows::Forms::Label());
			this->del_search_btn = (gcnew System::Windows::Forms::Button());
			this->del_user_btn = (gcnew System::Windows::Forms::Button());
			this->update_userInfo_page = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->UP_ID_search_input = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->UP_ID_search_btn = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->up_user_submit = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->up_pass_input = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->up_role_input = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->up_LName_input = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->up_fName_input = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->add_new_user_page = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->add_new_user_btn = (gcnew System::Windows::Forms::Button());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->new_user_password = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->new_user_role = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->user_Lname = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->user_Fname = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->ManageBookPage = (gcnew System::Windows::Forms::Panel());
			this->Update_Book_page = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->Year_up = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->QTY_up = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->Pub_up = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->Sub_up = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->Auth_up = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->BT_up = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->register_book_page = (gcnew System::Windows::Forms::Panel());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->Year_reg = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->QTY_reg = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->Pub_reg = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->Sub_reg = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->auth_reg = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->BT_reg = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->search_up_status = (gcnew System::Windows::Forms::Label());
			this->search_up_input = (gcnew System::Windows::Forms::TextBox());
			this->search_up_title = (gcnew System::Windows::Forms::Label());
			this->search_up_btn = (gcnew System::Windows::Forms::Button());
			this->update_confim = (gcnew System::Windows::Forms::Button());
			this->del_book_status = (gcnew System::Windows::Forms::Label());
			this->del_book_input = (gcnew System::Windows::Forms::TextBox());
			this->del_book_title = (gcnew System::Windows::Forms::Label());
			this->del_book_search_btn = (gcnew System::Windows::Forms::Button());
			this->delete_the_book_btn = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->Stu_Dashboard->SuspendLayout();
			this->Book_availability_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Manage_books_nav->SuspendLayout();
			this->borrowPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrow_searchView))->BeginInit();
			this->Lib_Dashboard->SuspendLayout();
			this->lib_acc_search->SuspendLayout();
			this->new_PAY_lib->SuspendLayout();
			this->returnspage->SuspendLayout();
			this->accountFees->SuspendLayout();
			this->add_payment_panel->SuspendLayout();
			this->panel11->SuspendLayout();
			this->lib_brw_page->SuspendLayout();
			this->manageuser_page->SuspendLayout();
			this->update_userInfo_page->SuspendLayout();
			this->add_new_user_page->SuspendLayout();
			this->ManageBookPage->SuspendLayout();
			this->Update_Book_page->SuspendLayout();
			this->register_book_page->SuspendLayout();
			this->SuspendLayout();
			// 
			// Exit_Button
			// 
			this->Exit_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Exit_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Exit_Button->Location = System::Drawing::Point(170, 360);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(124, 41);
			this->Exit_Button->TabIndex = 21;
			this->Exit_Button->Text = L"Exit";
			this->Exit_Button->UseVisualStyleBackColor = false;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &launchForm::Exit_Button_Click);
			// 
			// sign_in_button
			// 
			this->sign_in_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->sign_in_button->FlatAppearance->BorderSize = 0;
			this->sign_in_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sign_in_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign_in_button->Location = System::Drawing::Point(40, 360);
			this->sign_in_button->Name = L"sign_in_button";
			this->sign_in_button->Size = System::Drawing::Size(124, 41);
			this->sign_in_button->TabIndex = 20;
			this->sign_in_button->Text = L"Sign in";
			this->sign_in_button->UseVisualStyleBackColor = false;
			this->sign_in_button->Click += gcnew System::EventHandler(this, &launchForm::sign_in_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(141, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Terms and Condiitions";
			// 
			// Agree_To_Terms
			// 
			this->Agree_To_Terms->AutoSize = true;
			this->Agree_To_Terms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Agree_To_Terms->Checked = true;
			this->Agree_To_Terms->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Agree_To_Terms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agree_To_Terms->Location = System::Drawing::Point(40, 321);
			this->Agree_To_Terms->Name = L"Agree_To_Terms";
			this->Agree_To_Terms->Size = System::Drawing::Size(113, 21);
			this->Agree_To_Terms->TabIndex = 18;
			this->Agree_To_Terms->Text = L"I agree to the ";
			this->Agree_To_Terms->UseVisualStyleBackColor = false;
			this->Agree_To_Terms->CheckedChanged += gcnew System::EventHandler(this, &launchForm::Agree_To_Terms_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(40, 284);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(245, 2);
			this->panel2->TabIndex = 17;
			// 
			// user_password_input
			// 
			this->user_password_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->user_password_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_password_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_password_input->ForeColor = System::Drawing::Color::White;
			this->user_password_input->Location = System::Drawing::Point(40, 261);
			this->user_password_input->Name = L"user_password_input";
			this->user_password_input->Size = System::Drawing::Size(245, 23);
			this->user_password_input->TabIndex = 16;
			this->user_password_input->UseSystemPasswordChar = true;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(40, 210);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(245, 2);
			this->panel1->TabIndex = 15;
			// 
			// user_id_input
			// 
			this->user_id_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->user_id_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_id_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_id_input->ForeColor = System::Drawing::Color::White;
			this->user_id_input->Location = System::Drawing::Point(40, 187);
			this->user_id_input->Name = L"user_id_input";
			this->user_id_input->Size = System::Drawing::Size(245, 23);
			this->user_id_input->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(36, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(36, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"User ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(31, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 54);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Sign in";
			// 
			// Stu_Dashboard
			// 
			this->Stu_Dashboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Stu_Dashboard.BackgroundImage")));
			this->Stu_Dashboard->Controls->Add(this->button5);
			this->Stu_Dashboard->Controls->Add(this->button3);
			this->Stu_Dashboard->Controls->Add(this->goToReturnsPage);
			this->Stu_Dashboard->Controls->Add(this->button1);
			this->Stu_Dashboard->Controls->Add(this->label5);
			this->Stu_Dashboard->Controls->Add(this->calculateFees);
			this->Stu_Dashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Stu_Dashboard->Location = System::Drawing::Point(0, 0);
			this->Stu_Dashboard->Name = L"Stu_Dashboard";
			this->Stu_Dashboard->Size = System::Drawing::Size(725, 469);
			this->Stu_Dashboard->TabIndex = 22;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Location = System::Drawing::Point(75, 249);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 47);
			this->button5->TabIndex = 28;
			this->button5->Text = L"log-out";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &launchForm::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(40, 391);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 47);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Available Books";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// goToReturnsPage
			// 
			this->goToReturnsPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->goToReturnsPage->FlatAppearance->BorderSize = 0;
			this->goToReturnsPage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->goToReturnsPage->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goToReturnsPage->Location = System::Drawing::Point(40, 187);
			this->goToReturnsPage->Name = L"goToReturnsPage";
			this->goToReturnsPage->Size = System::Drawing::Size(265, 47);
			this->goToReturnsPage->TabIndex = 23;
			this->goToReturnsPage->Text = L"Return A Book";
			this->goToReturnsPage->UseVisualStyleBackColor = false;
			this->goToReturnsPage->Click += gcnew System::EventHandler(this, &launchForm::goToReturnsPage_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(40, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 47);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Borrow A Book";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &launchForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(31, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(366, 54);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Student Dashboard";
			this->label5->Click += gcnew System::EventHandler(this, &launchForm::label5_Click);
			// 
			// calculateFees
			// 
			this->calculateFees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->calculateFees->FlatAppearance->BorderSize = 0;
			this->calculateFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calculateFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculateFees->Location = System::Drawing::Point(281, 391);
			this->calculateFees->Name = L"calculateFees";
			this->calculateFees->Size = System::Drawing::Size(230, 47);
			this->calculateFees->TabIndex = 0;
			this->calculateFees->Text = L"Account";
			this->calculateFees->UseVisualStyleBackColor = false;
			this->calculateFees->Click += gcnew System::EventHandler(this, &launchForm::calculateFees_Click);
			// 
			// Book_availability_page
			// 
			this->Book_availability_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Book_availability_page.BackgroundImage")));
			this->Book_availability_page->Controls->Add(this->dataGridView1);
			this->Book_availability_page->Controls->Add(this->button12);
			this->Book_availability_page->Controls->Add(this->label16);
			this->Book_availability_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Book_availability_page->Location = System::Drawing::Point(0, 0);
			this->Book_availability_page->Name = L"Book_availability_page";
			this->Book_availability_page->Size = System::Drawing::Size(725, 469);
			this->Book_availability_page->TabIndex = 35;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->Stock, this->Number_Available
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Size = System::Drawing::Size(553, 290);
			this->dataGridView1->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Book ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"BookTitle";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 6;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 125;
			// 
			// Number_Available
			// 
			this->Number_Available->HeaderText = L"QTY Available";
			this->Number_Available->MinimumWidth = 6;
			this->Number_Available->Name = L"Number_Available";
			this->Number_Available->Width = 125;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->Location = System::Drawing::Point(253, 407);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(171, 41);
			this->button12->TabIndex = 27;
			this->button12->Text = L"Back";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(31, 28);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(314, 54);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Book Availability";
			// 
			// Manage_books_nav
			// 
			this->Manage_books_nav->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Manage_books_nav.BackgroundImage")));
			this->Manage_books_nav->Controls->Add(this->button2);
			this->Manage_books_nav->Controls->Add(this->button13);
			this->Manage_books_nav->Controls->Add(this->button14);
			this->Manage_books_nav->Controls->Add(this->button15);
			this->Manage_books_nav->Controls->Add(this->button17);
			this->Manage_books_nav->Controls->Add(this->label11);
			this->Manage_books_nav->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Manage_books_nav->Location = System::Drawing::Point(0, 0);
			this->Manage_books_nav->Name = L"Manage_books_nav";
			this->Manage_books_nav->Size = System::Drawing::Size(725, 469);
			this->Manage_books_nav->TabIndex = 36;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(75, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 47);
			this->button2->TabIndex = 28;
			this->button2->Text = L"log-out";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(281, 391);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(230, 47);
			this->button13->TabIndex = 25;
			this->button13->Text = L"Analytics";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &launchForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(40, 391);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(235, 47);
			this->button14->TabIndex = 24;
			this->button14->Text = L"Find Books Availability";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(40, 187);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(265, 47);
			this->button15->TabIndex = 23;
			this->button15->Text = L"Manage System Users";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(40, 121);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(265, 47);
			this->button17->TabIndex = 22;
			this->button17->Text = L"Manage Library Books";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(31, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(284, 54);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Manage Books";
			// 
			// borrowPage
			// 
			this->borrowPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"borrowPage.BackgroundImage")));
			this->borrowPage->Controls->Add(this->borrow_searchView);
			this->borrowPage->Controls->Add(this->moreInfo_Borrow);
			this->borrowPage->Controls->Add(this->BorrowStatus);
			this->borrowPage->Controls->Add(this->search_Borrow);
			this->borrowPage->Controls->Add(this->button11);
			this->borrowPage->Controls->Add(this->btnBorrow_book);
			this->borrowPage->Controls->Add(this->panel5);
			this->borrowPage->Controls->Add(this->Borrow_input);
			this->borrowPage->Controls->Add(this->label13);
			this->borrowPage->Controls->Add(this->label14);
			this->borrowPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->borrowPage->Location = System::Drawing::Point(0, 0);
			this->borrowPage->Name = L"borrowPage";
			this->borrowPage->Size = System::Drawing::Size(725, 469);
			this->borrowPage->TabIndex = 37;
			// 
			// borrow_searchView
			// 
			this->borrow_searchView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->borrow_searchView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->borrow_searchView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->BookID,
					this->BookTitle
			});
			this->borrow_searchView->Location = System::Drawing::Point(431, 0);
			this->borrow_searchView->Name = L"borrow_searchView";
			this->borrow_searchView->RowHeadersWidth = 51;
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			this->borrow_searchView->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->borrow_searchView->Size = System::Drawing::Size(294, 469);
			this->borrow_searchView->TabIndex = 31;
			this->borrow_searchView->Visible = false;
			// 
			// BookID
			// 
			this->BookID->HeaderText = L"Book ID";
			this->BookID->MinimumWidth = 6;
			this->BookID->Name = L"BookID";
			this->BookID->Width = 125;
			// 
			// BookTitle
			// 
			this->BookTitle->HeaderText = L"BookTitle";
			this->BookTitle->MinimumWidth = 6;
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Width = 125;
			// 
			// moreInfo_Borrow
			// 
			this->moreInfo_Borrow->AutoSize = true;
			this->moreInfo_Borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->moreInfo_Borrow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->moreInfo_Borrow->ForeColor = System::Drawing::SystemColors::Control;
			this->moreInfo_Borrow->Location = System::Drawing::Point(36, 324);
			this->moreInfo_Borrow->Name = L"moreInfo_Borrow";
			this->moreInfo_Borrow->Size = System::Drawing::Size(73, 20);
			this->moreInfo_Borrow->TabIndex = 30;
			this->moreInfo_Borrow->Text = L"pending...";
			// 
			// BorrowStatus
			// 
			this->BorrowStatus->AutoSize = true;
			this->BorrowStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->BorrowStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BorrowStatus->ForeColor = System::Drawing::SystemColors::Control;
			this->BorrowStatus->Location = System::Drawing::Point(31, 284);
			this->BorrowStatus->Name = L"BorrowStatus";
			this->BorrowStatus->Size = System::Drawing::Size(109, 45);
			this->BorrowStatus->TabIndex = 29;
			this->BorrowStatus->Text = L"Status";
			// 
			// search_Borrow
			// 
			this->search_Borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->search_Borrow->FlatAppearance->BorderSize = 0;
			this->search_Borrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_Borrow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_Borrow->Location = System::Drawing::Point(40, 163);
			this->search_Borrow->Name = L"search_Borrow";
			this->search_Borrow->Size = System::Drawing::Size(124, 41);
			this->search_Borrow->TabIndex = 28;
			this->search_Borrow->Text = L"Search";
			this->search_Borrow->UseVisualStyleBackColor = false;
			this->search_Borrow->Click += gcnew System::EventHandler(this, &launchForm::search_Borrow_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->Location = System::Drawing::Point(223, 403);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(171, 41);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Back";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &launchForm::button11_Click_1);
			// 
			// btnBorrow_book
			// 
			this->btnBorrow_book->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnBorrow_book->Enabled = false;
			this->btnBorrow_book->FlatAppearance->BorderSize = 0;
			this->btnBorrow_book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBorrow_book->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrow_book->Location = System::Drawing::Point(40, 403);
			this->btnBorrow_book->Name = L"btnBorrow_book";
			this->btnBorrow_book->Size = System::Drawing::Size(177, 41);
			this->btnBorrow_book->TabIndex = 26;
			this->btnBorrow_book->Text = L"Borrow Now";
			this->btnBorrow_book->UseVisualStyleBackColor = false;
			this->btnBorrow_book->Click += gcnew System::EventHandler(this, &launchForm::btnBorrow_book_Click);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(40, 149);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(245, 2);
			this->panel5->TabIndex = 25;
			// 
			// Borrow_input
			// 
			this->Borrow_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Borrow_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Borrow_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Borrow_input->ForeColor = System::Drawing::Color::White;
			this->Borrow_input->Location = System::Drawing::Point(40, 126);
			this->Borrow_input->Name = L"Borrow_input";
			this->Borrow_input->Size = System::Drawing::Size(245, 23);
			this->Borrow_input->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(36, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(116, 20);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Book ID or Tilte:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(31, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(286, 54);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Borrow A Book";
			// 
			// Lib_Dashboard
			// 
			this->Lib_Dashboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lib_Dashboard.BackgroundImage")));
			this->Lib_Dashboard->Controls->Add(this->lib_acc_search);
			this->Lib_Dashboard->Controls->Add(this->button19);
			this->Lib_Dashboard->Controls->Add(this->button7);
			this->Lib_Dashboard->Controls->Add(this->button6);
			this->Lib_Dashboard->Controls->Add(this->lib_Account);
			this->Lib_Dashboard->Controls->Add(this->button8);
			this->Lib_Dashboard->Controls->Add(this->button9);
			this->Lib_Dashboard->Controls->Add(this->button10);
			this->Lib_Dashboard->Controls->Add(this->label6);
			this->Lib_Dashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Lib_Dashboard->Location = System::Drawing::Point(0, 0);
			this->Lib_Dashboard->Name = L"Lib_Dashboard";
			this->Lib_Dashboard->Size = System::Drawing::Size(725, 469);
			this->Lib_Dashboard->TabIndex = 38;
			// 
			// lib_acc_search
			// 
			this->lib_acc_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lib_acc_search.BackgroundImage")));
			this->lib_acc_search->Controls->Add(this->new_PAY_lib);
			this->lib_acc_search->Controls->Add(this->acc_UID_search);
			this->lib_acc_search->Controls->Add(this->panel10);
			this->lib_acc_search->Controls->Add(this->account_UID_input);
			this->lib_acc_search->Controls->Add(this->label30);
			this->lib_acc_search->Controls->Add(this->label25);
			this->lib_acc_search->Controls->Add(this->label26);
			this->lib_acc_search->Controls->Add(this->label27);
			this->lib_acc_search->Controls->Add(this->label28);
			this->lib_acc_search->Controls->Add(this->button21);
			this->lib_acc_search->Controls->Add(this->acc_NEW_pay);
			this->lib_acc_search->Controls->Add(this->label29);
			this->lib_acc_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lib_acc_search->Location = System::Drawing::Point(0, 0);
			this->lib_acc_search->Name = L"lib_acc_search";
			this->lib_acc_search->Size = System::Drawing::Size(725, 469);
			this->lib_acc_search->TabIndex = 42;
			// 
			// new_PAY_lib
			// 
			this->new_PAY_lib->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->new_PAY_lib->Controls->Add(this->button20);
			this->new_PAY_lib->Controls->Add(this->panel12);
			this->new_PAY_lib->Controls->Add(this->textBox1);
			this->new_PAY_lib->Controls->Add(this->label17);
			this->new_PAY_lib->Controls->Add(this->panel13);
			this->new_PAY_lib->Controls->Add(this->textBox2);
			this->new_PAY_lib->Controls->Add(this->label19);
			this->new_PAY_lib->Controls->Add(this->panel14);
			this->new_PAY_lib->Controls->Add(this->textBox3);
			this->new_PAY_lib->Controls->Add(this->label22);
			this->new_PAY_lib->Controls->Add(this->label23);
			this->new_PAY_lib->Controls->Add(this->panel15);
			this->new_PAY_lib->Controls->Add(this->card_no_lib);
			this->new_PAY_lib->Controls->Add(this->label24);
			this->new_PAY_lib->Location = System::Drawing::Point(29, 29);
			this->new_PAY_lib->Name = L"new_PAY_lib";
			this->new_PAY_lib->Size = System::Drawing::Size(491, 410);
			this->new_PAY_lib->TabIndex = 39;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(299, 316);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(154, 47);
			this->button20->TabIndex = 32;
			this->button20->Text = L"Submit";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &launchForm::button20_Click);
			// 
			// panel12
			// 
			this->panel12->Location = System::Drawing::Point(20, 361);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(245, 2);
			this->panel12->TabIndex = 31;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(20, 338);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 23);
			this->textBox1->TabIndex = 30;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::Control;
			this->label17->Location = System::Drawing::Point(16, 313);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 20);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Date: mm/yyyy";
			// 
			// panel13
			// 
			this->panel13->Location = System::Drawing::Point(20, 296);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(245, 2);
			this->panel13->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(20, 273);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(245, 23);
			this->textBox2->TabIndex = 27;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::Control;
			this->label19->Location = System::Drawing::Point(16, 248);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 20);
			this->label19->TabIndex = 26;
			this->label19->Text = L"Pin: xxx";
			// 
			// panel14
			// 
			this->panel14->Location = System::Drawing::Point(20, 221);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(245, 2);
			this->panel14->TabIndex = 25;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(20, 198);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(245, 23);
			this->textBox3->TabIndex = 24;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::Control;
			this->label22->Location = System::Drawing::Point(16, 173);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(124, 20);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Sort Code: xxxxxx";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::Control;
			this->label23->Location = System::Drawing::Point(6, 45);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(192, 23);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Add Payment Method:";
			// 
			// panel15
			// 
			this->panel15->Location = System::Drawing::Point(20, 153);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(245, 2);
			this->panel15->TabIndex = 18;
			// 
			// card_no_lib
			// 
			this->card_no_lib->BackColor = System::Drawing::Color::White;
			this->card_no_lib->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->card_no_lib->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card_no_lib->ForeColor = System::Drawing::Color::Black;
			this->card_no_lib->Location = System::Drawing::Point(20, 130);
			this->card_no_lib->Name = L"card_no_lib";
			this->card_no_lib->Size = System::Drawing::Size(245, 23);
			this->card_no_lib->TabIndex = 17;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::Control;
			this->label24->Location = System::Drawing::Point(16, 105);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(204, 20);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Card No.: xxxx-xxxx-xxxx-xxxx";
			// 
			// acc_UID_search
			// 
			this->acc_UID_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->acc_UID_search->FlatAppearance->BorderSize = 0;
			this->acc_UID_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->acc_UID_search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acc_UID_search->Location = System::Drawing::Point(40, 159);
			this->acc_UID_search->Name = L"acc_UID_search";
			this->acc_UID_search->Size = System::Drawing::Size(113, 39);
			this->acc_UID_search->TabIndex = 38;
			this->acc_UID_search->Text = L"Search";
			this->acc_UID_search->UseVisualStyleBackColor = false;
			this->acc_UID_search->Click += gcnew System::EventHandler(this, &launchForm::acc_UID_search_Click);
			// 
			// panel10
			// 
			this->panel10->Location = System::Drawing::Point(40, 149);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(245, 2);
			this->panel10->TabIndex = 37;
			// 
			// account_UID_input
			// 
			this->account_UID_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->account_UID_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->account_UID_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->account_UID_input->ForeColor = System::Drawing::Color::White;
			this->account_UID_input->Location = System::Drawing::Point(40, 126);
			this->account_UID_input->Name = L"account_UID_input";
			this->account_UID_input->Size = System::Drawing::Size(245, 23);
			this->account_UID_input->TabIndex = 36;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::Control;
			this->label30->Location = System::Drawing::Point(36, 101);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(169, 20);
			this->label30->TabIndex = 35;
			this->label30->Text = L"Enter User ID for details:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label25->Location = System::Drawing::Point(37, 251);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(85, 28);
			this->label25->TabIndex = 33;
			this->label25->Text = L"pending";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::Control;
			this->label26->Location = System::Drawing::Point(37, 223);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(224, 28);
			this->label26->TabIndex = 32;
			this->label26->Text = L"Payment Method Status:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::Control;
			this->label27->Location = System::Drawing::Point(39, 313);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(137, 62);
			this->label27->TabIndex = 31;
			this->label27->Text = L"$0.00";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::Control;
			this->label28->Location = System::Drawing::Point(37, 285);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(168, 28);
			this->label28->TabIndex = 30;
			this->label28->Text = L"Your Current Fees:";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button21->Location = System::Drawing::Point(281, 391);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(239, 47);
			this->button21->TabIndex = 28;
			this->button21->Text = L"Back";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &launchForm::button21_Click);
			// 
			// acc_NEW_pay
			// 
			this->acc_NEW_pay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->acc_NEW_pay->Enabled = false;
			this->acc_NEW_pay->FlatAppearance->BorderSize = 0;
			this->acc_NEW_pay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->acc_NEW_pay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acc_NEW_pay->Location = System::Drawing::Point(40, 391);
			this->acc_NEW_pay->Name = L"acc_NEW_pay";
			this->acc_NEW_pay->Size = System::Drawing::Size(235, 47);
			this->acc_NEW_pay->TabIndex = 24;
			this->acc_NEW_pay->Text = L"Update Payment Method";
			this->acc_NEW_pay->UseVisualStyleBackColor = false;
			this->acc_NEW_pay->Click += gcnew System::EventHandler(this, &launchForm::acc_NEW_pay_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::Control;
			this->label29->Location = System::Drawing::Point(31, 28);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(168, 54);
			this->label29->TabIndex = 21;
			this->label29->Text = L"Account";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(182, 248);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(123, 47);
			this->button19->TabIndex = 30;
			this->button19->Text = L"Borrow";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &launchForm::button19_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Green;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(40, 248);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 47);
			this->button7->TabIndex = 29;
			this->button7->Text = L"Returns";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &launchForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(509, 391);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(204, 47);
			this->button6->TabIndex = 28;
			this->button6->Text = L"log-out";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &launchForm::button6_Click_2);
			// 
			// lib_Account
			// 
			this->lib_Account->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lib_Account->FlatAppearance->BorderSize = 0;
			this->lib_Account->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lib_Account->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lib_Account->Location = System::Drawing::Point(281, 391);
			this->lib_Account->Name = L"lib_Account";
			this->lib_Account->Size = System::Drawing::Size(221, 47);
			this->lib_Account->TabIndex = 25;
			this->lib_Account->Text = L"Account";
			this->lib_Account->UseVisualStyleBackColor = false;
			this->lib_Account->Click += gcnew System::EventHandler(this, &launchForm::lib_Account_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(40, 391);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(235, 47);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Find Books Availability";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(40, 187);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(265, 47);
			this->button9->TabIndex = 23;
			this->button9->Text = L"Manage System Users";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &launchForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(40, 121);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(265, 47);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Manage Library Books";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &launchForm::button10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(31, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(381, 54);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Librarian Dashboard";
			// 
			// returnspage
			// 
			this->returnspage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnspage.BackgroundImage")));
			this->returnspage->Controls->Add(this->FeeStatus);
			this->returnspage->Controls->Add(this->searchStatus);
			this->returnspage->Controls->Add(this->returns_searchBK);
			this->returnspage->Controls->Add(this->button4);
			this->returnspage->Controls->Add(this->btnReturnBook);
			this->returnspage->Controls->Add(this->panel4);
			this->returnspage->Controls->Add(this->returnsBK_input);
			this->returnspage->Controls->Add(this->label10);
			this->returnspage->Controls->Add(this->label7);
			this->returnspage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->returnspage->Location = System::Drawing::Point(0, 0);
			this->returnspage->Name = L"returnspage";
			this->returnspage->Size = System::Drawing::Size(725, 469);
			this->returnspage->TabIndex = 39;
			// 
			// FeeStatus
			// 
			this->FeeStatus->AutoSize = true;
			this->FeeStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->FeeStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FeeStatus->ForeColor = System::Drawing::SystemColors::Control;
			this->FeeStatus->Location = System::Drawing::Point(36, 324);
			this->FeeStatus->Name = L"FeeStatus";
			this->FeeStatus->Size = System::Drawing::Size(180, 20);
			this->FeeStatus->TabIndex = 30;
			this->FeeStatus->Text = L"your fees will appear here";
			// 
			// searchStatus
			// 
			this->searchStatus->AutoSize = true;
			this->searchStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->searchStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchStatus->ForeColor = System::Drawing::SystemColors::Control;
			this->searchStatus->Location = System::Drawing::Point(31, 284);
			this->searchStatus->Name = L"searchStatus";
			this->searchStatus->Size = System::Drawing::Size(109, 45);
			this->searchStatus->TabIndex = 29;
			this->searchStatus->Text = L"Status";
			// 
			// returns_searchBK
			// 
			this->returns_searchBK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->returns_searchBK->FlatAppearance->BorderSize = 0;
			this->returns_searchBK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->returns_searchBK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returns_searchBK->Location = System::Drawing::Point(40, 163);
			this->returns_searchBK->Name = L"returns_searchBK";
			this->returns_searchBK->Size = System::Drawing::Size(124, 41);
			this->returns_searchBK->TabIndex = 28;
			this->returns_searchBK->Text = L"Search";
			this->returns_searchBK->UseVisualStyleBackColor = false;
			this->returns_searchBK->Click += gcnew System::EventHandler(this, &launchForm::returns_searchBK_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Location = System::Drawing::Point(223, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 41);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &launchForm::button4_Click_2);
			// 
			// btnReturnBook
			// 
			this->btnReturnBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnReturnBook->Enabled = false;
			this->btnReturnBook->FlatAppearance->BorderSize = 0;
			this->btnReturnBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReturnBook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReturnBook->Location = System::Drawing::Point(40, 403);
			this->btnReturnBook->Name = L"btnReturnBook";
			this->btnReturnBook->Size = System::Drawing::Size(177, 41);
			this->btnReturnBook->TabIndex = 26;
			this->btnReturnBook->Text = L"Pay And Return";
			this->btnReturnBook->UseVisualStyleBackColor = false;
			this->btnReturnBook->Click += gcnew System::EventHandler(this, &launchForm::btnReturnBook_Click_1);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(40, 149);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(245, 2);
			this->panel4->TabIndex = 25;
			// 
			// returnsBK_input
			// 
			this->returnsBK_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->returnsBK_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->returnsBK_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnsBK_input->ForeColor = System::Drawing::Color::White;
			this->returnsBK_input->Location = System::Drawing::Point(40, 126);
			this->returnsBK_input->Name = L"returnsBK_input";
			this->returnsBK_input->Size = System::Drawing::Size(245, 23);
			this->returnsBK_input->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(36, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Book ID or Tilte:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(31, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(278, 54);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Return A Book";
			// 
			// accountFees
			// 
			this->accountFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accountFees.BackgroundImage")));
			this->accountFees->Controls->Add(this->add_payment_panel);
			this->accountFees->Controls->Add(this->label15);
			this->accountFees->Controls->Add(this->label12);
			this->accountFees->Controls->Add(this->displayFees);
			this->accountFees->Controls->Add(this->label9);
			this->accountFees->Controls->Add(this->button16);
			this->accountFees->Controls->Add(this->btnAddPayMethod);
			this->accountFees->Controls->Add(this->label8);
			this->accountFees->Dock = System::Windows::Forms::DockStyle::Fill;
			this->accountFees->Location = System::Drawing::Point(0, 0);
			this->accountFees->Name = L"accountFees";
			this->accountFees->Size = System::Drawing::Size(725, 469);
			this->accountFees->TabIndex = 41;
			// 
			// add_payment_panel
			// 
			this->add_payment_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->add_payment_panel->Controls->Add(this->button18);
			this->add_payment_panel->Controls->Add(this->panel9);
			this->add_payment_panel->Controls->Add(this->cardDate);
			this->add_payment_panel->Controls->Add(this->label21);
			this->add_payment_panel->Controls->Add(this->panel8);
			this->add_payment_panel->Controls->Add(this->pin);
			this->add_payment_panel->Controls->Add(this->label20);
			this->add_payment_panel->Controls->Add(this->panel7);
			this->add_payment_panel->Controls->Add(this->sortcode);
			this->add_payment_panel->Controls->Add(this->scode);
			this->add_payment_panel->Controls->Add(this->label18);
			this->add_payment_panel->Controls->Add(this->panel6);
			this->add_payment_panel->Controls->Add(this->cardno);
			this->add_payment_panel->Controls->Add(this->cno);
			this->add_payment_panel->Location = System::Drawing::Point(29, 28);
			this->add_payment_panel->Name = L"add_payment_panel";
			this->add_payment_panel->Size = System::Drawing::Size(499, 410);
			this->add_payment_panel->TabIndex = 34;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(299, 316);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(154, 47);
			this->button18->TabIndex = 32;
			this->button18->Text = L"Submit";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &launchForm::button18_Click_1);
			// 
			// panel9
			// 
			this->panel9->Location = System::Drawing::Point(20, 361);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(245, 2);
			this->panel9->TabIndex = 31;
			// 
			// cardDate
			// 
			this->cardDate->BackColor = System::Drawing::Color::White;
			this->cardDate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cardDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardDate->ForeColor = System::Drawing::Color::Black;
			this->cardDate->Location = System::Drawing::Point(20, 338);
			this->cardDate->Name = L"cardDate";
			this->cardDate->Size = System::Drawing::Size(245, 23);
			this->cardDate->TabIndex = 30;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Control;
			this->label21->Location = System::Drawing::Point(16, 313);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(108, 20);
			this->label21->TabIndex = 29;
			this->label21->Text = L"Date: mm/yyyy";
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(20, 296);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(245, 2);
			this->panel8->TabIndex = 28;
			// 
			// pin
			// 
			this->pin->BackColor = System::Drawing::Color::White;
			this->pin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pin->ForeColor = System::Drawing::Color::Black;
			this->pin->Location = System::Drawing::Point(20, 273);
			this->pin->Name = L"pin";
			this->pin->Size = System::Drawing::Size(245, 23);
			this->pin->TabIndex = 27;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::Control;
			this->label20->Location = System::Drawing::Point(16, 248);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 20);
			this->label20->TabIndex = 26;
			this->label20->Text = L"Pin: xxx";
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(20, 221);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(245, 2);
			this->panel7->TabIndex = 25;
			// 
			// sortcode
			// 
			this->sortcode->BackColor = System::Drawing::Color::White;
			this->sortcode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sortcode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortcode->ForeColor = System::Drawing::Color::Black;
			this->sortcode->Location = System::Drawing::Point(20, 198);
			this->sortcode->Name = L"sortcode";
			this->sortcode->Size = System::Drawing::Size(245, 23);
			this->sortcode->TabIndex = 24;
			// 
			// scode
			// 
			this->scode->AutoSize = true;
			this->scode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->scode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scode->ForeColor = System::Drawing::SystemColors::Control;
			this->scode->Location = System::Drawing::Point(16, 173);
			this->scode->Name = L"scode";
			this->scode->Size = System::Drawing::Size(124, 20);
			this->scode->TabIndex = 23;
			this->scode->Text = L"Sort Code: xxxxxx";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::Control;
			this->label18->Location = System::Drawing::Point(6, 45);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(192, 23);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Add Payment Method:";
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(20, 153);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(245, 2);
			this->panel6->TabIndex = 18;
			// 
			// cardno
			// 
			this->cardno->BackColor = System::Drawing::Color::White;
			this->cardno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cardno->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardno->ForeColor = System::Drawing::Color::Black;
			this->cardno->Location = System::Drawing::Point(20, 130);
			this->cardno->Name = L"cardno";
			this->cardno->Size = System::Drawing::Size(245, 23);
			this->cardno->TabIndex = 17;
			// 
			// cno
			// 
			this->cno->AutoSize = true;
			this->cno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->cno->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cno->ForeColor = System::Drawing::SystemColors::Control;
			this->cno->Location = System::Drawing::Point(16, 105);
			this->cno->Name = L"cno";
			this->cno->Size = System::Drawing::Size(204, 20);
			this->cno->TabIndex = 16;
			this->cno->Text = L"Card No.: xxxx-xxxx-xxxx-xxxx";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label15->Location = System::Drawing::Point(35, 128);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 28);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Expired";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(35, 100);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(224, 28);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Payment Method Status:";
			// 
			// displayFees
			// 
			this->displayFees->AutoSize = true;
			this->displayFees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->displayFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayFees->ForeColor = System::Drawing::SystemColors::Control;
			this->displayFees->Location = System::Drawing::Point(22, 210);
			this->displayFees->Name = L"displayFees";
			this->displayFees->Size = System::Drawing::Size(234, 106);
			this->displayFees->TabIndex = 31;
			this->displayFees->Text = L"$0.00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(35, 187);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 28);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Your Current Fees:";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->Location = System::Drawing::Point(281, 391);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(239, 47);
			this->button16->TabIndex = 28;
			this->button16->Text = L"Back";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &launchForm::button16_Click_2);
			// 
			// btnAddPayMethod
			// 
			this->btnAddPayMethod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAddPayMethod->Enabled = false;
			this->btnAddPayMethod->FlatAppearance->BorderSize = 0;
			this->btnAddPayMethod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddPayMethod->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddPayMethod->Location = System::Drawing::Point(40, 391);
			this->btnAddPayMethod->Name = L"btnAddPayMethod";
			this->btnAddPayMethod->Size = System::Drawing::Size(235, 47);
			this->btnAddPayMethod->TabIndex = 24;
			this->btnAddPayMethod->Text = L"Update Payment Method";
			this->btnAddPayMethod->UseVisualStyleBackColor = false;
			this->btnAddPayMethod->Click += gcnew System::EventHandler(this, &launchForm::btnAddPayMethod_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(31, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 54);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Account";
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->panel17);
			this->panel11->Controls->Add(this->textBox5);
			this->panel11->Controls->Add(this->label35);
			this->panel11->Controls->Add(this->lib_ret_status);
			this->panel11->Controls->Add(this->label32);
			this->panel11->Controls->Add(this->lib_ret_search);
			this->panel11->Controls->Add(this->button23);
			this->panel11->Controls->Add(this->lib_ret_btn);
			this->panel11->Controls->Add(this->panel16);
			this->panel11->Controls->Add(this->textBox4);
			this->panel11->Controls->Add(this->label33);
			this->panel11->Controls->Add(this->label34);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(725, 469);
			this->panel11->TabIndex = 43;
			// 
			// panel17
			// 
			this->panel17->Location = System::Drawing::Point(39, 145);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(245, 2);
			this->panel17->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(39, 122);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(245, 23);
			this->textBox5->TabIndex = 32;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::Control;
			this->label35->Location = System::Drawing::Point(35, 97);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(60, 20);
			this->label35->TabIndex = 31;
			this->label35->Text = L"User ID:";
			// 
			// lib_ret_status
			// 
			this->lib_ret_status->AutoSize = true;
			this->lib_ret_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->lib_ret_status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lib_ret_status->ForeColor = System::Drawing::SystemColors::Control;
			this->lib_ret_status->Location = System::Drawing::Point(36, 324);
			this->lib_ret_status->Name = L"lib_ret_status";
			this->lib_ret_status->Size = System::Drawing::Size(73, 20);
			this->lib_ret_status->TabIndex = 30;
			this->lib_ret_status->Text = L"pending...";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::Control;
			this->label32->Location = System::Drawing::Point(31, 284);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(109, 45);
			this->label32->TabIndex = 29;
			this->label32->Text = L"Status";
			// 
			// lib_ret_search
			// 
			this->lib_ret_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lib_ret_search->FlatAppearance->BorderSize = 0;
			this->lib_ret_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lib_ret_search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lib_ret_search->Location = System::Drawing::Point(39, 230);
			this->lib_ret_search->Name = L"lib_ret_search";
			this->lib_ret_search->Size = System::Drawing::Size(124, 41);
			this->lib_ret_search->TabIndex = 28;
			this->lib_ret_search->Text = L"Search";
			this->lib_ret_search->UseVisualStyleBackColor = false;
			this->lib_ret_search->Click += gcnew System::EventHandler(this, &launchForm::lib_ret_search_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button23->Location = System::Drawing::Point(223, 403);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(171, 41);
			this->button23->TabIndex = 27;
			this->button23->Text = L"Back";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &launchForm::button23_Click_1);
			// 
			// lib_ret_btn
			// 
			this->lib_ret_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lib_ret_btn->Enabled = false;
			this->lib_ret_btn->FlatAppearance->BorderSize = 0;
			this->lib_ret_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lib_ret_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lib_ret_btn->Location = System::Drawing::Point(40, 403);
			this->lib_ret_btn->Name = L"lib_ret_btn";
			this->lib_ret_btn->Size = System::Drawing::Size(177, 41);
			this->lib_ret_btn->TabIndex = 26;
			this->lib_ret_btn->Text = L"Pay And Return";
			this->lib_ret_btn->UseVisualStyleBackColor = false;
			this->lib_ret_btn->Click += gcnew System::EventHandler(this, &launchForm::lib_ret_btn_Click);
			// 
			// panel16
			// 
			this->panel16->Location = System::Drawing::Point(39, 207);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(245, 2);
			this->panel16->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(39, 184);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(245, 23);
			this->textBox4->TabIndex = 24;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::Control;
			this->label33->Location = System::Drawing::Point(35, 159);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(65, 20);
			this->label33->TabIndex = 23;
			this->label33->Text = L"Book ID:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::Control;
			this->label34->Location = System::Drawing::Point(31, 28);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(278, 54);
			this->label34->TabIndex = 21;
			this->label34->Text = L"Return A Book";
			// 
			// lib_brw_page
			// 
			this->lib_brw_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lib_brw_page.BackgroundImage")));
			this->lib_brw_page->Controls->Add(this->panel19);
			this->lib_brw_page->Controls->Add(this->brw_UID_input);
			this->lib_brw_page->Controls->Add(this->label31);
			this->lib_brw_page->Controls->Add(this->brw_pg_status);
			this->lib_brw_page->Controls->Add(this->label37);
			this->lib_brw_page->Controls->Add(this->brw_search_btn);
			this->lib_brw_page->Controls->Add(this->button24);
			this->lib_brw_page->Controls->Add(this->brw_lib_btn);
			this->lib_brw_page->Controls->Add(this->panel20);
			this->lib_brw_page->Controls->Add(this->brw_BID_input);
			this->lib_brw_page->Controls->Add(this->label38);
			this->lib_brw_page->Controls->Add(this->label39);
			this->lib_brw_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lib_brw_page->Location = System::Drawing::Point(0, 0);
			this->lib_brw_page->Name = L"lib_brw_page";
			this->lib_brw_page->Size = System::Drawing::Size(725, 469);
			this->lib_brw_page->TabIndex = 44;
			// 
			// panel19
			// 
			this->panel19->Location = System::Drawing::Point(39, 145);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(245, 2);
			this->panel19->TabIndex = 33;
			// 
			// brw_UID_input
			// 
			this->brw_UID_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->brw_UID_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->brw_UID_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brw_UID_input->ForeColor = System::Drawing::Color::White;
			this->brw_UID_input->Location = System::Drawing::Point(39, 122);
			this->brw_UID_input->Name = L"brw_UID_input";
			this->brw_UID_input->Size = System::Drawing::Size(245, 23);
			this->brw_UID_input->TabIndex = 32;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::Control;
			this->label31->Location = System::Drawing::Point(35, 97);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 20);
			this->label31->TabIndex = 31;
			this->label31->Text = L"User ID:";
			// 
			// brw_pg_status
			// 
			this->brw_pg_status->AutoSize = true;
			this->brw_pg_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->brw_pg_status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brw_pg_status->ForeColor = System::Drawing::SystemColors::Control;
			this->brw_pg_status->Location = System::Drawing::Point(36, 324);
			this->brw_pg_status->Name = L"brw_pg_status";
			this->brw_pg_status->Size = System::Drawing::Size(73, 20);
			this->brw_pg_status->TabIndex = 30;
			this->brw_pg_status->Text = L"pending...";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::Control;
			this->label37->Location = System::Drawing::Point(31, 284);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(109, 45);
			this->label37->TabIndex = 29;
			this->label37->Text = L"Status";
			// 
			// brw_search_btn
			// 
			this->brw_search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->brw_search_btn->FlatAppearance->BorderSize = 0;
			this->brw_search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->brw_search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brw_search_btn->Location = System::Drawing::Point(39, 230);
			this->brw_search_btn->Name = L"brw_search_btn";
			this->brw_search_btn->Size = System::Drawing::Size(124, 41);
			this->brw_search_btn->TabIndex = 28;
			this->brw_search_btn->Text = L"Search";
			this->brw_search_btn->UseVisualStyleBackColor = false;
			this->brw_search_btn->Click += gcnew System::EventHandler(this, &launchForm::brw_search_btn_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->Location = System::Drawing::Point(223, 403);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(171, 41);
			this->button24->TabIndex = 27;
			this->button24->Text = L"Back";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &launchForm::button24_Click_1);
			// 
			// brw_lib_btn
			// 
			this->brw_lib_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->brw_lib_btn->Enabled = false;
			this->brw_lib_btn->FlatAppearance->BorderSize = 0;
			this->brw_lib_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->brw_lib_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brw_lib_btn->Location = System::Drawing::Point(40, 403);
			this->brw_lib_btn->Name = L"brw_lib_btn";
			this->brw_lib_btn->Size = System::Drawing::Size(177, 41);
			this->brw_lib_btn->TabIndex = 26;
			this->brw_lib_btn->Text = L"Borrow";
			this->brw_lib_btn->UseVisualStyleBackColor = false;
			this->brw_lib_btn->Click += gcnew System::EventHandler(this, &launchForm::brw_lib_btn_Click);
			// 
			// panel20
			// 
			this->panel20->Location = System::Drawing::Point(39, 207);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(245, 2);
			this->panel20->TabIndex = 25;
			// 
			// brw_BID_input
			// 
			this->brw_BID_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->brw_BID_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->brw_BID_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brw_BID_input->ForeColor = System::Drawing::Color::White;
			this->brw_BID_input->Location = System::Drawing::Point(39, 184);
			this->brw_BID_input->Name = L"brw_BID_input";
			this->brw_BID_input->Size = System::Drawing::Size(245, 23);
			this->brw_BID_input->TabIndex = 24;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::Control;
			this->label38->Location = System::Drawing::Point(35, 159);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(65, 20);
			this->label38->TabIndex = 23;
			this->label38->Text = L"Book ID:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::Control;
			this->label39->Location = System::Drawing::Point(31, 28);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(286, 54);
			this->label39->TabIndex = 21;
			this->label39->Text = L"Borrow A Book";
			// 
			// manageuser_page
			// 
			this->manageuser_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"manageuser_page.BackgroundImage")));
			this->manageuser_page->Controls->Add(this->del_status);
			this->manageuser_page->Controls->Add(this->underline_textbox);
			this->manageuser_page->Controls->Add(this->del_user_input);
			this->manageuser_page->Controls->Add(this->del_user_title);
			this->manageuser_page->Controls->Add(this->del_search_btn);
			this->manageuser_page->Controls->Add(this->del_user_btn);
			this->manageuser_page->Controls->Add(this->update_userInfo_page);
			this->manageuser_page->Controls->Add(this->add_new_user_page);
			this->manageuser_page->Controls->Add(this->button29);
			this->manageuser_page->Controls->Add(this->button30);
			this->manageuser_page->Controls->Add(this->button31);
			this->manageuser_page->Controls->Add(this->button32);
			this->manageuser_page->Controls->Add(this->label50);
			this->manageuser_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->manageuser_page->Location = System::Drawing::Point(0, 0);
			this->manageuser_page->Name = L"manageuser_page";
			this->manageuser_page->Size = System::Drawing::Size(725, 469);
			this->manageuser_page->TabIndex = 45;
			// 
			// del_status
			// 
			this->del_status->AutoSize = true;
			this->del_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->del_status->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_status->ForeColor = System::Drawing::Color::Red;
			this->del_status->Location = System::Drawing::Point(24, 251);
			this->del_status->Name = L"del_status";
			this->del_status->Size = System::Drawing::Size(219, 20);
			this->del_status->TabIndex = 50;
			this->del_status->Text = L"Click here to close delete panel.";
			this->del_status->Visible = false;
			this->del_status->Click += gcnew System::EventHandler(this, &launchForm::del_status_Click);
			// 
			// underline_textbox
			// 
			this->underline_textbox->Location = System::Drawing::Point(28, 176);
			this->underline_textbox->Name = L"underline_textbox";
			this->underline_textbox->Size = System::Drawing::Size(271, 2);
			this->underline_textbox->TabIndex = 49;
			this->underline_textbox->Visible = false;
			// 
			// del_user_input
			// 
			this->del_user_input->BackColor = System::Drawing::Color::White;
			this->del_user_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->del_user_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_user_input->ForeColor = System::Drawing::Color::Black;
			this->del_user_input->Location = System::Drawing::Point(28, 153);
			this->del_user_input->Name = L"del_user_input";
			this->del_user_input->Size = System::Drawing::Size(271, 23);
			this->del_user_input->TabIndex = 48;
			this->del_user_input->Visible = false;
			// 
			// del_user_title
			// 
			this->del_user_title->AutoSize = true;
			this->del_user_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->del_user_title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_user_title->ForeColor = System::Drawing::SystemColors::Control;
			this->del_user_title->Location = System::Drawing::Point(24, 128);
			this->del_user_title->Name = L"del_user_title";
			this->del_user_title->Size = System::Drawing::Size(176, 20);
			this->del_user_title->TabIndex = 47;
			this->del_user_title->Text = L"Search User ID To Delete:";
			this->del_user_title->Visible = false;
			// 
			// del_search_btn
			// 
			this->del_search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->del_search_btn->FlatAppearance->BorderSize = 0;
			this->del_search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_search_btn->Location = System::Drawing::Point(28, 189);
			this->del_search_btn->Name = L"del_search_btn";
			this->del_search_btn->Size = System::Drawing::Size(124, 41);
			this->del_search_btn->TabIndex = 46;
			this->del_search_btn->Text = L"Search";
			this->del_search_btn->UseVisualStyleBackColor = false;
			this->del_search_btn->Visible = false;
			this->del_search_btn->Click += gcnew System::EventHandler(this, &launchForm::del_search_btn_Click);
			// 
			// del_user_btn
			// 
			this->del_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_user_btn->Enabled = false;
			this->del_user_btn->FlatAppearance->BorderSize = 0;
			this->del_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_user_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_user_btn->ForeColor = System::Drawing::Color::White;
			this->del_user_btn->Location = System::Drawing::Point(169, 189);
			this->del_user_btn->Name = L"del_user_btn";
			this->del_user_btn->Size = System::Drawing::Size(130, 41);
			this->del_user_btn->TabIndex = 45;
			this->del_user_btn->Text = L"Delete User";
			this->del_user_btn->UseVisualStyleBackColor = false;
			this->del_user_btn->Visible = false;
			this->del_user_btn->Click += gcnew System::EventHandler(this, &launchForm::del_user_btn_Click);
			// 
			// update_userInfo_page
			// 
			this->update_userInfo_page->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->update_userInfo_page->Controls->Add(this->label42);
			this->update_userInfo_page->Controls->Add(this->label48);
			this->update_userInfo_page->Controls->Add(this->label47);
			this->update_userInfo_page->Controls->Add(this->label46);
			this->update_userInfo_page->Controls->Add(this->label45);
			this->update_userInfo_page->Controls->Add(this->panel25);
			this->update_userInfo_page->Controls->Add(this->UP_ID_search_input);
			this->update_userInfo_page->Controls->Add(this->label44);
			this->update_userInfo_page->Controls->Add(this->UP_ID_search_btn);
			this->update_userInfo_page->Controls->Add(this->button22);
			this->update_userInfo_page->Controls->Add(this->up_user_submit);
			this->update_userInfo_page->Controls->Add(this->panel21);
			this->update_userInfo_page->Controls->Add(this->up_pass_input);
			this->update_userInfo_page->Controls->Add(this->label36);
			this->update_userInfo_page->Controls->Add(this->panel22);
			this->update_userInfo_page->Controls->Add(this->up_role_input);
			this->update_userInfo_page->Controls->Add(this->label40);
			this->update_userInfo_page->Controls->Add(this->panel23);
			this->update_userInfo_page->Controls->Add(this->up_LName_input);
			this->update_userInfo_page->Controls->Add(this->label41);
			this->update_userInfo_page->Controls->Add(this->panel24);
			this->update_userInfo_page->Controls->Add(this->up_fName_input);
			this->update_userInfo_page->Controls->Add(this->label43);
			this->update_userInfo_page->Location = System::Drawing::Point(11, 10);
			this->update_userInfo_page->Name = L"update_userInfo_page";
			this->update_userInfo_page->Size = System::Drawing::Size(708, 449);
			this->update_userInfo_page->TabIndex = 44;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::SystemColors::Control;
			this->label42->Location = System::Drawing::Point(102, 81);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(119, 23);
			this->label42->TabIndex = 42;
			this->label42->Text = L"Find The User";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::SystemColors::Control;
			this->label48->Location = System::Drawing::Point(484, 74);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(104, 23);
			this->label48->TabIndex = 41;
			this->label48->Text = L"Udate User:";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::Red;
			this->label47->Location = System::Drawing::Point(56, 287);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(248, 20);
			this->label47->TabIndex = 40;
			this->label47->Text = L"Note: Update fields are disabled >>";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::Control;
			this->label46->Location = System::Drawing::Point(392, 9);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(113, 106);
			this->label46->TabIndex = 39;
			this->label46->Text = L"2.";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::Control;
			this->label45->Location = System::Drawing::Point(10, 13);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(113, 106);
			this->label45->TabIndex = 38;
			this->label45->Text = L"1.";
			// 
			// panel25
			// 
			this->panel25->Location = System::Drawing::Point(40, 172);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(271, 2);
			this->panel25->TabIndex = 37;
			// 
			// UP_ID_search_input
			// 
			this->UP_ID_search_input->BackColor = System::Drawing::Color::White;
			this->UP_ID_search_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UP_ID_search_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UP_ID_search_input->ForeColor = System::Drawing::Color::Black;
			this->UP_ID_search_input->Location = System::Drawing::Point(40, 149);
			this->UP_ID_search_input->Name = L"UP_ID_search_input";
			this->UP_ID_search_input->Size = System::Drawing::Size(271, 23);
			this->UP_ID_search_input->TabIndex = 36;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::SystemColors::Control;
			this->label44->Location = System::Drawing::Point(36, 124);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(186, 20);
			this->label44->TabIndex = 35;
			this->label44->Text = L"Search User ID For Update:";
			// 
			// UP_ID_search_btn
			// 
			this->UP_ID_search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->UP_ID_search_btn->FlatAppearance->BorderSize = 0;
			this->UP_ID_search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UP_ID_search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UP_ID_search_btn->Location = System::Drawing::Point(40, 185);
			this->UP_ID_search_btn->Name = L"UP_ID_search_btn";
			this->UP_ID_search_btn->Size = System::Drawing::Size(124, 41);
			this->UP_ID_search_btn->TabIndex = 34;
			this->UP_ID_search_btn->Text = L"Search";
			this->UP_ID_search_btn->UseVisualStyleBackColor = false;
			this->UP_ID_search_btn->Click += gcnew System::EventHandler(this, &launchForm::UP_ID_search_btn_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(181, 185);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(130, 41);
			this->button22->TabIndex = 33;
			this->button22->Text = L"Back";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &launchForm::button22_Click);
			// 
			// up_user_submit
			// 
			this->up_user_submit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->up_user_submit->Enabled = false;
			this->up_user_submit->FlatAppearance->BorderSize = 0;
			this->up_user_submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->up_user_submit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->up_user_submit->Location = System::Drawing::Point(410, 390);
			this->up_user_submit->Name = L"up_user_submit";
			this->up_user_submit->Size = System::Drawing::Size(245, 47);
			this->up_user_submit->TabIndex = 32;
			this->up_user_submit->Text = L"Submit";
			this->up_user_submit->UseVisualStyleBackColor = false;
			this->up_user_submit->Click += gcnew System::EventHandler(this, &launchForm::up_user_submit_Click);
			// 
			// panel21
			// 
			this->panel21->Location = System::Drawing::Point(410, 368);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(245, 2);
			this->panel21->TabIndex = 31;
			// 
			// up_pass_input
			// 
			this->up_pass_input->BackColor = System::Drawing::Color::White;
			this->up_pass_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->up_pass_input->Enabled = false;
			this->up_pass_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->up_pass_input->ForeColor = System::Drawing::Color::Black;
			this->up_pass_input->Location = System::Drawing::Point(410, 345);
			this->up_pass_input->Name = L"up_pass_input";
			this->up_pass_input->Size = System::Drawing::Size(245, 23);
			this->up_pass_input->TabIndex = 30;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::Control;
			this->label36->Location = System::Drawing::Point(406, 320);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(73, 20);
			this->label36->TabIndex = 29;
			this->label36->Text = L"Password:";
			// 
			// panel22
			// 
			this->panel22->Location = System::Drawing::Point(410, 303);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(245, 2);
			this->panel22->TabIndex = 28;
			// 
			// up_role_input
			// 
			this->up_role_input->BackColor = System::Drawing::Color::White;
			this->up_role_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->up_role_input->Enabled = false;
			this->up_role_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->up_role_input->ForeColor = System::Drawing::Color::Black;
			this->up_role_input->Location = System::Drawing::Point(410, 280);
			this->up_role_input->Name = L"up_role_input";
			this->up_role_input->Size = System::Drawing::Size(245, 23);
			this->up_role_input->TabIndex = 27;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::SystemColors::Control;
			this->label40->Location = System::Drawing::Point(406, 255);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(42, 20);
			this->label40->TabIndex = 26;
			this->label40->Text = L"Role:";
			// 
			// panel23
			// 
			this->panel23->Location = System::Drawing::Point(410, 238);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(245, 2);
			this->panel23->TabIndex = 25;
			// 
			// up_LName_input
			// 
			this->up_LName_input->BackColor = System::Drawing::Color::White;
			this->up_LName_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->up_LName_input->Enabled = false;
			this->up_LName_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->up_LName_input->ForeColor = System::Drawing::Color::Black;
			this->up_LName_input->Location = System::Drawing::Point(410, 215);
			this->up_LName_input->Name = L"up_LName_input";
			this->up_LName_input->Size = System::Drawing::Size(245, 23);
			this->up_LName_input->TabIndex = 24;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::Control;
			this->label41->Location = System::Drawing::Point(406, 190);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(82, 20);
			this->label41->TabIndex = 23;
			this->label41->Text = L"Last Name:";
			// 
			// panel24
			// 
			this->panel24->Location = System::Drawing::Point(410, 170);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(245, 2);
			this->panel24->TabIndex = 18;
			// 
			// up_fName_input
			// 
			this->up_fName_input->BackColor = System::Drawing::Color::White;
			this->up_fName_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->up_fName_input->Enabled = false;
			this->up_fName_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->up_fName_input->ForeColor = System::Drawing::Color::Black;
			this->up_fName_input->Location = System::Drawing::Point(410, 147);
			this->up_fName_input->Name = L"up_fName_input";
			this->up_fName_input->Size = System::Drawing::Size(245, 23);
			this->up_fName_input->TabIndex = 17;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::Control;
			this->label43->Location = System::Drawing::Point(406, 122);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(83, 20);
			this->label43->TabIndex = 16;
			this->label43->Text = L"First Name:";
			// 
			// add_new_user_page
			// 
			this->add_new_user_page->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->add_new_user_page->Controls->Add(this->button28);
			this->add_new_user_page->Controls->Add(this->add_new_user_btn);
			this->add_new_user_page->Controls->Add(this->panel29);
			this->add_new_user_page->Controls->Add(this->new_user_password);
			this->add_new_user_page->Controls->Add(this->label51);
			this->add_new_user_page->Controls->Add(this->panel30);
			this->add_new_user_page->Controls->Add(this->new_user_role);
			this->add_new_user_page->Controls->Add(this->label52);
			this->add_new_user_page->Controls->Add(this->panel31);
			this->add_new_user_page->Controls->Add(this->user_Lname);
			this->add_new_user_page->Controls->Add(this->label53);
			this->add_new_user_page->Controls->Add(this->label54);
			this->add_new_user_page->Controls->Add(this->panel32);
			this->add_new_user_page->Controls->Add(this->user_Fname);
			this->add_new_user_page->Controls->Add(this->label55);
			this->add_new_user_page->Location = System::Drawing::Point(28, 28);
			this->add_new_user_page->Name = L"add_new_user_page";
			this->add_new_user_page->Size = System::Drawing::Size(665, 410);
			this->add_new_user_page->TabIndex = 43;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(466, 316);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(161, 47);
			this->button28->TabIndex = 33;
			this->button28->Text = L"Back";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &launchForm::button28_Click);
			// 
			// add_new_user_btn
			// 
			this->add_new_user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->add_new_user_btn->FlatAppearance->BorderSize = 0;
			this->add_new_user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_new_user_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_new_user_btn->Location = System::Drawing::Point(299, 316);
			this->add_new_user_btn->Name = L"add_new_user_btn";
			this->add_new_user_btn->Size = System::Drawing::Size(154, 47);
			this->add_new_user_btn->TabIndex = 32;
			this->add_new_user_btn->Text = L"Submit";
			this->add_new_user_btn->UseVisualStyleBackColor = false;
			this->add_new_user_btn->Click += gcnew System::EventHandler(this, &launchForm::add_new_user_btn_Click);
			// 
			// panel29
			// 
			this->panel29->Location = System::Drawing::Point(20, 361);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(245, 2);
			this->panel29->TabIndex = 31;
			// 
			// new_user_password
			// 
			this->new_user_password->BackColor = System::Drawing::Color::White;
			this->new_user_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->new_user_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_user_password->ForeColor = System::Drawing::Color::Black;
			this->new_user_password->Location = System::Drawing::Point(20, 338);
			this->new_user_password->Name = L"new_user_password";
			this->new_user_password->Size = System::Drawing::Size(245, 23);
			this->new_user_password->TabIndex = 30;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::Control;
			this->label51->Location = System::Drawing::Point(16, 313);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(73, 20);
			this->label51->TabIndex = 29;
			this->label51->Text = L"Password:";
			// 
			// panel30
			// 
			this->panel30->Location = System::Drawing::Point(20, 296);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(245, 2);
			this->panel30->TabIndex = 28;
			// 
			// new_user_role
			// 
			this->new_user_role->BackColor = System::Drawing::Color::White;
			this->new_user_role->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->new_user_role->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_user_role->ForeColor = System::Drawing::Color::Black;
			this->new_user_role->Location = System::Drawing::Point(20, 273);
			this->new_user_role->Name = L"new_user_role";
			this->new_user_role->Size = System::Drawing::Size(245, 23);
			this->new_user_role->TabIndex = 27;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::SystemColors::Control;
			this->label52->Location = System::Drawing::Point(16, 248);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(42, 20);
			this->label52->TabIndex = 26;
			this->label52->Text = L"Role:";
			// 
			// panel31
			// 
			this->panel31->Location = System::Drawing::Point(20, 221);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(245, 2);
			this->panel31->TabIndex = 25;
			// 
			// user_Lname
			// 
			this->user_Lname->BackColor = System::Drawing::Color::White;
			this->user_Lname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_Lname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_Lname->ForeColor = System::Drawing::Color::Black;
			this->user_Lname->Location = System::Drawing::Point(20, 198);
			this->user_Lname->Name = L"user_Lname";
			this->user_Lname->Size = System::Drawing::Size(245, 23);
			this->user_Lname->TabIndex = 24;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::SystemColors::Control;
			this->label53->Location = System::Drawing::Point(16, 173);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(82, 20);
			this->label53->TabIndex = 23;
			this->label53->Text = L"Last Name:";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::SystemColors::Control;
			this->label54->Location = System::Drawing::Point(6, 45);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(131, 23);
			this->label54->TabIndex = 22;
			this->label54->Text = L"Add New User:";
			// 
			// panel32
			// 
			this->panel32->Location = System::Drawing::Point(20, 153);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(245, 2);
			this->panel32->TabIndex = 18;
			// 
			// user_Fname
			// 
			this->user_Fname->BackColor = System::Drawing::Color::White;
			this->user_Fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_Fname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_Fname->ForeColor = System::Drawing::Color::Black;
			this->user_Fname->Location = System::Drawing::Point(20, 130);
			this->user_Fname->Name = L"user_Fname";
			this->user_Fname->Size = System::Drawing::Size(245, 23);
			this->user_Fname->TabIndex = 17;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::SystemColors::Control;
			this->label55->Location = System::Drawing::Point(16, 105);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(83, 20);
			this->label55->TabIndex = 16;
			this->label55->Text = L"First Name:";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Green;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(28, 391);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(148, 47);
			this->button29->TabIndex = 29;
			this->button29->Text = L"New";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &launchForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(508, 391);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(185, 47);
			this->button30->TabIndex = 28;
			this->button30->Text = L"Back";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &launchForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(345, 391);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(157, 47);
			this->button31->TabIndex = 25;
			this->button31->Text = L"Delete";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &launchForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(182, 391);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(157, 47);
			this->button32->TabIndex = 24;
			this->button32->Text = L"Update";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &launchForm::button32_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::Control;
			this->label50->Location = System::Drawing::Point(31, 28);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(274, 54);
			this->label50->TabIndex = 21;
			this->label50->Text = L"Manage Users";
			// 
			// ManageBookPage
			// 
			this->ManageBookPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ManageBookPage.BackgroundImage")));
			this->ManageBookPage->Controls->Add(this->Update_Book_page);
			this->ManageBookPage->Controls->Add(this->register_book_page);
			this->ManageBookPage->Controls->Add(this->search_up_status);
			this->ManageBookPage->Controls->Add(this->search_up_input);
			this->ManageBookPage->Controls->Add(this->search_up_title);
			this->ManageBookPage->Controls->Add(this->search_up_btn);
			this->ManageBookPage->Controls->Add(this->update_confim);
			this->ManageBookPage->Controls->Add(this->del_book_status);
			this->ManageBookPage->Controls->Add(this->del_book_input);
			this->ManageBookPage->Controls->Add(this->del_book_title);
			this->ManageBookPage->Controls->Add(this->del_book_search_btn);
			this->ManageBookPage->Controls->Add(this->delete_the_book_btn);
			this->ManageBookPage->Controls->Add(this->button37);
			this->ManageBookPage->Controls->Add(this->button38);
			this->ManageBookPage->Controls->Add(this->button39);
			this->ManageBookPage->Controls->Add(this->button40);
			this->ManageBookPage->Controls->Add(this->label72);
			this->ManageBookPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ManageBookPage->Location = System::Drawing::Point(0, 0);
			this->ManageBookPage->Name = L"ManageBookPage";
			this->ManageBookPage->Size = System::Drawing::Size(725, 469);
			this->ManageBookPage->TabIndex = 46;
			// 
			// Update_Book_page
			// 
			this->Update_Book_page->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Update_Book_page->Controls->Add(this->label56);
			this->Update_Book_page->Controls->Add(this->panel27);
			this->Update_Book_page->Controls->Add(this->Year_up);
			this->Update_Book_page->Controls->Add(this->label57);
			this->Update_Book_page->Controls->Add(this->label58);
			this->Update_Book_page->Controls->Add(this->panel28);
			this->Update_Book_page->Controls->Add(this->QTY_up);
			this->Update_Book_page->Controls->Add(this->label59);
			this->Update_Book_page->Controls->Add(this->label60);
			this->Update_Book_page->Controls->Add(this->button25);
			this->Update_Book_page->Controls->Add(this->button26);
			this->Update_Book_page->Controls->Add(this->panel33);
			this->Update_Book_page->Controls->Add(this->Pub_up);
			this->Update_Book_page->Controls->Add(this->label61);
			this->Update_Book_page->Controls->Add(this->panel34);
			this->Update_Book_page->Controls->Add(this->Sub_up);
			this->Update_Book_page->Controls->Add(this->label62);
			this->Update_Book_page->Controls->Add(this->panel35);
			this->Update_Book_page->Controls->Add(this->Auth_up);
			this->Update_Book_page->Controls->Add(this->label63);
			this->Update_Book_page->Controls->Add(this->label64);
			this->Update_Book_page->Controls->Add(this->panel36);
			this->Update_Book_page->Controls->Add(this->BT_up);
			this->Update_Book_page->Controls->Add(this->label65);
			this->Update_Book_page->Location = System::Drawing::Point(11, 20);
			this->Update_Book_page->Name = L"Update_Book_page";
			this->Update_Book_page->Size = System::Drawing::Size(701, 428);
			this->Update_Book_page->TabIndex = 51;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::SystemColors::Control;
			this->label56->Location = System::Drawing::Point(597, 55);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(44, 17);
			this->label56->TabIndex = 44;
			this->label56->Text = L"(YYYY)";
			// 
			// panel27
			// 
			this->panel27->Location = System::Drawing::Point(567, 103);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(69, 2);
			this->panel27->TabIndex = 43;
			// 
			// Year_up
			// 
			this->Year_up->BackColor = System::Drawing::Color::White;
			this->Year_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Year_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Year_up->ForeColor = System::Drawing::Color::Black;
			this->Year_up->Location = System::Drawing::Point(567, 79);
			this->Year_up->Name = L"Year_up";
			this->Year_up->Size = System::Drawing::Size(69, 23);
			this->Year_up->TabIndex = 42;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::SystemColors::Control;
			this->label57->Location = System::Drawing::Point(93, 188);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(227, 17);
			this->label57->TabIndex = 41;
			this->label57->Text = L"Enter multiple separated by a comma";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::SystemColors::Control;
			this->label58->Location = System::Drawing::Point(563, 53);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(40, 20);
			this->label58->TabIndex = 41;
			this->label58->Text = L"Year:";
			// 
			// panel28
			// 
			this->panel28->Location = System::Drawing::Point(485, 103);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(69, 2);
			this->panel28->TabIndex = 40;
			// 
			// QTY_up
			// 
			this->QTY_up->BackColor = System::Drawing::Color::White;
			this->QTY_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->QTY_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QTY_up->ForeColor = System::Drawing::Color::Black;
			this->QTY_up->Location = System::Drawing::Point(485, 79);
			this->QTY_up->Name = L"QTY_up";
			this->QTY_up->Size = System::Drawing::Size(69, 23);
			this->QTY_up->TabIndex = 39;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::SystemColors::Control;
			this->label59->Location = System::Drawing::Point(481, 53);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(38, 20);
			this->label59->TabIndex = 38;
			this->label59->Text = L"QTY:";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label60->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::SystemColors::Control;
			this->label60->Location = System::Drawing::Point(90, 123);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(227, 17);
			this->label60->TabIndex = 34;
			this->label60->Text = L"Enter multiple separated by a comma";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(478, 334);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(161, 47);
			this->button25->TabIndex = 33;
			this->button25->Text = L"Back";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &launchForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(311, 334);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(154, 47);
			this->button26->TabIndex = 32;
			this->button26->Text = L"Submit";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &launchForm::button26_Click);
			// 
			// panel33
			// 
			this->panel33->Location = System::Drawing::Point(32, 300);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(607, 2);
			this->panel33->TabIndex = 31;
			// 
			// Pub_up
			// 
			this->Pub_up->BackColor = System::Drawing::Color::White;
			this->Pub_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Pub_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pub_up->ForeColor = System::Drawing::Color::Black;
			this->Pub_up->Location = System::Drawing::Point(32, 277);
			this->Pub_up->Name = L"Pub_up";
			this->Pub_up->Size = System::Drawing::Size(607, 23);
			this->Pub_up->TabIndex = 30;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::SystemColors::Control;
			this->label61->Location = System::Drawing::Point(28, 252);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(72, 20);
			this->label61->TabIndex = 29;
			this->label61->Text = L"Publisher:";
			// 
			// panel34
			// 
			this->panel34->Location = System::Drawing::Point(32, 234);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(607, 2);
			this->panel34->TabIndex = 28;
			// 
			// Sub_up
			// 
			this->Sub_up->BackColor = System::Drawing::Color::White;
			this->Sub_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Sub_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sub_up->ForeColor = System::Drawing::Color::Black;
			this->Sub_up->Location = System::Drawing::Point(32, 211);
			this->Sub_up->Name = L"Sub_up";
			this->Sub_up->Size = System::Drawing::Size(607, 23);
			this->Sub_up->TabIndex = 27;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::SystemColors::Control;
			this->label62->Location = System::Drawing::Point(29, 186);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(67, 20);
			this->label62->TabIndex = 26;
			this->label62->Text = L"Subjects:";
			// 
			// panel35
			// 
			this->panel35->Location = System::Drawing::Point(32, 169);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(604, 2);
			this->panel35->TabIndex = 25;
			// 
			// Auth_up
			// 
			this->Auth_up->BackColor = System::Drawing::Color::White;
			this->Auth_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Auth_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Auth_up->ForeColor = System::Drawing::Color::Black;
			this->Auth_up->Location = System::Drawing::Point(32, 146);
			this->Auth_up->Name = L"Auth_up";
			this->Auth_up->Size = System::Drawing::Size(604, 23);
			this->Auth_up->TabIndex = 24;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::SystemColors::Control;
			this->label63->Location = System::Drawing::Point(28, 121);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(63, 20);
			this->label63->TabIndex = 23;
			this->label63->Text = L"Authors:";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::SystemColors::Control;
			this->label64->Location = System::Drawing::Point(34, 21);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(137, 23);
			this->label64->TabIndex = 22;
			this->label64->Text = L"Update A Book ";
			// 
			// panel36
			// 
			this->panel36->Location = System::Drawing::Point(32, 105);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(245, 2);
			this->panel36->TabIndex = 18;
			// 
			// BT_up
			// 
			this->BT_up->BackColor = System::Drawing::Color::White;
			this->BT_up->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BT_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_up->ForeColor = System::Drawing::Color::Black;
			this->BT_up->Location = System::Drawing::Point(32, 82);
			this->BT_up->Name = L"BT_up";
			this->BT_up->Size = System::Drawing::Size(245, 23);
			this->BT_up->TabIndex = 17;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::SystemColors::Control;
			this->label65->Location = System::Drawing::Point(28, 57);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(79, 20);
			this->label65->TabIndex = 16;
			this->label65->Text = L"Book Title:";
			// 
			// register_book_page
			// 
			this->register_book_page->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->register_book_page->Controls->Add(this->label76);
			this->register_book_page->Controls->Add(this->panel37);
			this->register_book_page->Controls->Add(this->Year_reg);
			this->register_book_page->Controls->Add(this->label74);
			this->register_book_page->Controls->Add(this->label75);
			this->register_book_page->Controls->Add(this->panel26);
			this->register_book_page->Controls->Add(this->QTY_reg);
			this->register_book_page->Controls->Add(this->label73);
			this->register_book_page->Controls->Add(this->label49);
			this->register_book_page->Controls->Add(this->button35);
			this->register_book_page->Controls->Add(this->button36);
			this->register_book_page->Controls->Add(this->panel38);
			this->register_book_page->Controls->Add(this->Pub_reg);
			this->register_book_page->Controls->Add(this->label67);
			this->register_book_page->Controls->Add(this->panel39);
			this->register_book_page->Controls->Add(this->Sub_reg);
			this->register_book_page->Controls->Add(this->label68);
			this->register_book_page->Controls->Add(this->panel40);
			this->register_book_page->Controls->Add(this->auth_reg);
			this->register_book_page->Controls->Add(this->label69);
			this->register_book_page->Controls->Add(this->label70);
			this->register_book_page->Controls->Add(this->panel41);
			this->register_book_page->Controls->Add(this->BT_reg);
			this->register_book_page->Controls->Add(this->label71);
			this->register_book_page->Location = System::Drawing::Point(14, 20);
			this->register_book_page->Name = L"register_book_page";
			this->register_book_page->Size = System::Drawing::Size(698, 428);
			this->register_book_page->TabIndex = 43;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label76->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::SystemColors::Control;
			this->label76->Location = System::Drawing::Point(420, 56);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(44, 17);
			this->label76->TabIndex = 44;
			this->label76->Text = L"(YYYY)";
			// 
			// panel37
			// 
			this->panel37->Location = System::Drawing::Point(390, 104);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(69, 2);
			this->panel37->TabIndex = 43;
			// 
			// Year_reg
			// 
			this->Year_reg->BackColor = System::Drawing::Color::White;
			this->Year_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Year_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Year_reg->ForeColor = System::Drawing::Color::Black;
			this->Year_reg->Location = System::Drawing::Point(390, 80);
			this->Year_reg->Name = L"Year_reg";
			this->Year_reg->Size = System::Drawing::Size(69, 23);
			this->Year_reg->TabIndex = 42;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label74->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::SystemColors::Control;
			this->label74->Location = System::Drawing::Point(95, 188);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(227, 17);
			this->label74->TabIndex = 41;
			this->label74->Text = L"Enter multiple separated by a comma";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label75->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::SystemColors::Control;
			this->label75->Location = System::Drawing::Point(386, 54);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(40, 20);
			this->label75->TabIndex = 41;
			this->label75->Text = L"Year:";
			// 
			// panel26
			// 
			this->panel26->Location = System::Drawing::Point(300, 104);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(69, 2);
			this->panel26->TabIndex = 40;
			// 
			// QTY_reg
			// 
			this->QTY_reg->BackColor = System::Drawing::Color::White;
			this->QTY_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->QTY_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QTY_reg->ForeColor = System::Drawing::Color::Black;
			this->QTY_reg->Location = System::Drawing::Point(300, 80);
			this->QTY_reg->Name = L"QTY_reg";
			this->QTY_reg->Size = System::Drawing::Size(69, 23);
			this->QTY_reg->TabIndex = 39;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label73->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::SystemColors::Control;
			this->label73->Location = System::Drawing::Point(296, 54);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(38, 20);
			this->label73->TabIndex = 38;
			this->label73->Text = L"QTY:";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::Control;
			this->label49->Location = System::Drawing::Point(92, 123);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(227, 17);
			this->label49->TabIndex = 34;
			this->label49->Text = L"Enter multiple separated by a comma";
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(480, 325);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(161, 47);
			this->button35->TabIndex = 33;
			this->button35->Text = L"Back";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &launchForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(313, 325);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(154, 47);
			this->button36->TabIndex = 32;
			this->button36->Text = L"Submit";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &launchForm::button36_Click);
			// 
			// panel38
			// 
			this->panel38->Location = System::Drawing::Point(34, 300);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(607, 2);
			this->panel38->TabIndex = 31;
			// 
			// Pub_reg
			// 
			this->Pub_reg->BackColor = System::Drawing::Color::White;
			this->Pub_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Pub_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pub_reg->ForeColor = System::Drawing::Color::Black;
			this->Pub_reg->Location = System::Drawing::Point(34, 277);
			this->Pub_reg->Name = L"Pub_reg";
			this->Pub_reg->Size = System::Drawing::Size(607, 23);
			this->Pub_reg->TabIndex = 30;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::SystemColors::Control;
			this->label67->Location = System::Drawing::Point(30, 252);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(72, 20);
			this->label67->TabIndex = 29;
			this->label67->Text = L"Publisher:";
			// 
			// panel39
			// 
			this->panel39->Location = System::Drawing::Point(34, 234);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(607, 2);
			this->panel39->TabIndex = 28;
			// 
			// Sub_reg
			// 
			this->Sub_reg->BackColor = System::Drawing::Color::White;
			this->Sub_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Sub_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sub_reg->ForeColor = System::Drawing::Color::Black;
			this->Sub_reg->Location = System::Drawing::Point(34, 211);
			this->Sub_reg->Name = L"Sub_reg";
			this->Sub_reg->Size = System::Drawing::Size(607, 23);
			this->Sub_reg->TabIndex = 27;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::SystemColors::Control;
			this->label68->Location = System::Drawing::Point(31, 186);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(67, 20);
			this->label68->TabIndex = 26;
			this->label68->Text = L"Subjects:";
			// 
			// panel40
			// 
			this->panel40->Location = System::Drawing::Point(34, 169);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(604, 2);
			this->panel40->TabIndex = 25;
			// 
			// auth_reg
			// 
			this->auth_reg->BackColor = System::Drawing::Color::White;
			this->auth_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->auth_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->auth_reg->ForeColor = System::Drawing::Color::Black;
			this->auth_reg->Location = System::Drawing::Point(34, 146);
			this->auth_reg->Name = L"auth_reg";
			this->auth_reg->Size = System::Drawing::Size(604, 23);
			this->auth_reg->TabIndex = 24;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::SystemColors::Control;
			this->label69->Location = System::Drawing::Point(30, 121);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(63, 20);
			this->label69->TabIndex = 23;
			this->label69->Text = L"Authors:";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::SystemColors::Control;
			this->label70->Location = System::Drawing::Point(36, 21);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(144, 23);
			this->label70->TabIndex = 22;
			this->label70->Text = L"Register A Book ";
			// 
			// panel41
			// 
			this->panel41->Location = System::Drawing::Point(34, 105);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(245, 2);
			this->panel41->TabIndex = 18;
			// 
			// BT_reg
			// 
			this->BT_reg->BackColor = System::Drawing::Color::White;
			this->BT_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BT_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_reg->ForeColor = System::Drawing::Color::Black;
			this->BT_reg->Location = System::Drawing::Point(34, 82);
			this->BT_reg->Name = L"BT_reg";
			this->BT_reg->Size = System::Drawing::Size(245, 23);
			this->BT_reg->TabIndex = 17;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::SystemColors::Control;
			this->label71->Location = System::Drawing::Point(30, 57);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(79, 20);
			this->label71->TabIndex = 16;
			this->label71->Text = L"Book Title:";
			// 
			// search_up_status
			// 
			this->search_up_status->AutoSize = true;
			this->search_up_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->search_up_status->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search_up_status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_up_status->ForeColor = System::Drawing::Color::Red;
			this->search_up_status->Location = System::Drawing::Point(24, 251);
			this->search_up_status->Name = L"search_up_status";
			this->search_up_status->Size = System::Drawing::Size(224, 20);
			this->search_up_status->TabIndex = 57;
			this->search_up_status->Text = L"Click here to close update panel.";
			this->search_up_status->Visible = false;
			this->search_up_status->Click += gcnew System::EventHandler(this, &launchForm::search_up_status_Click);
			// 
			// search_up_input
			// 
			this->search_up_input->BackColor = System::Drawing::Color::White;
			this->search_up_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_up_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_up_input->ForeColor = System::Drawing::Color::Black;
			this->search_up_input->Location = System::Drawing::Point(28, 153);
			this->search_up_input->Name = L"search_up_input";
			this->search_up_input->Size = System::Drawing::Size(271, 23);
			this->search_up_input->TabIndex = 55;
			this->search_up_input->Visible = false;
			// 
			// search_up_title
			// 
			this->search_up_title->AutoSize = true;
			this->search_up_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->search_up_title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_up_title->ForeColor = System::Drawing::SystemColors::Control;
			this->search_up_title->Location = System::Drawing::Point(24, 128);
			this->search_up_title->Name = L"search_up_title";
			this->search_up_title->Size = System::Drawing::Size(186, 20);
			this->search_up_title->TabIndex = 54;
			this->search_up_title->Text = L"Search Book ID To Update:";
			this->search_up_title->Visible = false;
			// 
			// search_up_btn
			// 
			this->search_up_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->search_up_btn->FlatAppearance->BorderSize = 0;
			this->search_up_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_up_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_up_btn->Location = System::Drawing::Point(28, 189);
			this->search_up_btn->Name = L"search_up_btn";
			this->search_up_btn->Size = System::Drawing::Size(124, 41);
			this->search_up_btn->TabIndex = 53;
			this->search_up_btn->Text = L"Search";
			this->search_up_btn->UseVisualStyleBackColor = false;
			this->search_up_btn->Visible = false;
			this->search_up_btn->Click += gcnew System::EventHandler(this, &launchForm::search_up_btn_Click);
			// 
			// update_confim
			// 
			this->update_confim->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->update_confim->Enabled = false;
			this->update_confim->FlatAppearance->BorderSize = 0;
			this->update_confim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update_confim->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_confim->ForeColor = System::Drawing::Color::White;
			this->update_confim->Location = System::Drawing::Point(169, 189);
			this->update_confim->Name = L"update_confim";
			this->update_confim->Size = System::Drawing::Size(130, 41);
			this->update_confim->TabIndex = 52;
			this->update_confim->Text = L"Update Book";
			this->update_confim->UseVisualStyleBackColor = false;
			this->update_confim->Visible = false;
			this->update_confim->Click += gcnew System::EventHandler(this, &launchForm::update_confim_Click);
			// 
			// del_book_status
			// 
			this->del_book_status->AutoSize = true;
			this->del_book_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->del_book_status->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_book_status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_book_status->ForeColor = System::Drawing::Color::Red;
			this->del_book_status->Location = System::Drawing::Point(24, 251);
			this->del_book_status->Name = L"del_book_status";
			this->del_book_status->Size = System::Drawing::Size(219, 20);
			this->del_book_status->TabIndex = 50;
			this->del_book_status->Text = L"Click here to close delete panel.";
			this->del_book_status->Visible = false;
			this->del_book_status->Click += gcnew System::EventHandler(this, &launchForm::del_book_status_Click);
			// 
			// del_book_input
			// 
			this->del_book_input->BackColor = System::Drawing::Color::White;
			this->del_book_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->del_book_input->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_book_input->ForeColor = System::Drawing::Color::Black;
			this->del_book_input->Location = System::Drawing::Point(28, 153);
			this->del_book_input->Name = L"del_book_input";
			this->del_book_input->Size = System::Drawing::Size(271, 23);
			this->del_book_input->TabIndex = 48;
			this->del_book_input->Visible = false;
			// 
			// del_book_title
			// 
			this->del_book_title->AutoSize = true;
			this->del_book_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->del_book_title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_book_title->ForeColor = System::Drawing::SystemColors::Control;
			this->del_book_title->Location = System::Drawing::Point(24, 128);
			this->del_book_title->Name = L"del_book_title";
			this->del_book_title->Size = System::Drawing::Size(181, 20);
			this->del_book_title->TabIndex = 47;
			this->del_book_title->Text = L"Search Book ID To Delete:";
			this->del_book_title->Visible = false;
			// 
			// del_book_search_btn
			// 
			this->del_book_search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->del_book_search_btn->FlatAppearance->BorderSize = 0;
			this->del_book_search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_book_search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_book_search_btn->Location = System::Drawing::Point(28, 189);
			this->del_book_search_btn->Name = L"del_book_search_btn";
			this->del_book_search_btn->Size = System::Drawing::Size(124, 41);
			this->del_book_search_btn->TabIndex = 46;
			this->del_book_search_btn->Text = L"Search";
			this->del_book_search_btn->UseVisualStyleBackColor = false;
			this->del_book_search_btn->Visible = false;
			this->del_book_search_btn->Click += gcnew System::EventHandler(this, &launchForm::del_book_search_btn_Click);
			// 
			// delete_the_book_btn
			// 
			this->delete_the_book_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_the_book_btn->Enabled = false;
			this->delete_the_book_btn->FlatAppearance->BorderSize = 0;
			this->delete_the_book_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_the_book_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_the_book_btn->ForeColor = System::Drawing::Color::White;
			this->delete_the_book_btn->Location = System::Drawing::Point(169, 189);
			this->delete_the_book_btn->Name = L"delete_the_book_btn";
			this->delete_the_book_btn->Size = System::Drawing::Size(130, 41);
			this->delete_the_book_btn->TabIndex = 45;
			this->delete_the_book_btn->Text = L"Delete Book";
			this->delete_the_book_btn->UseVisualStyleBackColor = false;
			this->delete_the_book_btn->Visible = false;
			this->delete_the_book_btn->Click += gcnew System::EventHandler(this, &launchForm::delete_the_book_btn_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Green;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(28, 391);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(148, 47);
			this->button37->TabIndex = 29;
			this->button37->Text = L"New";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &launchForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(508, 391);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(185, 47);
			this->button38->TabIndex = 28;
			this->button38->Text = L"Back";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &launchForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(345, 391);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(157, 47);
			this->button39->TabIndex = 25;
			this->button39->Text = L"Delete";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &launchForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(182, 391);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(157, 47);
			this->button40->TabIndex = 24;
			this->button40->Text = L"Update";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &launchForm::button40_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::SystemColors::Control;
			this->label72->Location = System::Drawing::Point(31, 28);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(284, 54);
			this->label72->TabIndex = 21;
			this->label72->Text = L"Manage Books";
			// 
			// launchForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->ManageBookPage);
			this->Controls->Add(this->manageuser_page);
			this->Controls->Add(this->lib_brw_page);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->accountFees);
			this->Controls->Add(this->returnspage);
			this->Controls->Add(this->Lib_Dashboard);
			this->Controls->Add(this->borrowPage);
			this->Controls->Add(this->Manage_books_nav);
			this->Controls->Add(this->Book_availability_page);
			this->Controls->Add(this->Stu_Dashboard);
			this->Controls->Add(this->Exit_Button);
			this->Controls->Add(this->sign_in_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Agree_To_Terms);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->user_password_input);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->user_id_input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"launchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"launchForm";
			this->Stu_Dashboard->ResumeLayout(false);
			this->Stu_Dashboard->PerformLayout();
			this->Book_availability_page->ResumeLayout(false);
			this->Book_availability_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Manage_books_nav->ResumeLayout(false);
			this->Manage_books_nav->PerformLayout();
			this->borrowPage->ResumeLayout(false);
			this->borrowPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrow_searchView))->EndInit();
			this->Lib_Dashboard->ResumeLayout(false);
			this->Lib_Dashboard->PerformLayout();
			this->lib_acc_search->ResumeLayout(false);
			this->lib_acc_search->PerformLayout();
			this->new_PAY_lib->ResumeLayout(false);
			this->new_PAY_lib->PerformLayout();
			this->returnspage->ResumeLayout(false);
			this->returnspage->PerformLayout();
			this->accountFees->ResumeLayout(false);
			this->accountFees->PerformLayout();
			this->add_payment_panel->ResumeLayout(false);
			this->add_payment_panel->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->lib_brw_page->ResumeLayout(false);
			this->lib_brw_page->PerformLayout();
			this->manageuser_page->ResumeLayout(false);
			this->manageuser_page->PerformLayout();
			this->update_userInfo_page->ResumeLayout(false);
			this->update_userInfo_page->PerformLayout();
			this->add_new_user_page->ResumeLayout(false);
			this->add_new_user_page->PerformLayout();
			this->ManageBookPage->ResumeLayout(false);
			this->ManageBookPage->PerformLayout();
			this->Update_Book_page->ResumeLayout(false);
			this->Update_Book_page->PerformLayout();
			this->register_book_page->ResumeLayout(false);
			this->register_book_page->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	


#pragma endregion


	private: System::Void sign_in_button_Click(System::Object^ sender, System::EventArgs^ e) {

		string ID = msclr::interop::marshal_as<std::string>(user_id_input->Text);
		string pass = msclr::interop::marshal_as<std::string>(user_password_input->Text);

		active_user_ID = gotologin.login(ID, pass);

		if (active_user_ID != "") {

			if(loading.sys_Users[active_user_ID].role == "student"){

				Stu_Dashboard->Show();
				user_id_input->Text = "";
				user_password_input->Text = "";
			}

			else{
			
				
				Lib_Dashboard->Show();
				user_id_input->Text = "";
				user_password_input->Text = "";

			}
			
		}
		else {
			user_id_input->Text = "";
			user_password_input->Text = "";
			MessageBox::Show("Invalid user name or password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		

	
	

	}



private: System::Void Exit_Button_Click(System::Object^ sender, System::EventArgs^ e) {


	files.update_file();
	files.writeToCSV();

	Application::Exit();
}

private: System::Void Agree_To_Terms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (Agree_To_Terms->Checked) {
		sign_in_button->Enabled = true;
	}
	else {
		sign_in_button->Enabled = false;
	}
}


private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Stu_Dashboard->Hide();
	borrowPage->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	files.update_file();
	files.writeToCSV();
	Stu_Dashboard->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Lib_Dashboard->Hide();
}
private: System::Void Lib_Dashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Lib_Dashboard->Hide();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void calculateFees_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (loading.Payment_Method.find(active_user_ID) != loading.Payment_Method.end()) {

		string check_Card_Date = loading.Payment_Method[active_user_ID].expiration_date;

		payment_method_status = valid.VisaDate(check_Card_Date);
		if (payment_method_status) {
		
			label15-> ForeColor = System::Drawing::Color::Lime;
			label15->Text = "Valid Details";
		
		}
		else {
			label15-> ForeColor = System::Drawing::Color::Red;
			label15 -> Text = "Expired";
			btnAddPayMethod->Enabled = true;
		}

	}

	else {
	
		label15-> ForeColor = System::Drawing::Color::Red;
		label15->Text = "None";
		btnAddPayMethod->Enabled = true;
	
	}
	
	float balance = 0;
	balance = fines.find_user_fines(active_user_ID);
	displayFees->Text = "$" + balance.ToString();   // Access fees through the instance
	accountFees->Show();
	Stu_Dashboard->Hide();
}
private: System::Void displayFees_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
	accountFees->Hide();
	float balance = 0.00;
	Stu_Dashboard->Show();
}
private: System::Void btnReturnBook_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(returnsBK_input->Text);

	if (returnsBK_input->Text == "") {

		btnReturnBook->Enabled = false;
		FeeStatus->Text = "Please ensure the Book ID field is not blank.";

	
	}
	else {

	// find if current book exist


	ret.returnaBook(active_user_ID, bookSearch_ID);
	FeeStatus->Text = "Book return processed successfully! Printing receipt.";
	returnsBK_input->Text = "";
	files.update_file();
	files.writeToCSV();
	bookSearch_ID = "";
	float balance = 0.00;


	

	
	}

	
	
}
private: System::Void returns_searchBK_Click(System::Object^ sender, System::EventArgs^ e) {
	
	string bookSearch_ID = msclr::interop::marshal_as<std::string>(returnsBK_input->Text);
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (researching_book != "") {

		if (std::find(loading.sys_Users[active_user_ID].currentBook.begin(), loading.sys_Users[active_user_ID].currentBook.end(), bookSearch_ID) != loading.sys_Users[active_user_ID].currentBook.end()) {

			float balance = 0;
			string returnDate = valid.formattedDate();
			balance = fines.calculate_fines(active_user_ID, returnDate, bookSearch_ID);

			if (balance == 0.00) {
				FeeStatus->Text = "You will be charged $0.00 for this return.";

				btnReturnBook->Text = "Reurn Now";
				btnReturnBook->Enabled = true;
			}
			else {

				FeeStatus->Text = "You will be charged " + "$" + balance.ToString() + " for this return.";
				btnReturnBook->Text = "Pay And Return";
				btnReturnBook->Enabled = true;
			}
		}
		else {
		
			FeeStatus->Text = "Sorry this book is not in your owned collection.";
			btnReturnBook->Text = "Return";
			btnReturnBook->Enabled = false;
		
		}
	}

	/*
	if (returnsBK_input->Text != "") {

		if (returnsBK_input->Text == "earlybook") {
			searchStatus->Text = "On-Time";
			if (searchStatus->Text == "Late" || searchStatus->Text == "On-Time") {
				FeeStatus->Text = "You will be charged $0.00" + " for this return.";
				btnReturnBook->Enabled = true;
			}
			else {
				btnReturnBook->Enabled = false;
			}
		}
		else if (returnsBK_input->Text == "latebook") {
			searchStatus->Text = "Late";
			if (searchStatus->Text == "Late" || searchStatus->Text == "On-Time") {
				//FeeStatus->Text = "You will be charged " + balance + " for this return.";
				btnReturnBook->Enabled = true;
			}
			else {
				btnReturnBook->Enabled = false;
			}
		}
		else {
			MessageBox::Show("Sorry. Enter a book you've rented.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	*/
	else {
		MessageBox::Show("Invalid. Please enter a book you've rented.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		returnsBK_input->Text = "";
	}
}
private: System::Void goToReturnsPage_Click(System::Object^ sender, System::EventArgs^ e) {
	Stu_Dashboard->Hide();
	returnspage->Show();
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	returnspage->Hide();
	Stu_Dashboard->Show();
	returnsBK_input->Text = "";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	borrowPage->Hide();
	Stu_Dashboard->Show();
}
private: System::Void search_Borrow_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(Borrow_input->Text);
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (researching_book != "") {

		if (std::find(loading.sys_Users[active_user_ID].currentBook.begin(), loading.sys_Users[active_user_ID].currentBook.end(), bookSearch_ID) != loading.sys_Users[active_user_ID].currentBook.end()) {

			float balance = 0.00;
			string returnDate = valid.formattedDate();
			balance = fines.calculate_fines(active_user_ID, returnDate, bookSearch_ID);

			if (balance == 0.00) {
				FeeStatus->Text = "You will be charged $0.00 for this return.";

				btnReturnBook->Text = "Reurn Now";
				btnReturnBook->Enabled = true;
			}
			else {

				FeeStatus->Text = "You will be charged " + "$" + balance.ToString() + " for this return.";
				btnReturnBook->Text = "Pay And Return";
				btnReturnBook->Enabled = true;
			}
		}
		else {

			FeeStatus->Text = "Sorry this book is not in your owned collection.";
			btnReturnBook->Text = "Return";
			btnReturnBook->Enabled = false;

		}
	}


}
private: System::Void Borrow_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	borrow_searchView->Hide();
}
private: System::Void btnReturns_Click(System::Object^ sender, System::EventArgs^ e) {
	accountFees->Hide();
	returnspage->Show();
}


private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	accountFees->Hide();
	Stu_Dashboard->Show();
}
private: System::Void btnAddPayMethod_Click(System::Object^ sender, System::EventArgs^ e) {

	add_payment_panel->Show();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	string cardNum = msclr::interop::marshal_as<std::string>(cardno->Text);
	string sort = msclr::interop::marshal_as<std::string>(sortcode->Text);
	string cpin = msclr::interop::marshal_as<std::string>(pin->Text);
	string cdate = msclr::interop::marshal_as<std::string>(cardDate->Text);

	bool card_input = false;

	if ((valid.Validate_CardNumber(cardNum))) {
		if ((valid.Validate_SortCode(sort))) {
			if ((valid.VisaDate(cdate))) {

				if ((valid.getPin(cpin))) {

					bank.add_payment_method(active_user_ID, cardNum, sort, cpin, cdate);
					
					card_input = true;


				}
				else {

					pin->Text = "";

				}
			}

			else {
				
				cardDate->Text = "";
			}
		
		}
		else {

			sortcode->Text = "";
		}
	}
	else {
		cardno->Text = "";
	}

	if (card_input == true) {

		files.update_file();
		files.writeToCSV();
	
		label15->Text = "Valid Details";
		label15->ForeColor = System::Drawing::Color::Lime;
		add_payment_panel->Hide();
	}
	else {

	
		MessageBox::Show("Invalid. Please enter valid card details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	}



}
private: System::Void button6_Click_2(System::Object^ sender, System::EventArgs^ e) {

	files.update_file();
	files.writeToCSV();
	Lib_Dashboard -> Hide();

}
private: System::Void lib_Account_Click(System::Object^ sender, System::EventArgs^ e) {

	
	lib_acc_search->Show();

}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

	files.update_file();
	files.writeToCSV();
	lib_acc_search->Hide();
	Lib_Dashboard->Show();
	account_UID_input->Text = "";
	label25->ForeColor = System::Drawing::Color::Red;
	label25->Text = "Pending";
	label27->Text = "$0.00";

}
private: System::Void acc_UID_search_Click(System::Object^ sender, System::EventArgs^ e) {

	string ID = msclr::interop::marshal_as<std::string>(account_UID_input->Text);

	if (loading.Payment_Method.find(ID) != loading.Payment_Method.end()) {
	
		if ((valid.VisaDate(loading.Payment_Method[ID].expiration_date))) {
		
			label25->ForeColor = System::Drawing::Color::Lime;
			label25->Text = "Valid Details";
			acc_NEW_pay->Enabled = false;
		}
		else {

			label25->ForeColor = System::Drawing::Color::Red;
			label25->Text = "Expired";
			acc_NEW_pay->Enabled = true;
		
		}
	
	}
	else {
		label25->ForeColor = System::Drawing::Color::Red;
		label25->Text = "None";
		acc_NEW_pay->Enabled = true;

	}

	if (ID != "") {
		if (loading.sys_Users.find(ID) != loading.sys_Users.end()) {

			if (loading.sys_Users[ID].currentBook.empty()) {
			
				System::String^ userName = gcnew System::String(loading.sys_Users[ID].user_name.c_str());

				label28->Text = System::String::Format("{0}'s Current Fees:", userName);
			}
			else {
				float balance = 0.00;
				balance = fines.find_user_fines(ID);
				System::String^ userName = gcnew System::String(loading.sys_Users[ID].user_name.c_str());

				label28->Text = System::String::Format("{0}'s Current Fees:", userName);
				
				System::String^ balanceStr = System::Convert::ToString(balance);

				// Set label text using System::String::Format
				label27->Text = System::String::Format("${0}", balanceStr);

			
			}
		
		
		}
		else {

			account_UID_input->Text = "";
			label25->ForeColor = System::Drawing::Color::Red;
			label25->Text = "Pending";
			label27->Text = "$0.00";
			MessageBox::Show("Invalid user ID!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		account_UID_input->Text = "";
		MessageBox::Show("Please enter a user's ID to search!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}


}
private: System::Void acc_NEW_pay_Click(System::Object^ sender, System::EventArgs^ e) {

	string ID = msclr::interop::marshal_as<std::string>(account_UID_input->Text);

	if (ID != "") {

		if (loading.sys_Users.find(ID) != loading.sys_Users.end()) {

			user_query_ID = ID;
			new_PAY_lib->Show();


		}
		else {

			account_UID_input->Text = "";
			label25->ForeColor = System::Drawing::Color::Red;
			label25->Text = "Pending";
			label27->Text = "$0.00";
			MessageBox::Show("Please enter valid ID to search!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}

	}
	else {
		account_UID_input->Text = "";
		account_UID_input->Text = "";
		label25->ForeColor = System::Drawing::Color::Red;
		label25->Text = "Pending";
		label27->Text = "$0.00";
		MessageBox::Show("Please enter a user's ID to search!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}



	
}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {

	string cardNum = msclr::interop::marshal_as<std::string>(cardno->Text);
	string sort = msclr::interop::marshal_as<std::string>(sortcode->Text);
	string cpin = msclr::interop::marshal_as<std::string>(pin->Text);
	string cdate = msclr::interop::marshal_as<std::string>(cardDate->Text);

	bool card_input = false;

	if (loading.sys_Users[active_user_ID].role == "student") {

		if ((valid.Validate_CardNumber(cardNum))) {
			if ((valid.Validate_SortCode(sort))) {
				if ((valid.VisaDate(cdate))) {

					if ((valid.getPin(cpin))) {

						bank.add_payment_method(active_user_ID, cardNum, sort, cpin, cdate);

						card_input = true;


					}
					else {

						pin->Text = "";

					}
				}

				else {

					cardDate->Text = "";
				}

			}
			else {

				sortcode->Text = "";
			}
		}
		else {
			cardno->Text = "";
		}

		if (card_input == true) {

			files.update_file();
			files.writeToCSV();

			label15->Text = "Valid Details";
			label15->ForeColor = System::Drawing::Color::Lime;
			add_payment_panel->Hide();
		}
		else {


			MessageBox::Show("Invalid. Please enter valid card details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	else {


		user_query_ID = msclr::interop::marshal_as<std::string>(account_UID_input->Text);
		if ((valid.Validate_CardNumber(cardNum))) {
			if ((valid.Validate_SortCode(sort))) {
				if ((valid.VisaDate(cdate))) {

					if ((valid.getPin(cpin))) {

						bank.add_payment_method(user_query_ID, cardNum, sort, cpin, cdate);

						card_input = true;


					}
					else {

						pin->Text = "";

					}
				}

				else {

					cardDate->Text = "";
				}

			}
			else {

				sortcode->Text = "";
			}
		}
		else {
			cardno->Text = "";
		}

		if (card_input == true) {

			files.update_file();
			files.writeToCSV();

			label15->Text = "Valid Details";
			label15->ForeColor = System::Drawing::Color::Lime;
			add_payment_panel->Hide();
		}
		else {


			MessageBox::Show("Invalid. Please enter valid card details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}

}
private: System::Void btnAddPayMethod_Click_1(System::Object^ sender, System::EventArgs^ e) {


	add_payment_panel->Show();
}
private: System::Void button16_Click_2(System::Object^ sender, System::EventArgs^ e) {
	accountFees->Hide();
	float balance = 0.00;
	Stu_Dashboard->Show();

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {


	string cardNum = msclr::interop::marshal_as<std::string>(card_no_lib->Text);
	string sort = msclr::interop::marshal_as<std::string>(textBox3->Text);
	string cpin = msclr::interop::marshal_as<std::string>(textBox2->Text);
	string cdate = msclr::interop::marshal_as<std::string>(textBox1->Text);

	bool card_input = false;


	user_query_ID = msclr::interop::marshal_as<std::string>(account_UID_input->Text);

	if ((valid.Validate_CardNumber(cardNum))) {
		if ((valid.Validate_SortCode(sort))) {
			if ((valid.VisaDate(cdate))) {

				if ((valid.getPin(cpin))) {

					bank.add_payment_method(user_query_ID, cardNum, sort, cpin, cdate);

					card_input = true;


				}
				else {

					textBox2->Text = "";

				}
			}

			else {

				textBox1->Text = "";
			}

		}
		else {

			textBox3->Text = "";
		}
	}
	else {
		card_no_lib->Text = "";
	}

	if (card_input == true) {

		files.update_file();
		files.writeToCSV();

		label25->Text = "Valid Details";
		label25->ForeColor = System::Drawing::Color::Lime;
		new_PAY_lib->Hide();
	}
	else {



		MessageBox::Show("Invalid. Please enter valid card details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}



}
private: System::Void returns_searchBK_Click_1(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(returnsBK_input->Text);
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (researching_book != "") {

		if (std::find(loading.sys_Users[active_user_ID].currentBook.begin(), loading.sys_Users[active_user_ID].currentBook.end(), bookSearch_ID) != loading.sys_Users[active_user_ID].currentBook.end()) {

			float balance = 0.00f;
			string returnDate = valid.formattedDate();
			balance = fines.calculate_fines(active_user_ID, returnDate, bookSearch_ID);

			if (balance == 0.00) {
				FeeStatus->Text = "You will be charged $0.00 for this return.";

				btnReturnBook->Text = "Reurn Now";
				btnReturnBook->Enabled = true;
			}
			else {

				FeeStatus->Text = "You will be charged " + "$" + balance.ToString() + " for this return.";
				btnReturnBook->Text = "Pay And Return";
				btnReturnBook->Enabled = true;
			}
		}
		else {

			FeeStatus->Text = "Sorry this book is not in your owned collection.";
			btnReturnBook->Text = "Return";
			btnReturnBook->Enabled = false;

		}
	}

	/*
	if (returnsBK_input->Text != "") {

		if (returnsBK_input->Text == "earlybook") {
			searchStatus->Text = "On-Time";
			if (searchStatus->Text == "Late" || searchStatus->Text == "On-Time") {
				FeeStatus->Text = "You will be charged $0.00" + " for this return.";
				btnReturnBook->Enabled = true;
			}
			else {
				btnReturnBook->Enabled = false;
			}
		}
		else if (returnsBK_input->Text == "latebook") {
			searchStatus->Text = "Late";
			if (searchStatus->Text == "Late" || searchStatus->Text == "On-Time") {
				//FeeStatus->Text = "You will be charged " + balance + " for this return.";
				btnReturnBook->Enabled = true;
			}
			else {
				btnReturnBook->Enabled = false;
			}
		}
		else {
			MessageBox::Show("Sorry. Enter a book you've rented.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	*/
	else {
		MessageBox::Show("Invalid. Please enter a book you've rented.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		returnsBK_input->Text = "";
	}

}
private: System::Void btnReturnBook_Click_1(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(returnsBK_input->Text);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (returnsBK_input->Text == "") {

		btnReturnBook->Enabled = false;
		FeeStatus->Text = "Please ensure the Book ID field is not blank.";


	}
	else {

		// find if current book exist


		ret.returnaBook(active_user_ID, bookSearch_ID);
		FeeStatus->Text = "Book return processed successfully! Printing receipt.";
		returnsBK_input->Text = "";
		files.update_file();
		files.writeToCSV();
		bookSearch_ID = "";
		float balance = 0.00;





	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	panel11->Show();
	Lib_Dashboard->Hide();
	
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void lib_ret_search_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(textBox4->Text);
	string user = msclr::interop::marshal_as<std::string>(textBox5->Text);
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);
	
	float balance = 0;
	if (loading.sys_Users.find(user) != loading.sys_Users.end()) {

		if (researching_book != "") {

			if (std::find(loading.sys_Users[user].currentBook.begin(), loading.sys_Users[user].currentBook.end(), bookSearch_ID) != loading.sys_Users[user].currentBook.end()) {

				
				string returnDate = valid.formattedDate();
				balance = fines.calculate_fines(user, returnDate, bookSearch_ID);

				if (balance == 0.00) {
					lib_ret_status->Text = "You will be charged $0.00 for this return.";

					lib_ret_btn->Text = "Reurn Now";
					lib_ret_btn->Enabled = true;
				}
				else {

					lib_ret_status->Text = "You will be charged " + "$" + balance.ToString() + " for this return.";
					lib_ret_btn->Text = "Pay And Return";
					lib_ret_btn->Enabled = true;
				}
			}
			else {

				lib_ret_status->Text = "Sorry this book is not in your owned collection.";
				lib_ret_btn->Text = "Return";
				lib_ret_btn->Enabled = false;

			}
		}
		else {

			lib_ret_status->Text = "pending...";
			lib_ret_btn->Text = "Return";
			lib_ret_btn->Enabled = false;

			MessageBox::Show("Please enter a valib book ID or Title.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}


	}
	else {

		lib_ret_status->Text = "pending...";
		lib_ret_btn->Text = "Return";
		lib_ret_btn->Enabled = false;

		MessageBox::Show("Please check that the User ID is correct.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void button23_Click_1(System::Object^ sender, System::EventArgs^ e) {

	panel11->Hide();
	Lib_Dashboard->Show();
}
private: System::Void lib_ret_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(textBox4->Text);
	string user = msclr::interop::marshal_as<std::string>(textBox5->Text);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (textBox4->Text == "" || textBox5->Text == "") {


		lib_ret_status->Text = "Please ensure all fields are not blank.";
		lib_ret_btn->Text = "Return";
		lib_ret_btn->Enabled = false;


	}
	else {

		// find if current book exist


		string user = msclr::interop::marshal_as<std::string>(textBox5->Text);


		ret.returnaBook(user, bookSearch_ID);
		FeeStatus->Text = "Book return processed successfully! Printing receipt.";
		returnsBK_input->Text = "";
		files.update_file();
		files.writeToCSV();
		bookSearch_ID = "";
		float balance = 0.00;
		textBox4->Text = "";
		textBox5->Text = "";






	}
}
private: System::Void button24_Click_1(System::Object^ sender, System::EventArgs^ e) {

	files.update_file();
	files.writeToCSV();
	brw_pg_status->Text = "pending...";
	lib_brw_page->Hide();
	Lib_Dashboard->Show();
}
private: System::Void brw_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(brw_BID_input->Text);
	string user = msclr::interop::marshal_as<std::string>(brw_UID_input->Text);
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (loading.sys_Users.find(user) != loading.sys_Users.end()) {

		if (researching_book != "") {

			if (std::find(loading.sys_Users[user].currentBook.begin(), loading.sys_Users[user].currentBook.end(), bookSearch_ID) == loading.sys_Users[user].currentBook.end()) {

				
				if (loading.libBooks[bookSearch_ID].InStock > 0) {
				
					brw_pg_status->Text = "Available. There are " + loading.libBooks[bookSearch_ID].InStock.ToString() + " books in stock.";
					brw_lib_btn->Text = "Borrow";
					brw_lib_btn->Enabled = true;
				
				}

				else {

					brw_pg_status->Text = "Sorry. This book is not in stock.";
					brw_lib_btn->Text = "Borrow";
					brw_lib_btn->Enabled = false;
				}

			}
			else {

				brw_pg_status->Text = "Sorry this book is already in your owned collection.";
				brw_lib_btn->Text = "Return";
				brw_lib_btn->Enabled = false;

			}
		}
		else {

			brw_pg_status->Text = "pending...";
			brw_lib_btn->Text = "Return";
			brw_lib_btn->Enabled = false;

			MessageBox::Show("Please enter a valid book ID or Title.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}


	}
	else {

		lib_ret_status->Text = "pending...";
		lib_ret_btn->Text = "Return";
		lib_ret_btn->Enabled = false;

		MessageBox::Show("Please check that the User ID is correct.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	Lib_Dashboard->Hide();
	lib_brw_page->Show();
	
}
private: System::Void brw_lib_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(brw_BID_input->Text);
	string user = msclr::interop::marshal_as<std::string>(brw_UID_input->Text);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);


	if (brw_BID_input->Text == "" || brw_UID_input->Text == "") {


		brw_pg_status->Text = "Please ensure all fields are not blank.";
		brw_lib_btn->Text = "Borrow";
		brw_lib_btn->Enabled = false;

		
	}
	else if(loading.Payment_Method.find(user) == loading.Payment_Method.end()) {
	
		System::String^ userName = gcnew System::String(loading.sys_Users[user].user_name.c_str());

		// Set brw_pg_status text
		brw_pg_status->Text = System::String::Format("Sorry {0} has not added a payment method.", userName);

		brw_lib_btn->Text = "Borrow";
		brw_lib_btn->Enabled = false;
		
	
	}

	else if (!(valid.VisaDate(loading.Payment_Method[user].expiration_date))) {

		System::String^ userName = gcnew System::String(loading.sys_Users[user].user_name.c_str());

		// Set brw_pg_status text
		brw_pg_status->Text = System::String::Format("Sorry {0} needs a new payment method to borrow.", userName);

	
		brw_lib_btn->Text = "Borrow";
		brw_lib_btn->Enabled = false;
	}

	else {




		rent.rentaBook(user, bookSearch_ID);

		brw_pg_status->Text = "Book has been borrowed successfully";
		brw_BID_input->Text = "";
		brw_UID_input->Text="";
		brw_lib_btn->Text = "Borrow";
		brw_lib_btn->Enabled = false;
		
		
		files.update_file();
		files.writeToCSV();
		bookSearch_ID = "";
		
	
	}

}
private: System::Void search_Borrow_Click_1(System::Object^ sender, System::EventArgs^ e) {


	string bookSearch_ID = msclr::interop::marshal_as<std::string>(Borrow_input->Text);
	string user = active_user_ID;
	string researching_book = valid.search_for_a_book(bookSearch_ID);
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);

	if (loading.sys_Users.find(user) != loading.sys_Users.end()) {

		if (researching_book != "") {

			if (std::find(loading.sys_Users[user].currentBook.begin(), loading.sys_Users[user].currentBook.end(), bookSearch_ID) == loading.sys_Users[user].currentBook.end()) {


				if (loading.libBooks[bookSearch_ID].InStock > 0) {

					moreInfo_Borrow->Text = "Available. There are " + loading.libBooks[bookSearch_ID].InStock.ToString() + " books in stock.";
					btnBorrow_book->Text = "Borrow";
					btnBorrow_book->Enabled = true;

				}

				else {

					moreInfo_Borrow->Text = "Sorry. This book is not in stock.";
					btnBorrow_book->Text = "Borrow";
					btnBorrow_book->Enabled = false;
				}

			}
			else {

				moreInfo_Borrow->Text = "Sorry this book is already in your owned collection.";
				btnBorrow_book->Text = "Return";
				btnBorrow_book->Enabled = false;

			}
		}
		else {

			moreInfo_Borrow->Text = "pending...";
			btnBorrow_book->Text = "Return";
			btnBorrow_book->Enabled = false;

			MessageBox::Show("Please enter a valid book ID or Title.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}


	}
	else {

		moreInfo_Borrow->Text = "pending...";
		btnBorrow_book->Text = "Return";
		btnBorrow_book->Enabled = false;

		MessageBox::Show("Please check that the User ID is correct.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void btnBorrow_book_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookSearch_ID = msclr::interop::marshal_as<std::string>(Borrow_input->Text);
	string user = active_user_ID;
	bookSearch_ID = valid.convert_to_upper(bookSearch_ID);


	if (Borrow_input->Text == "") {


		moreInfo_Borrow->Text = "Please ensure all fields are not blank.";
		btnBorrow_book->Text = "Borrow";
		btnBorrow_book->Enabled = false;


	}
	else if (loading.Payment_Method.find(user) == loading.Payment_Method.end()) {

		System::String^ userName = gcnew System::String(loading.sys_Users[user].user_name.c_str());

		// Set brw_pg_status text
		moreInfo_Borrow->Text = System::String::Format("Sorry {0} has not added a payment method.", userName);

		btnBorrow_book->Text = "Borrow";
		btnBorrow_book->Enabled = false;


	}

	else if (!(valid.VisaDate(loading.Payment_Method[user].expiration_date))) {

		System::String^ userName = gcnew System::String(loading.sys_Users[user].user_name.c_str());

		// Set brw_pg_status text
		moreInfo_Borrow->Text = System::String::Format("Sorry {0} needs a new payment method to borrow.", userName);


		btnBorrow_book->Text = "Borrow";
		btnBorrow_book->Enabled = false;
	}

	else {




		rent.rentaBook(user, bookSearch_ID);

		moreInfo_Borrow->Text = "Book has been borrowed successfully";
		Borrow_input->Text = "";
		btnBorrow_book->Text = "Borrow";
		btnBorrow_book->Enabled = false;


		files.update_file();
		files.writeToCSV();
		bookSearch_ID = "";


	}

}
private: System::Void add_new_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string first = msclr::interop::marshal_as<std::string>(user_Fname->Text);
	string last = msclr::interop::marshal_as<std::string>(user_Lname->Text);
	string Nrole = msclr::interop::marshal_as<std::string>(new_user_role->Text);
	string pass = msclr::interop::marshal_as<std::string>(new_user_password->Text);

	if (first == "") {
		MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else if (last == "") {
		MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else if (Nrole == "") {
		MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else if (pass == "") {
		MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else {
	
		if (first.length() < 3) {
			MessageBox::Show("First Name must be atleast 3 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (last.length() < 3) {
			MessageBox::Show("Last Name must be atleast 3 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (valid.convert_to_lower(Nrole) != "student" && valid.convert_to_lower(Nrole) != "librarian") {
			MessageBox::Show("Users must be either 'Student' or 'Librarian.'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (pass.length() < 8 || !valid.check_password(pass)) {
		
			MessageBox::Show("Passwords must be atleast 8 characters long with numbers and symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		
		}
		else {

			manage_userdata.Register_user(first, last, Nrole, pass);
			add_new_user_page->Hide();
			manageuser_page->Show();
			user_Fname->Text = "";
			user_Lname->Text = "";
			new_user_role->Text = "";
			new_user_password->Text = "";
		
			System::String^ NUID = gcnew System::String(loading.NewUser_ID.c_str());
			MessageBox::Show("Your login ID is: " + NUID, "User added sucessfully", MessageBoxButtons::OK, MessageBoxIcon::Information);
			files.update_file();
			files.writeToCSV();
			

		
		}

	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	manageuser_page->Show();
	Lib_Dashboard->Hide();
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_user_page->Show();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {

	add_new_user_page->Hide();

	user_Fname->Text="";
	user_Lname->Text="";
	new_user_role->Text="";
	new_user_password->Text="";

}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

	update_userInfo_page->Hide();
	manageuser_page->Show();
	up_fName_input->Text = "";
	up_LName_input->Text = "";
	up_role_input->Text = "";
	up_pass_input->Text = "";
	label47->ForeColor = System::Drawing::Color::Red;
	label47->Text = "Note: Update fields are disabled >>";


}
private: System::Void UP_ID_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	//UP_ID_search_input
	string user = msclr::interop::marshal_as<std::string>(UP_ID_search_input->Text);

	if (UP_ID_search_input->Text != "") {

		if (loading.sys_Users.find(user) != loading.sys_Users.end()) {

			up_fName_input->Enabled = true;
			up_LName_input->Enabled = true;
			up_role_input->Enabled = true;
			up_pass_input->Enabled = true;
			up_user_submit->Enabled = true;
			label47->ForeColor = System::Drawing::Color::Green;
			label47->Text = "Note: Update fields are now enabled >>";
			

		}
		else {
			
			MessageBox::Show("This User ID is not registered.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			UP_ID_search_input->Text = "";

		}
}
	else {
	
		MessageBox::Show("Please enter a User ID to continue.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void up_user_submit_Click(System::Object^ sender, System::EventArgs^ e) {

	string first = msclr::interop::marshal_as<std::string>(up_fName_input->Text);
	string last = msclr::interop::marshal_as<std::string>(up_LName_input->Text);
	string Nrole = msclr::interop::marshal_as<std::string>(up_role_input->Text);
	string pass = msclr::interop::marshal_as<std::string>(up_pass_input->Text);
	string user = msclr::interop::marshal_as<std::string>(UP_ID_search_input->Text);

	if (loading.sys_Users.find(user) == loading.sys_Users.end() || user == "") {

		up_fName_input->Enabled = false;
		up_LName_input->Enabled = false;
		up_role_input->Enabled = false;
		up_pass_input->Enabled = false;
		up_user_submit->Enabled = false;
		up_fName_input->Text = "";
		up_LName_input->Text = "";
		up_role_input->Text = "";
		up_pass_input->Text = "";
		UP_ID_search_input->Text = "";
		label47->ForeColor = System::Drawing::Color::Red;
		label47->Text = "Note: Update fields are disabled >>";

		MessageBox::Show("Please enter a valid user ID to continue.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	
	
	}
	else {
		if (first == "") {
			MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (last == "") {
			MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (Nrole == "") {
			MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (pass == "") {
			MessageBox::Show("Input fields cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {

			if (first.length() < 3) {
				MessageBox::Show("First Name must be atleast 3 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else if (last.length() < 3) {
				MessageBox::Show("Last Name must be atleast 3 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else if (valid.convert_to_lower(Nrole) != "student" && valid.convert_to_lower(Nrole) != "librarian") {
				MessageBox::Show("Users must be either 'Student' or 'Librarian.'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else if (pass.length() < 8 || !valid.check_password(pass)) {

				MessageBox::Show("Passwords must be atleast 8 characters long with numbers and symbols.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


			}
			else {

				manage_userdata.Update_user(user, first, last, Nrole, pass);
				update_userInfo_page->Hide();
				manageuser_page->Show();
				up_fName_input->Text = "";
				up_LName_input->Text = "";
				up_role_input->Text = "";
				up_pass_input->Text = "";
				UP_ID_search_input->Text = "";
				label47->ForeColor = System::Drawing::Color::Red;
				label47->Text = "Note: Update fields are disabled >>";

				System::String^ NUID = gcnew System::String(user.c_str());

				MessageBox::Show("User details for ID: " + NUID + " updated sucessfully", " Update Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);


				files.update_file();
				files.writeToCSV();



			}

		}
	}

}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {

	update_userInfo_page->Show();
	

}

private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

	del_user_title->Show();
	del_user_input->Show();
	del_search_btn->Show();
	del_user_btn->Show();
	del_status->Show();

}
private: System::Void del_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	//del_user_input

	string user = msclr::interop::marshal_as<std::string>(del_user_input->Text);

	if (del_user_input->Text != "") {

		if (loading.sys_Users.find(user) != loading.sys_Users.end()) {
		
			del_user_btn->Enabled = true;
			del_status->ForeColor = System::Drawing::Color::Lime;

			del_status->Text = "User found. Click here to cancel the delete operation.";
		
		}
		else {
			MessageBox::Show("Please enter a valid user ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	else {
	
		MessageBox::Show("User ID field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	
	}

}
private: System::Void del_user_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string user = msclr::interop::marshal_as<std::string>(del_user_input->Text);


	if (del_user_input->Text != "") {

		if (loading.sys_Users.find(user) != loading.sys_Users.end()) {

			if (loading.sys_Users[user].currentBook.empty()) {

				manage_userdata.Remove_user(user);
				del_status->ForeColor = System::Drawing::Color::Lime;
				del_status->Text = "User Deleted. Click here to close delete panel.";
				del_user_input->Text = "";
				files.update_file();
				files.writeToCSV();
			}

			else {

				MessageBox::Show("Please collect books from user: " + del_user_input->Text + " before deleting.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			
			}

			

		}
		else {
			MessageBox::Show("Please enter a valid user ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	else {

		MessageBox::Show("User ID field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}




}
private: System::Void del_status_Click(System::Object^ sender, System::EventArgs^ e) {

	
	del_user_input->Text = "";

	del_user_title->Hide();
	del_user_input->Hide();
	del_search_btn->Hide();
	del_user_btn->Hide();
	del_status->Hide();

	del_status->ForeColor = System::Drawing::Color::Red;

	del_status->Text = "Click here to close delete panel.";
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {

	Lib_Dashboard -> Show();
	manageuser_page->Hide();


}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	Lib_Dashboard->Hide();
	ManageBookPage->Show();
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {

	search_up_input->Text = "";
	search_up_title->Hide();
	search_up_input->Hide();
	search_up_btn->Hide();
	update_confim->Hide();
	search_up_status->Hide();
	//tb_underline_sb->Hide();

	del_book_input->Text = "";
	Lib_Dashboard->Show();
	ManageBookPage->Hide();
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {

	del_book_input->Text = "";
	del_book_title->Hide();
	del_book_input->Hide();
	del_book_search_btn->Hide();
	delete_the_book_btn->Hide();
	del_book_status->Hide();
	//underline_textboxMB->Hide();

	del_book_status->ForeColor = System::Drawing::Color::Red;

	del_book_status->Text = "Click here to close delete panel.";


	search_up_input->Text = "";
	search_up_title->Hide();
	search_up_input->Hide();
	search_up_btn->Hide();
	update_confim->Hide();
	search_up_status->Hide();
	//tb_underline_sb->Hide();

	search_up_status->ForeColor = System::Drawing::Color::Red;

	search_up_status->Text = "Click here to close delete panel.";


	del_book_title->Show();
	del_book_input->Show();
	del_book_search_btn->Show();
	delete_the_book_btn->Show();
	del_book_status->Show();
	//underline_textboxMB->Show();

}
private: System::Void del_book_status_Click(System::Object^ sender, System::EventArgs^ e) {

	del_book_input->Text = "";
	del_book_title->Hide();
	del_book_input->Hide();
	del_book_search_btn->Hide();
	delete_the_book_btn->Hide();
	del_book_status->Hide();
	//underline_textboxMB->Hide();

	del_book_status->ForeColor = System::Drawing::Color::Red;

	del_book_status->Text = "Click here to close delete panel.";

}
private: System::Void del_book_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string BookID = msclr::interop::marshal_as<std::string>(del_book_input->Text);
	BookID = valid.convert_to_upper(BookID);

	if (BookID != "") {
		if (loading.libBooks.find(BookID) != loading.libBooks.end()) {
			
			delete_the_book_btn->Enabled = true;
			del_book_status->ForeColor = System::Drawing::Color::Lime;
			del_book_status->Text = "Book found. Click here to cancel the delete operation.";
		
		}
		else {
			MessageBox::Show("Please enter a valid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Book ID field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void delete_the_book_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string BookID = msclr::interop::marshal_as<std::string>(del_book_input->Text);
	BookID = valid.convert_to_upper(BookID);


	if (BookID != "") {
		if (loading.libBooks.find(BookID) != loading.libBooks.end()) {
			if (loading.libBooks[BookID].InStock == loading.libBooks[BookID].QTY) {

				manage.Delete_book(BookID);

				del_book_status->ForeColor = System::Drawing::Color::Lime;
				del_book_status->Text = "Book Deleted. Click here to close delete panel.";
				del_book_input->Text = "";
				files.update_file();
				files.writeToCSV();

			}

			else {
				MessageBox::Show("Please collect rented copies before deleting.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}

		}
		else {
			MessageBox::Show("Please enter a valid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Book ID field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

	del_book_input->Text = "";
	del_book_title->Hide();
	del_book_input->Hide();
	del_book_search_btn->Hide();
	delete_the_book_btn->Hide();
	del_book_status->Hide();
	//underline_textboxMB->Hide();

	del_book_status->ForeColor = System::Drawing::Color::Red;

	del_book_status->Text = "Click here to close delete panel.";


	search_up_input->Text = "";
	search_up_title->Hide();
	search_up_input->Hide();
	search_up_btn->Hide();
	update_confim->Hide();
	search_up_status->Hide();
	//tb_underline_sb->Hide();

	search_up_status->ForeColor = System::Drawing::Color::Red;

	search_up_status->Text = "Click here to close delete panel.";
	register_book_page->Show();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {

	BT_reg->Text = "";
	QTY_reg->Text = "";
	Year_reg->Text = "";
	auth_reg->Text = "";
	Sub_reg->Text = "";
	Pub_reg->Text = "";

	register_book_page->Hide();
}

private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {


	search_up_input->Text = "";

	search_up_status->ForeColor = System::Drawing::Color::Red;

	search_up_status->Text = "Click here to close delete panel.";


	BT_up->Text = "";
	QTY_up->Text = "";
	Year_up->Text = "";
	Auth_up->Text = "";
	Sub_up->Text = "";
	Pub_up->Text = "";

	Update_Book_page->Hide();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

	string title = msclr::interop::marshal_as<std::string>(BT_up->Text);
	string qty = msclr::interop::marshal_as<std::string>(QTY_up->Text);
	string year = msclr::interop::marshal_as<std::string>(Year_up->Text);
	string auth = msclr::interop::marshal_as<std::string>(Auth_up->Text);
	string sub = msclr::interop::marshal_as<std::string>(Sub_up->Text);
	string pub = msclr::interop::marshal_as<std::string>(Pub_up->Text);
	string BookID = msclr::interop::marshal_as<std::string>(search_up_input->Text);
	BookID = valid.convert_to_upper(BookID);

	int diff = loading.libBooks[BookID].QTY - loading.libBooks[BookID].InStock;
	

	if (title != "" && qty != "" && year != "" && auth != "" && sub != "" && pub != "" && BookID != "") {
		
		

		if (title.length() < 4) {

			MessageBox::Show("The book title must be atleast four characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (year.length() != 4 || stoi(year) > 2024) {

			MessageBox::Show("Please enter a valid year.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}
		else if (stoi(qty) <= 0) {

			MessageBox::Show("Invalid starting quantity.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (stoi(qty)<diff) {


	
			MessageBox::Show("Some books are currently rented enter atleast " + diff + "books", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}
		else {
			int year_temp = stoi(year);
			int qty_temp = stoi(qty);

			manage.Update_book(BookID, title, auth, year_temp, pub, qty_temp, sub);

			BT_up->Text = "";
			QTY_up->Text = "";
			Year_up->Text = "";
			Auth_up->Text = "";
			Sub_up->Text = "";
			Pub_up->Text = "";




			Update_Book_page->Hide();

			files.update_file();
			files.writeToCSV();

			MessageBox::Show("Book has been registered with ID: " + search_up_input->Text, "Book Regsitration Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

			search_up_input->Text = "";
			search_up_title->Hide();
			search_up_input->Hide();
			search_up_btn->Hide();
			update_confim->Hide();
			search_up_status->Hide();
			//tb_underline_sb->Hide();

			search_up_status->ForeColor = System::Drawing::Color::Red;

			search_up_status->Text = "Click here to close delete panel.";


		}
	
	
	
	
	}
	else {

		MessageBox::Show("Fields must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}










}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {

	string title = msclr::interop::marshal_as<std::string>(BT_reg->Text);
	string qty = msclr::interop::marshal_as<std::string>(QTY_reg->Text);
	string year = msclr::interop::marshal_as<std::string>(Year_reg->Text);
	string auth = msclr::interop::marshal_as<std::string>(auth_reg->Text);
	string sub = msclr::interop::marshal_as<std::string>(Sub_reg->Text);
	string pub = msclr::interop::marshal_as<std::string>(Pub_reg->Text);

	if (title != "" && qty != "" && year != "" && auth != "" && sub != "" && pub != "") {
	
		if (title.length() < 4) {
			
			MessageBox::Show("The book title must be atleast four characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					
		}
		else if(year.length() != 4 || stoi(year) > 2024){

			MessageBox::Show("Please enter a valid year.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		
		}
		else if (stoi(qty) <= 0) {

			MessageBox::Show("Invalid starting quantity.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			int year_temp = stoi(year);
			int qty_temp = stoi(qty);
			manage.Register_book(title, auth, year_temp, pub, qty_temp, sub);

			BT_reg->Text = "";
			QTY_reg->Text = "";
			Year_reg->Text = "";
			auth_reg->Text = "";
			Sub_reg->Text = "";
			Pub_reg->Text = "";

			register_book_page->Hide();

			files.update_file();
			files.writeToCSV();

			System::String^ NUID = gcnew System::String(loading.recentBK_registration.c_str());

			MessageBox::Show("Book has been registered with ID: " + NUID , "Book Regsitration Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

		
		}
	
	
	}
	else {

		MessageBox::Show("Fields must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	
	}

}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {

	search_up_input->Text = "";
	search_up_title->Show();
	search_up_input->Show();
	search_up_btn->Show();
	update_confim->Show();
	search_up_status->Show();
	//tb_underline_sb->Show();

	search_up_status->ForeColor = System::Drawing::Color::Red;

	search_up_status->Text = "Click here to close update panel.";

	del_book_input->Text = "";
	del_book_title->Hide();
	del_book_input->Hide();
	del_book_search_btn->Hide();
	delete_the_book_btn->Hide();
	del_book_status->Hide();
	//underline_textboxMB->Hide();

	del_book_status->ForeColor = System::Drawing::Color::Red;

	del_book_status->Text = "Click here to close delete panel.";


}
private: System::Void search_up_status_Click(System::Object^ sender, System::EventArgs^ e) {


	search_up_input->Text = "";
	search_up_title->Hide();
	search_up_input->Hide();
	search_up_btn->Hide();
	update_confim->Hide();
	search_up_status->Hide();
	//tb_underline_sb->Hide();

	search_up_status->ForeColor = System::Drawing::Color::Red;

	search_up_status->Text = "Click here to close update panel.";

}
private: System::Void search_up_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	string bookID = msclr::interop::marshal_as<std::string>(search_up_input->Text);

	bookID = valid.convert_to_upper(bookID);



	if (bookID != "") {
	
		if (loading.libBooks.find(bookID) != loading.libBooks.end()) {
		
			update_confim->Enabled = true;
			search_up_status->ForeColor = System::Drawing::Color::Lime;
			del_book_status->Text = "Book Found. Click here to cancel the operation.";

		
		}

		else {
		
			MessageBox::Show("Invalid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		
		}
	
	
	
	}

	else {
	
		MessageBox::Show("Book ID Field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	
	}


}
private: System::Void update_confim_Click(System::Object^ sender, System::EventArgs^ e) {
	
	search_up_title->Hide();
	search_up_input->Hide();
	search_up_btn->Hide();
	update_confim->Hide();
	search_up_status->Hide();


	string bookID = msclr::interop::marshal_as<std::string>(search_up_input->Text);

	bookID = valid.convert_to_upper(bookID);

	if (bookID != "") {

		if (loading.libBooks.find(bookID) != loading.libBooks.end()) {

			Update_Book_page->Show();


		}

		else {

			MessageBox::Show("Invalid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			update_confim->Enabled = false;



		}



	}

	else {

		MessageBox::Show("Book ID Field must not be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		update_confim->Enabled = false;



	}


}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {

	Stu_Dashboard->Show();
	borrowPage->Hide();

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {

	returnsBK_input->Text = "";
	returnspage->Hide();
	Stu_Dashboard -> Show();

}
};



}

