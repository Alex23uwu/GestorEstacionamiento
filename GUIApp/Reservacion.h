#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Reservacion
	/// </summary>
	public ref class Reservacion : public System::Windows::Forms::Form
	{
	public:
		Reservacion(void)
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
		~Reservacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bttReservar;

	private: System::Windows::Forms::DateTimePicker^ dtpHoraEntrada;


	private: System::Windows::Forms::Button^ bttCancel;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ImageList^ imageList1;
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
			this->dtpHoraEntrada = (gcnew System::Windows::Forms::DateTimePicker());
			this->bttCancel = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
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
			// dtpHoraEntrada
			// 
			this->dtpHoraEntrada->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpHoraEntrada->Location = System::Drawing::Point(758, 82);
			this->dtpHoraEntrada->Name = L"dtpHoraEntrada";
			this->dtpHoraEntrada->Size = System::Drawing::Size(124, 20);
			this->dtpHoraEntrada->TabIndex = 4;
			this->dtpHoraEntrada->ValueChanged += gcnew System::EventHandler(this, &Reservacion::dtpHoraEntrada_ValueChanged);
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
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Location = System::Drawing::Point(177, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 91);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Reservacion::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Location = System::Drawing::Point(309, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 91);
			this->button1->TabIndex = 24;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Location = System::Drawing::Point(49, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 91);
			this->button3->TabIndex = 24;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->Location = System::Drawing::Point(309, 78);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 91);
			this->button7->TabIndex = 25;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Location = System::Drawing::Point(445, 78);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 91);
			this->button4->TabIndex = 26;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Location = System::Drawing::Point(177, 211);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 91);
			this->button6->TabIndex = 27;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->Location = System::Drawing::Point(445, 211);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 91);
			this->button17->TabIndex = 28;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->Location = System::Drawing::Point(49, 359);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 91);
			this->button18->TabIndex = 29;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button19->Location = System::Drawing::Point(309, 359);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(101, 91);
			this->button19->TabIndex = 30;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button20->Location = System::Drawing::Point(49, 505);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 91);
			this->button20->TabIndex = 31;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button21->Location = System::Drawing::Point(177, 359);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(101, 91);
			this->button21->TabIndex = 32;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button22->Location = System::Drawing::Point(49, 211);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(101, 91);
			this->button22->TabIndex = 33;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Location = System::Drawing::Point(445, 505);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 91);
			this->button5->TabIndex = 34;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->Location = System::Drawing::Point(445, 359);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 91);
			this->button8->TabIndex = 35;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->Location = System::Drawing::Point(309, 505);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 91);
			this->button9->TabIndex = 36;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->Location = System::Drawing::Point(177, 505);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(101, 91);
			this->button10->TabIndex = 37;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"12213.png");
			this->imageList1->Images->SetKeyName(1, L"EspacioLLeno.png");
			// 
			// Reservacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 642);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bttCancel);
			this->Controls->Add(this->dtpHoraEntrada);
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
	dtpHoraEntrada->CustomFormat = "HH:mm";
	dtpHoraEntrada->Value = DateTime::Now;
}

private: System::Void bttCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void bttReservar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}
};
}
