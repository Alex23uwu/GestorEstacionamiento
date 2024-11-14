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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPie;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chartVeces = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FechaFin2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->FechaInicio2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->chartPie = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVeces))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPie))->BeginInit();
			this->SuspendLayout();
			// 
			// chartGanancias
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend4);
			this->chartGanancias->Location = System::Drawing::Point(8, 85);
			this->chartGanancias->Name = L"chartGanancias";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Monto diario";
			this->chartGanancias->Series->Add(series4);
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
			this->button1->Text = L"Ver Gráficos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraficosAdmin1::button1_Click);
			// 
			// chartVeces
			// 
			chartArea5->Name = L"ChartArea1";
			this->chartVeces->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chartVeces->Legends->Add(legend5);
			this->chartVeces->Location = System::Drawing::Point(646, 85);
			this->chartVeces->Name = L"chartVeces";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Veces por dia";
			this->chartVeces->Series->Add(series5);
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
			this->tabControl1->Size = System::Drawing::Size(1213, 554);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Size = System::Drawing::Size(1205, 528);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->FechaFin2);
			this->tabPage2->Controls->Add(this->FechaInicio2);
			this->tabPage2->Controls->Add(this->chartPie);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1205, 528);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			// chartPie
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartPie->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartPie->Legends->Add(legend6);
			this->chartPie->Location = System::Drawing::Point(28, 108);
			this->chartPie->Name = L"chartPie";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chartPie->Series->Add(series6);
			this->chartPie->Size = System::Drawing::Size(518, 345);
			this->chartPie->TabIndex = 0;
			this->chartPie->Text = L"chart1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(872, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 36);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Ver Gráficos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GraficosAdmin1::button2_Click);
			// 
			// GraficosAdmin1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1288, 574);
			this->Controls->Add(this->tabControl1);
			this->Name = L"GraficosAdmin1";
			this->Text = L"GraficosAdmin1";
			this->Load += gcnew System::EventHandler(this, &GraficosAdmin1::GraficosAdmin1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVeces))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPie))->EndInit();
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


		
	}
};
}
