#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace System::Collections::Generic;
	using namespace EstacionamientoService;

	/// <summary>
	/// Resumen de Veedor_CRUD
	/// </summary>
	public ref class Veedor_CRUD : public System::Windows::Forms::Form
	{
	public:
		Veedor_CRUD(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Veedor_CRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNombre;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtCelular;










	private: System::Windows::Forms::TextBox^ txtSalario;





	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ txtClave;

	private: System::Windows::Forms::TextBox^ txtNombreUsuario;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtPiso;
	private: System::Windows::Forms::Button^ btAdd;
	private: System::Windows::Forms::Button^ btUpdate;



	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::DataGridView^ dvgVeedor;











	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtExperiencia;
	private: System::Windows::Forms::Button^ bt_nuevo;








	private: System::Windows::Forms::CheckBox^ CheckboxClave;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorCelular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorPiso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VeedorSalario;
private: System::Windows::Forms::ComboBox^ comboBox1;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtClave = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			this->btAdd = (gcnew System::Windows::Forms::Button());
			this->btUpdate = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->dvgVeedor = (gcnew System::Windows::Forms::DataGridView());
			this->VeedorID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorCelular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorPiso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VeedorSalario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtExperiencia = (gcnew System::Windows::Forms::TextBox());
			this->bt_nuevo = (gcnew System::Windows::Forms::Button());
			this->CheckboxClave = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgVeedor))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombres (*)";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(165, 15);
			this->txtID->Name = L"txtID";
			this->txtID->ReadOnly = true;
			this->txtID->Size = System::Drawing::Size(148, 20);
			this->txtID->TabIndex = 2;
			this->txtID->TextChanged += gcnew System::EventHandler(this, &Veedor_CRUD::txtID_TextChanged);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(165, 50);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(148, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Apellidos (*)";
			this->label3->Click += gcnew System::EventHandler(this, &Veedor_CRUD::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"DNI (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Email (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Celular (*)";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(165, 91);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(148, 20);
			this->txtApellido->TabIndex = 8;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(165, 135);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(148, 20);
			this->txtDNI->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(165, 173);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(148, 20);
			this->txtEmail->TabIndex = 10;
			// 
			// txtCelular
			// 
			this->txtCelular->Location = System::Drawing::Point(165, 215);
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(148, 20);
			this->txtCelular->TabIndex = 11;
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(528, 91);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(148, 20);
			this->txtSalario->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(380, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Salario";
			// 
			// txtClave
			// 
			this->txtClave->Location = System::Drawing::Point(528, 47);
			this->txtClave->Name = L"txtClave";
			this->txtClave->PasswordChar = '*';
			this->txtClave->Size = System::Drawing::Size(148, 20);
			this->txtClave->TabIndex = 15;
			// 
			// txtNombreUsuario
			// 
			this->txtNombreUsuario->Location = System::Drawing::Point(528, 12);
			this->txtNombreUsuario->Name = L"txtNombreUsuario";
			this->txtNombreUsuario->Size = System::Drawing::Size(148, 20);
			this->txtNombreUsuario->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(380, 54);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Contrase�a (*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(380, 19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Nombre Usuario (*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(380, 142);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Piso";
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(528, 135);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(148, 20);
			this->txtPiso->TabIndex = 25;
			// 
			// btAdd
			// 
			this->btAdd->Location = System::Drawing::Point(367, 231);
			this->btAdd->Name = L"btAdd";
			this->btAdd->Size = System::Drawing::Size(96, 30);
			this->btAdd->TabIndex = 26;
			this->btAdd->Text = L"Agregar";
			this->btAdd->UseVisualStyleBackColor = true;
			this->btAdd->Click += gcnew System::EventHandler(this, &Veedor_CRUD::btAdd_Click);
			// 
			// btUpdate
			// 
			this->btUpdate->Location = System::Drawing::Point(496, 231);
			this->btUpdate->Name = L"btUpdate";
			this->btUpdate->Size = System::Drawing::Size(98, 30);
			this->btUpdate->TabIndex = 27;
			this->btUpdate->Text = L"Modificar";
			this->btUpdate->UseVisualStyleBackColor = true;
			this->btUpdate->Click += gcnew System::EventHandler(this, &Veedor_CRUD::btUpdate_Click);
			// 
			// btDelete
			// 
			this->btDelete->Location = System::Drawing::Point(617, 231);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(93, 30);
			this->btDelete->TabIndex = 28;
			this->btDelete->Text = L"Eliminar";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler(this, &Veedor_CRUD::btDelete_Click);
			// 
			// dvgVeedor
			// 
			this->dvgVeedor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgVeedor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->VeedorID, this->VeedorNombre,
					this->VeedorApellido, this->VeedorDNI, this->VeedorEmail, this->VeedorCelular, this->VeedorPiso, this->VeedorSalario
			});
			this->dvgVeedor->Location = System::Drawing::Point(36, 300);
			this->dvgVeedor->Name = L"dvgVeedor";
			this->dvgVeedor->ReadOnly = true;
			this->dvgVeedor->Size = System::Drawing::Size(739, 203);
			this->dvgVeedor->TabIndex = 29;
			this->dvgVeedor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Veedor_CRUD::dvgVeedor_CellClick);
			this->dvgVeedor->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Veedor_CRUD::dataGridView1_CellContentClick);
			// 
			// VeedorID
			// 
			this->VeedorID->HeaderText = L"ID";
			this->VeedorID->Name = L"VeedorID";
			this->VeedorID->ReadOnly = true;
			// 
			// VeedorNombre
			// 
			this->VeedorNombre->HeaderText = L"Nombre";
			this->VeedorNombre->Name = L"VeedorNombre";
			this->VeedorNombre->ReadOnly = true;
			// 
			// VeedorApellido
			// 
			this->VeedorApellido->HeaderText = L"Apellido";
			this->VeedorApellido->Name = L"VeedorApellido";
			this->VeedorApellido->ReadOnly = true;
			// 
			// VeedorDNI
			// 
			this->VeedorDNI->HeaderText = L"DNI";
			this->VeedorDNI->Name = L"VeedorDNI";
			this->VeedorDNI->ReadOnly = true;
			// 
			// VeedorEmail
			// 
			this->VeedorEmail->HeaderText = L"Email";
			this->VeedorEmail->Name = L"VeedorEmail";
			this->VeedorEmail->ReadOnly = true;
			// 
			// VeedorCelular
			// 
			this->VeedorCelular->HeaderText = L"Celular";
			this->VeedorCelular->Name = L"VeedorCelular";
			this->VeedorCelular->ReadOnly = true;
			// 
			// VeedorPiso
			// 
			this->VeedorPiso->HeaderText = L"Piso";
			this->VeedorPiso->Name = L"VeedorPiso";
			this->VeedorPiso->ReadOnly = true;
			// 
			// VeedorSalario
			// 
			this->VeedorSalario->HeaderText = L"Salario";
			this->VeedorSalario->Name = L"VeedorSalario";
			this->VeedorSalario->ReadOnly = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(380, 180);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(94, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Experiencia (a�os)";
			this->label14->Click += gcnew System::EventHandler(this, &Veedor_CRUD::label14_Click);
			// 
			// txtExperiencia
			// 
			this->txtExperiencia->Location = System::Drawing::Point(528, 177);
			this->txtExperiencia->Name = L"txtExperiencia";
			this->txtExperiencia->Size = System::Drawing::Size(148, 20);
			this->txtExperiencia->TabIndex = 31;
			// 
			// bt_nuevo
			// 
			this->bt_nuevo->Location = System::Drawing::Point(734, 231);
			this->bt_nuevo->Name = L"bt_nuevo";
			this->bt_nuevo->Size = System::Drawing::Size(99, 31);
			this->bt_nuevo->TabIndex = 32;
			this->bt_nuevo->Text = L"Nuevo";
			this->bt_nuevo->UseVisualStyleBackColor = true;
			this->bt_nuevo->Click += gcnew System::EventHandler(this, &Veedor_CRUD::bt_nuevo_Click);
			// 
			// CheckboxClave
			// 
			this->CheckboxClave->AutoSize = true;
			this->CheckboxClave->Location = System::Drawing::Point(695, 50);
			this->CheckboxClave->Name = L"CheckboxClave";
			this->CheckboxClave->Size = System::Drawing::Size(118, 17);
			this->CheckboxClave->TabIndex = 33;
			this->CheckboxClave->Text = L"Mostrar Contrase�a";
			this->CheckboxClave->UseVisualStyleBackColor = true;
			this->CheckboxClave->CheckedChanged += gcnew System::EventHandler(this, &Veedor_CRUD::checkBox1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 263);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 21);
			this->comboBox1->TabIndex = 34;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Veedor_CRUD::comboBox1_SelectedIndexChanged);
			// 
			// Veedor_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 586);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->CheckboxClave);
			this->Controls->Add(this->bt_nuevo);
			this->Controls->Add(this->txtExperiencia);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dvgVeedor);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btUpdate);
			this->Controls->Add(this->btAdd);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtClave);
			this->Controls->Add(this->txtNombreUsuario);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtCelular);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Veedor_CRUD";
			this->Text = L"Veedor_CRUD";
			this->Load += gcnew System::EventHandler(this, &Veedor_CRUD::Veedor_CRUD_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgVeedor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		int result1, result2, result3, result4;
		if (txtNombre->Text->Trim() == "" || txtApellido->Text->Trim() == "" || txtDNI->Text->Trim() == ""
			|| txtNombreUsuario->Text->Trim() == "" || txtClave->Text->Trim() == "" || txtEmail->Text->Trim() == "") {
			MessageBox::Show("Los par�metros que contengan el s�mbolo * son obligatorios");
			return;
		}
		if (!(Int32::TryParse(txtCelular->Text, result1) && Int32::TryParse(txtDNI->Text, result2) && (Int32::TryParse(txtPiso->Text, result3) || txtPiso->Text == "") && (Int32::TryParse(txtSalario->Text, result4) || txtSalario->Text == ""))) {
			MessageBox::Show("Las casillas de Celular, DNI, Piso y Salario deben ser rellenadas con n�meros");
			return;
		}
		try {
			List <Veedor^>^ VeedorLista = Service::QueryAllVeedor();
			Veedor^ veedor = gcnew Veedor();
			veedor->Apellido = txtApellido->Text;
			veedor->Nombre = txtNombre->Text;
			veedor->DNI = Convert::ToInt32(txtDNI->Text);
			veedor->NombreUsuario = txtNombreUsuario->Text;
			veedor->Clave = txtClave->Text;
			veedor->Experiencia = txtExperiencia->Text;
			veedor->Celular = Convert::ToInt32(txtCelular->Text);
			veedor->Email = txtEmail->Text;
			if (txtSalario->Text != "") {
				veedor->Salario = Convert::ToInt32(txtSalario->Text);
			}
			if (txtPiso->Text != "") {
				veedor->Piso = Convert::ToInt32(txtPiso->Text);
			}
			Service::VerificarDuplicadoVeedor(VeedorLista, veedor->DNI, veedor->Nombre, veedor->Apellido, veedor->NombreUsuario, veedor->Celular);
			int VeedorId = Service::AddVeedor(veedor);
			veedor->Id = VeedorId;
			Service::UpdateVeedora(veedor);
			ShowVeedor();
			MessageBox::Show("Se agrego al veedor " + veedor->Nombre + " " + veedor->Apellido + " con ID " + veedor->Id);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar el Personal por el siguiente motivo:\n" + ex->Message);
		}

	}
	public:
		void ShowVeedor() {
			List <Veedor^>^ VeedorLista = Service::QueryAllVeedor();
			Service::OrdenarVeedorID(VeedorLista);
			if (VeedorLista != nullptr) {
				dvgVeedor->Rows->Clear();
				for (int i = 0; i < VeedorLista->Count; i++) {
					String^ VeedorSalario = Convert::ToString(VeedorLista[i]->Salario);
					String^ VeedorPiso = Convert::ToString(VeedorLista[i]->Piso);
					if (VeedorLista[i]->Salario == 0) {
						VeedorSalario = "";
					}
					if (VeedorLista[i]->Piso == 0) {
						VeedorPiso = "";
					}
					dvgVeedor->Rows->Add(gcnew array<String^>{
							Convert::ToString(VeedorLista[i]->Id),
							VeedorLista[i]->Nombre,
							VeedorLista[i]->Apellido,
							Convert::ToString(VeedorLista[i]->DNI),
							VeedorLista[i]->Email,
							Convert::ToString(VeedorLista[i]->Celular),
							VeedorPiso,
							VeedorSalario,
					});
				}
			}
		}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ID = txtID->Text;
		int result1, result2, result3, result4;
		if (ID->Equals("")) {
			MessageBox::Show("Debe seleccionar un Veedor");
			return;
		}
		if (txtNombre->Text->Trim() == "" || txtApellido->Text->Trim() == "" || txtDNI->Text->Trim() == ""
			|| txtNombreUsuario->Text->Trim() == "" || txtClave->Text->Trim() == "" || txtEmail->Text->Trim() == "") {
			MessageBox::Show("Los par�metros que contengan el s�mbolo * son obligatorios");
			return;
		}
		if (!(Int32::TryParse(txtCelular->Text, result1) && Int32::TryParse(txtDNI->Text, result2) && (Int32::TryParse(txtPiso->Text, result3) || txtPiso->Text == "") && (Int32::TryParse(txtSalario->Text, result4) || txtSalario->Text == ""))) {
			MessageBox::Show("Las casillas de Celular, DNI, Piso y Salario deben ser rellenadas con n�meros");
			return;
		}
		try {
			Veedor^ veedor = gcnew Veedor();
			Veedor^ veedor_antes = Service::QueryVeedorById(Convert::ToInt32(ID));
			veedor->Apellido = txtApellido->Text;
			veedor->Nombre = txtNombre->Text;
			veedor->DNI = Convert::ToInt32(txtDNI->Text);
			veedor->NombreUsuario = txtNombreUsuario->Text;
			veedor->Clave = txtClave->Text;
			veedor->Experiencia = txtExperiencia->Text;
			veedor->Celular = Convert::ToInt32(txtCelular->Text);
			veedor->Email = txtEmail->Text;
			if (txtSalario->Text != "") {
				veedor->Salario = Convert::ToInt32(txtSalario->Text);
			}
			if (txtPiso->Text != "") {
				veedor->Piso = Convert::ToInt32(txtPiso->Text);
			}
			if (veedor_antes == nullptr) {
				throw gcnew InvalidOperationException("La id del veedor especificado no existe");

			}
			veedor->Id = veedor_antes->Id;
			Service::VerificarCambioVeedor(veedor_antes, veedor->DNI, veedor->Nombre, veedor->Apellido, veedor->NombreUsuario, veedor->Celular, veedor->Piso, veedor->Experiencia, veedor->Salario, veedor->Clave, veedor->Email);
			Service::UpdateVeedora(veedor);
			ShowVeedor();
			MessageBox::Show("Se ha modificado el Personal " + veedor->Id + "-" + veedor->Nombre);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar el personal por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void dvgVeedor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dvgVeedor->Rows[dvgVeedor->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
			int veedorID = Convert::ToInt32(dvgVeedor->Rows[dvgVeedor->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Veedor^ veedor = Service::QueryVeedorById(veedorID);
			txtApellido->Text = veedor->Apellido;
			txtNombre->Text = veedor->Nombre;
			txtDNI->Text = "" + veedor->DNI;
			txtNombreUsuario->Text = veedor->NombreUsuario;
			txtExperiencia->Text = veedor->Experiencia;
			txtCelular->Text = "" + veedor->Celular;
			txtID->Text = "" + veedor->Id;
			txtEmail->Text = veedor->Email;
			if (veedor->Salario == 0) {
				txtSalario->Text = "";
			}
			else {
				txtSalario->Text = "" + veedor->Salario;
			}
			if (veedor->Piso == 0) {
				txtPiso->Text = "";
			}
			else {
				txtPiso->Text = "" + veedor->Piso;
			}
		}
	}
	private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ID = txtID->Text->Trim();
		if (ID->Equals("")) {
			MessageBox::Show("Debe seleccionar un Veedor");
			return;
		}
		try {
			Veedor^ veedor = Service::QueryVeedorById(Convert::ToInt32(ID));
			Service::DeleteVeedor(Convert::ToInt32(ID));
			MessageBox::Show("Se ha eliminado el Veedor " + veedor->Apellido + " " + veedor->Nombre + " de manera exitosa.");
			ShowVeedor();
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar el Personal por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void bt_nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Veedor^>^ VeedorLista = Service::QueryAllVeedor();
		txtID->Text = "";
		txtApellido->Text = "";
		txtNombre->Text = "";
		txtDNI->Text = "";
		txtNombreUsuario->Text = "";
		txtExperiencia->Text = "";
		txtCelular->Text = "";
		txtEmail->Text = "";
		txtSalario->Text = "";
		txtPiso->Text = "";
		txtClave->Text = "";
	}
	private: System::Void txtID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (CheckboxClave->Checked) {
			txtClave->PasswordChar = '\0';
		}
		else {
			txtClave->PasswordChar = '*';
		}
	}
	private: System::Void Veedor_CRUD_Load_1(System::Object^ sender, System::EventArgs^ e) {
		List<Veedor^>^ VeedorLista = Service::QueryAllVeedor();
		ShowVeedor();
		FillCmbRandom();
	}

		   void FillCmbRandom() {
			   comboBox1->Items->Add("Hola");
			   comboBox1->Items->Add("Adios");
		   }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
