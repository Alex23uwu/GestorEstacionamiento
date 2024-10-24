#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		Form^ form;
		LoginForm(Form^ refForm)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			form = refForm;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ boxUser;
	private: System::Windows::Forms::TextBox^ boxPassword;
	private: System::Windows::Forms::Button^ bttAcept;
	private: System::Windows::Forms::Button^ bttCancel;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->boxUser = (gcnew System::Windows::Forms::TextBox());
			this->boxPassword = (gcnew System::Windows::Forms::TextBox());
			this->bttAcept = (gcnew System::Windows::Forms::Button());
			this->bttCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// boxUser
			// 
			this->boxUser->Location = System::Drawing::Point(180, 26);
			this->boxUser->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boxUser->Name = L"boxUser";
			this->boxUser->Size = System::Drawing::Size(157, 22);
			this->boxUser->TabIndex = 2;
			// 
			// boxPassword
			// 
			this->boxPassword->Location = System::Drawing::Point(180, 78);
			this->boxPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boxPassword->Name = L"boxPassword";
			this->boxPassword->PasswordChar = '*';
			this->boxPassword->Size = System::Drawing::Size(160, 22);
			this->boxPassword->TabIndex = 3;
			this->boxPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::boxPassword_KeyDown);
			// 
			// bttAcept
			// 
			this->bttAcept->Location = System::Drawing::Point(72, 130);
			this->bttAcept->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttAcept->Name = L"bttAcept";
			this->bttAcept->Size = System::Drawing::Size(128, 39);
			this->bttAcept->TabIndex = 4;
			this->bttAcept->Text = L"Aceptar";
			this->bttAcept->UseVisualStyleBackColor = true;
			this->bttAcept->Click += gcnew System::EventHandler(this, &LoginForm::bttAcept_Click);
			// 
			// bttCancel
			// 
			this->bttCancel->Location = System::Drawing::Point(212, 132);
			this->bttCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttCancel->Name = L"bttCancel";
			this->bttCancel->Size = System::Drawing::Size(129, 38);
			this->bttCancel->TabIndex = 5;
			this->bttCancel->Text = L"Cancelar";
			this->bttCancel->UseVisualStyleBackColor = true;
			this->bttCancel->Click += gcnew System::EventHandler(this, &LoginForm::bttCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 183);
			this->ControlBox = false;
			this->Controls->Add(this->bttCancel);
			this->Controls->Add(this->bttAcept);
			this->Controls->Add(this->boxPassword);
			this->Controls->Add(this->boxUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"LoginForm";
			this->Text = L"Autenticacion de Usuario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoginForm::LoginForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void  bttAcept_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	
private: System::Void boxPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Enter)
		bttAcept->PerformClick();
}
};
}
