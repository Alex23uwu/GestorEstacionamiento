#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Model;
	using namespace EstacionamientoService;

	/// <summary>
	/// Resumen de Cliente_CRUD
	/// </summary>
	public ref class Cliente_CRUD : public System::Windows::Forms::Form
	{
	public:
		Cliente_CRUD(void)
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
		~Cliente_CRUD()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





















































































	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TextBox^ txtColor;
private: System::Windows::Forms::TextBox^ txtModelo;
private: System::Windows::Forms::TextBox^ txtPlaca;
private: System::Windows::Forms::TextBox^ txtDescuento;
private: System::Windows::Forms::TextBox^ txtPersonPoints;
private: System::Windows::Forms::TextBox^ txtPassword;
private: System::Windows::Forms::TextBox^ txtUsername;
private: System::Windows::Forms::TextBox^ txtPhoneNumber;
private: System::Windows::Forms::TextBox^ txtEmail;
private: System::Windows::Forms::TextBox^ txtPersonId;
private: System::Windows::Forms::TextBox^ txtDNI;
private: System::Windows::Forms::TextBox^ txtLastName;
private: System::Windows::Forms::TextBox^ txtFirstName;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::RadioButton^ rbtnFem;
private: System::Windows::Forms::RadioButton^ rbtnMasc;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ btnDeletePerson;
private: System::Windows::Forms::Button^ btnUpdatePerson;
private: System::Windows::Forms::Button^ btnAddPerson;
private: System::Windows::Forms::DataGridView^ dgvPersons;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ personId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPlaca;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TabControl^ tabCustomers;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvPersons = (gcnew System::Windows::Forms::DataGridView());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPlaca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->personId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddPerson = (gcnew System::Windows::Forms::Button());
			this->btnUpdatePerson = (gcnew System::Windows::Forms::Button());
			this->btnDeletePerson = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonId = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonPoints = (gcnew System::Windows::Forms::TextBox());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->txtDescuento = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->tabCustomers = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabCustomers->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(877, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtColor);
			this->tabPage1->Controls->Add(this->txtModelo);
			this->tabPage1->Controls->Add(this->txtPlaca);
			this->tabPage1->Controls->Add(this->txtDescuento);
			this->tabPage1->Controls->Add(this->txtPersonPoints);
			this->tabPage1->Controls->Add(this->txtPassword);
			this->tabPage1->Controls->Add(this->txtUsername);
			this->tabPage1->Controls->Add(this->txtPhoneNumber);
			this->tabPage1->Controls->Add(this->txtEmail);
			this->tabPage1->Controls->Add(this->txtPersonId);
			this->tabPage1->Controls->Add(this->txtDNI);
			this->tabPage1->Controls->Add(this->txtLastName);
			this->tabPage1->Controls->Add(this->txtFirstName);
			this->tabPage1->Controls->Add(this->label114);
			this->tabPage1->Controls->Add(this->label113);
			this->tabPage1->Controls->Add(this->label112);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label111);
			this->tabPage1->Controls->Add(this->label115);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->btnDeletePerson);
			this->tabPage1->Controls->Add(this->btnUpdatePerson);
			this->tabPage1->Controls->Add(this->btnAddPerson);
			this->tabPage1->Controls->Add(this->dgvPersons);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(848, 647);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clientes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 29);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(283, 29);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 93);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombres (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(425, 96);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Apellidos (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(120, 128);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(464, 169);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Estatus";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(120, 162);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Celular";
			// 
			// dgvPersons
			// 
			this->dgvPersons->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersons->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->personId,
					this->firstName, this->lastName, this->dgvPlaca, this->phoneNumber
			});
			this->dgvPersons->Location = System::Drawing::Point(103, 427);
			this->dgvPersons->Margin = System::Windows::Forms::Padding(4);
			this->dgvPersons->Name = L"dgvPersons";
			this->dgvPersons->RowHeadersWidth = 51;
			this->dgvPersons->Size = System::Drawing::Size(656, 193);
			this->dgvPersons->TabIndex = 16;
			// 
			// phoneNumber
			// 
			this->phoneNumber->HeaderText = L"Celular";
			this->phoneNumber->MinimumWidth = 6;
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->ReadOnly = true;
			this->phoneNumber->Width = 70;
			// 
			// dgvPlaca
			// 
			this->dgvPlaca->HeaderText = L"DNI";
			this->dgvPlaca->MinimumWidth = 6;
			this->dgvPlaca->Name = L"dgvPlaca";
			this->dgvPlaca->ReadOnly = true;
			this->dgvPlaca->Width = 120;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellidos";
			this->lastName->MinimumWidth = 6;
			this->lastName->Name = L"lastName";
			this->lastName->ReadOnly = true;
			this->lastName->Width = 130;
			// 
			// firstName
			// 
			this->firstName->HeaderText = L"Nombres";
			this->firstName->MinimumWidth = 6;
			this->firstName->Name = L"firstName";
			this->firstName->ReadOnly = true;
			this->firstName->Width = 125;
			// 
			// personId
			// 
			this->personId->HeaderText = L"Id";
			this->personId->MinimumWidth = 6;
			this->personId->Name = L"personId";
			this->personId->ReadOnly = true;
			this->personId->Width = 20;
			// 
			// btnAddPerson
			// 
			this->btnAddPerson->Location = System::Drawing::Point(151, 362);
			this->btnAddPerson->Margin = System::Windows::Forms::Padding(4);
			this->btnAddPerson->Name = L"btnAddPerson";
			this->btnAddPerson->Size = System::Drawing::Size(169, 28);
			this->btnAddPerson->TabIndex = 17;
			this->btnAddPerson->Text = L"Agregar";
			this->btnAddPerson->UseVisualStyleBackColor = true;
			this->btnAddPerson->Click += gcnew System::EventHandler(this, &Cliente_CRUD::btnAddPerson_Click);
			// 
			// btnUpdatePerson
			// 
			this->btnUpdatePerson->Location = System::Drawing::Point(357, 362);
			this->btnUpdatePerson->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdatePerson->Name = L"btnUpdatePerson";
			this->btnUpdatePerson->Size = System::Drawing::Size(161, 28);
			this->btnUpdatePerson->TabIndex = 18;
			this->btnUpdatePerson->Text = L"Actualizar";
			this->btnUpdatePerson->UseVisualStyleBackColor = true;
			// 
			// btnDeletePerson
			// 
			this->btnDeletePerson->Location = System::Drawing::Point(561, 362);
			this->btnDeletePerson->Margin = System::Windows::Forms::Padding(4);
			this->btnDeletePerson->Name = L"btnDeletePerson";
			this->btnDeletePerson->Size = System::Drawing::Size(160, 28);
			this->btnDeletePerson->TabIndex = 19;
			this->btnDeletePerson->Text = L"Eliminar";
			this->btnDeletePerson->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(120, 60);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 16);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Username (*)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(425, 60);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 16);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Password (*)";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(531, 244);
			this->label115->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(48, 16);
			this->label115->TabIndex = 26;
			this->label115->Text = L"Puntos";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(225, 93);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(191, 22);
			this->txtFirstName->TabIndex = 2;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(523, 93);
			this->txtLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(205, 22);
			this->txtLastName->TabIndex = 3;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(343, 25);
			this->txtDNI->Margin = System::Windows::Forms::Padding(4);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(236, 22);
			this->txtDNI->TabIndex = 4;
			// 
			// txtPersonId
			// 
			this->txtPersonId->Location = System::Drawing::Point(225, 25);
			this->txtPersonId->Margin = System::Windows::Forms::Padding(4);
			this->txtPersonId->Name = L"txtPersonId";
			this->txtPersonId->Size = System::Drawing::Size(48, 22);
			this->txtPersonId->TabIndex = 5;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(225, 125);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(357, 22);
			this->txtEmail->TabIndex = 4;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(225, 159);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(191, 22);
			this->txtPhoneNumber->TabIndex = 6;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(225, 60);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(191, 22);
			this->txtUsername->TabIndex = 22;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(523, 60);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(204, 22);
			this->txtPassword->TabIndex = 23;
			// 
			// txtPersonPoints
			// 
			this->txtPersonPoints->Location = System::Drawing::Point(595, 240);
			this->txtPersonPoints->Margin = System::Windows::Forms::Padding(4);
			this->txtPersonPoints->Name = L"txtPersonPoints";
			this->txtPersonPoints->Size = System::Drawing::Size(132, 22);
			this->txtPersonPoints->TabIndex = 27;
			this->txtPersonPoints->Text = L"0";
			this->txtPersonPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(120, 197);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(95, 16);
			this->label111->TabIndex = 28;
			this->label111->Text = L"Descuento (%)";
			// 
			// txtDescuento
			// 
			this->txtDescuento->Location = System::Drawing::Point(225, 197);
			this->txtDescuento->Name = L"txtDescuento";
			this->txtDescuento->Size = System::Drawing::Size(191, 22);
			this->txtDescuento->TabIndex = 29;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnFem);
			this->groupBox1->Controls->Add(this->rbtnMasc);
			this->groupBox1->Location = System::Drawing::Point(523, 155);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(161, 38);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Checked = true;
			this->rbtnMasc->Location = System::Drawing::Point(8, 10);
			this->rbtnMasc->Margin = System::Windows::Forms::Padding(4);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(65, 20);
			this->rbtnMasc->TabIndex = 0;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Activo";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(89, 10);
			this->rbtnFem->Margin = System::Windows::Forms::Padding(4);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(74, 20);
			this->rbtnFem->TabIndex = 1;
			this->rbtnFem->Text = L"Inactivo";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(123, 229);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(93, 16);
			this->label112->TabIndex = 32;
			this->label112->Text = L"Placa del auto";
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(225, 229);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(100, 22);
			this->txtPlaca->TabIndex = 33;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(123, 268);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(53, 16);
			this->label113->TabIndex = 34;
			this->label113->Text = L"Modelo";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(123, 301);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(39, 16);
			this->label114->TabIndex = 35;
			this->label114->Text = L"Color";
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(225, 268);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(100, 22);
			this->txtModelo->TabIndex = 36;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(225, 301);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(100, 22);
			this->txtColor->TabIndex = 37;
			// 
			// tabCustomers
			// 
			this->tabCustomers->Controls->Add(this->tabPage1);
			this->tabCustomers->Location = System::Drawing::Point(0, 32);
			this->tabCustomers->Margin = System::Windows::Forms::Padding(4);
			this->tabCustomers->Name = L"tabCustomers";
			this->tabCustomers->SelectedIndex = 0;
			this->tabCustomers->Size = System::Drawing::Size(856, 676);
			this->tabCustomers->TabIndex = 8;
			// 
			// Cliente_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 735);
			this->Controls->Add(this->tabCustomers);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Cliente_CRUD";
			this->Text = L"Cliente_CRUD";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabCustomers->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void ShowCliente() {
			List <Cliente^>^ listaCliente = Service::QueryAllClientes();
			if (listaCliente != nullptr) {
				dgvPersons->Rows->Clear();
				for (int i = 0; i < listaCliente->Count; i++) {
					dgvPersons->Rows->Add(gcnew array<String^>{
						Convert::ToString(listaCliente[i]->Id),
							listaCliente[i]->Nombre,
							listaCliente[i]->Apellido,
							""+listaCliente[i]->DNI,
							Convert::ToString(listaCliente[i]->Celular),
					});
				}
			}
		}
	private: System::Void btnAddPerson_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtPersonId->Text->Trim() == "" || txtFirstName->Text->Trim() == "" || txtLastName->Text->Trim() == "" || txtDNI->Text->Trim() == ""
			|| txtUsername->Text->Trim() == "" || txtPassword->Text->Trim() == "" || txtPlaca->Text->Trim() == "" || txtModelo->Text->Trim() == "" ||
			txtColor->Text->Trim() == "") {
			MessageBox::Show("Los parámetros que contengan el símbolo * son obligatorios");
			return;
		}
		try {
			Cliente^ clientes = gcnew Cliente();
			Vehiculo^ vehiculos = gcnew Vehiculo();
			clientes->Id = Int32::Parse(txtPersonId->Text);
			clientes->Nombre = txtFirstName->Text;
			clientes->Apellido = txtLastName->Text;
			clientes->NombreUsuario = txtUsername->Text;
			clientes->Clave = txtPassword->Text;
			clientes->DNI = Int32::Parse(txtDNI->Text);
			clientes->Celular = Int32::Parse(txtPhoneNumber->Text);
			clientes->Estado = rbtnMasc->Checked ? "Activo" : "Inactivo";
			clientes->Email = txtEmail->Text;
			vehiculos->Placa = txtPlaca->Text;
			vehiculos->Modelo = txtModelo->Text;
			vehiculos->Color = txtColor->Text;
			MessageBox::Show("Se agrego al cliente " + clientes->Nombre +" " + clientes->Apellido + " con ID " + clientes->Id);

			Service::AddCliente(clientes);
			Service::AddVehiculo(vehiculos);
			ShowCliente();
		}
		catch(Exception^ ex){
			MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
			return;
		}
		
	}
};
}
