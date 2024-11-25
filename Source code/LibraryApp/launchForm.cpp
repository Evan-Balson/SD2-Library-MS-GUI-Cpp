#include "launchForm.h"






using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LibraryApp::launchForm form;
	Application::Run(% form);
}



