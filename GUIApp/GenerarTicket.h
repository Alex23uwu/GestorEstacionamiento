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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtHoraEntrada;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPlacaVehiculo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtHoraEntrada = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Generar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GenerarTicket::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Pago Total";
			// 
			// txtHoraEntrada
			// 
			this->txtHoraEntrada->Location = System::Drawing::Point(162, 81);
			this->txtHoraEntrada->Name = L"txtHoraEntrada";
			this->txtHoraEntrada->ReadOnly = true;
			this->txtHoraEntrada->Size = System::Drawing::Size(100, 20);
			this->txtHoraEntrada->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 188);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Hora de Salida";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tiempo Consumido";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 155);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// GenerarTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(495, 345);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtHoraEntrada);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
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
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
