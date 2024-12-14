#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace Model;

	/// <summary>
	/// Resumen de SensorExterno
	/// </summary>
	public ref class SensorExterno : public System::Windows::Forms::Form
	{
	public:
		SerialPort^ Port = gcnew SerialPort();
		bool EstaCerrado = false;
		DateTime HoraEntrada, HoraSalida;
		int minutos;
	private: System::Windows::Forms::Label^ label1;
	public:
		Sensor^ sensorA = gcnew Sensor();
		SensorExterno(void) {
			sensorA->Detecta = false;
			InitializeComponent();
			Port->PortName = "COM6";
			Port->BaudRate = 9600;
			Port->ReadTimeout = 500;

			Port->Open();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SensorExterno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(99, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(382, 338);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SensorExterno::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Detección de sensor";
			// 
			// SensorExterno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 518);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SensorExterno";
			this->Text = L"Visualización de Sensor";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SensorExterno::SensorExterno_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SensorExterno::SensorExterno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void EscucharSerial() {
			while (!EstaCerrado) {

				try {
					String^ longitud = Port->ReadLine();
					int longitudINT = Convert::ToInt32(longitud);

					if (longitudINT < 10) {
						pictureBox1->ImageLocation = "Imagenes/Espacio_Lleno.png";
						pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
						if (sensorA->Detecta == false) {
							sensorA->Detecta = true;
							HoraEntrada = DateTime::Now;
						}
						
					} 
					else {
						pictureBox1->ImageLocation = "Imagenes/Espacio_Disponible.png";
						pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
						if (sensorA->Detecta == true) {
							sensorA->Detecta = false;
							HoraSalida = DateTime::Now;
							minutos = (HoraSalida.Ticks - HoraEntrada.Ticks) / 10000000;
							MostrarMensaje(minutos);
						}
					}

					Thread::Sleep(100);
										
				}
				catch (Exception^ ex) {
					Console::WriteLine("Error " + ex->Message);
				}

			}
		}

		void MostrarMensaje(int minutos) {
			MessageBox::Show("El cliente estuvo durante " + minutos + " segundos");
		}

	private: System::Void SensorExterno_Load(System::Object^ sender, System::EventArgs^ e) {
		Thread^ hilo = gcnew Thread(gcnew ThreadStart(this, &SensorExterno::EscucharSerial));
		hilo->Start();
	}
	private: System::Void SensorExterno_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (Port->IsOpen) {
			Port->Close();
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
