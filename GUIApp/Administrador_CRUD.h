#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Administrador_CRUD
	/// </summary>
	public ref class Administrador_CRUD : public System::Windows::Forms::Form
	{
	public:
		Administrador_CRUD(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Administrador_CRUD()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPersonId;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtFirstName;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnDeletePerson;
	private: System::Windows::Forms::Button^ btnUpdatePerson;
	private: System::Windows::Forms::Button^ btnAddPerson;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label111;
	private: System::Windows::Forms::TextBox^ txtDescuento;


	private: System::Windows::Forms::Label^ label113;
	private: System::Windows::Forms::Label^ label114;
	private: System::Windows::Forms::TextBox^ txtModelo;
	private: System::Windows::Forms::TextBox^ txtColor;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvNombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCelular;




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
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonId = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnDeletePerson = (gcnew System::Windows::Forms::Button());
			this->btnUpdatePerson = (gcnew System::Windows::Forms::Button());
			this->btnAddPerson = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->txtDescuento = (gcnew System::Windows::Forms::TextBox());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvNombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCelular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(476, 83);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(154, 20);
			this->txtPassword->TabIndex = 57;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(163, 81);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(144, 20);
			this->txtUsername->TabIndex = 56;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(163, 164);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(144, 20);
			this->txtPhoneNumber->TabIndex = 46;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(163, 137);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(269, 20);
			this->txtEmail->TabIndex = 42;
			// 
			// txtPersonId
			// 
			this->txtPersonId->Location = System::Drawing::Point(163, 52);
			this->txtPersonId->Name = L"txtPersonId";
			this->txtPersonId->Size = System::Drawing::Size(37, 20);
			this->txtPersonId->TabIndex = 44;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(476, 57);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(155, 20);
			this->txtDNI->TabIndex = 43;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(475, 109);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 20);
			this->txtLastName->TabIndex = 41;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(163, 108);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(144, 20);
			this->txtFirstName->TabIndex = 40;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(403, 88);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 13);
			this->label18->TabIndex = 55;
			this->label18->Text = L"Password (*)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(84, 81);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 13);
			this->label17->TabIndex = 54;
			this->label17->Text = L"Username (*)";
			// 
			// btnDeletePerson
			// 
			this->btnDeletePerson->ForeColor = System::Drawing::Color::Black;
			this->btnDeletePerson->Location = System::Drawing::Point(510, 284);
			this->btnDeletePerson->Name = L"btnDeletePerson";
			this->btnDeletePerson->Size = System::Drawing::Size(120, 23);
			this->btnDeletePerson->TabIndex = 53;
			this->btnDeletePerson->Text = L"Eliminar";
			this->btnDeletePerson->UseVisualStyleBackColor = true;
			// 
			// btnUpdatePerson
			// 
			this->btnUpdatePerson->ForeColor = System::Drawing::Color::Black;
			this->btnUpdatePerson->Location = System::Drawing::Point(321, 284);
			this->btnUpdatePerson->Name = L"btnUpdatePerson";
			this->btnUpdatePerson->Size = System::Drawing::Size(121, 23);
			this->btnUpdatePerson->TabIndex = 52;
			this->btnUpdatePerson->Text = L"Actualizar";
			this->btnUpdatePerson->UseVisualStyleBackColor = true;
			// 
			// btnAddPerson
			// 
			this->btnAddPerson->ForeColor = System::Drawing::Color::Black;
			this->btnAddPerson->Location = System::Drawing::Point(87, 284);
			this->btnAddPerson->Name = L"btnAddPerson";
			this->btnAddPerson->Size = System::Drawing::Size(127, 23);
			this->btnAddPerson->TabIndex = 51;
			this->btnAddPerson->Text = L"Agregar";
			this->btnAddPerson->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(84, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(84, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(403, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Apellidos (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(84, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Nombres (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(403, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 39;
			this->label2->Text = L"DNI (*)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(84, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Id (*)";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->ForeColor = System::Drawing::Color::Black;
			this->label111->Location = System::Drawing::Point(84, 195);
			this->label111->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(67, 13);
			this->label111->TabIndex = 60;
			this->label111->Text = L"Especialidad";
			// 
			// txtDescuento
			// 
			this->txtDescuento->Location = System::Drawing::Point(163, 195);
			this->txtDescuento->Margin = System::Windows::Forms::Padding(2);
			this->txtDescuento->Name = L"txtDescuento";
			this->txtDescuento->Size = System::Drawing::Size(144, 20);
			this->txtDescuento->TabIndex = 61;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->ForeColor = System::Drawing::Color::Black;
			this->label113->Location = System::Drawing::Point(403, 198);
			this->label113->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(39, 13);
			this->label113->TabIndex = 65;
			this->label113->Text = L"Salario";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->ForeColor = System::Drawing::Color::Black;
			this->label114->Location = System::Drawing::Point(84, 228);
			this->label114->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(27, 13);
			this->label114->TabIndex = 66;
			this->label114->Text = L"Piso";
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(477, 195);
			this->txtModelo->Margin = System::Windows::Forms::Padding(2);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(154, 20);
			this->txtModelo->TabIndex = 67;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(163, 225);
			this->txtColor->Margin = System::Windows::Forms::Padding(2);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(37, 20);
			this->txtColor->TabIndex = 68;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvId,
					this->dgvNombres, this->colApellidos, this->colDNI, this->colCelular
			});
			this->dataGridView1->Location = System::Drawing::Point(87, 350);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 156);
			this->dataGridView1->TabIndex = 69;
			// 
			// dgvId
			// 
			this->dgvId->HeaderText = L"Id";
			this->dgvId->Name = L"dgvId";
			this->dgvId->Width = 50;
			// 
			// dgvNombres
			// 
			this->dgvNombres->HeaderText = L"Nombres";
			this->dgvNombres->Name = L"dgvNombres";
			this->dgvNombres->Width = 150;
			// 
			// colApellidos
			// 
			this->colApellidos->HeaderText = L"Apellidos";
			this->colApellidos->Name = L"colApellidos";
			this->colApellidos->Width = 150;
			// 
			// colDNI
			// 
			this->colDNI->HeaderText = L"DNI";
			this->colDNI->Name = L"colDNI";
			this->colDNI->Width = 50;
			// 
			// colCelular
			// 
			this->colCelular->HeaderText = L"Celular";
			this->colCelular->Name = L"colCelular";
			// 
			// Administrador_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(743, 608);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->label114);
			this->Controls->Add(this->label113);
			this->Controls->Add(this->txtDescuento);
			this->Controls->Add(this->label111);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtPersonId);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->btnDeletePerson);
			this->Controls->Add(this->btnUpdatePerson);
			this->Controls->Add(this->btnAddPerson);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"Administrador_CRUD";
			this->Text = L"Administrador_CRUD";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
