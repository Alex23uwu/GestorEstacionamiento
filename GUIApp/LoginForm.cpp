#include "LoginForm.h"
#include "MyForm.h"


System::Void GUIApp::LoginForm::bttAcept_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario^ usuario = Service::Login(boxUser->Text, boxPassword->Text);
	Cliente^ cliente = Service::ValidaCliente(boxUser->Text, boxPassword->Text);
	Veedor^ veedor = Service::ValidaVeedor(boxUser->Text, boxPassword->Text);
	PersonalLimpieza^ personalLimpieza = Service::ValidaPersonalLimpieza(boxUser->Text, boxPassword->Text);
	Administrador^ administardor = Service::ValidaAdministrador(boxUser->Text, boxPassword->Text);
	if (usuario != nullptr) {
		MyForm::User = usuario;
		MessageBox::Show("Bienvenido");
		this->Close();
	}
	else if(cliente != nullptr){
		MessageBox::Show("Bienvenido "+cliente->Nombre+" "+cliente->Apellido);
		this->Close();
		MyForm::Cliente = cliente;
	}
	else if (veedor != nullptr) {
		MessageBox::Show("Bienvenido " + veedor->Nombre + " " + veedor->Apellido);
		this->Close();
		MyForm::Veedor = veedor;
	}
	else if (personalLimpieza != nullptr) {
		MessageBox::Show("Bienvenido " + personalLimpieza->Nombre + " " + personalLimpieza->Apellido);
		this->Close();
		MyForm::PersonalLimpieza = personalLimpieza;
	}
	else if (administardor != nullptr) {
		MessageBox::Show("Bienvenido " + administardor->Nombre + " " + administardor->Apellido);
		this->Close();
		MyForm::Administrador = administardor;
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}

}
System::Void GUIApp::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	//if ((MyForm::User== nullptr)&&(MyForm::Cliente == nullptr) && (MyForm::Veedor == nullptr) && (MyForm::PersonalLimpieza == nullptr) && (MyForm::Administrador == nullptr))
	//if ((MyForm::Cliente == nullptr) && (MyForm::Veedor == nullptr) && (MyForm::PersonalLimpieza == nullptr) && (MyForm::Administrador == nullptr))
	//if(MyForm::Cliente == nullptr)
		//Application::Exit();
}
