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
		List<PictureBox^>^ ListImagenes = gcnew List<PictureBox^>();

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &InterfazVistaVehiculos::timer1_Tick);
			// 
			// InterfazVistaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 484);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"InterfazVistaVehiculos";
			this->Text = L"InterfazVistaVehiculos";
			this->Load += gcnew System::EventHandler(this, &InterfazVistaVehiculos::InterfazVistaVehiculos_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	void CreatePictureBox(String^ nombre, int index, int x, int y, int ancho, int alto, String^ rutaImagen) {
		PictureBox^ pictureBox = gcnew PictureBox();
		Label^ label = gcnew Label();

		pictureBox->Location = Point(x, y);
		pictureBox->Name = nombre;
		pictureBox->Size = System::Drawing::Size(ancho, alto);
		pictureBox->ImageLocation = rutaImagen;
		pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

		label->Name = "lbl" + index;
		label->Location = System::Drawing::Point(x + ancho/2 - 10, y + alto + 5);
		label->Text = "" + index;
		label->Size = System::Drawing::Size(100, 20);

		this->Controls->Add(label);
		this->Controls->Add(pictureBox); // Agrega el PictureBox al formulario	
		ListImagenes->Add(pictureBox);
	}




private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreEst = "imgEstacionamiento";
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	List<Cliente^>^ clientesLista = Service::QueryAllClientes();

	for (int i = 0; i < 16; i++) {

		//	if (estacionamientoLista[i]->MiSensor->Detecta == true) ListImagenes[i]->ImageLocation = "Imagenes/Espacio_Lleno.png";
		//	else ListImagenes[i]->ImageLocation = "Imagenes/Espacio_Disponible.png";
		
		// NOTA: Si este código no funciona, comentar la parte de abajo y descomentar lo de arriba, lo que hice abajo solo es un intento para
		// que aparezcan los espacios reservados

		for (int j = 0; j < clientesLista->Count; j++) {
				if (clientesLista[j]->MiVehiculo->AsigandoA != nullptr) {
					if (clientesLista[j]->MiVehiculo->AsigandoA->Id == i + 1) {
						ListImagenes[j]->ImageLocation = "Imagenes/Espacio_Reservado.png";
					}
				}
			
			else {
				if (estacionamientoLista[i]->MiSensor->Detecta == true) ListImagenes[i]->ImageLocation = "Imagenes/Espacio_Lleno.png";
				else ListImagenes[i]->ImageLocation = "Imagenes/Espacio_Disponible.png";
			}

		}		
		
	}
}

private: System::Void InterfazVistaVehiculos_Load(System::Object^ sender, System::EventArgs^ e) {
	
	int x = 0, y = 10;
	for (int i = 0; i < 16; i++) {
		int index = i + 1;
		
		if (i % 4 == 0) {
			x = 10;
			y = 10 + (i / 4) * 120;
		}
		else {
			x = 10 + (i % 4) * 150;
		}

		String^ nombreEst = "imgEstacionamiento" + index;
		DictEstacionamientos->Add(nombreEst, index);
		CreatePictureBox(nombreEst, index, x, y, 80, 80, "Imagenes/Espacio_Disponible.png");
	}
}


};
}
