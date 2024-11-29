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

	/// <summary>
	/// Resumen de SensorExterno
	/// </summary>
	public ref class SensorExterno : public System::Windows::Forms::Form
	{
	public:
		SerialPort^ Port = gcnew SerialPort();
		bool EstaCerrado = false;
		SensorExterno(void) {
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(140, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(343, 319);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// SensorExterno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 518);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SensorExterno";
			this->Text = L"SensorExterno";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SensorExterno::SensorExterno_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SensorExterno::SensorExterno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void EscucharSerial() {
			while (!EstaCerrado) {

				try {
					String^ longitud = Port->ReadLine();
					int longitudINT = Convert::ToInt32(longitud);
					if (longitudINT < 10) {
						pictureBox1->ImageLocation = "Imagenes/Espacio_Lleno.png";
						
					} 
					else {
						pictureBox1->ImageLocation = "Imagenes/Espacio_Disponible.png";
					}

					Thread::Sleep(100);
										
				}
				catch (Exception^ ex) {
					Console::WriteLine("Error " + ex->Message);
				}

			}
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
	};
}
