#pragma once
#include "PersonalLimpieza_CRUD.h"
#include "Veedor_CRUD.h"
#include "Administrador_CRUD.h"
#include "Cliente_CRUD.h"
#include "EntradaVehiculos.h"
#include "GenerarTicket.h"
#include "Reservacion.h"
#include "LoginForm.h"
#include "InterfazVistaVehiculos.h"
#include "Estacionamiento_CRUD.h"
#include "SensorEstacionamiento.h"
#include "GraficosCliente.h"
#include "GraficosAdmin1.h"
#include "ReservacionesList.h"
#include "SensorExterno.h"

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
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		static Usuario^ User;
		static Cliente^ Cliente;
		static Veedor^ Veedor;
		static PersonalLimpieza^ PersonalLimpieza;
	private: System::Windows::Forms::ToolStripMenuItem^ espaciosDisponiblesToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ misReportesDeClienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gráficosDeAdministradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listaDeReservasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensorExternoToolStripMenuItem;


	public:
		static Administrador^ Administrador;

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ transaccionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ personalLimpiezaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ veedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ entradaDeVeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarTicketToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reservacionToolStripMenuItem;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalLimpiezaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->veedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->entradaDeVeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarTicketToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reservacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->espaciosDisponiblesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listaDeReservasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorExternoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misReportesDeClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gráficosDeAdministradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->transaccionesToolStripMenuItem, this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(678, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->personalLimpiezaToolStripMenuItem,
					this->veedoresToolStripMenuItem, this->administradoresToolStripMenuItem, this->clientesToolStripMenuItem, this->estacionamientosToolStripMenuItem,
					this->sensorToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// personalLimpiezaToolStripMenuItem
			// 
			this->personalLimpiezaToolStripMenuItem->Name = L"personalLimpiezaToolStripMenuItem";
			this->personalLimpiezaToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->personalLimpiezaToolStripMenuItem->Text = L"Personal de Limpieza";
			this->personalLimpiezaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::personalLimpiezaToolStripMenuItem_Click);
			// 
			// veedoresToolStripMenuItem
			// 
			this->veedoresToolStripMenuItem->Name = L"veedoresToolStripMenuItem";
			this->veedoresToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->veedoresToolStripMenuItem->Text = L"Veedores";
			this->veedoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::veedoresToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			this->administradoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::administradoresToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clientesToolStripMenuItem_Click);
			// 
			// estacionamientosToolStripMenuItem
			// 
			this->estacionamientosToolStripMenuItem->Name = L"estacionamientosToolStripMenuItem";
			this->estacionamientosToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->estacionamientosToolStripMenuItem->Text = L"Estacionamientos";
			this->estacionamientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::estacionamientosToolStripMenuItem_Click);
			// 
			// sensorToolStripMenuItem
			// 
			this->sensorToolStripMenuItem->Name = L"sensorToolStripMenuItem";
			this->sensorToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->sensorToolStripMenuItem->Text = L"Sensor";
			this->sensorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sensorToolStripMenuItem_Click);
			// 
			// transaccionesToolStripMenuItem
			// 
			this->transaccionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->entradaDeVeToolStripMenuItem,
					this->generarTicketToolStripMenuItem, this->reservacionToolStripMenuItem, this->espaciosDisponiblesToolStripMenuItem, this->listaDeReservasToolStripMenuItem,
					this->sensorExternoToolStripMenuItem
			});
			this->transaccionesToolStripMenuItem->Name = L"transaccionesToolStripMenuItem";
			this->transaccionesToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->transaccionesToolStripMenuItem->Text = L"Transacciones";
			// 
			// entradaDeVeToolStripMenuItem
			// 
			this->entradaDeVeToolStripMenuItem->Name = L"entradaDeVeToolStripMenuItem";
			this->entradaDeVeToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->entradaDeVeToolStripMenuItem->Text = L"Entrada de Vehículos";
			this->entradaDeVeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::entradaDeVeToolStripMenuItem_Click);
			// 
			// generarTicketToolStripMenuItem
			// 
			this->generarTicketToolStripMenuItem->Name = L"generarTicketToolStripMenuItem";
			this->generarTicketToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->generarTicketToolStripMenuItem->Text = L"Generar Ticket";
			this->generarTicketToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generarTicketToolStripMenuItem_Click);
			// 
			// reservacionToolStripMenuItem
			// 
			this->reservacionToolStripMenuItem->Name = L"reservacionToolStripMenuItem";
			this->reservacionToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->reservacionToolStripMenuItem->Text = L"Reservacion";
			this->reservacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reservacionToolStripMenuItem_Click);
			// 
			// espaciosDisponiblesToolStripMenuItem
			// 
			this->espaciosDisponiblesToolStripMenuItem->Name = L"espaciosDisponiblesToolStripMenuItem";
			this->espaciosDisponiblesToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->espaciosDisponiblesToolStripMenuItem->Text = L"Espacios disponibles";
			this->espaciosDisponiblesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::espaciosDisponiblesToolStripMenuItem_Click);
			// 
			// listaDeReservasToolStripMenuItem
			// 
			this->listaDeReservasToolStripMenuItem->Name = L"listaDeReservasToolStripMenuItem";
			this->listaDeReservasToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->listaDeReservasToolStripMenuItem->Text = L"Lista de Reservas";
			this->listaDeReservasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::listaDeReservasToolStripMenuItem_Click);
			// 
			// sensorExternoToolStripMenuItem
			// 
			this->sensorExternoToolStripMenuItem->Name = L"sensorExternoToolStripMenuItem";
			this->sensorExternoToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->sensorExternoToolStripMenuItem->Text = L"Sensor Externo";
			this->sensorExternoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sensorExternoToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->misReportesDeClienteToolStripMenuItem,
					this->gráficosDeAdministradorToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// misReportesDeClienteToolStripMenuItem
			// 
			this->misReportesDeClienteToolStripMenuItem->Name = L"misReportesDeClienteToolStripMenuItem";
			this->misReportesDeClienteToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->misReportesDeClienteToolStripMenuItem->Text = L"Gráficos de cliente";
			this->misReportesDeClienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::misReportesDeClienteToolStripMenuItem_Click);
			// 
			// gráficosDeAdministradorToolStripMenuItem
			// 
			this->gráficosDeAdministradorToolStripMenuItem->Name = L"gráficosDeAdministradorToolStripMenuItem";
			this->gráficosDeAdministradorToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->gráficosDeAdministradorToolStripMenuItem->Text = L"Gráficos de administrador";
			this->gráficosDeAdministradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gráficosDeAdministradorToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(678, 480);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Sistema de Estacionamiento";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void personalLimpiezaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonalLimpieza_CRUD^ form = gcnew PersonalLimpieza_CRUD();
	form->MdiParent = this;
	form->Show();
}

