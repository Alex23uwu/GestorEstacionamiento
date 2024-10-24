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
	/// Resumen de Estacionamiento_CRUD
	/// </summary>
	public ref class Estacionamiento_CRUD : public System::Windows::Forms::Form
	{
	public:
		Estacionamiento_CRUD(void)
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
		~Estacionamiento_CRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Button^ btnDeleteEstacionamiento;

	private: System::Windows::Forms::Button^ btnNuevo;
	private: System::Windows::Forms::Button^ btnAddEstacionamiento;

	protected:

	protected:



	private: System::Windows::Forms::DataGridView^ dgvEstacionamientos;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ personId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pisoEstacionamiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numeroEstacionamiento;
	private: System::Windows::Forms::TextBox^ txtNumEst;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPiso;


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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnDeleteEstacionamiento = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->btnAddEstacionamiento = (gcnew System::Windows::Forms::Button());
			this->dgvEstacionamientos = (gcnew System::Windows::Forms::DataGridView());
			this->personId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pisoEstacionamiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numeroEstacionamiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNumEst = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstacionamientos))->BeginInit();
			this->SuspendLayout();
			// 
			// txtId
			// 
			this->txtId->Enabled = false;
			this->txtId->Location = System::Drawing::Point(222, 42);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(37, 20);
			this->txtId->TabIndex = 21;
			// 
			// btnDeleteEstacionamiento
			// 
			this->btnDeleteEstacionamiento->Location = System::Drawing::Point(374, 163);
			this->btnDeleteEstacionamiento->Name = L"btnDeleteEstacionamiento";
			this->btnDeleteEstacionamiento->Size = System::Drawing::Size(120, 23);
			this->btnDeleteEstacionamiento->TabIndex = 25;
			this->btnDeleteEstacionamiento->Text = L"Eliminar";
			this->btnDeleteEstacionamiento->UseVisualStyleBackColor = true;
			this->btnDeleteEstacionamiento->Click += gcnew System::EventHandler(this, &Estacionamiento_CRUD::btnDeleteEstacionamiento_Click);
			// 
			// btnNuevo
			// 
			this->btnNuevo->Location = System::Drawing::Point(374, 35);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(121, 23);
			this->btnNuevo->TabIndex = 24;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &Estacionamiento_CRUD::btnNuevo_Click);
			// 
			// btnAddEstacionamiento
			// 
			this->btnAddEstacionamiento->Location = System::Drawing::Point(67, 163);
			this->btnAddEstacionamiento->Name = L"btnAddEstacionamiento";
			this->btnAddEstacionamiento->Size = System::Drawing::Size(127, 23);
			this->btnAddEstacionamiento->TabIndex = 23;
			this->btnAddEstacionamiento->Text = L"Agregar";
			this->btnAddEstacionamiento->UseVisualStyleBackColor = true;
			this->btnAddEstacionamiento->Click += gcnew System::EventHandler(this, &Estacionamiento_CRUD::btnAddEstacionamiento_Click);
			// 
			// dgvEstacionamientos
			// 
			this->dgvEstacionamientos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstacionamientos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->personId,
					this->pisoEstacionamiento, this->numeroEstacionamiento
			});
			this->dgvEstacionamientos->Location = System::Drawing::Point(158, 203);
			this->dgvEstacionamientos->Name = L"dgvEstacionamientos";
			this->dgvEstacionamientos->RowHeadersWidth = 51;
			this->dgvEstacionamientos->Size = System::Drawing::Size(256, 241);
			this->dgvEstacionamientos->TabIndex = 22;
			this->dgvEstacionamientos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Estacionamiento_CRUD::dgvEstacionamientos_CellClick);
			// 
			// personId
			// 
			this->personId->HeaderText = L"Id";
			this->personId->MinimumWidth = 6;
			this->personId->Name = L"personId";
			this->personId->ReadOnly = true;
			this->personId->Width = 50;
			// 
			// pisoEstacionamiento
			// 
			this->pisoEstacionamiento->HeaderText = L"Piso";
			this->pisoEstacionamiento->Name = L"pisoEstacionamiento";
			this->pisoEstacionamiento->Width = 50;
			// 
			// numeroEstacionamiento
			// 
			this->numeroEstacionamiento->HeaderText = L"Numero";
			this->numeroEstacionamiento->Name = L"numeroEstacionamiento";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Id (*)";
			// 
			// txtNumEst
			// 
			this->txtNumEst->Location = System::Drawing::Point(222, 102);
			this->txtNumEst->Name = L"txtNumEst";
			this->txtNumEst->Size = System::Drawing::Size(37, 20);
			this->txtNumEst->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Número de estacionamiento (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Piso (*)";
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(222, 71);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(37, 20);
			this->txtPiso->TabIndex = 29;
			// 
			// Estacionamiento_CRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(605, 476);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNumEst);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->btnDeleteEstacionamiento);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->btnAddEstacionamiento);
			this->Controls->Add(this->dgvEstacionamientos);
			this->Controls->Add(this->label1);
			this->Name = L"Estacionamiento_CRUD";
			this->Text = L"Estacionamiento_CRUD";
			this->Load += gcnew System::EventHandler(this, &Estacionamiento_CRUD::Estacionamiento_CRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstacionamientos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dgvPersons_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   public: void ShowEstacionamientos () {
			   List<Estacionamiento^>^ EstacionamientoLista = Service::QueryAllEstacionamientos();
			   if (EstacionamientoLista != nullptr) {
				   dgvEstacionamientos->Rows->Clear();
				   for (int i = 0; i < EstacionamientoLista->Count; i++) {
					   dgvEstacionamientos->Rows->Add(gcnew array<String^>{
							   "" + EstacionamientoLista[i]->Id,
							   "" + EstacionamientoLista[i]->Ubicacion->Piso,
							   "" + EstacionamientoLista[i]->Ubicacion->NumeroEstacionamiento
					   });
				   }
			   }
		   }

private: System::Void btnAddEstacionamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	Estacionamiento^ estacionamiento = gcnew Estacionamiento();
	Sensor^ sensor = gcnew Sensor();
	Coordenadas^ coord = gcnew Coordenadas();

	
	if (txtId->Text->Trim() == "" || txtNumEst->Text->Trim() == "" || txtPiso->Text->Trim() == "") {
		MessageBox::Show("Los parámetros que contengan el símbolo * son obligatorios");
		return;
	}
	try {
		sensor->Id = Convert::ToInt32(txtId->Text);
		sensor->Detecta = false;
		estacionamiento->Id = Convert::ToInt32(txtId->Text);
		coord->NumeroEstacionamiento = Convert::ToInt32(txtNumEst->Text);
		coord->Piso = Convert::ToInt32(txtPiso->Text);

		estacionamiento->HoraInicio = "";
		estacionamiento->HoraSalida = "";

		estacionamiento->MiSensor = sensor;
		estacionamiento->Ubicacion = coord;

		Service::AddEstacionamiento(estacionamiento);
		ShowEstacionamientos();
		txtId->Text = "" + Service::UpdateEstacionamientoID();
	}
	catch (Exception^ ex) {
	}

}

private: System::Void Estacionamiento_CRUD_Load(System::Object^ sender, System::EventArgs^ e) {
	txtId->Text = "" + Service::UpdateEstacionamientoID();
	ShowEstacionamientos();
}

private: System::Void btnDeleteEstacionamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Service::DeleteAdministrador(Convert::ToInt32(txtId->Text->Trim()));
		ShowEstacionamientos();
		MessageBox::Show("Se ha eliminado el Estacionamiento");
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el estacionamiento por el siguiente motivo: \n" +
			ex->Message);
	}
}
private: System::Void btnNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
	txtId->Text = "" + Service::UpdateEstacionamientoID();
	txtNumEst->Text = "";
	txtPiso->Text = "";
}

private: System::Void dgvEstacionamientos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (dgvEstacionamientos->Rows[dgvEstacionamientos->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
		int id = Convert::ToInt32(dgvEstacionamientos->Rows[dgvEstacionamientos->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Estacionamiento^ estacionamiento = Service::QueryEstacionamientosbyId(id);
		txtId->Text = "" + estacionamiento->Id;
		txtPiso->Text = "" + estacionamiento->Ubicacion->Piso;
		txtNumEst->Text = "" + estacionamiento->Ubicacion->NumeroEstacionamiento;
	}
}

};
}
