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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtID;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
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
			this->dgvReservacion->Location = System::Drawing::Point(9, 15);
			this->dgvReservacion->Margin = System::Windows::Forms::Padding(4);
			this->dgvReservacion->Name = L"dgvReservacion";
			this->dgvReservacion->ReadOnly = true;
			this->dgvReservacion->RowHeadersWidth = 51;
			this->dgvReservacion->Size = System::Drawing::Size(723, 421);
			this->dgvReservacion->TabIndex = 0;
			this->dgvReservacion->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReservacionesList::dataGridView1_CellClick);
			// 
			// ClienteID
			// 
			this->ClienteID->HeaderText = L"ID Cliente";
			this->ClienteID->MinimumWidth = 6;
			this->ClienteID->Name = L"ClienteID";
			this->ClienteID->ReadOnly = true;
			this->ClienteID->Width = 125;
			// 
			// ReservacionName
			// 
			this->ReservacionName->HeaderText = L"Nombre";
			this->ReservacionName->MinimumWidth = 6;
			this->ReservacionName->Name = L"ReservacionName";
			this->ReservacionName->ReadOnly = true;
			this->ReservacionName->Width = 125;
			// 
			// ReservacionPlaca
			// 
			this->ReservacionPlaca->HeaderText = L"Placa";
			this->ReservacionPlaca->MinimumWidth = 6;
			this->ReservacionPlaca->Name = L"ReservacionPlaca";
			this->ReservacionPlaca->ReadOnly = true;
			this->ReservacionPlaca->Width = 125;
			// 
			// ReservacionHora
			// 
			this->ReservacionHora->HeaderText = L"Hora Inicio";
			this->ReservacionHora->MinimumWidth = 6;
			this->ReservacionHora->Name = L"ReservacionHora";
			this->ReservacionHora->ReadOnly = true;
			this->ReservacionHora->Width = 125;
			// 
			// ReservacionEstacionamiento
			// 
			this->ReservacionEstacionamiento->HeaderText = L"Estacionamiento";
			this->ReservacionEstacionamiento->MinimumWidth = 6;
			this->ReservacionEstacionamiento->Name = L"ReservacionEstacionamiento";
			this->ReservacionEstacionamiento->ReadOnly = true;
			this->ReservacionEstacionamiento->Width = 125;
			// 
			// txtName
			// 
			this->txtName->AutoSize = true;
			this->txtName->Location = System::Drawing::Point(760, 105);
			this->txtName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(59, 16);
			this->txtName->TabIndex = 1;
			this->txtName->Text = L"Nombre:";
			// 
			// txtPlaca
			// 
			this->txtPlaca->AutoSize = true;
			this->txtPlaca->Location = System::Drawing::Point(760, 185);
			this->txtPlaca->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(45, 16);
			this->txtPlaca->TabIndex = 2;
			this->txtPlaca->Text = L"Placa:";
			// 
			// txtTime
			// 
			this->txtTime->AutoSize = true;
			this->txtTime->Location = System::Drawing::Point(760, 270);
			this->txtTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(95, 16);
			this->txtTime->TabIndex = 3;
			this->txtTime->Text = L"Hora Reserva:";
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->Location = System::Drawing::Point(779, 356);
			this->btnConfirmar->Margin = System::Windows::Forms::Padding(4);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(183, 63);
			this->btnConfirmar->TabIndex = 4;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = true;
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &ReservacionesList::btnConfirmar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(794, 146);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(148, 22);
			this->txtNombre->TabIndex = 5;
			// 
			// txtHE
			// 
			this->txtHE->Location = System::Drawing::Point(794, 305);
			this->txtHE->Margin = System::Windows::Forms::Padding(4);
			this->txtHE->Name = L"txtHE";
			this->txtHE->Size = System::Drawing::Size(148, 22);
			this->txtHE->TabIndex = 6;
			// 
			// txtPlaque
			// 
			this->txtPlaque->Location = System::Drawing::Point(794, 219);
			this->txtPlaque->Margin = System::Windows::Forms::Padding(4);
			this->txtPlaque->Name = L"txtPlaque";
			this->txtPlaque->Size = System::Drawing::Size(148, 22);
			this->txtPlaque->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(760, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID:";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(794, 62);
			this->txtID->Margin = System::Windows::Forms::Padding(4);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(148, 22);
			this->txtID->TabIndex = 9;
			// 
			// ReservacionesList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 449);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPlaque);
			this->Controls->Add(this->txtHE);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->btnConfirmar);
			this->Controls->Add(this->txtTime);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->dgvReservacion);
			this->Margin = System::Windows::Forms::Padding(4);
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
			txtID->Text = Convert::ToString(cliente->Id);
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
					if (ClienteLista[i]->LugarReservado == true && ClienteLista[i]->MiReservacion->Completada == false) {
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
private: System::Void btnConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {
	/*DetalleTicket^ detalle = gcnew DetalleTicket();
	Ticket^ ticket = gcnew Ticket();
	Cliente^ cliente = Service::QueryClienteById(Convert::ToInt32(txtID->Text));
	Vehiculo^ vehiculo = cliente->MiVehiculo;
	Model::Reservacion^ reserva = cliente->MiReservacion;
	reserva->Completada = true;
	//colocamos  el mismo id a sensor y estacionamiento  (sincronizamos)
	Estacionamiento^ estacionamiento = vehiculo->AsigandoA;
	Sensor^ sensor = estacionamiento->MiSensor;
	//llenamos los atributos de la variable ESTACIONAMIENTO
	estacionamiento->HoraInicio = cliente->MiReservacion->InicioReserva;
	estacionamiento->HoraSalida = "";
	//llenamos los atributos de TICKET
	ticket->GeneradoA = vehiculo;
	ticket->Id = Service::GeneracionIDTicket();
	detalle->HoraEntrada = estacionamiento->HoraInicio;
	ticket->Detalle = detalle;
	cliente->LugarReservado = false;
	EstacionamientoService::Service::AddTicket(ticket);
	EstacionamientoService::Service::UpdateVehiculo(vehiculo);
	EstacionamientoService::Service::UpdateEstacionamiento(estacionamiento);
	EstacionamientoService::Service::UpdateReserva(reserva);
	EstacionamientoService::Service::UpdateCliente(cliente);
	MessageBox::Show("Se confirmo la reserva");
	ShowReservaciones();*/

	DetalleTicket^ detalle = gcnew DetalleTicket();
	Ticket^ ticket = gcnew Ticket();
	Cliente^ cliente = Service::QueryClienteById(Convert::ToInt32(txtID->Text));
	Vehiculo^ vehiculo = cliente->MiVehiculo;
	Model::Reservacion^ reserva = cliente->MiReservacion;
	reserva->Completada = true;
	Estacionamiento^ estacionamiento = vehiculo->AsigandoA;
	//llenamos los atributos de la variable ESTACIONAMIENTO
	//estacionamiento->HoraInicio = cliente->MiReservacion->InicioReserva;
	//estacionamiento->HoraSalida = "";
	//llenamos los atributos de la variable VEHICULO
	vehiculo->AsigandoA = estacionamiento;
	//llenamos los atributos de TICKET
	ticket->GeneradoA = cliente->MiVehiculo;
	ticket->Id = Service::GeneracionIDTicket();
	detalle->HoraEntrada = cliente->MiReservacion->InicioReserva;
	ticket->Detalle = detalle;
	cliente->MiReservacion = reserva;
	EstacionamientoService::Service::AddTicket(ticket);
	EstacionamientoService::Service::UpdateVehiculo(vehiculo);
	EstacionamientoService::Service::UpdateEstacionamiento(estacionamiento);
	EstacionamientoService::Service::UpdateReserva(reserva);
	EstacionamientoService::Service::UpdateCliente(cliente);
	MessageBox::Show("Se confirmo la reserva");
	ShowReservaciones();
	ClearControls();
}
	   public:
		   void ClearControls() {
			   for each (Control ^ control in this->Controls) {
				   if (control->GetType() == TextBox::typeid) {
					   dynamic_cast<TextBox^>(control)->Text = "";
				   }
			   }
		   }
};
}
