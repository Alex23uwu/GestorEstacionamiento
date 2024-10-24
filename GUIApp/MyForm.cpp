#include "MyForm.h"

// este codigo se copio del manual de paideia
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//POOInduction is your project name
	GUIApp::MyForm form;
	Application::Run(% form);
}
void GUIApp::MyForm::EnableManagerOptions(){

	throw gcnew System::NotImplementedException();
}