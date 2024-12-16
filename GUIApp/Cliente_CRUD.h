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
		static Model::Cliente^ userClientes;
	private: System::Windows::Forms::TabPage^ tabPage1;
	public:
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;



















	public:




		   static Model::Vehiculo^ userVehiculos;
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
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:





















































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cliente_CRUD::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->txtDescuento = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonPoints = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonId = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnDeletePerson = (gcnew System::Windows::Forms::Button());
			this->btnUpdatePerson = (gcnew System::Windows::Forms::Button());
			this->btnAddPerson = (gcnew System::Windows::Forms::Button());
			this->dgvPersons = (gcnew System::Windows::Forms::DataGridView());
			this->personId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPlaca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabCustomers = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->BeginInit();
			this->tabCustomers->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage1->Size = System::Drawing::Size(654, 522);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clientes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(169, 245);
			this->txtColor->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(76, 20);
			this->txtColor->TabIndex = 37;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(169, 218);
			this->txtModelo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(76, 20);
			this->txtModelo->TabIndex = 36;
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(169, 186);
			this->txtPlaca->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(76, 20);
			this->txtPlaca->TabIndex = 33;
			// 
			// txtDescuento
			// 
			this->txtDescuento->Location = System::Drawing::Point(169, 160);
			this->txtDescuento->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDescuento->Name = L"txtDescuento";
			this->txtDescuento->Size = System::Drawing::Size(144, 20);
			this->txtDescuento->TabIndex = 29;
			// 
			// txtPersonPoints
			// 
			this->txtPersonPoints->Location = System::Drawing::Point(446, 195);
			this->txtPersonPoints->Name = L"txtPersonPoints";
			this->txtPersonPoints->Size = System::Drawing::Size(100, 20);
			this->txtPersonPoints->TabIndex = 27;
			this->txtPersonPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(392, 49);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(154, 20);
			this->txtPassword->TabIndex = 23;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(169, 49);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(144, 20);
			this->txtUsername->TabIndex = 22;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(169, 129);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(144, 20);
			this->txtPhoneNumber->TabIndex = 6;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(169, 102);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(269, 20);
			this->txtEmail->TabIndex = 4;
			// 
			// txtPersonId
			// 
			this->txtPersonId->Enabled = false;
			this->txtPersonId->Location = System::Drawing::Point(169, 20);
			this->txtPersonId->Name = L"txtPersonId";
			this->txtPersonId->Size = System::Drawing::Size(37, 20);
			this->txtPersonId->TabIndex = 5;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(257, 20);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(178, 20);
			this->txtDNI->TabIndex = 4;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(392, 76);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 20);
			this->txtLastName->TabIndex = 3;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(169, 76);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(144, 20);
			this->txtFirstName->TabIndex = 2;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(92, 245);
			this->label114->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(31, 13);
			this->label114->TabIndex = 35;
			this->label114->Text = L"Color";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(92, 218);
			this->label113->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(42, 13);
			this->label113->TabIndex = 34;
			this->label113->Text = L"Modelo";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(92, 186);
			this->label112->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(75, 13);
			this->label112->TabIndex = 32;
			this->label112->Text = L"Placa del auto";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnFem);
			this->groupBox1->Controls->Add(this->rbtnMasc);
			this->groupBox1->Location = System::Drawing::Point(392, 126);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(148, 31);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Cliente_CRUD::groupBox1_Enter);
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(67, 8);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(63, 17);
			this->rbtnFem->TabIndex = 1;
			this->rbtnFem->Text = L"Inactivo";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Checked = true;
			this->rbtnMasc->Location = System::Drawing::Point(6, 8);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(55, 17);
			this->rbtnMasc->TabIndex = 0;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Activo";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(90, 160);
			this->label111->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(76, 13);
			this->label111->TabIndex = 28;
			this->label111->Text = L"Descuento (%)";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(398, 198);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(40, 13);
			this->label115->TabIndex = 26;
			this->label115->Text = L"Puntos";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(319, 49);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Password (*)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(90, 49);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Username (*)";
			// 
			// btnDeletePerson
			// 
			this->btnDeletePerson->Location = System::Drawing::Point(421, 294);
			this->btnDeletePerson->Name = L"btnDeletePerson";
			this->btnDeletePerson->Size = System::Drawing::Size(120, 23);
			this->btnDeletePerson->TabIndex = 19;
			this->btnDeletePerson->Text = L"Eliminar";
			this->btnDeletePerson->UseVisualStyleBackColor = true;
			this->btnDeletePerson->Click += gcnew System::EventHandler(this, &Cliente_CRUD::btnDeletePerson_Click);
			// 
			// btnUpdatePerson
			// 
			this->btnUpdatePerson->Location = System::Drawing::Point(268, 294);
			this->btnUpdatePerson->Name = L"btnUpdatePerson";
			this->btnUpdatePerson->Size = System::Drawing::Size(121, 23);
			this->btnUpdatePerson->TabIndex = 18;
			this->btnUpdatePerson->Text = L"Actualizar";
			this->btnUpdatePerson->UseVisualStyleBackColor = true;
			this->btnUpdatePerson->Click += gcnew System::EventHandler(this, &Cliente_CRUD::btnUpdatePerson_Click);
			// 
			// btnAddPerson
			// 
			this->btnAddPerson->Location = System::Drawing::Point(113, 294);
			this->btnAddPerson->Name = L"btnAddPerson";
			this->btnAddPerson->Size = System::Drawing::Size(127, 23);
			this->btnAddPerson->TabIndex = 17;
			this->btnAddPerson->Text = L"Agregar";
			this->btnAddPerson->UseVisualStyleBackColor = true;
			this->btnAddPerson->Click += gcnew System::EventHandler(this, &Cliente_CRUD::btnAddPerson_Click);
			// 
			// dgvPersons
			// 
			this->dgvPersons->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersons->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->personId,
					this->firstName, this->lastName, this->dgvPlaca, this->phoneNumber
			});
			this->dgvPersons->Location = System::Drawing::Point(53, 343);
			this->dgvPersons->Name = L"dgvPersons";
			this->dgvPersons->RowHeadersWidth = 51;
			this->dgvPersons->Size = System::Drawing::Size(562, 157);
			this->dgvPersons->TabIndex = 16;
			this->dgvPersons->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Cliente_CRUD::dgvPersons_CellContentClick);
			// 
			// personId
			// 
			this->personId->HeaderText = L"Id";
			this->personId->MinimumWidth = 6;
			this->personId->Name = L"personId";
			this->personId->ReadOnly = true;
			this->personId->Width = 20;
			// 
			// firstName
			// 
			this->firstName->HeaderText = L"Nombres";
			this->firstName->MinimumWidth = 6;
			this->firstName->Name = L"firstName";
			this->firstName->ReadOnly = true;
			this->firstName->Width = 125;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellidos";
			this->lastName->MinimumWidth = 6;
			this->lastName->Name = L"lastName";
			this->lastName->ReadOnly = true;
			this->lastName->Width = 130;
			// 
			// dgvPlaca
			// 
			this->dgvPlaca->HeaderText = L"Placa";
			this->dgvPlaca->MinimumWidth = 6;
			this->dgvPlaca->Name = L"dgvPlaca";
			this->dgvPlaca->ReadOnly = true;
			this->dgvPlaca->Width = 120;
			// 
			// phoneNumber
			// 
			this->phoneNumber->HeaderText = L"Celular";
			this->phoneNumber->MinimumWidth = 6;
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->ReadOnly = true;
			this->phoneNumber->Width = 70;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(90, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Celular";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(348, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Estatus";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(90, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(319, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Apellidos (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombres (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI (*)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// tabCustomers
			// 
			this->tabCustomers->Controls->Add(this->tabPage1);
			this->tabCustomers->Location = System::Drawing::Point(2, 26);
			this->tabCustomers->Name = L"tabCustomers";
			this->tabCustomers->SelectedIndex = 0;
			this->tabCustomers->Size = System::Drawing::Size(662, 548);
			this->tabCustomers->TabIndex = 8;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(691, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"Archivo";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cliente_CRUD::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cliente_CRUD::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cliente_CRUD::salirToolStripMenuItem_Click);
			// 
			// Cliente_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 597);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabCustomers);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Cliente_CRUD";
			this->Text = L"Cliente_CRUD";
			this->Load += gcnew System::EventHandler(this, &Cliente_CRUD::Cliente_CRUD_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->EndInit();
			this->tabCustomers->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
							listaCliente[i]->MiVehiculo->Placa,
							Convert::ToString(listaCliente[i]->Celular),
					});
				}
			}
		}
		void ClearControls() {
			txtPersonId->Clear();
			txtFirstName->Clear();
			txtLastName->Clear();
			txtUsername->Clear();
			txtPassword->Clear();
			txtDNI->Clear();
			txtPhoneNumber->Clear();
			txtEmail->Clear();
			txtDescuento->Clear();
			txtPlaca->Clear();
			txtModelo->Clear();
			txtColor->Clear();
			txtPersonPoints->Clear();
		}
		void EnableControls() {
			txtFirstName->ReadOnly = false;
			txtLastName->ReadOnly = false;
			txtUsername->ReadOnly = false;
			txtPassword->ReadOnly = false;
			txtDNI->ReadOnly = false;
			txtPhoneNumber->ReadOnly = false;
			txtEmail->ReadOnly = false;
			txtDescuento->ReadOnly = false;
			txtPersonPoints->ReadOnly = false;
			txtPlaca->ReadOnly = false;
			txtModelo->ReadOnly = false;
			txtColor->ReadOnly = false;
		}
		void DisableControls() {
			txtFirstName->ReadOnly = true;
			txtLastName->ReadOnly = true;
			txtUsername->ReadOnly = true;
			txtPassword->ReadOnly = true;
			txtDNI->ReadOnly = true;
			txtPhoneNumber->ReadOnly = true;
			txtEmail->ReadOnly = true;
			txtDescuento->ReadOnly = true;
			txtPersonPoints->ReadOnly = true;
			txtPlaca->ReadOnly = true;
			txtModelo->ReadOnly = true;
			txtColor->ReadOnly = true;
		}
	private: System::Void btnAddPerson_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtFirstName->Text->Trim() == "" || txtLastName->Text->Trim() == "" || txtDNI->Text->Trim() == ""
			|| txtUsername->Text->Trim() == "" || txtPassword->Text->Trim() == "" || txtPlaca->Text->Trim() == "" || txtModelo->Text->Trim() == "" ||
			txtColor->Text->Trim() == "" || txtPhoneNumber->Text->Trim() == "" || txtEmail->Text->Trim() == "" || txtDescuento->Text->Trim() == "" || 
			txtPersonPoints->Text->Trim() == "") {
			MessageBox::Show("Todos los parámetros son obligatorios");
			return;
		}
		try {
			Cliente^ clientes = gcnew Cliente();
			Vehiculo^ vehiculos = gcnew Vehiculo();
			Vehiculo^ vehiculoexistente = EstacionamientoService::Service::QueryVehiculoByPlaca(txtPlaca->Text);
			//clientes->Id = Int32::Parse(txtPersonId->Text);
			clientes->Id = Service::GenerateClienteID();
			clientes->Nombre = txtFirstName->Text;
			clientes->Apellido = txtLastName->Text;
			clientes->NombreUsuario = txtUsername->Text;
			clientes->Clave = txtPassword->Text;
			clientes->DNI = Int32::Parse(txtDNI->Text);
			clientes->Celular = Int32::Parse(txtPhoneNumber->Text);
			clientes->Estado = rbtnMasc->Checked ? "A" : "I";
			clientes->Email = txtEmail->Text;
			clientes->Descuento = Int32::Parse(txtDescuento->Text);
			clientes->PuntosCliente = Int32::Parse(txtPersonPoints->Text);

			vehiculos->Id = Service::QueryAllVehiculo()->Count + 1;
			vehiculos->Placa = txtPlaca->Text;
			vehiculos->Modelo = txtModelo->Text;
			vehiculos->Color = txtColor->Text;
			clientes->MiVehiculo = vehiculos;
			MessageBox::Show("Se agrego al cliente " + clientes->Nombre +" " + clientes->Apellido + " con placa " + vehiculos->Placa);

			Service::AddCliente(clientes);
			if (vehiculoexistente == nullptr) {
				Service::AddVehiculo(vehiculos);
			}
			else {
				vehiculos->Id = vehiculoexistente->Id;
				Service::UpdateVehiculo(vehiculos);
			}
			ShowCliente();
			ClearControls();
			DisableControls();
			btnAddPerson->Enabled = false;
		}
		catch(Exception^ ex){
			MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
			return;
		}
		
	}
