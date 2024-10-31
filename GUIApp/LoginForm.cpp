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
		form->Text = "Sistema de estacionamiento - Cliente: " + MyForm::Cliente->Nombre + " " + MyForm::Cliente->Apellido;
		((MyForm^)form)->EnableClienteOptions();

	}
	else if (veedor != nullptr) {
		MessageBox::Show("Bienvenido " + veedor->Nombre + " " + veedor->Apellido);
		this->Close();
		MyForm::Veedor = veedor;
		form->Text = "Sistema de estacionamiento - Veedor: " + MyForm::Veedor->Nombre + " " + MyForm::Veedor->Apellido;
		((MyForm^)form)->EnableVeedorOptions();
	}
	else if (personalLimpieza != nullptr) {
		MessageBox::Show("Bienvenido " + personalLimpieza->Nombre + " " + personalLimpieza->Apellido);
		this->Close();
		MyForm::PersonalLimpieza = personalLimpieza;
		form->Text = "Sistema de estacionamiento - Personal de Limpieza: " + MyForm::PersonalLimpieza->Nombre + " " + MyForm::PersonalLimpieza->Apellido;
		((MyForm^)form)->EnablePersonalLimpiezaOptions();
	}
	else if (administardor != nullptr) {
		MessageBox::Show("Bienvenido " + administardor->Nombre + " " + administardor->Apellido);
		this->Close();
		MyForm::Administrador = administardor;
		form->Text = "Sistema de estacionamiento - Administardor: " + MyForm::Administrador->Nombre + " " + MyForm::Administrador->Apellido;
		((MyForm^)form)->EnableAdministradorOptions();
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