private: System::Void veedoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Veedor_CRUD^ form = gcnew Veedor_CRUD();
	form->MdiParent = this;
	form->Show();
}

private: System::Void administradoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Administrador_CRUD^ form = gcnew Administrador_CRUD();
	form->MdiParent = this;
	form->Show();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente_CRUD^ form = gcnew Cliente_CRUD();
	form->MdiParent = this;
	form->Show();
}
private: System::Void entradaDeVeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EntradaVehiculos^ form = gcnew EntradaVehiculos();
	form->MdiParent = this;
	form->Show();
}


private: System::Void generarTicketToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GenerarTicket^ form = gcnew GenerarTicket();
	form->MdiParent = this;
	form->Show();
}
private: System::Void reservacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Reservacion^ form = gcnew Reservacion(Cliente);
	form->MdiParent = this;
	form->Show();

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ form = gcnew LoginForm(this);
	form->ShowDialog();
}
	void EnableManagerOptions();
private: System::Void espaciosDisponiblesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfazVistaVehiculos^ form = gcnew InterfazVistaVehiculos();
	form->MdiParent = this;
	form->Show();
}
private: System::Void estacionamientosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Estacionamiento_CRUD^ form = gcnew Estacionamiento_CRUD();
	form->MdiParent = this;
	form->Show();
}
	   public:
		   void EnableClienteOptions() {
			  
				archivoToolStripMenuItem->Visible = true;
				mantenimientoToolStripMenuItem->Visible = false;
				transaccionesToolStripMenuItem->Visible = true;
				entradaDeVeToolStripMenuItem->Visible = false;
				generarTicketToolStripMenuItem->Visible = false;
				reservacionToolStripMenuItem->Visible = true;
				espaciosDisponiblesToolStripMenuItem->Visible = false;
				listaDeReservasToolStripMenuItem->Visible = false;
				gráficosDeAdministradorToolStripMenuItem->Visible = false;
				sensorExternoToolStripMenuItem->Visible = false;
		   }
		   void EnableVeedorOptions() {
			   archivoToolStripMenuItem->Visible = true;
			   mantenimientoToolStripMenuItem->Visible = false;
			   transaccionesToolStripMenuItem->Visible = true;
			   reporteToolStripMenuItem->Visible = false;
			   reservacionToolStripMenuItem->Visible = false;
			   sensorExternoToolStripMenuItem->Visible = false;
		   }
		   void EnablePersonalLimpiezaOptions() {
			   archivoToolStripMenuItem->Visible = true;
			   mantenimientoToolStripMenuItem->Visible = false;
			   transaccionesToolStripMenuItem->Visible = true;
			   reporteToolStripMenuItem->Visible = false;
			   entradaDeVeToolStripMenuItem->Visible = false;
			   generarTicketToolStripMenuItem->Visible = false;
			   reservacionToolStripMenuItem->Visible = false;
			   espaciosDisponiblesToolStripMenuItem->Visible = false;
			   listaDeReservasToolStripMenuItem->Visible = false;
			   sensorExternoToolStripMenuItem->Visible = false;
			   reporteToolStripMenuItem->Visible = false;
		   }
		   void EnableAdministradorOptions() {
			   reservacionToolStripMenuItem->Visible = false;
			   misReportesDeClienteToolStripMenuItem->Visible = false;
			   sensorExternoToolStripMenuItem->Visible = false;
			   sensorExternoToolStripMenuItem->Visible = false;
		   }
private: System::Void sensorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SensorEstacionamiento^ form = gcnew SensorEstacionamiento();
	form->MdiParent = this;
	form->Show();
}
private: System::Void misReportesDeClienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GraficosCliente^ form = gcnew GraficosCliente(Cliente);

	form->MdiParent = this;
	form->Show();
}
private: System::Void gráficosDeAdministradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GraficosAdmin1^ form = gcnew GraficosAdmin1();
	form->MdiParent = this;
	form->Show();
}
private: System::Void listaDeReservasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReservacionesList^ form = gcnew ReservacionesList();
	form->MdiParent = this;
	form->Show();
}
private: System::Void sensorExternoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SensorExterno^ form = gcnew SensorExterno();
	form->MdiParent = this;
	form->Show();
}
};
}
