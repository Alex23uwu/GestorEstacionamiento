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
	/// Resumen de InterfazEstadisticasAdmin
	/// </summary>
	public ref class InterfazEstadisticasAdmin : public System::Windows::Forms::Form
	{
	public:
		InterfazEstadisticasAdmin(void)
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
		~InterfazEstadisticasAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGanancias;
	private: System::Windows::Forms::DateTimePicker^ dtpInicio;
	private: System::Windows::Forms::DateTimePicker^ dtpFin;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			this->SuspendLayout();
			// 
			// chartGanancias
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend1);
			this->chartGanancias->Location = System::Drawing::Point(12, 36);
			this->chartGanancias->Name = L"chartGanancias";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto diario";
			this->chartGanancias->Series->Add(series1);
			this->chartGanancias->Size = System::Drawing::Size(474, 300);
			this->chartGanancias->TabIndex = 0;
			// 
			// dtpInicio
			// 
			this->dtpInicio->Location = System::Drawing::Point(492, 57);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->Size = System::Drawing::Size(200, 20);
			this->dtpInicio->TabIndex = 1;
			// 
			// dtpFin
			// 
			this->dtpFin->Location = System::Drawing::Point(492, 113);
			this->dtpFin->Name = L"dtpFin";
			this->dtpFin->Size = System::Drawing::Size(200, 20);
			this->dtpFin->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(492, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ver Gráficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfazEstadisticasAdmin::button1_Click);
			// 
			// InterfazEstadisticasAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 555);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dtpFin);
			this->Controls->Add(this->dtpInicio);
			this->Controls->Add(this->chartGanancias);
			this->Name = L"InterfazEstadisticasAdmin";
			this->Text = L"InterfazEstadisticasAdmin";
			this->Load += gcnew System::EventHandler(this, &InterfazEstadisticasAdmin::InterfazEstadisticasAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InterfazEstadisticasAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		DateTime fechaIn = Convert::ToDateTime(dtpInicio);
		DateTime fechaFin = Convert::ToDateTime(dtpFin);
		DateTime fecha;
		
		if (fechaIn > fechaFin) {
			MessageBox::Show("Debe Elegir una fecha de inicio anterior a la fecha final.");
			return;
		}
		List<DateTime>^ fechasList = Service::QueryFechas(fechaIn, fechaFin);
		Dictionary<DateTime, double>^ MontosDiariosDict = Service::QueryAmountsbyFecha(fechaIn, fechaFin);


		for (int i = 0; i < MontosDiariosDict->Count; i++) {
			fecha = fechasList[i];
			chartGanancias->Series["Monto diario"]->Points->Add(MontosDiariosDict[fecha]);
			chartGanancias->Series["Monto diario"]->Points[i]->Label = "S/. " + MontosDiariosDict[fecha];
			chartGanancias->Series["Monto diario"]->Points[i]->AxisLabel = " " + fecha.ToString("dd/MM/yy");
		}
	}
};
}
