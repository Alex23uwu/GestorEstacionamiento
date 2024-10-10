#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelIngresoVehiculo = (gcnew System::Windows::Forms::Label());
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
			this->labelIngresoVehiculo->Location = System::Drawing::Point(66, 140);
			this->labelIngresoVehiculo->Name = L"labelIngresoVehiculo";
			this->labelIngresoVehiculo->Size = System::Drawing::Size(61, 13);
			this->labelIngresoVehiculo->TabIndex = 0;
			this->labelIngresoVehiculo->Text = L"tiempoHora";
			this->labelIngresoVehiculo->Click += gcnew System::EventHandler(this, &EntradaVehiculos::labelIngresoVehiculo_Click);
			// 
			// EntradaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 443);
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
		labelIngresoVehiculo->Text = (DateTime::Now).ToString("HH:mm:ss");
	}
	};
}
