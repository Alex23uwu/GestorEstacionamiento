#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace EstacionamientoService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PersonalLimpieza_CRUD
	/// </summary>
	public ref class PersonalLimpieza_CRUD : public System::Windows::Forms::Form
	{
	public:
		PersonalLimpieza_CRUD(void)
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
		~PersonalLimpieza_CRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttAdd;
	protected:
	private: System::Windows::Forms::Button^ bttUpdate;
	private: System::Windows::Forms::Button^ bttDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dgvPersonalLimpiez;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtEstado;


	private: System::Windows::Forms::TextBox^ txtPiso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPiso;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtPassword;




	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Nuevo;
	private: System::Windows::Forms::ToolStripMenuItem^ Editar;
	private: System::Windows::Forms::ToolStripMenuItem^ Salir;





	private: System::ComponentModel::IContainer^ components;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonalLimpieza_CRUD::typeid));
			this->bttAdd = (gcnew System::Windows::Forms::Button());
			this->bttUpdate = (gcnew System::Windows::Forms::Button());
			this->bttDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvPersonalLimpiez = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPiso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Nuevo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Editar = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Salir = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonalLimpiez))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// bttAdd
			// 
			this->bttAdd->Location = System::Drawing::Point(49, 201);
			this->bttAdd->Name = L"bttAdd";
			this->bttAdd->Size = System::Drawing::Size(91, 31);
			this->bttAdd->TabIndex = 0;
			this->bttAdd->Text = L"Agregar";
			this->bttAdd->UseVisualStyleBackColor = true;
			this->bttAdd->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::bttAdd_Click);
			// 
			// bttUpdate
			// 
			this->bttUpdate->Location = System::Drawing::Point(212, 201);
			this->bttUpdate->Name = L"bttUpdate";
			this->bttUpdate->Size = System::Drawing::Size(89, 31);
			this->bttUpdate->TabIndex = 1;
			this->bttUpdate->Text = L"Modificar";
			this->bttUpdate->UseVisualStyleBackColor = true;
			this->bttUpdate->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::bttUpdate_Click);
			// 
			// bttDelete
			// 
			this->bttDelete->Location = System::Drawing::Point(375, 201);
			this->bttDelete->Name = L"bttDelete";
			this->bttDelete->Size = System::Drawing::Size(88, 31);
			this->bttDelete->TabIndex = 2;
			this->bttDelete->Text = L"Eliminar";
			this->bttDelete->UseVisualStyleBackColor = true;
			this->bttDelete->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::bttDelete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Estado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Piso";
			// 
			// dgvPersonalLimpiez
			// 
			this->dgvPersonalLimpiez->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersonalLimpiez->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaId,
					this->ColumnaNombre, this->ColumnaApellido, this->ColumnaEstado, this->ColumnaPiso
			});
			this->dgvPersonalLimpiez->Location = System::Drawing::Point(10, 253);
			this->dgvPersonalLimpiez->Name = L"dgvPersonalLimpiez";
			this->dgvPersonalLimpiez->Size = System::Drawing::Size(543, 203);
			this->dgvPersonalLimpiez->TabIndex = 8;
			this->dgvPersonalLimpiez->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalLimpieza_CRUD::dgvPersonalLimpiez_CellClick);
			// 
			// ColumnaId
			// 
			this->ColumnaId->HeaderText = L"Id";
			this->ColumnaId->Name = L"ColumnaId";
			// 
			// ColumnaNombre
			// 
			this->ColumnaNombre->HeaderText = L"Nombre";
			this->ColumnaNombre->Name = L"ColumnaNombre";
			// 
			// ColumnaApellido
			// 
			this->ColumnaApellido->HeaderText = L"Apellido";
			this->ColumnaApellido->Name = L"ColumnaApellido";
			// 
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->Name = L"ColumnaEstado";
			// 
			// ColumnaPiso
			// 
			this->ColumnaPiso->HeaderText = L"Piso";
			this->ColumnaPiso->Name = L"ColumnaPiso";
			// 
			// txtId
			// 
			this->txtId->Enabled = false;
			this->txtId->Location = System::Drawing::Point(109, 36);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(99, 20);
			this->txtId->TabIndex = 9;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(109, 66);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(99, 20);
			this->txtNombre->TabIndex = 10;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(109, 97);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(99, 20);
			this->txtApellido->TabIndex = 11;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(109, 132);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(99, 20);
			this->txtEstado->TabIndex = 12;
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(109, 166);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(99, 20);
			this->txtPiso->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(305, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Usuario";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(375, 50);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(115, 20);
			this->txtUsuario->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(305, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Contraseña";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(375, 84);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(115, 20);
			this->txtPassword->TabIndex = 17;
			// 
			// menuStrip2
			// 
			this->menuStrip2->AllowMerge = false;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(567, 24);
			this->menuStrip2->TabIndex = 20;
			this->menuStrip2->Text = L"Archivo";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Nuevo,
					this->Editar, this->Salir
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// Nuevo
			// 
			this->Nuevo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nuevo.Image")));
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(184, 26);
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::toolStripMenuItem1_Click);
			// 
			// Editar
			// 
			this->Editar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Editar.Image")));
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(184, 26);
			this->Editar->Text = L"Editar";
			this->Editar->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::Editar_Click);
			// 
			// Salir
			// 
			this->Salir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Salir.Image")));
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(184, 26);
			this->Salir->Text = L"Salir";
			this->Salir->Click += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::toolStripMenuItem3_Click);
			// 
			// PersonalLimpieza_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(567, 470);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->dgvPersonalLimpiez);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttDelete);
			this->Controls->Add(this->bttUpdate);
			this->Controls->Add(this->bttAdd);
			this->Name = L"PersonalLimpieza_CRUD";
			this->Text = L"Mantenimiento Personal de Limpiez";
			this->Load += gcnew System::EventHandler(this, &PersonalLimpieza_CRUD::PersonalLimpieza_CRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonalLimpiez))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonalLimpieza^ personalLimp = gcnew PersonalLimpieza();
		try{	
			personalLimp->Id = Convert::ToInt32(txtId->Text);
			personalLimp->Nombre = txtNombre->Text;
			personalLimp->Apellido = txtApellido->Text;
			personalLimp->Estado = txtEstado->Text;
			personalLimp->Piso = Convert::ToInt32(txtPiso->Text);
			personalLimp->NombreUsuario = txtUsuario->Text;
			personalLimp->Clave = txtPassword->Text;
			Service::AddPersonalLimpieza(personalLimp);
			ShowPersonal();
			ClearControls();
			DisableControls();
			bttAdd->Enabled = false;
			MessageBox::Show("Se ha agreado al Personal " + personalLimp->Id + "-" + personalLimp->Nombre);
		}
		catch (Exception^ ex){
			MessageBox::Show("No se ha podido agregar el Personal por el siguiente motivo:\n" + ex->Message);
		}
		txtId->Text = "" + Service::UpdatePersonalLimpiezaID();
	}
	public:
		void ShowPersonal() {
			List<PersonalLimpieza^>^ listaPersonal = Service::QueryAllPersonalLimpieza();
			if (listaPersonal != nullptr) {
				dgvPersonalLimpiez->Rows->Clear();
				for (int i = 0; i < listaPersonal->Count; i++) {
					dgvPersonalLimpiez->Rows->Add(gcnew array<String^> {"" + listaPersonal[i]->Id,
						listaPersonal[i]->Nombre,
						listaPersonal[i]->Apellido,
						listaPersonal[i]->Estado,
						"" + listaPersonal[i]->Piso});
				}
			}
		}
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
	private: System::Void dgvPersonalLimpiez_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvPersonalLimpiez->Rows[dgvPersonalLimpiez->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
			int id = Convert::ToInt32(dgvPersonalLimpiez->Rows[dgvPersonalLimpiez->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			PersonalLimpieza^ personalLimp = Service::QueryPersonalLimpiezaById(id);
			txtId->Text = "" + personalLimp->Id;
			txtNombre->Text = personalLimp->Nombre;
			txtApellido->Text = personalLimp->Apellido;
			txtEstado->Text = personalLimp->Estado;
			txtPiso->Text = "" + personalLimp->Piso;
			txtPassword->Text = personalLimp->Clave;
			txtUsuario->Text = personalLimp->NombreUsuario;
		}
	}
	private: System::Void bttUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ personalId = txtId->Text->Trim();
		if (personalId->Equals("")) {
			MessageBox::Show("Debe seleccionar un Personal de Limpieza");
			return;
		}
		try {
			PersonalLimpieza^ personal = Service::QueryPersonalLimpiezaById(Convert::ToInt32(personalId));
			if (personal->Apellido == txtApellido->Text &&
				personal->Id == Int32::Parse(txtId->Text) &&
				personal->Estado == txtEstado->Text &&
				personal->Nombre == txtNombre->Text &&
				personal->Piso == Int32::Parse(txtPiso->Text)) {
				MessageBox::Show("Debe realizar alguna modificación");
				return;
			}
			
			personal->Nombre = txtNombre->Text;
			personal->Apellido = txtApellido->Text;
			personal->Estado = txtEstado->Text;
			personal->Piso = Convert::ToInt32(txtPiso->Text);
			personal->NombreUsuario = txtUsuario->Text;
			personal->Clave = txtPassword->Text;
			Service::UpdatePersonalLimpieza(personal);
			ShowPersonal();
			MessageBox::Show("Se ha modificado el Personal " + personal->Id + "-" + personal->Nombre);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar el personal por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void bttDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ personalID = txtId->Text->Trim();
		if (personalID->Equals("")) {
			MessageBox::Show("Debe seleccionar un Personal");
			return;
		}
		try {
			PersonalLimpieza^ personal = Service::QueryPersonalLimpiezaById(Convert::ToInt32(personalID));
			Service::DeletePersonalLimpieza(Convert::ToInt32(personalID));
			ShowPersonal();
			ClearControls();
			Service::UpdatePersonalLimpieza(personal);
			MessageBox::Show("Se ha eliminado el Personal con Id = " + personalID +"-" + personal->Nombre + " de manera exitosa.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar el Personal por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void PersonalLimpieza_CRUD_Load(System::Object^ sender, System::EventArgs^ e) {
		bttAdd->Enabled = false;
		bttUpdate->Enabled = false;
		bttDelete->Enabled = false;
		ShowPersonal();
		DisableControls();
		txtId->Text = "" + Service::UpdatePersonalLimpiezaID();
	}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { //Nuevo
	ClearControls();
	bttAdd->Enabled = true;
	bttUpdate->Enabled = false;
	bttDelete->Enabled = false;
	EnableConttols();
	txtId->Text = "" + Service::UpdatePersonalLimpiezaID();
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	bttAdd->Enabled = false;
	bttUpdate->Enabled = true;
	bttDelete->Enabled = true;
	EnableConttols();
}
	   void EnableConttols() {
		   txtApellido->ReadOnly = false;
		   txtEstado->ReadOnly = false;
		   txtId->ReadOnly = false;
		   txtNombre->ReadOnly = false;
		   txtPiso->ReadOnly = false;
		   txtUsuario->ReadOnly = false;
		   txtPassword->ReadOnly = false;
	   }
	   void DisableControls() {
		   txtApellido->ReadOnly = true;
		   txtEstado->ReadOnly = true;
		   txtId->ReadOnly = true;
		   txtNombre->ReadOnly = true;
		   txtPiso->ReadOnly = true;
		   txtUsuario->ReadOnly = true;
		   txtPassword->ReadOnly = true;
	   }
};
}