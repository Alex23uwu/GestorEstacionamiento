#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ txtHoraEntrada;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtHoraEntrada = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Placa de Vehículo";
			// 
			// txtPlacaVehiculo
			// 
			this->txtPlacaVehiculo->Location = System::Drawing::Point(162, 44);
			this->txtPlacaVehiculo->Name = L"txtPlacaVehiculo";
			this->txtPlacaVehiculo->Size = System::Drawing::Size(100, 20);
			this->txtPlacaVehiculo->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Hora de Entrada";
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->Location = System::Drawing::Point(41, 122);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(60, 13);
			this->lblHora->TabIndex = 3;
			this->lblHora->Text = L"HoraActual";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Generar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Pago Total";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &GenerarTicket::timer1_Tick);
			// 
			// txtHoraEntrada
			// 
			this->txtHoraEntrada->Location = System::Drawing::Point(162, 81);
			this->txtHoraEntrada->Name = L"txtHoraEntrada";
			this->txtHoraEntrada->Size = System::Drawing::Size(100, 20);
			this->txtHoraEntrada->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// GenerarTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(531, 425);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtHoraEntrada);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPlacaVehiculo);
			this->Controls->Add(this->label1);
			this->Name = L"GenerarTicket";
			this->Text = L"Generar Ticket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblHora->Text = (DateTime::Now).ToString("HH:mm:ss");
	}
};
}
