#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Reservacion
	/// </summary>
	public ref class Reservacion : public System::Windows::Forms::Form
	{
	public:
		Reservacion(void)
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
		~Reservacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dtpHoraEntrada;
	private: System::Windows::Forms::DateTimePicker^ dtpHoraSalida;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dtpHoraEntrada = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpHoraSalida = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HORA INICIO RESERVA:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"HORA FINAL RESERVA:";
			this->label2->Click += gcnew System::EventHandler(this, &Reservacion::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ESPACIOS DISPONIBLES:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(420, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"RESERVAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dtpHoraEntrada
			// 
			this->dtpHoraEntrada->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpHoraEntrada->Location = System::Drawing::Point(192, 26);
			this->dtpHoraEntrada->Name = L"dtpHoraEntrada";
			this->dtpHoraEntrada->Size = System::Drawing::Size(124, 20);
			this->dtpHoraEntrada->TabIndex = 4;
			this->dtpHoraEntrada->ValueChanged += gcnew System::EventHandler(this, &Reservacion::dtpHoraEntrada_ValueChanged);
			// 
			// dtpHoraSalida
			// 
			this->dtpHoraSalida->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpHoraSalida->Location = System::Drawing::Point(192, 71);
			this->dtpHoraSalida->Name = L"dtpHoraSalida";
			this->dtpHoraSalida->Size = System::Drawing::Size(124, 20);
			this->dtpHoraSalida->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(192, 116);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// Reservacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 168);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dtpHoraSalida);
			this->Controls->Add(this->dtpHoraEntrada);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Reservacion";
			this->Text = L"Reservacion";
			this->Load += gcnew System::EventHandler(this, &Reservacion::Reservacion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dtpHoraEntrada_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Reservacion_Load(System::Object^ sender, System::EventArgs^ e) {
	dtpHoraEntrada->CustomFormat = "HH:mm";
	dtpHoraEntrada->Value = DateTime::Now;
	dtpHoraSalida->CustomFormat = "HH:mm";
	dtpHoraSalida->Value = DateTime::Now;
}
};
}