private: System::Void dgvPersons_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvPersons->Rows[dgvPersons->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		int clienteID = Convert::ToInt32(dgvPersons->Rows[dgvPersons->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Cliente^ clientes = Service::QueryClienteById(clienteID);
		txtPersonId->Text = "" + clientes->Id;
		txtFirstName->Text = clientes->Nombre;
		txtLastName->Text= clientes->Apellido;
		txtUsername->Text= clientes->NombreUsuario;
		txtPassword->Text= clientes->Clave;
		txtDNI->Text= "" + clientes->DNI;
		txtPhoneNumber->Text = "" + clientes->Celular;
		if (clientes->Estado = "Activo") {
			rbtnMasc->Checked;
		}
		if (clientes->Estado = "Inactivo") {
			rbtnFem->Checked;
		}
		txtEmail->Text = clientes->Email;
		txtDescuento->Text = ""+clientes->Descuento;
		txtPersonPoints->Text = "" + clientes->PuntosCliente;
		txtPlaca->Text= clientes->MiVehiculo->Placa;
		txtModelo->Text = clientes->MiVehiculo->Modelo;
		txtColor->Text = clientes->MiVehiculo->Color;
	}
	//DisableControls();

}
private: System::Void Cliente_CRUD_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowCliente();
	//txtPersonId->Text ="" + Service::QueryAllClientes()->Count + 1;
	btnAddPerson->Enabled = false;
	btnUpdatePerson->Enabled = false;
	btnDeletePerson->Enabled = false;
	DisableControls();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAddPerson->Enabled = true;
	btnUpdatePerson->Enabled = false;
	btnDeletePerson->Enabled = false;
	EnableControls();
}
private: System::Void btnUpdatePerson_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Id = txtPersonId->Text->Trim();
	//Cliente^ clientes = gcnew Cliente();
	//Vehiculo^ vehiculos = gcnew Vehiculo();
	//Cliente^ clientes = Service::QueryClienteById(Convert::ToInt32(Id));
	if (Id->Equals("")) {
		MessageBox::Show("Debe seleccionar un cliente");
		return;
	}
	if (txtFirstName->Text->Trim() == "" || txtLastName->Text->Trim() == "" || txtDNI->Text->Trim() == ""
		|| txtUsername->Text->Trim() == "" || txtPassword->Text->Trim() == "" || txtPlaca->Text->Trim() == "" || txtModelo->Text->Trim() == "" ||
		txtColor->Text->Trim() == "" || txtPhoneNumber->Text->Trim() == "" || txtEmail->Text->Trim() == "" || txtDescuento->Text->Trim() == "" ||
		txtPersonPoints->Text->Trim() == "") {
		MessageBox::Show("Todos los parámetros son obligatorios");
		return;
	}
	try{
		Vehiculo^ vehiculos = gcnew Vehiculo();
		Cliente^ clientes = Service::QueryClienteById(Convert::ToInt32(Id));
		//clientes->Id = Int32::Parse(txtPersonId->Text);
		//clientes->Id = Service::QueryAllClientes()->Count + 1;
		clientes->Nombre = txtFirstName->Text;
		clientes->Apellido = txtLastName->Text;
		clientes->NombreUsuario = txtUsername->Text;
		clientes->Clave = txtPassword->Text;
		clientes->DNI = Int32::Parse(txtDNI->Text);
		clientes->Celular = Int32::Parse(txtPhoneNumber->Text);
		clientes->Estado = rbtnMasc->Checked ? "Activo" : "Inactivo";
		if (clientes->Estado = "Activo") {
			rbtnMasc->Checked;
		}
		if (clientes->Estado = "Inactivo") {
			rbtnFem->Checked;
		}
		clientes->Email = txtEmail->Text;
		clientes->Descuento = Int32::Parse(txtDescuento->Text);
		clientes->PuntosCliente= Int32::Parse(txtPersonPoints->Text);

		vehiculos->Placa = txtPlaca->Text;
		vehiculos->Modelo = txtModelo->Text;
		vehiculos->Color = txtColor->Text;
		clientes->MiVehiculo = vehiculos;
		Service::UpdateCliente(clientes);
		Service::UpdateVehiculo(vehiculos);
		ShowCliente();
		ClearControls();
		DisableControls();
		btnUpdatePerson->Enabled = false;
		btnDeletePerson->Enabled = false;
		MessageBox::Show("Se ha modificado el cliente " + clientes->Id + " - " + clientes->Nombre);
	}
	catch(Exception^ex){
		MessageBox::Show("No se ha podido modificar el cliente por el siguiente motivo:\n" +
			ex->Message);
	}

}
private: System::Void btnDeletePerson_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Id = txtPersonId->Text->Trim();
	Cliente^ clientes = Service::QueryClienteById(Convert::ToInt32(Id));
	if (Id->Equals("")) {
		MessageBox::Show("Debe seleccionar un cliente.");
		return;
	}
	
	try {
		Service::DeleteCliente(Convert::ToInt32(Id));
		ShowCliente();
		MessageBox::Show("Se ha eliminado el cliente numero " + Id + " de manera exitosa.");
		ClearControls();
		DisableControls();
		btnAddPerson->Enabled = false;
		btnUpdatePerson->Enabled = false;
		btnDeletePerson->Enabled = false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el clienter por el siguiente motivo: \n" +
			ex->Message);
	}
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAddPerson->Enabled = false;
	btnUpdatePerson->Enabled = true;
	btnDeletePerson->Enabled = true;
	EnableControls();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
