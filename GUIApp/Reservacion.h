#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace System::Collections::Generic;
	using namespace EstacionamientoService;

	/// <summary>
	/// Resumen de Reservacion
	/// </summary>
	public ref class Reservacion : public System::Windows::Forms::Form
	{
	public:
		Reservacion(void)
		{
			InitializeComponent();
			isButtonPressed = 0;
			LastButtonPressed = nullptr;
			now = DateTime::Now;
			tiempo = gcnew List<String^>();
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
	private:
		bool isButtonPressed;
		Button^ LastButtonPressed;
		DateTime now;
		List<String^>^ tiempo;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bttReservar;




	private: System::Windows::Forms::Button^ bttCancel;
	private: System::Windows::Forms::Button^ est2;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ est7;

	private: System::Windows::Forms::Button^ est1;
	private: System::Windows::Forms::Button^ est3;
	private: System::Windows::Forms::Button^ est4;
	private: System::Windows::Forms::Button^ est6;
	private: System::Windows::Forms::Button^ est8;
	private: System::Windows::Forms::Button^ est9;
	private: System::Windows::Forms::Button^ est11;
	private: System::Windows::Forms::Button^ est13;








	private: System::Windows::Forms::Button^ est10;

	private: System::Windows::Forms::Button^ est5;
	private: System::Windows::Forms::Button^ est16;


	private: System::Windows::Forms::Button^ est12;
	private: System::Windows::Forms::Button^ est15;


	private: System::Windows::Forms::Button^ est14;
	private: System::Windows::Forms::ImageList^ imageListaEstacionamiento;
	private: System::Windows::Forms::ComboBox^ cmbHora;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reservacion::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bttReservar = (gcnew System::Windows::Forms::Button());
			this->bttCancel = (gcnew System::Windows::Forms::Button());
			this->est2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->est7 = (gcnew System::Windows::Forms::Button());
			this->est1 = (gcnew System::Windows::Forms::Button());
			this->est3 = (gcnew System::Windows::Forms::Button());
			this->est4 = (gcnew System::Windows::Forms::Button());
			this->est6 = (gcnew System::Windows::Forms::Button());
			this->est8 = (gcnew System::Windows::Forms::Button());
			this->est9 = (gcnew System::Windows::Forms::Button());
			this->est11 = (gcnew System::Windows::Forms::Button());
			this->est13 = (gcnew System::Windows::Forms::Button());
			this->est10 = (gcnew System::Windows::Forms::Button());
			this->est5 = (gcnew System::Windows::Forms::Button());
			this->est16 = (gcnew System::Windows::Forms::Button());
			this->est12 = (gcnew System::Windows::Forms::Button());
			this->est15 = (gcnew System::Windows::Forms::Button());
			this->est14 = (gcnew System::Windows::Forms::Button());
			this->imageListaEstacionamiento = (gcnew System::Windows::Forms::ImageList(this->components));
			this->cmbHora = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(586, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HORA INICIO RESERVA:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ESPACIOS DISPONIBLES:";
			// 
			// bttReservar
			// 
			this->bttReservar->Location = System::Drawing::Point(589, 144);
			this->bttReservar->Name = L"bttReservar";
			this->bttReservar->Size = System::Drawing::Size(124, 36);
			this->bttReservar->TabIndex = 3;
			this->bttReservar->Text = L"RESERVAR";
			this->bttReservar->UseVisualStyleBackColor = true;
			this->bttReservar->Click += gcnew System::EventHandler(this, &Reservacion::bttReservar_Click);
			// 
			// bttCancel
			// 
			this->bttCancel->Location = System::Drawing::Point(758, 141);
			this->bttCancel->Name = L"bttCancel";
			this->bttCancel->Size = System::Drawing::Size(124, 42);
			this->bttCancel->TabIndex = 7;
			this->bttCancel->Text = L"CANCELAR";
			this->bttCancel->UseVisualStyleBackColor = true;
			this->bttCancel->Click += gcnew System::EventHandler(this, &Reservacion::bttCancel_Click);
			// 
			// est2
			// 
			this->est2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est2.BackgroundImage")));
			this->est2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est2->Location = System::Drawing::Point(177, 78);
			this->est2->Name = L"est2";
			this->est2->Size = System::Drawing::Size(101, 91);
			this->est2->TabIndex = 9;
			this->est2->UseVisualStyleBackColor = false;
			this->est2->Click += gcnew System::EventHandler(this, &Reservacion::est2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Reservacion::timer1_Tick);
			// 
			// est7
			// 
			this->est7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est7.BackgroundImage")));
			this->est7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est7->Location = System::Drawing::Point(309, 211);
			this->est7->Name = L"est7";
			this->est7->Size = System::Drawing::Size(101, 91);
			this->est7->TabIndex = 24;
			this->est7->UseVisualStyleBackColor = false;
			this->est7->Click += gcnew System::EventHandler(this, &Reservacion::est7_Click);
			// 
			// est1
			// 
			this->est1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est1.BackgroundImage")));
			this->est1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est1->Location = System::Drawing::Point(49, 78);
			this->est1->Name = L"est1";
			this->est1->Size = System::Drawing::Size(101, 91);
			this->est1->TabIndex = 24;
			this->est1->UseVisualStyleBackColor = false;
			this->est1->Click += gcnew System::EventHandler(this, &Reservacion::est1_Click);
			// 
			// est3
			// 
			this->est3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est3.BackgroundImage")));
			this->est3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est3->Location = System::Drawing::Point(309, 78);
			this->est3->Name = L"est3";
			this->est3->Size = System::Drawing::Size(101, 91);
			this->est3->TabIndex = 25;
			this->est3->UseVisualStyleBackColor = false;
			this->est3->Click += gcnew System::EventHandler(this, &Reservacion::est3_Click);
			// 
			// est4
			// 
			this->est4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est4.BackgroundImage")));
			this->est4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est4->Location = System::Drawing::Point(445, 78);
			this->est4->Name = L"est4";
			this->est4->Size = System::Drawing::Size(101, 91);
			this->est4->TabIndex = 26;
			this->est4->UseVisualStyleBackColor = false;
			this->est4->Click += gcnew System::EventHandler(this, &Reservacion::est4_Click);
			// 
			// est6
			// 
			this->est6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est6.BackgroundImage")));
			this->est6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est6->Location = System::Drawing::Point(177, 211);
			this->est6->Name = L"est6";
			this->est6->Size = System::Drawing::Size(101, 91);
			this->est6->TabIndex = 27;
			this->est6->UseVisualStyleBackColor = false;
			this->est6->Click += gcnew System::EventHandler(this, &Reservacion::est6_Click);
			// 
			// est8
			// 
			this->est8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est8.BackgroundImage")));
			this->est8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est8->Location = System::Drawing::Point(445, 211);
			this->est8->Name = L"est8";
			this->est8->Size = System::Drawing::Size(101, 91);
			this->est8->TabIndex = 28;
			this->est8->UseVisualStyleBackColor = false;
			this->est8->Click += gcnew System::EventHandler(this, &Reservacion::est8_Click);
			// 
			// est9
			// 
			this->est9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est9.BackgroundImage")));
			this->est9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est9->Location = System::Drawing::Point(49, 359);
			this->est9->Name = L"est9";
			this->est9->Size = System::Drawing::Size(101, 91);
			this->est9->TabIndex = 29;
			this->est9->UseVisualStyleBackColor = false;
			this->est9->Click += gcnew System::EventHandler(this, &Reservacion::est9_Click);
			// 
			// est11
			// 
			this->est11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est11.BackgroundImage")));
			this->est11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est11->Location = System::Drawing::Point(309, 359);
			this->est11->Name = L"est11";
			this->est11->Size = System::Drawing::Size(101, 91);
			this->est11->TabIndex = 30;
			this->est11->UseVisualStyleBackColor = false;
			this->est11->Click += gcnew System::EventHandler(this, &Reservacion::est11_Click);
			// 
			// est13
			// 
			this->est13->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est13.BackgroundImage")));
			this->est13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est13->Location = System::Drawing::Point(49, 505);
			this->est13->Name = L"est13";
			this->est13->Size = System::Drawing::Size(101, 91);
			this->est13->TabIndex = 31;
			this->est13->UseVisualStyleBackColor = false;
			this->est13->Click += gcnew System::EventHandler(this, &Reservacion::est13_Click);
			// 
			// est10
			// 
			this->est10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est10.BackgroundImage")));
			this->est10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est10->Location = System::Drawing::Point(177, 359);
			this->est10->Name = L"est10";
			this->est10->Size = System::Drawing::Size(101, 91);
			this->est10->TabIndex = 32;
			this->est10->UseVisualStyleBackColor = false;
			this->est10->Click += gcnew System::EventHandler(this, &Reservacion::est10_Click);
			// 
			// est5
			// 
			this->est5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est5.BackgroundImage")));
			this->est5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est5->Location = System::Drawing::Point(49, 211);
			this->est5->Name = L"est5";
			this->est5->Size = System::Drawing::Size(101, 91);
			this->est5->TabIndex = 33;
			this->est5->UseVisualStyleBackColor = false;
			this->est5->Click += gcnew System::EventHandler(this, &Reservacion::est5_Click);
			// 
			// est16
			// 
			this->est16->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est16.BackgroundImage")));
			this->est16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est16->Location = System::Drawing::Point(445, 505);
			this->est16->Name = L"est16";
			this->est16->Size = System::Drawing::Size(101, 91);
			this->est16->TabIndex = 34;
			this->est16->UseVisualStyleBackColor = false;
			this->est16->Click += gcnew System::EventHandler(this, &Reservacion::est16_Click);
			// 
			// est12
			// 
			this->est12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est12.BackgroundImage")));
			this->est12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est12->Location = System::Drawing::Point(445, 359);
			this->est12->Name = L"est12";
			this->est12->Size = System::Drawing::Size(101, 91);
			this->est12->TabIndex = 35;
			this->est12->UseVisualStyleBackColor = false;
			this->est12->Click += gcnew System::EventHandler(this, &Reservacion::est12_Click);
			// 
			// est15
			// 
			this->est15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est15.BackgroundImage")));
			this->est15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est15->Location = System::Drawing::Point(309, 505);
			this->est15->Name = L"est15";
			this->est15->Size = System::Drawing::Size(101, 91);
			this->est15->TabIndex = 36;
			this->est15->UseVisualStyleBackColor = false;
			this->est15->Click += gcnew System::EventHandler(this, &Reservacion::est15_Click);
			// 
			// est14
			// 
			this->est14->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est14.BackgroundImage")));
			this->est14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est14->Location = System::Drawing::Point(177, 505);
			this->est14->Name = L"est14";
			this->est14->Size = System::Drawing::Size(101, 91);
			this->est14->TabIndex = 37;
			this->est14->UseVisualStyleBackColor = false;
			this->est14->Click += gcnew System::EventHandler(this, &Reservacion::est14_Click);
			// 
			// imageListaEstacionamiento
			// 
			this->imageListaEstacionamiento->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListaEstacionamiento.ImageStream")));
			this->imageListaEstacionamiento->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListaEstacionamiento->Images->SetKeyName(0, L"12213.png");
			this->imageListaEstacionamiento->Images->SetKeyName(1, L"EspacioLLeno.png");
			// 
			// cmbHora
			// 
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Location = System::Drawing::Point(761, 85);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(121, 21);
			this->cmbHora->TabIndex = 38;
			// 
			// Reservacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 642);
			this->Controls->Add(this->cmbHora);
			this->Controls->Add(this->est14);
			this->Controls->Add(this->est15);
			this->Controls->Add(this->est12);
			this->Controls->Add(this->est16);
			this->Controls->Add(this->est5);
			this->Controls->Add(this->est10);
			this->Controls->Add(this->est13);
			this->Controls->Add(this->est11);
			this->Controls->Add(this->est9);
			this->Controls->Add(this->est8);
			this->Controls->Add(this->est6);
			this->Controls->Add(this->est4);
			this->Controls->Add(this->est3);
			this->Controls->Add(this->est1);
			this->Controls->Add(this->est7);
			this->Controls->Add(this->est2);
			this->Controls->Add(this->bttCancel);
			this->Controls->Add(this->bttReservar);
			this->Controls->Add(this->label3);
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
	CalculoHora();
	cmbHora->Items->Clear();
	cmbHora->Items->AddRange(tiempo->ToArray());
}

private: System::Void bttCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void bttReservar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isButtonPressed == 0) {
		MessageBox::Show("Presione un boton");
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	array<Button^>^ botones = gcnew array<Button^> { est1, est2, est3, est4, est5, est6, est7, est8, est9, est10, est11, est12, est13, est14, est15, est16 };
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();

	for (int i = 0; i < 16 && i < estacionamientoLista->Count; i++)
	{
		if (estacionamientoLista[i]->MiSensor->Detecta == false) {
			botones[i]->Image = imageListaEstacionamiento->Images[0];
		}
		else {
			botones[i]->Image = imageListaEstacionamiento->Images[1];
			botones[i]->Enabled = false;
		}
	}

}
private: void CalculoHora() {
	int minutosactuales = now.Minute;
	int horasactuales = now.Hour;
	int horaredondeada = horasactuales;
	int minutosredondeados = (minutosactuales / 5) * 5;
	if (minutosactuales > 55) {
		horaredondeada = horasactuales + 1;
		minutosredondeados = 0;
	}
	else if (minutosactuales % 5 >= 3) {
		horaredondeada = horasactuales;
		minutosredondeados += 5;
	}
	DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
	tiempo->Add(TiempoRedondeado.ToString("HH:mm"));
	for (int i = 0; i < 5; i++) {
		minutosredondeados += 5;
		if (minutosredondeados < 55) {
			DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
			tiempo->Add(TiempoRedondeado.ToString("HH:mm"));
		}
		else {
			minutosredondeados = 0;
			horaredondeada = horasactuales + 1;
			DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
			tiempo->Add(TiempoRedondeado.ToString("HH:mm"));
		}
	}
}
private: System::Void est1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[0]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est1;
		LimpiarColor();
		est1->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est2_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[1]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est2;
		LimpiarColor();
		est2->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est3_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[2]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est3;
		LimpiarColor();
		est3->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est4_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[3]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est4;
		LimpiarColor();
		est4->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est5_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[4]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est5;
		LimpiarColor();
		est5->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est6_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[5]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est6;
		LimpiarColor();
		est6->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est7_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[6]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est7;
		LimpiarColor();
		est7->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est8_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[7]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est8;
		LimpiarColor();
		est8->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est9_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[8]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est9;
		LimpiarColor();
		est9->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est10_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[9]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est10;
		LimpiarColor();
		est10->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est11_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[10]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est11;
		LimpiarColor();
		est11->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est12_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[11]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est12;
		LimpiarColor();
		est12->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est13_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[12]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est13;
		LimpiarColor();
		est13->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est14_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[13]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est14;
		LimpiarColor();
		est14->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est15_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[14]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est15;
		LimpiarColor();
		est15->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est16_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[15]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est16;
		LimpiarColor();
		est16->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: void LimpiarColor() {
	array<Button^>^ botones = gcnew array<Button^> { est1, est2, est3, est4, est5, est6, est7, est8, est9, est10, est11, est12, est13, est14, est15, est16 };
	for (int i = 0; i < 16; i++) {
		botones[i]->BackColor = System::Drawing::Color::White;
	}
}
};
}
