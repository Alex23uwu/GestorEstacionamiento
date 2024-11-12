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

	/// <summary>
	/// Resumen de GenerarTicket
	/// </summary>
	public ref class GenerarTicket : public System::Windows::Forms::Form
	{
	public:
		GenerarTicket(void)
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
		~GenerarTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPlacaVehiculo;


	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ LabelTimeOut;







	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPlacaVehiculo = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->LabelTimeOut = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PLACA DE VEHICULO";
			// 
			// txtPlacaVehiculo
			// 
			this->txtPlacaVehiculo->Location = System::Drawing::Point(177, 44);
			this->txtPlacaVehiculo->Name = L"txtPlacaVehiculo";
			this->txtPlacaVehiculo->Size = System::Drawing::Size(100, 20);
			this->txtPlacaVehiculo->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Generar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GenerarTicket::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"HORA DE SALIDA";
			this->label4->Click += gcnew System::EventHandler(this, &GenerarTicket::label4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &GenerarTicket::timer1_Tick_1);
			// 
			// LabelTimeOut
			// 
			this->LabelTimeOut->AutoSize = true;
			this->LabelTimeOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTimeOut->Location = System::Drawing::Point(174, 94);
			this->LabelTimeOut->Name = L"LabelTimeOut";
			this->LabelTimeOut->Size = System::Drawing::Size(71, 13);
			this->LabelTimeOut->TabIndex = 13;
			this->LabelTimeOut->Text = L"tiempoHora";
			// 
			// GenerarTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(407, 185);
			this->Controls->Add(this->LabelTimeOut);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPlacaVehiculo);
			this->Controls->Add(this->label1);
			this->Name = L"GenerarTicket";
			this->Text = L"Generar Ticket";
			this->Load += gcnew System::EventHandler(this, &GenerarTicket::GenerarTicket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
			String^ placa = txtPlacaVehiculo->Text;

			Ticket^ ticket = EstacionamientoService::Service::QueryTicketbyPlaca(placa);
			
			if (ticket == nullptr) {
				throw gcnew InvalidOperationException("La placa no figura en la base de datos.");
			}
			if(ticket->GeneradoA->AsigandoA->MiSensor->Detecta==false){//Si generamos el ticket a la misma placa, cuyo sensor ya esta en false no permitira cobrar 
				txtPlacaVehiculo->Clear();
				throw gcnew InvalidOperationException("La placa no se encuentra en el estacionamiento.");
			}
			else {
				//llenamos los atributos faltantes de ticket
				ticket->Detalle->HoraSalida = LabelTimeOut->Text;
				ticket->Dia = System::DateTime::Now;
				//direccionamos al sensor que debe apagarse
				Vehiculo^ vehiculo = Service::QueryVehiculoByPlaca(placa);
				Estacionamiento^ estacionamiento = Service::QueryEstacionamientosbyId(vehiculo->AsigandoA->Id);
				Sensor^ sensor = Service::QuerySensorbyID(estacionamiento->MiSensor->Id);
				sensor->Detecta = false;//apagamos el sensor 
				vehiculo->AsigandoA = estacionamiento;
				estacionamiento->MiSensor = sensor;
				estacionamiento->HoraSalida = LabelTimeOut->Text;
				ticket->GeneradoA = vehiculo;//actualiza la variable ticket
				//estacionamiento->HoraInicio = "";	

				ticket->CantTotal = EstacionamientoService::Service::CalculoPago(5, 0.18, ticket->Detalle);
				String^ Boleta = "******** TICKET ********\n";
				Boleta += "Día: " + ticket->Dia.ToString("dd/MM/yyyy") + "\n";
				Boleta += "Hora de Ingreso: " + ticket->Detalle->HoraEntrada + "\n";
				Boleta += "Hora de Salida: " + ticket->Detalle->HoraSalida + "\n";
				Boleta += "Tiempo Consumido: " + ticket->Detalle->HorasConsumidas + "\n";
				Boleta += "-------------------------\n";
				Boleta += "Tarifa Base (pago por hora): S/ " + ticket->Detalle->Tarifa.ToString("F2") + "\n";
				Boleta += "IGV (18%): S/ " + ticket->Detalle->IGV.ToString("F2") + "\n";
				Boleta += "Pago Tarifa: S/ " + ticket->Detalle->Cantidad.ToString("F2") + "\n";
				Boleta += "-------------------------\n";
				Boleta += "Pago Total: S/ " + ticket->CantTotal.ToString("F2") + "\n";
				Boleta += "*************************\n";
				MessageBox::Show(Boleta, "Ticket de Servicio", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Service::UpdateSensor(sensor);
				Service::UpdateEstacionamiento(estacionamiento);
				Service::UpdateVehiculo(vehiculo);
				Service::UpdateTicket(ticket);
				txtPlacaVehiculo->Clear();
			}
		
		/*
		catch (Exception^ ex){
			MessageBox::Show("No se ha podido generar el Ticket por el siguiente motivo:\n" + ex->Message);
		}
		*/
	}
	private: System::Void GenerarTicket_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		UpdateTime();
	}
		   void UpdateTime() {
			   LabelTimeOut->Text = System::DateTime::Now.ToString("   HH   :   mm   "); // Formato de hora
		   }
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
