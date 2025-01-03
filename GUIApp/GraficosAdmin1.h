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
	/// Resumen de GraficosAdmin1
	/// </summary>
	public ref class GraficosAdmin1 : public System::Windows::Forms::Form
	{
	public:
		GraficosAdmin1(void)
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
		~GraficosAdmin1()
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartVeces;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DateTimePicker^ FechaFin2;
	private: System::Windows::Forms::DateTimePicker^ FechaInicio2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPorcentaje;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblGraf1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;







	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chartVeces = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblGraf1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FechaFin2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->FechaInicio2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->chartPorcentaje = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVeces))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPorcentaje))->BeginInit();
			this->SuspendLayout();
			// 
			// chartGanancias
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend1);
			this->chartGanancias->Location = System::Drawing::Point(6, 116);
			this->chartGanancias->Name = L"chartGanancias";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto diario";
			this->chartGanancias->Series->Add(series1);
			this->chartGanancias->Size = System::Drawing::Size(590, 409);
			this->chartGanancias->TabIndex = 0;
			// 
			// dtpInicio
			// 
			this->dtpInicio->Location = System::Drawing::Point(20, 44);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->Size = System::Drawing::Size(200, 20);
			this->dtpInicio->TabIndex = 1;
			// 
			// dtpFin
			// 
			this->dtpFin->Location = System::Drawing::Point(268, 44);
			this->dtpFin->Name = L"dtpFin";
			this->dtpFin->Size = System::Drawing::Size(200, 20);
			this->dtpFin->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(708, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ver Gr�ficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraficosAdmin1::button1_Click);
			// 
			// chartVeces
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartVeces->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartVeces->Legends->Add(legend2);
			this->chartVeces->Location = System::Drawing::Point(646, 116);
			this->chartVeces->Name = L"chartVeces";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Veces por dia";
			this->chartVeces->Series->Add(series2);
			this->chartVeces->Size = System::Drawing::Size(541, 409);
			this->chartVeces->TabIndex = 4;
			this->chartVeces->Text = L"chartVeces";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1254, 608);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->lblGraf1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->chartGanancias);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->chartVeces);
			this->tabPage1->Controls->Add(this->dtpFin);
			this->tabPage1->Controls->Add(this->dtpInicio);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1246, 582);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Montos e Ingresos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(832, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 23);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Ingresos seg�n d�a";
			// 
			// lblGraf1
			// 
			this->lblGraf1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGraf1->Location = System::Drawing::Point(178, 80);
			this->lblGraf1->Name = L"lblGraf1";
			this->lblGraf1->Size = System::Drawing::Size(159, 23);
			this->lblGraf1->TabIndex = 14;
			this->lblGraf1->Text = L"Monto seg�n d�a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(268, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Fecha de Fin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Fecha de Inicio";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->FechaFin2);
			this->tabPage2->Controls->Add(this->FechaInicio2);
			this->tabPage2->Controls->Add(this->chartPorcentaje);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1246, 582);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Porcentaje de Reservas";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(89, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(378, 56);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Porcentaje de usos de estacionamiento y el uso de la reserva";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(872, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 36);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Ver Gr�ficos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GraficosAdmin1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(264, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Fecha de Fin";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Fecha de Inicio";
			// 
			// FechaFin2
			// 
			this->FechaFin2->Location = System::Drawing::Point(267, 44);
			this->FechaFin2->Name = L"FechaFin2";
			this->FechaFin2->Size = System::Drawing::Size(200, 20);
			this->FechaFin2->TabIndex = 4;
			// 
			// FechaInicio2
			// 
			this->FechaInicio2->Location = System::Drawing::Point(18, 44);
			this->FechaInicio2->Name = L"FechaInicio2";
			this->FechaInicio2->Size = System::Drawing::Size(200, 20);
			this->FechaInicio2->TabIndex = 3;
			// 
			// chartPorcentaje
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartPorcentaje->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartPorcentaje->Legends->Add(legend3);
			this->chartPorcentaje->Location = System::Drawing::Point(18, 154);
			this->chartPorcentaje->Name = L"chartPorcentaje";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartPorcentaje->Series->Add(series3);
			this->chartPorcentaje->Size = System::Drawing::Size(518, 345);
			this->chartPorcentaje->TabIndex = 0;
			this->chartPorcentaje->Text = L"Porcentaje Estacionamientos con Reserva";
			this->chartPorcentaje->Click += gcnew System::EventHandler(this, &GraficosAdmin1::chartPorcentaje_Click);
			// 
			// GraficosAdmin1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1288, 633);
			this->Controls->Add(this->tabControl1);
			this->Name = L"GraficosAdmin1";
			this->Text = L"Gr�ficos";
			this->Load += gcnew System::EventHandler(this, &GraficosAdmin1::GraficosAdmin1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVeces))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPorcentaje))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GraficosAdmin1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chartGanancias->Invalidate();
		chartGanancias->Update();

		DateTime fechaIn;
		DateTime fechaFin;
		String^ fecha;

		fechaFin = Convert::ToDateTime(dtpFin->Text);
		fechaIn = Convert::ToDateTime(dtpInicio->Text);

		if (fechaIn > fechaFin) {
			MessageBox::Show("Debe Elegir una fecha de inicio anterior a la fecha final.");
			return;
		}

		List<String^>^ fechasList = Service::QueryFechas(fechaIn, fechaFin);
		Dictionary<String^, double>^ MontosDiariosDict = Service::QueryAmountsbyFecha(fechaIn, fechaFin);

		for (int i = 0; i < MontosDiariosDict->Count; i++) {
			fecha = fechasList[i];
			chartGanancias->Series["Monto diario"]->Points->Add(MontosDiariosDict[fecha]);
			chartGanancias->Series["Monto diario"]->Points[i]->Label = "S/. " + MontosDiariosDict[fecha];
			chartGanancias->Series["Monto diario"]->Points[i]->AxisLabel = fecha;
		}

		Dictionary<String^, int>^ VecesDiarias = Service::QueryTimesbyFecha(fechaIn, fechaFin);
		for (int i = 0; i < MontosDiariosDict->Count; i++) {
			fecha = fechasList[i];
			chartVeces->Series["Veces por dia"]->Points->Add(VecesDiarias[fecha]);
			chartVeces->Series["Veces por dia"]->Points[i]->Label = "" + VecesDiarias[fecha];
			chartVeces->Series["Veces por dia"]->Points[i]->AxisLabel = fecha;
		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime fechaFin = Convert::ToDateTime(FechaFin2->Text);
		DateTime fechaIn = Convert::ToDateTime(FechaInicio2->Text);

		if (fechaIn > fechaFin) {
			MessageBox::Show("Debe Elegir una fecha de inicio anterior a la fecha final.");
			return;
		}

		int cantTickets = Service::MostrarCantidadTickets(fechaIn, fechaFin);
		int cantReservaciones = Service::MostrarCantidadReservaciones(fechaIn, fechaFin);

		Dictionary<String^, int>^ ConSinReserva = gcnew Dictionary<String^, int>();

		ConSinReserva->Add("Sin reserva", cantTickets - cantReservaciones);
		ConSinReserva->Add("Con reserva", cantReservaciones);

		chartPorcentaje->Series["Series1"]->Points->Add(ConSinReserva["Sin reserva"]);
		chartPorcentaje->Series["Series1"]->Points[0]->LegendText = "Sin reserva";
		chartPorcentaje->Series["Series1"]->Points[0]->Label = "" + ConSinReserva["Sin reserva"];
								 
		chartPorcentaje->Series["Series1"]->Points->Add(ConSinReserva["Con reserva"]);
		chartPorcentaje->Series["Series1"]->Points[1]->LegendText = "Con reserva";
		chartPorcentaje->Series["Series1"]->Points[1]->Label = "" + ConSinReserva["Con reserva"];

		button2->Enabled = false;

	}
private: System::Void chartPorcentaje_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
