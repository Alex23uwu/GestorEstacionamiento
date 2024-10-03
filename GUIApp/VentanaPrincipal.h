#pragma once
#include "Clientes.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace EstacionamientoService;

	/// <summary>
	/// Resumen de VentanaPrincipal
	/// </summary>
	public ref class VentanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		VentanaPrincipal(void)
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
		~VentanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ preferenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ veedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalDeLimpiezaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ RegisterVehicleStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ servicioDeLavadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->configuraciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->veedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalDeLimpiezaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RegisterVehicleStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->servicioDeLavadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->configuraciónToolStripMenuItem,
					this->preferenciasToolStripMenuItem, this->archivoToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1059, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// configuraciónToolStripMenuItem
			// 
			this->configuraciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salidaToolStripMenuItem });
			this->configuraciónToolStripMenuItem->Name = L"configuraciónToolStripMenuItem";
			this->configuraciónToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->configuraciónToolStripMenuItem->Text = L"Archivo";
			// 
			// salidaToolStripMenuItem
			// 
			this->salidaToolStripMenuItem->Name = L"salidaToolStripMenuItem";
			this->salidaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salidaToolStripMenuItem->Text = L"Salir";
			this->salidaToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::salidaToolStripMenuItem_Click);
			// 
			// preferenciasToolStripMenuItem
			// 
			this->preferenciasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clientesToolStripMenuItem,
					this->trabajadoresToolStripMenuItem, this->veedoresToolStripMenuItem, this->personalDeLimpiezaToolStripMenuItem
			});
			this->preferenciasToolStripMenuItem->Name = L"preferenciasToolStripMenuItem";
			this->preferenciasToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->preferenciasToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::clientesToolStripMenuItem_Click);
			// 
			// trabajadoresToolStripMenuItem
			// 
			this->trabajadoresToolStripMenuItem->Name = L"trabajadoresToolStripMenuItem";
			this->trabajadoresToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->trabajadoresToolStripMenuItem->Text = L"Administradores";
			// 
			// veedoresToolStripMenuItem
			// 
			this->veedoresToolStripMenuItem->Name = L"veedoresToolStripMenuItem";
			this->veedoresToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->veedoresToolStripMenuItem->Text = L"Veedores";
			// 
			// personalDeLimpiezaToolStripMenuItem
			// 
			this->personalDeLimpiezaToolStripMenuItem->Name = L"personalDeLimpiezaToolStripMenuItem";
			this->personalDeLimpiezaToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->personalDeLimpiezaToolStripMenuItem->Text = L"Personal de limpieza";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->RegisterVehicleStripMenuItem,
					this->ExitToolStripMenuItem, this->servicioDeLavadoToolStripMenuItem, this->generarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->archivoToolStripMenuItem->Text = L"Operaciones";
			// 
			// RegisterVehicleStripMenuItem
			// 
			this->RegisterVehicleStripMenuItem->Name = L"RegisterVehicleStripMenuItem";
			this->RegisterVehicleStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->RegisterVehicleStripMenuItem->Text = L"Entrada de vehículo";
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->ExitToolStripMenuItem->Text = L"Salida de vehículo";
			// 
			// servicioDeLavadoToolStripMenuItem
			// 
			this->servicioDeLavadoToolStripMenuItem->Name = L"servicioDeLavadoToolStripMenuItem";
			this->servicioDeLavadoToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->servicioDeLavadoToolStripMenuItem->Text = L"Servicio de lavado";
			// 
			// generarToolStripMenuItem
			// 
			this->generarToolStripMenuItem->Name = L"generarToolStripMenuItem";
			this->generarToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->generarToolStripMenuItem->Text = L"Generar reservación";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1059, 621);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"VentanaPrincipal";
			this->Text = L"VentanaPrincipal";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Clientes^ form = gcnew Clientes();
		form->MdiParent = this;
		form->Show();
	}
private: System::Void salidaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
