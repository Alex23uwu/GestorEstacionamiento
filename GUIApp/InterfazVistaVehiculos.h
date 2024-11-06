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
		Dictionary<String^, int>^ DictEstacionamientos = gcnew Dictionary<String^, int>();

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


	private: System::Windows::Forms::Button^ btnReinicio;
	private: System::Windows::Forms::Timer^ timer1;

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
			this->btnReinicio = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btnReinicio
			// 
			this->btnReinicio->Location = System::Drawing::Point(615, 480);
			this->btnReinicio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReinicio->Name = L"btnReinicio";
			this->btnReinicio->Size = System::Drawing::Size(192, 79);
			this->btnReinicio->TabIndex = 50;
			this->btnReinicio->Text = L"Reiniciar Estacionamientos";
			this->btnReinicio->UseVisualStyleBackColor = true;
			this->btnReinicio->Click += gcnew System::EventHandler(this, &InterfazVistaVehiculos::btnReinicio_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &InterfazVistaVehiculos::timer1_Tick);
			// 
			// InterfazVistaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 471);
			this->Controls->Add(this->btnReinicio);
			this->Name = L"InterfazVistaVehiculos";
			this->Text = L"InterfazVistaVehiculos";
			this->Load += gcnew System::EventHandler(this, &InterfazVistaVehiculos::InterfazVistaVehiculos_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		//if (estacionamientoLista[0]->MiSensor->Detecta == false) est1->Image = imgListaEstacionamiento->Images[0];
		//else est1->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[1]->MiSensor->Detecta == false) est2->Image = imgListaEstacionamiento->Images[0];
		//else est2->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[2]->MiSensor->Detecta == false) est3->Image = imgListaEstacionamiento->Images[0];
		//else est3->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[3]->MiSensor->Detecta == false) est4->Image = imgListaEstacionamiento->Images[0];
		//else est4->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[4]->MiSensor->Detecta == false) est5->Image = imgListaEstacionamiento->Images[0];
		//else est5->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[5]->MiSensor->Detecta == false) est6->Image = imgListaEstacionamiento->Images[0];
		//else est6->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[6]->MiSensor->Detecta == false) est7->Image = imgListaEstacionamiento->Images[0];
		//else est7->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[7]->MiSensor->Detecta == false) est8->Image = imgListaEstacionamiento->Images[0];
		//else est8->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[8]->MiSensor->Detecta == false) est9->Image = imgListaEstacionamiento->Images[0];
		//else est9->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[9]->MiSensor->Detecta == false) est10->Image = imgListaEstacionamiento->Images[0];
		//else est10->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[10]->MiSensor->Detecta == false) est11->Image = imgListaEstacionamiento->Images[0];
		//else est11->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[11]->MiSensor->Detecta == false) est12->Image = imgListaEstacionamiento->Images[0];
		//else est12->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[12]->MiSensor->Detecta == false) est13->Image = imgListaEstacionamiento->Images[0];
		//else est13->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[13]->MiSensor->Detecta == false) est14->Image = imgListaEstacionamiento->Images[0];
		//else est14->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[14]->MiSensor->Detecta == false) est15->Image = imgListaEstacionamiento->Images[0];
		//else est15->Image = imgListaEstacionamiento->Images[1];
		//if (estacionamientoLista[15]->MiSensor->Detecta == false) est16->Image = imgListaEstacionamiento->Images[0];
		//else est16->Image = imgListaEstacionamiento->Images[1];
	void CreatePictureBox(String^ nombre, int x, int y, int ancho, int alto, String^ rutaImagen) {
		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->Location = Point(x, y);
		pictureBox->Name = nombre;
		pictureBox->Size = System::Drawing::Size(ancho, alto);
		pictureBox->ImageLocation = rutaImagen;
		pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->Controls->Add(pictureBox); // Agrega el PictureBox al formulario			
	}


	private: System::Void btnReinicio_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
		for (int i = 0; i < estacionamientoLista->Count; i++) {
			estacionamientoLista[i]->HoraInicio = "";
			estacionamientoLista[i]->HoraSalida = "";
			estacionamientoLista[i]->MiSensor->Detecta = false;
			
			Service::UpdateEstacionamiento(estacionamientoLista[i]);
		}
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void InterfazVistaVehiculos_Load(System::Object^ sender, System::EventArgs^ e) {
	
	int x = 0, y = 10;
	for (int i = 0; i < 16; i++) {
		int index = i + i;
		
		if (i % 4 == 0) {
			x = 10;
			y = 10 + (i / 4) * 100;
		}
		else {
			x = 10 + (i % 4) * 100;
		}

		String^ nombreEst = "imgEstacionamiento" + index;
		DictEstacionamientos->Add(nombreEst, index);
		CreatePictureBox(nombreEst, x, y, 80, 80, "Imagenes/Espacio_Disponible.png");
	}
}


};
}
