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
	/// Resumen de ReservacionesList
	/// </summary>
	public ref class ReservacionesList : public System::Windows::Forms::Form
	{
	public:
		ReservacionesList(void)
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
		~ReservacionesList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvReservacion;
	protected:

	protected:

	private: System::Windows::Forms::Label^ txtName;
	private: System::Windows::Forms::Label^ txtPlaca;
	private: System::Windows::Forms::Label^ txtTime;
	private: System::Windows::Forms::Button^ btnConfirmar;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtHE;







	private: System::Windows::Forms::TextBox^ txtPlaque;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClienteID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReservacionName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReservacionPlaca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReservacionHora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReservacionEstacionamiento;

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
			this->dgvReservacion = (gcnew System::Windows::Forms::DataGridView());
			this->ClienteID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReservacionName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReservacionPlaca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReservacionHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReservacionEstacionamiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtName = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::Label());
			this->txtTime = (gcnew System::Windows::Forms::Label());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtHE = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaque = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReservacion))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvReservacion
			// 
			this->dgvReservacion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReservacion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ClienteID,
					this->ReservacionName, this->ReservacionPlaca, this->ReservacionHora, this->ReservacionEstacionamiento
			});
			this->dgvReservacion->Location = System::Drawing::Point(7, 12);
			this->dgvReservacion->Name = L"dgvReservacion";
			this->dgvReservacion->Size = System::Drawing::Size(542, 313);
			this->dgvReservacion->TabIndex = 0;
			this->dgvReservacion->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReservacionesList::dataGridView1_CellClick);
			// 
			// ClienteID
			// 
			this->ClienteID->HeaderText = L"ID Cliente";
			this->ClienteID->Name = L"ClienteID";
			// 
			// ReservacionName
			// 
			this->ReservacionName->HeaderText = L"Nombre";
			this->ReservacionName->Name = L"ReservacionName";
			// 
			// ReservacionPlaca
			// 
			this->ReservacionPlaca->HeaderText = L"Placa";
			this->ReservacionPlaca->Name = L"ReservacionPlaca";
			// 
			// ReservacionHora
			// 
			this->ReservacionHora->HeaderText = L"Hora Inicio";
			this->ReservacionHora->Name = L"ReservacionHora";
			// 
			// ReservacionEstacionamiento
			// 
			this->ReservacionEstacionamiento->HeaderText = L"Estacionamiento";
			this->ReservacionEstacionamiento->Name = L"ReservacionEstacionamiento";
			// 
			// txtName
			// 
			this->txtName->AutoSize = true;
			this->txtName->Location = System::Drawing::Point(555, 12);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(47, 13);
			this->txtName->TabIndex = 1;
			this->txtName->Text = L"Nombre:";
			// 
			// txtPlaca
			// 
			this->txtPlaca->AutoSize = true;
			this->txtPlaca->Location = System::Drawing::Point(555, 83);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(37, 13);
			this->txtPlaca->TabIndex = 2;
			this->txtPlaca->Text = L"Placa:";
			// 
			// txtTime
			// 
			this->txtTime->AutoSize = true;
			this->txtTime->Location = System::Drawing::Point(555, 170);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(76, 13);
			this->txtTime->TabIndex = 3;
			this->txtTime->Text = L"Hora Reserva:";
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Location = System::Drawing::Point(558, 274);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(137, 51);
			this->btnConfirmar->TabIndex = 4;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(569, 42);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(112, 20);
			this->txtNombre->TabIndex = 5;
			// 
			// txtHE
			// 
			this->txtHE->Location = System::Drawing::Point(569, 213);
			this->txtHE->Name = L"txtHE";
			this->txtHE->Size = System::Drawing::Size(112, 20);
			this->txtHE->TabIndex = 6;
			// 
			// txtPlaque
			// 
			this->txtPlaque->Location = System::Drawing::Point(569, 120);
			this->txtPlaque->Name = L"txtPlaque";
			this->txtPlaque->Size = System::Drawing::Size(112, 20);
			this->txtPlaque->TabIndex = 7;
			// 
			// ReservacionesList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 365);
			this->Controls->Add(this->txtPlaque);
			this->Controls->Add(this->txtHE);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->btnConfirmar);
			this->Controls->Add(this->txtTime);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->dgvReservacion);
			this->Name = L"ReservacionesList";
			this->Text = L"ReservacionesList";
			this->Load += gcnew System::EventHandler(this, &ReservacionesList::ReservacionesList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReservacion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvReservacion->Rows[dgvReservacion->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {
			int ClienteID = Convert::ToInt32((dgvReservacion->Rows[dgvReservacion->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString()));
			Cliente^ cliente = Service::QueryClienteById(ClienteID);
			txtNombre->Text = cliente->Nombre;
			txtHE->Text = cliente->MiReservacion->InicioReserva;
			txtPlaque->Text = cliente->MiVehiculo->Placa;
		}
	}
	public:
		void ShowReservaciones() {
			List <Cliente^>^ ClienteLista = Service::QueryAllClientes();
			if (ClienteLista != nullptr) {
				dgvReservacion->Rows->Clear();
				for (int i = 0; i < ClienteLista->Count; i++) {
					if (ClienteLista[i]->LugarReservado == true) {
						dgvReservacion->Rows->Add(gcnew array<String^>{
								Convert::ToString(ClienteLista[i]->Id),
								ClienteLista[i]->Nombre,
								ClienteLista[i]->MiVehiculo->Placa,
								ClienteLista[i]->MiReservacion->InicioReserva,
								Convert::ToString(ClienteLista[i]->MiVehiculo->AsigandoA->Id),
						});
					}
				}
			}
		}
private: System::Void ReservacionesList_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowReservaciones();
}
};
}
