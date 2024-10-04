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
	private: System::Windows::Forms::TabControl^ tabCustomers;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtColor;
	private: System::Windows::Forms::TextBox^ txtModelo;
	private: System::Windows::Forms::Label^ label114;
	private: System::Windows::Forms::Label^ label113;
	private: System::Windows::Forms::TextBox^ txtPlaca;
	private: System::Windows::Forms::Label^ label112;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnFem;
	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::TextBox^ txtDescuento;
	private: System::Windows::Forms::Label^ label111;
	private: System::Windows::Forms::TextBox^ txtPersonPoints;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPersonId;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ label115;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnDeletePerson;
	private: System::Windows::Forms::Button^ btnUpdatePerson;
	private: System::Windows::Forms::Button^ btnAddPerson;
	private: System::Windows::Forms::DataGridView^ dgvPersons;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtCompanyLastName;
	private: System::Windows::Forms::TextBox^ txtCompanyFirstName;
	private: System::Windows::Forms::TextBox^ txtCompanyPassword;
	private: System::Windows::Forms::TextBox^ txtCompanyUsername;
	private: System::Windows::Forms::TextBox^ txtCompanyId;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ btnDeleteCompany;
	private: System::Windows::Forms::Button^ btnUpdateCompany;
	private: System::Windows::Forms::Button^ btnAddCompany;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ personId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPlaca;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber;

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
			this->tabCustomers = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->txtDescuento = (gcnew System::Windows::Forms::TextBox());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->txtPersonPoints = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonId = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnDeletePerson = (gcnew System::Windows::Forms::Button());
			this->btnUpdatePerson = (gcnew System::Windows::Forms::Button());
			this->btnAddPerson = (gcnew System::Windows::Forms::Button());
			this->dgvPersons = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyId = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteCompany = (gcnew System::Windows::Forms::Button());
			this->btnUpdateCompany = (gcnew System::Windows::Forms::Button());
			this->btnAddCompany = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPlaca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabCustomers->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabCustomers
			// 
			this->tabCustomers->Controls->Add(this->tabPage1);
			this->tabCustomers->Controls->Add(this->tabPage2);
			this->tabCustomers->Location = System::Drawing::Point(0, 32);
			this->tabCustomers->Margin = System::Windows::Forms::Padding(4);
			this->tabCustomers->Name = L"tabCustomers";
			this->tabCustomers->SelectedIndex = 0;
			this->tabCustomers->Size = System::Drawing::Size(856, 676);
			this->tabCustomers->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtColor);
			this->tabPage1->Controls->Add(this->txtModelo);
			this->tabPage1->Controls->Add(this->label114);
			this->tabPage1->Controls->Add(this->label113);
			this->tabPage1->Controls->Add(this->txtPlaca);
			this->tabPage1->Controls->Add(this->label112);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->txtDescuento);
			this->tabPage1->Controls->Add(this->label111);
			this->tabPage1->Controls->Add(this->txtPersonPoints);
			this->tabPage1->Controls->Add(this->txtPassword);
			this->tabPage1->Controls->Add(this->txtUsername);
			this->tabPage1->Controls->Add(this->txtPhoneNumber);
			this->tabPage1->Controls->Add(this->txtEmail);
			this->tabPage1->Controls->Add(this->txtPersonId);
			this->tabPage1->Controls->Add(this->txtDNI);
			this->tabPage1->Controls->Add(this->txtLastName);
			this->tabPage1->Controls->Add(this->txtFirstName);
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
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(225, 301);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(100, 22);
			this->txtColor->TabIndex = 37;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(225, 268);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(100, 22);
			this->txtModelo->TabIndex = 36;
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
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(123, 268);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(53, 16);
			this->label113->TabIndex = 34;
			this->label113->Text = L"Modelo";
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(225, 229);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(100, 22);
			this->txtPlaca->TabIndex = 33;
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
			// txtDescuento
			// 
			this->txtDescuento->Location = System::Drawing::Point(225, 197);
			this->txtDescuento->Name = L"txtDescuento";
			this->txtDescuento->Size = System::Drawing::Size(191, 22);
			this->txtDescuento->TabIndex = 29;
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
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(523, 60);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(204, 22);
			this->txtPassword->TabIndex = 23;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(225, 60);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(191, 22);
			this->txtUsername->TabIndex = 22;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(225, 159);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(191, 22);
			this->txtPhoneNumber->TabIndex = 6;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(225, 125);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(357, 22);
			this->txtEmail->TabIndex = 4;
			// 
			// txtPersonId
			// 
			this->txtPersonId->Location = System::Drawing::Point(225, 25);
			this->txtPersonId->Margin = System::Windows::Forms::Padding(4);
			this->txtPersonId->Name = L"txtPersonId";
			this->txtPersonId->Size = System::Drawing::Size(48, 22);
			this->txtPersonId->TabIndex = 5;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(343, 25);
			this->txtDNI->Margin = System::Windows::Forms::Padding(4);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(236, 22);
			this->txtDNI->TabIndex = 4;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(523, 93);
			this->txtLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(205, 22);
			this->txtLastName->TabIndex = 3;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(225, 93);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(191, 22);
			this->txtFirstName->TabIndex = 2;
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->txtCompanyLastName);
			this->tabPage2->Controls->Add(this->txtCompanyFirstName);
			this->tabPage2->Controls->Add(this->txtCompanyPassword);
			this->tabPage2->Controls->Add(this->txtCompanyUsername);
			this->tabPage2->Controls->Add(this->txtCompanyId);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->btnDeleteCompany);
			this->tabPage2->Controls->Add(this->btnUpdateCompany);
			this->tabPage2->Controls->Add(this->btnAddCompany);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(848, 647);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Trabajadores del Mall";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(232, 353);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 55;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(232, 320);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 54;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(130, 353);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(39, 16);
			this->label30->TabIndex = 53;
			this->label30->Text = L"Color";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(130, 320);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(53, 16);
			this->label31->TabIndex = 52;
			this->label31->Text = L"Modelo";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView1->Location = System::Drawing::Point(109, 445);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(656, 191);
			this->dataGridView1->TabIndex = 51;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 20;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Apellidos";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 130;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Placa";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 120;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Celular";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 70;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(536, 300);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 50;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(536, 272);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 49;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(471, 306);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 16);
			this->label27->TabIndex = 48;
			this->label27->Text = L"Posición";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(471, 278);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 16);
			this->label25->TabIndex = 47;
			this->label25->Text = L"Piso";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(466, 244);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(170, 16);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Estacionamiento asignado:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(233, 278);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 45;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(130, 284);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 16);
			this->label19->TabIndex = 44;
			this->label19->Text = L"Placa del auto";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(233, 244);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 43;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(130, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 16);
			this->label15->TabIndex = 42;
			this->label15->Text = L"Función";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Location = System::Drawing::Point(536, 149);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(161, 38);
			this->groupBox2->TabIndex = 41;
			this->groupBox2->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(89, 10);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"Inactivo";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(8, 10);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 20);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Activo";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 198);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 22);
			this->textBox2->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(130, 198);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 16);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Descuento (%)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(536, 195);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 22);
			this->textBox3->TabIndex = 38;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(235, 160);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(191, 22);
			this->textBox4->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(235, 126);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(502, 22);
			this->textBox5->TabIndex = 32;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(471, 198);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 16);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Puntos";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(130, 163);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 16);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Celular";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(471, 163);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 16);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Estatus";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(130, 129);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 16);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Email";
			// 
			// txtCompanyLastName
			// 
			this->txtCompanyLastName->Location = System::Drawing::Point(523, 89);
			this->txtCompanyLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtCompanyLastName->Name = L"txtCompanyLastName";
			this->txtCompanyLastName->Size = System::Drawing::Size(213, 22);
			this->txtCompanyLastName->TabIndex = 29;
			// 
			// txtCompanyFirstName
			// 
			this->txtCompanyFirstName->Location = System::Drawing::Point(236, 89);
			this->txtCompanyFirstName->Margin = System::Windows::Forms::Padding(4);
			this->txtCompanyFirstName->Name = L"txtCompanyFirstName";
			this->txtCompanyFirstName->Size = System::Drawing::Size(180, 22);
			this->txtCompanyFirstName->TabIndex = 28;
			// 
			// txtCompanyPassword
			// 
			this->txtCompanyPassword->Location = System::Drawing::Point(523, 58);
			this->txtCompanyPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtCompanyPassword->Name = L"txtCompanyPassword";
			this->txtCompanyPassword->PasswordChar = '*';
			this->txtCompanyPassword->Size = System::Drawing::Size(213, 22);
			this->txtCompanyPassword->TabIndex = 27;
			// 
			// txtCompanyUsername
			// 
			this->txtCompanyUsername->Location = System::Drawing::Point(236, 59);
			this->txtCompanyUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtCompanyUsername->Name = L"txtCompanyUsername";
			this->txtCompanyUsername->Size = System::Drawing::Size(180, 22);
			this->txtCompanyUsername->TabIndex = 26;
			// 
			// txtCompanyId
			// 
			this->txtCompanyId->Location = System::Drawing::Point(236, 30);
			this->txtCompanyId->Margin = System::Windows::Forms::Padding(4);
			this->txtCompanyId->Name = L"txtCompanyId";
			this->txtCompanyId->Size = System::Drawing::Size(79, 22);
			this->txtCompanyId->TabIndex = 2;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(425, 63);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 16);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Password (*)";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(130, 62);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(86, 16);
			this->label21->TabIndex = 24;
			this->label21->Text = L"Username (*)";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(425, 94);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(80, 16);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Apellidos (*)";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(130, 92);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(79, 16);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Nombres (*)";
			// 
			// btnDeleteCompany
			// 
			this->btnDeleteCompany->Location = System::Drawing::Point(530, 395);
			this->btnDeleteCompany->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteCompany->Name = L"btnDeleteCompany";
			this->btnDeleteCompany->Size = System::Drawing::Size(163, 28);
			this->btnDeleteCompany->TabIndex = 16;
			this->btnDeleteCompany->Text = L"Eliminar";
			this->btnDeleteCompany->UseVisualStyleBackColor = true;
			// 
			// btnUpdateCompany
			// 
			this->btnUpdateCompany->Location = System::Drawing::Point(366, 395);
			this->btnUpdateCompany->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdateCompany->Name = L"btnUpdateCompany";
			this->btnUpdateCompany->Size = System::Drawing::Size(156, 28);
			this->btnUpdateCompany->TabIndex = 15;
			this->btnUpdateCompany->Text = L"Actualizar";
			this->btnUpdateCompany->UseVisualStyleBackColor = true;
			// 
			// btnAddCompany
			// 
			this->btnAddCompany->Enabled = false;
			this->btnAddCompany->Location = System::Drawing::Point(193, 395);
			this->btnAddCompany->Margin = System::Windows::Forms::Padding(4);
			this->btnAddCompany->Name = L"btnAddCompany";
			this->btnAddCompany->Size = System::Drawing::Size(165, 28);
			this->btnAddCompany->TabIndex = 14;
			this->btnAddCompany->Text = L"Agregar";
			this->btnAddCompany->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 31);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Id (*)";
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
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
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
			this->dgvPlaca->HeaderText = L"DNI";
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
			// Cliente_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 735);
			this->Controls->Add(this->tabCustomers);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Cliente_CRUD";
			this->Text = L"Cliente_CRUD";
			this->tabCustomers->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersons))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
							""+listaCliente[i]->DNI,
							Convert::ToString(listaCliente[i]->Celular),
					});
				}
			}
		}
	private: System::Void btnAddPerson_Click(System::Object^ sender, System::EventArgs^ e) {
		
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
