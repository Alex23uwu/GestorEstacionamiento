#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Model;
	using namespace EstacionamientoService;

	/// <summary>
	/// Resumen de InterfazVistaVehiculos
	/// </summary>
	public ref class InterfazVistaVehiculos : public System::Windows::Forms::Form
	{
	public:
		InterfazVistaVehiculos(void)
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
		~InterfazVistaVehiculos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imgListaEstacionamiento;
	private: System::Windows::Forms::PictureBox^ est1;


	private: System::Windows::Forms::PictureBox^ est2;
	private: System::Windows::Forms::PictureBox^ est4;
	private: System::Windows::Forms::PictureBox^ est3;
	private: System::Windows::Forms::PictureBox^ est8;









	private: System::Windows::Forms::PictureBox^ est7;

	private: System::Windows::Forms::PictureBox^ est6;

	private: System::Windows::Forms::PictureBox^ est5;
	private: System::Windows::Forms::PictureBox^ est16;


















	private: System::Windows::Forms::PictureBox^ est15;

	private: System::Windows::Forms::PictureBox^ est14;

	private: System::Windows::Forms::PictureBox^ est13;

	private: System::Windows::Forms::PictureBox^ est12;









	private: System::Windows::Forms::PictureBox^ est11;

	private: System::Windows::Forms::PictureBox^ est10;

	private: System::Windows::Forms::PictureBox^ est9;

	private: System::Windows::Forms::GroupBox^ imgBox;
	private: System::Windows::Forms::Button^ btnActualizarVehiculos;


	protected:

	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfazVistaVehiculos::typeid));
			this->imgListaEstacionamiento = (gcnew System::Windows::Forms::ImageList(this->components));
			this->est1 = (gcnew System::Windows::Forms::PictureBox());
			this->est2 = (gcnew System::Windows::Forms::PictureBox());
			this->est4 = (gcnew System::Windows::Forms::PictureBox());
			this->est3 = (gcnew System::Windows::Forms::PictureBox());
			this->est8 = (gcnew System::Windows::Forms::PictureBox());
			this->est7 = (gcnew System::Windows::Forms::PictureBox());
			this->est6 = (gcnew System::Windows::Forms::PictureBox());
			this->est5 = (gcnew System::Windows::Forms::PictureBox());
			this->est16 = (gcnew System::Windows::Forms::PictureBox());
			this->est15 = (gcnew System::Windows::Forms::PictureBox());
			this->est14 = (gcnew System::Windows::Forms::PictureBox());
			this->est13 = (gcnew System::Windows::Forms::PictureBox());
			this->est12 = (gcnew System::Windows::Forms::PictureBox());
			this->est11 = (gcnew System::Windows::Forms::PictureBox());
			this->est10 = (gcnew System::Windows::Forms::PictureBox());
			this->est9 = (gcnew System::Windows::Forms::PictureBox());
			this->imgBox = (gcnew System::Windows::Forms::GroupBox());
			this->btnActualizarVehiculos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est9))->BeginInit();
			this->imgBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// imgListaEstacionamiento
			// 
			this->imgListaEstacionamiento->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imgListaEstacionamiento.ImageStream")));
			this->imgListaEstacionamiento->TransparentColor = System::Drawing::Color::Transparent;
			this->imgListaEstacionamiento->Images->SetKeyName(0, L"Espacio_Disponible.png");
			this->imgListaEstacionamiento->Images->SetKeyName(1, L"Espacio_Lleno.png");
			this->imgListaEstacionamiento->Images->SetKeyName(2, L"Espacio_Reservado.png");
			// 
			// est1
			// 
			this->est1->Location = System::Drawing::Point(9, 4);
			this->est1->Name = L"est1";
			this->est1->Size = System::Drawing::Size(90, 90);
			this->est1->TabIndex = 0;
			this->est1->TabStop = false;
			// 
			// est2
			// 
			this->est2->Location = System::Drawing::Point(105, 4);
			this->est2->Name = L"est2";
			this->est2->Size = System::Drawing::Size(90, 90);
			this->est2->TabIndex = 1;
			this->est2->TabStop = false;
			// 
			// est4
			// 
			this->est4->Location = System::Drawing::Point(297, 4);
			this->est4->Name = L"est4";
			this->est4->Size = System::Drawing::Size(90, 90);
			this->est4->TabIndex = 3;
			this->est4->TabStop = false;
			// 
			// est3
			// 
			this->est3->Location = System::Drawing::Point(201, 4);
			this->est3->Name = L"est3";
			this->est3->Size = System::Drawing::Size(90, 90);
			this->est3->TabIndex = 2;
			this->est3->TabStop = false;
			// 
			// est8
			// 
			this->est8->Location = System::Drawing::Point(297, 100);
			this->est8->Name = L"est8";
			this->est8->Size = System::Drawing::Size(90, 90);
			this->est8->TabIndex = 15;
			this->est8->TabStop = false;
			// 
			// est7
			// 
			this->est7->Location = System::Drawing::Point(201, 100);
			this->est7->Name = L"est7";
			this->est7->Size = System::Drawing::Size(90, 90);
			this->est7->TabIndex = 14;
			this->est7->TabStop = false;
			// 
			// est6
			// 
			this->est6->Location = System::Drawing::Point(105, 100);
			this->est6->Name = L"est6";
			this->est6->Size = System::Drawing::Size(90, 90);
			this->est6->TabIndex = 13;
			this->est6->TabStop = false;
			// 
			// est5
			// 
			this->est5->Location = System::Drawing::Point(9, 100);
			this->est5->Name = L"est5";
			this->est5->Size = System::Drawing::Size(90, 90);
			this->est5->TabIndex = 12;
			this->est5->TabStop = false;
			// 
			// est16
			// 
			this->est16->Location = System::Drawing::Point(297, 330);
			this->est16->Name = L"est16";
			this->est16->Size = System::Drawing::Size(90, 90);
			this->est16->TabIndex = 39;
			this->est16->TabStop = false;
			// 
			// est15
			// 
			this->est15->Location = System::Drawing::Point(201, 330);
			this->est15->Name = L"est15";
			this->est15->Size = System::Drawing::Size(90, 90);
			this->est15->TabIndex = 38;
			this->est15->TabStop = false;
			// 
			// est14
			// 
			this->est14->Location = System::Drawing::Point(105, 330);
			this->est14->Name = L"est14";
			this->est14->Size = System::Drawing::Size(90, 90);
			this->est14->TabIndex = 37;
			this->est14->TabStop = false;
			// 
			// est13
			// 
			this->est13->Location = System::Drawing::Point(9, 330);
			this->est13->Name = L"est13";
			this->est13->Size = System::Drawing::Size(90, 90);
			this->est13->TabIndex = 36;
			this->est13->TabStop = false;
			// 
			// est12
			// 
			this->est12->Location = System::Drawing::Point(297, 234);
			this->est12->Name = L"est12";
			this->est12->Size = System::Drawing::Size(90, 90);
			this->est12->TabIndex = 27;
			this->est12->TabStop = false;
			// 
			// est11
			// 
			this->est11->Location = System::Drawing::Point(201, 234);
			this->est11->Name = L"est11";
			this->est11->Size = System::Drawing::Size(90, 90);
			this->est11->TabIndex = 26;
			this->est11->TabStop = false;
			// 
			// est10
			// 
			this->est10->Location = System::Drawing::Point(105, 234);
			this->est10->Name = L"est10";
			this->est10->Size = System::Drawing::Size(90, 90);
			this->est10->TabIndex = 25;
			this->est10->TabStop = false;
			// 
			// est9
			// 
			this->est9->Location = System::Drawing::Point(9, 234);
			this->est9->Name = L"est9";
			this->est9->Size = System::Drawing::Size(90, 90);
			this->est9->TabIndex = 24;
			this->est9->TabStop = false;
			// 
			// imgBox
			// 
			this->imgBox->Controls->Add(this->est16);
			this->imgBox->Controls->Add(this->est15);
			this->imgBox->Controls->Add(this->est14);
			this->imgBox->Controls->Add(this->est13);
			this->imgBox->Controls->Add(this->est12);
			this->imgBox->Controls->Add(this->est11);
			this->imgBox->Controls->Add(this->est10);
			this->imgBox->Controls->Add(this->est9);
			this->imgBox->Controls->Add(this->est8);
			this->imgBox->Controls->Add(this->est7);
			this->imgBox->Controls->Add(this->est6);
			this->imgBox->Controls->Add(this->est5);
			this->imgBox->Controls->Add(this->est4);
			this->imgBox->Controls->Add(this->est3);
			this->imgBox->Controls->Add(this->est2);
			this->imgBox->Controls->Add(this->est1);
			this->imgBox->Location = System::Drawing::Point(30, 34);
			this->imgBox->Name = L"imgBox";
			this->imgBox->Size = System::Drawing::Size(398, 428);
			this->imgBox->TabIndex = 48;
			this->imgBox->TabStop = false;
			// 
			// btnActualizarVehiculos
			// 
			this->btnActualizarVehiculos->Location = System::Drawing::Point(461, 38);
			this->btnActualizarVehiculos->Name = L"btnActualizarVehiculos";
			this->btnActualizarVehiculos->Size = System::Drawing::Size(144, 46);
			this->btnActualizarVehiculos->TabIndex = 49;
			this->btnActualizarVehiculos->Text = L"Actualizar";
			this->btnActualizarVehiculos->UseVisualStyleBackColor = true;
			this->btnActualizarVehiculos->Click += gcnew System::EventHandler(this, &InterfazVistaVehiculos::btnActualizarVehiculos_Click);
			// 
			// InterfazVistaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 516);
			this->Controls->Add(this->btnActualizarVehiculos);
			this->Controls->Add(this->imgBox);
			this->Name = L"InterfazVistaVehiculos";
			this->Text = L"InterfazVistaVehiculos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est9))->EndInit();
			this->imgBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnActualizarVehiculos_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
		if (estacionamientoLista[0]->MiSensor->Detecta == false) est1->Image = imgListaEstacionamiento->Images[0];
		else est1->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[1]->MiSensor->Detecta == false) est2->Image = imgListaEstacionamiento->Images[0];
		else est2->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[2]->MiSensor->Detecta == false) est3->Image = imgListaEstacionamiento->Images[0];
		else est3->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[3]->MiSensor->Detecta == false) est4->Image = imgListaEstacionamiento->Images[0];
		else est4->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[4]->MiSensor->Detecta == false) est5->Image = imgListaEstacionamiento->Images[0];
		else est5->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[5]->MiSensor->Detecta == false) est6->Image = imgListaEstacionamiento->Images[0];
		else est6->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[6]->MiSensor->Detecta == false) est7->Image = imgListaEstacionamiento->Images[0];
		else est7->Image = imgListaEstacionamiento->Images[1];

		if (estacionamientoLista[7]->MiSensor->Detecta == false) est8->Image = imgListaEstacionamiento->Images[0];
		else est8->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[8]->MiSensor->Detecta == false) est9->Image = imgListaEstacionamiento->Images[0];
		else est9->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[9]->MiSensor->Detecta == false) est10->Image = imgListaEstacionamiento->Images[0];
		else est10->Image = imgListaEstacionamiento->Images[1];

		if (estacionamientoLista[10]->MiSensor->Detecta == false) est11->Image = imgListaEstacionamiento->Images[0];
		else est11->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[11]->MiSensor->Detecta == false) est12->Image = imgListaEstacionamiento->Images[0];
		else est12->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[12]->MiSensor->Detecta == false) est13->Image = imgListaEstacionamiento->Images[0];
		else est13->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[13]->MiSensor->Detecta == false) est14->Image = imgListaEstacionamiento->Images[0];
		else est14->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[14]->MiSensor->Detecta == false) est15->Image = imgListaEstacionamiento->Images[0];
		else est15->Image = imgListaEstacionamiento->Images[1];
		if (estacionamientoLista[15]->MiSensor->Detecta == false) est16->Image = imgListaEstacionamiento->Images[0];
		else est16->Image = imgListaEstacionamiento->Images[1];
	}
};
}
