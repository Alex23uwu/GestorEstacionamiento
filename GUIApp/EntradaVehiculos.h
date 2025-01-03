#pragma once
#include "ComboBoxItem.h"
namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionamientoService;
	using namespace Model;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de EntradaVehiculos
	/// </summary>
	public ref class EntradaVehiculos : public System::Windows::Forms::Form
	{
	public:
		EntradaVehiculos(void)
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
		~EntradaVehiculos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::Label^ labelIngresoVehiculo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPlaca;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbTipoVehiculo;

	private: System::Windows::Forms::Button^ btAgregar;
	private: System::Windows::Forms::DateTimePicker^ DateTimeVehiculo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbEstacionamientos;



	private: System::Windows::Forms::Label^ label5;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelIngresoVehiculo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbTipoVehiculo = (gcnew System::Windows::Forms::ComboBox());
			this->btAgregar = (gcnew System::Windows::Forms::Button());
			this->DateTimeVehiculo = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbEstacionamientos = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &EntradaVehiculos::timer1_Tick);
			// 
			// labelIngresoVehiculo
			// 
			this->labelIngresoVehiculo->AutoSize = true;
			this->labelIngresoVehiculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelIngresoVehiculo->Location = System::Drawing::Point(154, 86);
			this->labelIngresoVehiculo->Name = L"labelIngresoVehiculo";
			this->labelIngresoVehiculo->Size = System::Drawing::Size(71, 13);
			this->labelIngresoVehiculo->TabIndex = 0;
			this->labelIngresoVehiculo->Text = L"tiempoHora";
			this->labelIngresoVehiculo->Click += gcnew System::EventHandler(this, &EntradaVehiculos::labelIngresoVehiculo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PLACA DEL VEHICULO";
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(164, 34);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(133, 20);
			this->txtPlaca->TabIndex = 2;
			this->txtPlaca->TextChanged += gcnew System::EventHandler(this, &EntradaVehiculos::txtPlaca_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"HORA DE INGRESO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(340, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"TIPO DE VEHICULO";
			// 
			// cmbTipoVehiculo
			// 
			this->cmbTipoVehiculo->FormattingEnabled = true;
			this->cmbTipoVehiculo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Moto", L"Auto" });
			this->cmbTipoVehiculo->Location = System::Drawing::Point(487, 38);
			this->cmbTipoVehiculo->Name = L"cmbTipoVehiculo";
			this->cmbTipoVehiculo->Size = System::Drawing::Size(133, 21);
			this->cmbTipoVehiculo->TabIndex = 5;
			// 
			// btAgregar
			// 
			this->btAgregar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAgregar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btAgregar->Location = System::Drawing::Point(285, 153);
			this->btAgregar->Name = L"btAgregar";
			this->btAgregar->Size = System::Drawing::Size(89, 47);
			this->btAgregar->TabIndex = 6;
			this->btAgregar->Text = L"Agregar";
			this->btAgregar->UseVisualStyleBackColor = false;
			this->btAgregar->Click += gcnew System::EventHandler(this, &EntradaVehiculos::button1_Click);
			// 
			// DateTimeVehiculo
			// 
			this->DateTimeVehiculo->Location = System::Drawing::Point(487, 80);
			this->DateTimeVehiculo->Name = L"DateTimeVehiculo";
			this->DateTimeVehiculo->Size = System::Drawing::Size(133, 20);
			this->DateTimeVehiculo->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(340, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"FECHA";
			// 
			// cmbEstacionamientos
			// 
			this->cmbEstacionamientos->FormattingEnabled = true;
			this->cmbEstacionamientos->Location = System::Drawing::Point(21, 155);
			this->cmbEstacionamientos->Name = L"cmbEstacionamientos";
			this->cmbEstacionamientos->Size = System::Drawing::Size(148, 21);
			this->cmbEstacionamientos->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Estacionamientos Disponibles";
			// 
			// EntradaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(636, 234);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbEstacionamientos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DateTimeVehiculo);
			this->Controls->Add(this->btAgregar);
			this->Controls->Add(this->cmbTipoVehiculo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelIngresoVehiculo);
			this->Name = L"EntradaVehiculos";
			this->Text = L"EntradaVehiculos";
			this->Load += gcnew System::EventHandler(this, &EntradaVehiculos::EntradaVehiculos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelIngresoVehiculo_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		labelIngresoVehiculo->Text = (DateTime::Now).ToString("   HH   :   mm   ");

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ placa = txtPlaca->Text->Trim();
			if (placa->Equals("")||cmbTipoVehiculo->Text->Equals("") ||cmbEstacionamientos->Text->Equals("")) {
				MessageBox::Show("Debe completar todos los par�metros");
				return;
			}
			//validacion que diga si el auto ya fue registrado y si se retira me permita volver a ingresarlo al sistema
			Vehiculo^ vehiculoValida = Service::QueryVehiculoByPlaca(placa);
			if (vehiculoValida != nullptr) {
				if(vehiculoValida->AsigandoA != nullptr){
					if (vehiculoValida->AsigandoA->HoraSalida == "") {
						throw gcnew InvalidOperationException("El auto a�n no ha salido del estacionamiento");
					}
				}	
			}

			//int IDEstacionamiento = Service::DetectarEstacionamientoMasProximoDisponible();
			int IDEstacionamiento= Int32::Parse(cmbEstacionamientos->Text);
			Vehiculo^ vehiculo = gcnew Vehiculo();
			DetalleTicket^ detalle = gcnew DetalleTicket();
			Ticket^ ticket = gcnew Ticket();
			//colocamos  el mismo id a sensor y estacionamiento  (sincronizamos)
			Estacionamiento^ estacionamiento = Service::QueryEstacionamientosbyId(IDEstacionamiento);
			Sensor^ sensor = Service::QuerySensorbyID(IDEstacionamiento);
			//llenamos los atributos de la variable SENSOR
			sensor->Detecta = true;
			//llenamos los atributos de la variable ESTACIONAMIENTO
			estacionamiento->MiSensor = sensor;
			estacionamiento->HoraInicio = labelIngresoVehiculo->Text;
			estacionamiento->HoraSalida = "";
			//llenamos los atributos de la variable VEHICULO
			vehiculo->AsigandoA = estacionamiento;
			vehiculo->Placa = txtPlaca->Text;
			vehiculo->TipoVehiculo = cmbTipoVehiculo->Text;
			//llenamos los atributos de TICKET
			ticket->GeneradoA = vehiculo;
			ticket->Id = Service::GeneracionIDTicket();
			//ticket->UsoPersonal = checkServicioLimpieza->Checked;

			detalle->HoraEntrada = labelIngresoVehiculo->Text;
			ticket->Detalle = detalle;

			EstacionamientoService::Service::AddTicket(ticket);
			if (vehiculoValida == nullptr) { // Si la placa no esta en la base de datos se a�ade uno nuevo
				vehiculo->Id = Service::QueryAllVehiculo()->Count + 1;//este id de vehiculo representa el n�mero de carros ingresados hasta la fecha
				EstacionamientoService::Service::AddVehiculo(vehiculo);
			}
			else {
				vehiculo->Id = vehiculoValida->Id;
				EstacionamientoService::Service::UpdateVehiculo(vehiculo);
			}
			EstacionamientoService::Service::UpdateSensor(sensor);
			EstacionamientoService::Service::UpdateEstacionamiento(estacionamiento);
			
			//ACTUALIZO EL cmbEstacionamiento
			cmbEstacionamientos->Items->Clear();
			LoadEstacionamientos();
			//limpio la ventana
			txtPlaca->Clear();
			cmbEstacionamientos->ResetText();
			cmbTipoVehiculo->ResetText();
			
		}
		catch(Exception^ ex){
			MessageBox::Show("No se ha podido registrar la placa por el siguiente motivo:\n" + ex->Message);
		}
	}
	public:

	void ClearControls() {
			   for each (Control ^ control in this->Controls) {
				   if (control->GetType() == TextBox::typeid) {
					   dynamic_cast<TextBox^>(control)->Text = "";
				   }
			   }
	}

	String^ PlacaExistente() {
		String^ placa = txtPlaca->Text;
		List<Cliente^>^ listacliente = Service::QueryAllClientes();
		for (int i = 0; i < listacliente->Count; i++) {
			if (listacliente[i]->MiVehiculo->Placa == placa) {
				Vehiculo^ vehiculo = listacliente[i]->MiVehiculo;
				return vehiculo->Modelo;
			}
		}
		return "";
		
	}

private: System::Void EntradaVehiculos_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadEstacionamientos();
}
	   public:
		   void LoadEstacionamientos() {
			   List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
			   for each (Estacionamiento ^ estacionamiento in estacionamientoLista) {
				   if (estacionamiento->MiSensor->Detecta == false) {
					   ComboBoxItem^ item = gcnew ComboBoxItem(estacionamiento->Id);
					   cmbEstacionamientos->Items->Add(item);
				   }
			   }
		   }
	private: System::Void txtPlaca_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ modelo = PlacaExistente();

		if (modelo != "") {
			if (modelo == "Auto") {
				cmbTipoVehiculo->SelectedIndex = 0;
			}
			else {
				cmbTipoVehiculo->SelectedIndex = 1;
			}
		}

	}
};
}
