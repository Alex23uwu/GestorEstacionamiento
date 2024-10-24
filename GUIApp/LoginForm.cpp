#include "LoginForm.h"
#include "MyForm.h"


System::Void GUIApp::LoginForm::bttAcept_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ usuario = Service::Login(boxUser->Text, boxPassword->Text);
	if (usuario != nullptr) {
		MyForm::User = usuario;
		MessageBox::Show("Bienvenido");
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}

}
System::Void GUIApp::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	if (MyForm::User== nullptr)
		Application::Exit();
}
