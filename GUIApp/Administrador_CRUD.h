#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace EstacionamientoService;

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
	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtApellidos;
	private: System::Windows::Forms::TextBox^ txtNombres;



	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;










	private: System::Windows::Forms::DataGridView^ dgvAdministrador;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvNombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCelular;
	private: System::Windows::Forms::Button^ btnLimpiar;




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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->txtNombres = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvAdministrador = (gcnew System::Windows::Forms::DataGridView());
			this->dgvId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvNombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCelular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdministrador))->BeginInit();
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
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(163, 52);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(37, 20);
			this->txtId->TabIndex = 44;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(476, 57);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(155, 20);
			this->txtDNI->TabIndex = 43;
			// 
			// txtApellidos
			// 
			this->txtApellidos->Location = System::Drawing::Point(476, 108);
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->Size = System::Drawing::Size(155, 20);
			this->txtApellidos->TabIndex = 41;
			// 
			// txtNombres
			// 
			this->txtNombres->Location = System::Drawing::Point(163, 108);
			this->txtNombres->Name = L"txtNombres";
			this->txtNombres->Size = System::Drawing::Size(144, 20);
			this->txtNombres->TabIndex = 40;
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
			// btnDelete
			// 
			this->btnDelete->ForeColor = System::Drawing::Color::Black;
			this->btnDelete->Location = System::Drawing::Point(510, 245);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(120, 23);
			this->btnDelete->TabIndex = 53;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Administrador_CRUD::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->ForeColor = System::Drawing::Color::Black;
			this->btnUpdate->Location = System::Drawing::Point(295, 245);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(121, 23);
			this->btnUpdate->TabIndex = 52;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Administrador_CRUD::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(87, 245);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(127, 23);
			this->btnAdd->TabIndex = 51;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Administrador_CRUD::btnAdd_Click);
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
			// dgvAdministrador
			// 
			this->dgvAdministrador->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAdministrador->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvId,
					this->dgvNombres, this->colApellidos, this->colDNI, this->colCelular
			});
			this->dgvAdministrador->Location = System::Drawing::Point(87, 311);
			this->dgvAdministrador->Name = L"dgvAdministrador";
			this->dgvAdministrador->Size = System::Drawing::Size(543, 156);
			this->dgvAdministrador->TabIndex = 69;
			this->dgvAdministrador->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Administrador_CRUD::dgvAdministrador_CellClick);
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
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(510, 204);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(120, 23);
			this->btnLimpiar->TabIndex = 70;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Administrador_CRUD::btnLimpiar_Click);
			// 
			// Administrador_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(743, 608);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->dgvAdministrador);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtApellidos);
			this->Controls->Add(this->txtNombres);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"Administrador_CRUD";
			this->Text = L"Administrador_CRUD";
			this->Load += gcnew System::EventHandler(this, &Administrador_CRUD::Administrador_CRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdministrador))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Administrador^ administrador = gcnew Administrador();
		int result1, result2;
		if (txtNombres->Text->Trim() == "" || txtApellidos->Text->Trim() == "" || txtDNI->Text->Trim() == ""
			|| txtUsername->Text->Trim() == "" || txtPassword->Text->Trim() == "") {
			MessageBox::Show("Los parámetros que contengan el símbolo * son obligatorios");
			return;
		}
		if (!(Int32::TryParse(txtPhoneNumber->Text, result1) && Int32::TryParse(txtDNI->Text, result2))) {
			MessageBox::Show("Las casillas de Celular y DNI deben ser rellenadas con números");
			return;
		}
		try {
			administrador->Id = Service::UpdateAdministradorId();
			administrador->Nombre = txtNombres->Text;
			administrador->Apellido = txtApellidos->Text;
			administrador->NombreUsuario = txtUsername->Text;
			administrador->Clave = txtPassword->Text;

			if (txtPhoneNumber->Text != "") {
				administrador->Celular = Int32::Parse(txtPhoneNumber->Text);
			}
			if (txtDNI->Text != "") {
				administrador->DNI = Int32::Parse(txtDNI->Text);
			}
			if (txtEmail->Text != "") {
				administrador->Email = txtEmail->Text;
			}

			MessageBox::Show("Se agrego al administrador " + administrador->Nombre + " " + administrador->Apellido + " con ID " + administrador->Id);
			Service::AddAdministrador(administrador);
			ShowAdministrador();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Los parámetros ingresados en Id, DNI y Celular deben ser números.");
		}
	}


