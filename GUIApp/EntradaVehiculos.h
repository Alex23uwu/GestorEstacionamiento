#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionamientoService;
	using namespace Model;

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::ComboBox^ comboBoxVehiculo;

	private: System::Windows::Forms::Button^ btAgregar;
	private: System::Windows::Forms::DateTimePicker^ DateTimeVehiculo;

	private: System::Windows::Forms::Label^ label4;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelIngresoVehiculo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPlaca = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxVehiculo = (gcnew System::Windows::Forms::ComboBox());
			this->btAgregar = (gcnew System::Windows::Forms::Button());
			this->DateTimeVehiculo = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &EntradaVehiculos::timer1_Tick);
			// 
			// labelIngresoVehiculo
			// 
			this->labelIngresoVehiculo->AutoSize = true;
			this->labelIngresoVehiculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelIngresoVehiculo->Location = System::Drawing::Point(164, 99);
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
			this->label1->Location = System::Drawing::Point(21, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PLACA DEL VEHICULO";
			// 
			// txtPlaca
			// 
			this->txtPlaca->Location = System::Drawing::Point(167, 47);
			this->txtPlaca->Name = L"txtPlaca";
			this->txtPlaca->Size = System::Drawing::Size(133, 20);
			this->txtPlaca->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 99);
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
			this->label3->Location = System::Drawing::Point(363, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"TIPO DE VEHICULO";
			// 
			// comboBoxVehiculo
			// 
			this->comboBoxVehiculo->FormattingEnabled = true;
			this->comboBoxVehiculo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Moto", L"Auto" });
			this->comboBoxVehiculo->Location = System::Drawing::Point(504, 51);
			this->comboBoxVehiculo->Name = L"comboBoxVehiculo";
			this->comboBoxVehiculo->Size = System::Drawing::Size(123, 21);
			this->comboBoxVehiculo->TabIndex = 5;
			// 
			// btAgregar
			// 
			this->btAgregar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAgregar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btAgregar->Location = System::Drawing::Point(311, 126);
			this->btAgregar->Name = L"btAgregar";
			this->btAgregar->Size = System::Drawing::Size(151, 46);
			this->btAgregar->TabIndex = 6;
			this->btAgregar->Text = L"Agregar";
			this->btAgregar->UseVisualStyleBackColor = false;
			this->btAgregar->Click += gcnew System::EventHandler(this, &EntradaVehiculos::button1_Click);
			// 
			// DateTimeVehiculo
			// 
			this->DateTimeVehiculo->Location = System::Drawing::Point(93, 137);
			this->DateTimeVehiculo->Name = L"DateTimeVehiculo";
			this->DateTimeVehiculo->Size = System::Drawing::Size(175, 20);
			this->DateTimeVehiculo->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"FECHA";
			// 
			// EntradaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(682, 226);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DateTimeVehiculo);
			this->Controls->Add(this->btAgregar);
			this->Controls->Add(this->comboBoxVehiculo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPlaca);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelIngresoVehiculo);
			this->Name = L"EntradaVehiculos";
			this->Text = L"EntradaVehiculos";
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
		Vehiculo^ vehiculo = gcnew Vehiculo();
		DetalleTicket^ detalle = gcnew DetalleTicket();
		Ticket^ ticket = gcnew Ticket();
		vehiculo->Placa = txtPlaca->Text;
		vehiculo->Fecha = DateTimeVehiculo->Value;
		ticket->Detalle = detalle;
		ticket->GeneradoA = vehiculo;
		detalle->HoraEntrada = labelIngresoVehiculo->Text;
		EstacionamientoService::Service::AddTicket(ticket);
		EstacionamientoService::Service::AddVehiculo(vehiculo);
		MessageBox::Show("Se ha agregado el vehiculo de placa, " + vehiculo->Placa);
	}
};
}
