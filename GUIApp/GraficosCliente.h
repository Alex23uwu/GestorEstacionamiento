#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace EstacionamientoService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de GraficosCliente
	/// </summary>
	public ref class GraficosCliente : public System::Windows::Forms::Form
	{
	public:
		GraficosCliente(Cliente^cliente)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			clienteActual = cliente;
			clienteid = clienteActual->Id;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraficosCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private:Cliente^ clienteActual;
		   int clienteid;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dtpFin;
	private: System::Windows::Forms::DateTimePicker^ dtpInicio;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGanancias;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dtpFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(519, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ver Gráficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraficosCliente::button1_Click);
			// 
			// dtpFin
			// 
			this->dtpFin->Location = System::Drawing::Point(260, 436);
			this->dtpFin->Name = L"dtpFin";
			this->dtpFin->Size = System::Drawing::Size(200, 20);
			this->dtpFin->TabIndex = 6;
			// 
			// dtpInicio
			// 
			this->dtpInicio->Location = System::Drawing::Point(12, 436);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->Size = System::Drawing::Size(200, 20);
			this->dtpInicio->TabIndex = 5;
			// 
			// chartGanancias
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend2);
			this->chartGanancias->Location = System::Drawing::Point(12, 21);
			this->chartGanancias->Name = L"chartGanancias";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Monto diario";
			this->chartGanancias->Series->Add(series2);
			this->chartGanancias->Size = System::Drawing::Size(559, 409);
			this->chartGanancias->TabIndex = 4;
			// 
			// GraficosCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1087, 551);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dtpFin);
			this->Controls->Add(this->dtpInicio);
			this->Controls->Add(this->chartGanancias);
			this->Name = L"GraficosCliente";
			this->Text = L"GraficosCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime fechaIn;
		DateTime fechaFin;
		String^ fecha;

		String^ Placa = "2";

		Cliente^ clienteA = Service::QueryClienteById(clienteid);
		Placa = clienteA->MiVehiculo->Placa;


		fechaFin = Convert::ToDateTime(dtpFin->Text);
		fechaIn = Convert::ToDateTime(dtpInicio->Text);

		if (fechaIn > fechaFin) {
			MessageBox::Show("Debe Elegir una fecha de inicio anterior a la fecha final.");
			return;
		}
		List<String^>^ fechasList = Service::QueryFechasbyPlaca(fechaIn, fechaFin, Placa);
		Dictionary<String^, double>^ MontosDiariosDict = Service::QueryAmountsbyFechabyPlaca(fechaIn, fechaFin, Placa);

		for (int i = 0; i < MontosDiariosDict->Count; i++) {
			fecha = fechasList[i];
			chartGanancias->Series["Monto diario"]->Points->Add(MontosDiariosDict[fecha]);
			chartGanancias->Series["Monto diario"]->Points[i]->Label = "S/. " + MontosDiariosDict[fecha];
			chartGanancias->Series["Monto diario"]->Points[i]->AxisLabel = fecha;
		}
	}
};
}