public:
	void ShowAdministrador() {
		List <Administrador^>^ AdministradorLista = Service::QueryAllAdministrador();
		if (AdministradorLista != nullptr) {
			dgvAdministrador->Rows->Clear();
			for (int i = 0; i < AdministradorLista->Count; i++) {
				dgvAdministrador->Rows->Add(gcnew array<String^>{
					Convert::ToString(AdministradorLista[i]->Id),
						AdministradorLista[i]->Nombre,
						AdministradorLista[i]->Apellido,
						Convert::ToString(AdministradorLista[i]->DNI),
						Convert::ToString(AdministradorLista[i]->Celular),
				});
			}
		}
	}

private: System::Void dgvAdministrador_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvAdministrador->Rows[dgvAdministrador->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		int adminId = Convert::ToInt32(dgvAdministrador->Rows[dgvAdministrador->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Administrador^ administrador = Service::QueryAdministradorById(adminId);

		txtId->Text = "" + administrador->Id;
		txtNombres->Text = administrador->Nombre;
		txtApellidos->Text = administrador->Apellido;
		txtUsername->Text = administrador->NombreUsuario;
		txtPassword->Text = administrador->Clave;
		txtDNI->Text = "" + administrador->DNI;
		txtPhoneNumber->Text = "" + administrador->Celular;
		txtEmail->Text = administrador->Email;
	}	
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Id = txtId->Text->Trim();
	Administrador^ administrador = Service::QueryAdministradorById(Convert::ToInt32(Id));
	if (Id->Equals("")) {
		MessageBox::Show("Debe seleccionar un Administrador.");
		return;
	}
	if (administrador == nullptr) {
		MessageBox::Show("No modifique el valor de Id");
		return;
	}
	try {
		Service::DeleteAdministrador(Convert::ToInt32(Id));
		ShowAdministrador();
		MessageBox::Show("Se ha eliminado el Administrador con Id = " + Id + " de manera exitosa.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el Administrador por el siguiente motivo: \n" +
			ex->Message);
	}

}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Id = txtId->Text->Trim();
	Administrador^ administrador = Service::QueryAdministradorById(Convert::ToInt32(Id));
	int result1, result2;
	if (Id->Equals("")) {
		MessageBox::Show("Debe seleccionar un Administrador");
		return;
	}
	if (!(Int32::TryParse(txtPhoneNumber->Text, result1) && Int32::TryParse(txtDNI->Text, result2))) {
		MessageBox::Show("Las casillas de Celular y DNI deben ser rellenadas con números.");
		return;
	}
	if (administrador->Id == Int32::Parse(txtId->Text) &&
		administrador->Nombre == txtNombres->Text &&
		administrador->Apellido == txtApellidos->Text &&
		administrador->NombreUsuario == txtUsername->Text &&
		administrador->Clave == txtPassword->Text &&
		administrador->DNI == Int32::Parse(txtDNI->Text) &&
		administrador->Celular == Int32::Parse(txtPhoneNumber->Text) &&
		administrador->Email == txtEmail->Text) {
		MessageBox::Show("Debe realizar alguna modificación");
		return;
	}
	try {
		administrador->Id = Int32::Parse(txtId->Text);
		administrador->Nombre = txtNombres->Text;
		administrador->Apellido = txtApellidos->Text;
		administrador->NombreUsuario = txtUsername->Text;
		administrador->Clave = txtPassword->Text;
		administrador->DNI = Int32::Parse(txtDNI->Text);
		administrador->Celular = Int32::Parse(txtPhoneNumber->Text);
		administrador->Email = txtEmail->Text;
		Service::UpdateAdministrador(administrador);
		ShowAdministrador();
		MessageBox::Show("Se ha modificado el Administrador " + administrador->Id + " - " + administrador->Nombre);
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el Administrador por el siguiente motivo:\n" +
			ex->Message);
	}

}
private: System::Void Administrador_CRUD_Load(System::Object^ sender, System::EventArgs^ e) {
	txtId->Text = "" + Service::UpdateAdministradorId();
}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	txtId->Text = "" + Service::UpdateAdministradorId();
	txtApellidos->Text = "";
	txtNombres->Text = "";
	txtDNI->Text = "";
	txtPassword->Text = "";
	txtUsername->Text = "";
	txtPhoneNumber->Text = "";
	txtEmail->Text = "";
}
};
}
