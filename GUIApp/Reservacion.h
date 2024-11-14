#pragma once
namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Model;
	using namespace System::Collections::Generic;
	using namespace EstacionamientoService;
	using namespace System::Globalization;

	/// <summary>
	/// Resumen de Reservacion
	/// </summary>

	public ref class Reservacion : public System::Windows::Forms::Form
	{
	public:
		Reservacion(Cliente^ Clientes) {
			InitializeComponent();
			isButtonPressed = 0;
			LastButtonPressed = nullptr;
			now = DateTime::Now;
			tiempo = gcnew List<String^>();
			ClienteActual = Clientes;
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
	private:
		bool isButtonPressed;
		Button^ LastButtonPressed;
		DateTime now;
		List<String^>^ tiempo;
		Cliente^ ClienteActual;  
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bttReservar;




	private: System::Windows::Forms::Button^ bttCancel;
	private: System::Windows::Forms::Button^ est2;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ est7;

	private: System::Windows::Forms::Button^ est1;
	private: System::Windows::Forms::Button^ est3;
	private: System::Windows::Forms::Button^ est4;
	private: System::Windows::Forms::Button^ est6;
	private: System::Windows::Forms::Button^ est8;
	private: System::Windows::Forms::Button^ est9;
	private: System::Windows::Forms::Button^ est11;
	private: System::Windows::Forms::Button^ est13;








	private: System::Windows::Forms::Button^ est10;

	private: System::Windows::Forms::Button^ est5;
	private: System::Windows::Forms::Button^ est16;


	private: System::Windows::Forms::Button^ est12;
	private: System::Windows::Forms::Button^ est15;


	private: System::Windows::Forms::Button^ est14;
	private: System::Windows::Forms::ImageList^ imageListaEstacionamiento;
	private: System::Windows::Forms::ComboBox^ cmbHora;
	private: System::Windows::Forms::DataGridView^ dgvReserva;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reserva_Status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reserva_Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reserva_Inicio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reserva_Fin;








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
			this->bttCancel = (gcnew System::Windows::Forms::Button());
			this->est2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->est7 = (gcnew System::Windows::Forms::Button());
			this->est1 = (gcnew System::Windows::Forms::Button());
			this->est3 = (gcnew System::Windows::Forms::Button());
			this->est4 = (gcnew System::Windows::Forms::Button());
			this->est6 = (gcnew System::Windows::Forms::Button());
			this->est8 = (gcnew System::Windows::Forms::Button());
			this->est9 = (gcnew System::Windows::Forms::Button());
			this->est11 = (gcnew System::Windows::Forms::Button());
			this->est13 = (gcnew System::Windows::Forms::Button());
			this->est10 = (gcnew System::Windows::Forms::Button());
			this->est5 = (gcnew System::Windows::Forms::Button());
			this->est16 = (gcnew System::Windows::Forms::Button());
			this->est12 = (gcnew System::Windows::Forms::Button());
			this->est15 = (gcnew System::Windows::Forms::Button());
			this->est14 = (gcnew System::Windows::Forms::Button());
			this->imageListaEstacionamiento = (gcnew System::Windows::Forms::ImageList(this->components));
			this->cmbHora = (gcnew System::Windows::Forms::ComboBox());
			this->dgvReserva = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Reserva_Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Reserva_Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Reserva_Inicio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Reserva_Fin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReserva))->BeginInit();
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 20);
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
			// est2
			// 
			this->est2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est2.BackgroundImage")));
			this->est2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est2->Location = System::Drawing::Point(157, 92);
			this->est2->Name = L"est2";
			this->est2->Size = System::Drawing::Size(101, 91);
			this->est2->TabIndex = 9;
			this->est2->UseVisualStyleBackColor = false;
			this->est2->Click += gcnew System::EventHandler(this, &Reservacion::est2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Reservacion::timer1_Tick);
			// 
			// est7
			// 
			this->est7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est7.BackgroundImage")));
			this->est7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est7->Location = System::Drawing::Point(298, 226);
			this->est7->Name = L"est7";
			this->est7->Size = System::Drawing::Size(101, 91);
			this->est7->TabIndex = 24;
			this->est7->UseVisualStyleBackColor = false;
			this->est7->Click += gcnew System::EventHandler(this, &Reservacion::est7_Click);
			// 
			// est1
			// 
			this->est1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est1.BackgroundImage")));
			this->est1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est1->Location = System::Drawing::Point(18, 92);
			this->est1->Name = L"est1";
			this->est1->Size = System::Drawing::Size(101, 91);
			this->est1->TabIndex = 24;
			this->est1->UseVisualStyleBackColor = false;
			this->est1->Click += gcnew System::EventHandler(this, &Reservacion::est1_Click);
			// 
			// est3
			// 
			this->est3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est3.BackgroundImage")));
			this->est3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est3->Location = System::Drawing::Point(298, 92);
			this->est3->Name = L"est3";
			this->est3->Size = System::Drawing::Size(101, 91);
			this->est3->TabIndex = 25;
			this->est3->UseVisualStyleBackColor = false;
			this->est3->Click += gcnew System::EventHandler(this, &Reservacion::est3_Click);
			// 
			// est4
			// 
			this->est4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est4.BackgroundImage")));
			this->est4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est4->Location = System::Drawing::Point(434, 92);
			this->est4->Name = L"est4";
			this->est4->Size = System::Drawing::Size(101, 91);
			this->est4->TabIndex = 26;
			this->est4->UseVisualStyleBackColor = false;
			this->est4->Click += gcnew System::EventHandler(this, &Reservacion::est4_Click);
			// 
			// est6
			// 
			this->est6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est6.BackgroundImage")));
			this->est6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est6->Location = System::Drawing::Point(157, 226);
			this->est6->Name = L"est6";
			this->est6->Size = System::Drawing::Size(101, 91);
			this->est6->TabIndex = 27;
			this->est6->UseVisualStyleBackColor = false;
			this->est6->Click += gcnew System::EventHandler(this, &Reservacion::est6_Click);
			// 
			// est8
			// 
			this->est8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est8.BackgroundImage")));
			this->est8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est8->Location = System::Drawing::Point(434, 226);
			this->est8->Name = L"est8";
			this->est8->Size = System::Drawing::Size(101, 91);
			this->est8->TabIndex = 28;
			this->est8->UseVisualStyleBackColor = false;
			this->est8->Click += gcnew System::EventHandler(this, &Reservacion::est8_Click);
			// 
			// est9
			// 
			this->est9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est9.BackgroundImage")));
			this->est9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est9->Location = System::Drawing::Point(18, 359);
			this->est9->Name = L"est9";
			this->est9->Size = System::Drawing::Size(101, 91);
			this->est9->TabIndex = 29;
			this->est9->UseVisualStyleBackColor = false;
			this->est9->Click += gcnew System::EventHandler(this, &Reservacion::est9_Click);
			// 
			// est11
			// 
			this->est11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est11.BackgroundImage")));
			this->est11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est11->Location = System::Drawing::Point(298, 359);
			this->est11->Name = L"est11";
			this->est11->Size = System::Drawing::Size(101, 91);
			this->est11->TabIndex = 30;
			this->est11->UseVisualStyleBackColor = false;
			this->est11->Click += gcnew System::EventHandler(this, &Reservacion::est11_Click);
			// 
			// est13
			// 
			this->est13->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est13.BackgroundImage")));
			this->est13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est13->Location = System::Drawing::Point(18, 490);
			this->est13->Name = L"est13";
			this->est13->Size = System::Drawing::Size(101, 91);
			this->est13->TabIndex = 31;
			this->est13->UseVisualStyleBackColor = false;
			this->est13->Click += gcnew System::EventHandler(this, &Reservacion::est13_Click);
			// 
			// est10
			// 
			this->est10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est10.BackgroundImage")));
			this->est10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est10->Location = System::Drawing::Point(157, 359);
			this->est10->Name = L"est10";
			this->est10->Size = System::Drawing::Size(101, 91);
			this->est10->TabIndex = 32;
			this->est10->UseVisualStyleBackColor = false;
			this->est10->Click += gcnew System::EventHandler(this, &Reservacion::est10_Click);
			// 
			// est5
			// 
			this->est5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est5.BackgroundImage")));
			this->est5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est5->Location = System::Drawing::Point(18, 226);
			this->est5->Name = L"est5";
			this->est5->Size = System::Drawing::Size(101, 91);
			this->est5->TabIndex = 33;
			this->est5->UseVisualStyleBackColor = false;
			this->est5->Click += gcnew System::EventHandler(this, &Reservacion::est5_Click);
			// 
			// est16
			// 
			this->est16->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est16.BackgroundImage")));
			this->est16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est16->Location = System::Drawing::Point(434, 490);
			this->est16->Name = L"est16";
			this->est16->Size = System::Drawing::Size(101, 91);
			this->est16->TabIndex = 34;
			this->est16->UseVisualStyleBackColor = false;
			this->est16->Click += gcnew System::EventHandler(this, &Reservacion::est16_Click);
			// 
			// est12
			// 
			this->est12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est12.BackgroundImage")));
			this->est12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est12->Location = System::Drawing::Point(434, 359);
			this->est12->Name = L"est12";
			this->est12->Size = System::Drawing::Size(101, 91);
			this->est12->TabIndex = 35;
			this->est12->UseVisualStyleBackColor = false;
			this->est12->Click += gcnew System::EventHandler(this, &Reservacion::est12_Click);
			// 
			// est15
			// 
			this->est15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est15.BackgroundImage")));
			this->est15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est15->Location = System::Drawing::Point(298, 490);
			this->est15->Name = L"est15";
			this->est15->Size = System::Drawing::Size(101, 91);
			this->est15->TabIndex = 36;
			this->est15->UseVisualStyleBackColor = false;
			this->est15->Click += gcnew System::EventHandler(this, &Reservacion::est15_Click);
			// 
			// est14
			// 
			this->est14->BackColor = System::Drawing::SystemColors::HighlightText;
			this->est14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"est14.BackgroundImage")));
			this->est14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->est14->Location = System::Drawing::Point(157, 490);
			this->est14->Name = L"est14";
			this->est14->Size = System::Drawing::Size(101, 91);
			this->est14->TabIndex = 37;
			this->est14->UseVisualStyleBackColor = false;
			this->est14->Click += gcnew System::EventHandler(this, &Reservacion::est14_Click);
			// 
			// imageListaEstacionamiento
			// 
			this->imageListaEstacionamiento->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListaEstacionamiento.ImageStream")));
			this->imageListaEstacionamiento->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListaEstacionamiento->Images->SetKeyName(0, L"12213.png");
			this->imageListaEstacionamiento->Images->SetKeyName(1, L"EspacioLLeno.png");
			// 
			// cmbHora
			// 
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Location = System::Drawing::Point(761, 85);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(121, 21);
			this->cmbHora->TabIndex = 38;
			// 
			// dgvReserva
			// 
			this->dgvReserva->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReserva->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Reserva_Status,
					this->Reserva_Fecha, this->Reserva_Inicio, this->Reserva_Fin
			});
			this->dgvReserva->Location = System::Drawing::Point(577, 207);
			this->dgvReserva->Name = L"dgvReserva";
			this->dgvReserva->ReadOnly = true;
			this->dgvReserva->Size = System::Drawing::Size(336, 149);
			this->dgvReserva->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 36);
			this->label2->TabIndex = 40;
			this->label2->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(190, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 36);
			this->label4->TabIndex = 41;
			this->label4->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(331, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 36);
			this->label5->TabIndex = 42;
			this->label5->Text = L"3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(466, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 36);
			this->label6->TabIndex = 43;
			this->label6->Text = L"4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 36);
			this->label7->TabIndex = 44;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(190, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 36);
			this->label8->TabIndex = 45;
			this->label8->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(331, 187);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 36);
			this->label9->TabIndex = 46;
			this->label9->Text = L"7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(466, 187);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 36);
			this->label10->TabIndex = 47;
			this->label10->Text = L"8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(51, 324);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 36);
			this->label11->TabIndex = 48;
			this->label11->Text = L"9";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(183, 320);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 36);
			this->label12->TabIndex = 49;
			this->label12->Text = L"10";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(319, 324);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 36);
			this->label13->TabIndex = 50;
			this->label13->Text = L"11";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(455, 324);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 36);
			this->label14->TabIndex = 51;
			this->label14->Text = L"12";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(40, 453);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 36);
			this->label15->TabIndex = 52;
			this->label15->Text = L"13";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(183, 453);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 36);
			this->label16->TabIndex = 53;
			this->label16->Text = L"14";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(319, 453);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 36);
			this->label17->TabIndex = 54;
			this->label17->Text = L"15";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(455, 453);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 36);
			this->label18->TabIndex = 55;
			this->label18->Text = L"16";
			// 
			// Reserva_Status
			// 
			this->Reserva_Status->HeaderText = L"Estado";
			this->Reserva_Status->Name = L"Reserva_Status";
			this->Reserva_Status->ReadOnly = true;
			// 
			// Reserva_Fecha
			// 
			this->Reserva_Fecha->HeaderText = L"Fecha";
			this->Reserva_Fecha->Name = L"Reserva_Fecha";
			this->Reserva_Fecha->ReadOnly = true;
			// 
			// Reserva_Inicio
			// 
			this->Reserva_Inicio->HeaderText = L"Inicio";
			this->Reserva_Inicio->Name = L"Reserva_Inicio";
			this->Reserva_Inicio->ReadOnly = true;
			this->Reserva_Inicio->Width = 75;
			// 
			// Reserva_Fin
			// 
			this->Reserva_Fin->HeaderText = L"Fin";
			this->Reserva_Fin->Name = L"Reserva_Fin";
			this->Reserva_Fin->ReadOnly = true;
			this->Reserva_Fin->Width = 75;
			// 
			// Reservacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 609);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgvReserva);
			this->Controls->Add(this->cmbHora);
			this->Controls->Add(this->est14);
			this->Controls->Add(this->est15);
			this->Controls->Add(this->est12);
			this->Controls->Add(this->est16);
			this->Controls->Add(this->est5);
			this->Controls->Add(this->est10);
			this->Controls->Add(this->est13);
			this->Controls->Add(this->est11);
			this->Controls->Add(this->est9);
			this->Controls->Add(this->est8);
			this->Controls->Add(this->est6);
			this->Controls->Add(this->est4);
			this->Controls->Add(this->est3);
			this->Controls->Add(this->est1);
			this->Controls->Add(this->est7);
			this->Controls->Add(this->est2);
			this->Controls->Add(this->bttCancel);
			this->Controls->Add(this->bttReservar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Reservacion";
			this->Text = L"Reservacion";
			this->Load += gcnew System::EventHandler(this, &Reservacion::Reservacion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReserva))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dtpHoraEntrada_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Reservacion_Load(System::Object^ sender, System::EventArgs^ e) {
	CalculoHora();
	cmbHora->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	cmbHora->Items->Clear();
	cmbHora->Items->AddRange(tiempo->ToArray());
	if (ClienteActual->MiReservacion != nullptr) {
		if (!ConfirmarValidezReserva()) {
			ClienteActual->LugarReservado = false;
			Estacionamiento^ estacionamiento = ClienteActual->MiVehiculo->AsigandoA;
			Sensor^ sensor = estacionamiento->MiSensor;
			sensor->Detecta = false;
			Model::Reservacion^ reserva = ClienteActual->MiReservacion;
			reserva->FinReserva = "Cancelado";
			Service::UpdateReserva(reserva);
			Service::UpdateCliente(ClienteActual);
			Service::UpdateEstacionamiento(estacionamiento);
			//Service::UpdateVehiculo(vehiculo);
			Service::UpdateSensor(sensor);
			MessageBox::Show("Su anterior reserva expiró");
		}
	}
	ShowReservas();
}

private: System::Void bttCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (ClienteActual->LugarReservado == false) {
			throw gcnew InvalidOperationException("No cuenta con ninguna reserva");
		}
		if (!ConfirmarValidezReserva()) {
			ClienteActual->LugarReservado = false;
			Estacionamiento^ estacionamiento = ClienteActual->MiVehiculo->AsigandoA;
			Sensor^ sensor = estacionamiento->MiSensor;
			Model::Reservacion^ reserva = ClienteActual->MiReservacion;
			sensor->Detecta = false;
			reserva->FinReserva="Cancelado";
			Service::UpdateReserva(reserva);
			Service::UpdateCliente(ClienteActual);
			Service::UpdateEstacionamiento(estacionamiento);
			//Service::UpdateVehiculo(vehiculo);
			Service::UpdateSensor(sensor);
			throw gcnew InvalidOperationException("Su anterior reserva excedió el tiempo límite");
		}
		System::Windows::Forms::DialogResult resultado = MessageBox::Show("¿Estás seguro de cancelar su reserva?",
			"Cancelacion de reserva",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question);
		if (resultado == System::Windows::Forms::DialogResult::Yes) {
			Estacionamiento^ estacionamiento = ClienteActual->MiVehiculo->AsigandoA;
			Sensor^ sensor = estacionamiento->MiSensor;
			//Vehiculo^ vehiculo = ClienteActual->MiVehiculo;
			sensor->Detecta = false;
			ClienteActual->LugarReservado = false;
			Service::DeleteReserva(ClienteActual->MiReservacion->Id);
			//estacionamiento->MiSensor = sensor;
			Service::UpdateCliente(ClienteActual);
			Service::UpdateEstacionamiento(estacionamiento);
			//Service::UpdateVehiculo(vehiculo);
			Service::UpdateSensor(sensor);
			MessageBox::Show("Reserva Cancelada");
		}
		ShowReservas();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void bttReservar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (ClienteActual->LugarReservado == true) {
			if (!ConfirmarValidezReserva()) {
				ClienteActual->LugarReservado = false;
				Estacionamiento^ estacionamiento = ClienteActual->MiVehiculo->AsigandoA;
				Sensor^ sensor = estacionamiento->MiSensor;
				sensor->Detecta = false;
				Model::Reservacion^ reserva = ClienteActual->MiReservacion;
				reserva->FinReserva = "Cancelado";
				Service::UpdateReserva(reserva);
				Service::UpdateCliente(ClienteActual);
				Service::UpdateEstacionamiento(estacionamiento);
				//Service::UpdateVehiculo(vehiculo);
				Service::UpdateSensor(sensor);
				throw gcnew InvalidOperationException("Su anterior reserva excedió el tiempo límite. Intentelo de nuevo.");
			}
		}
		if (ClienteActual->LugarReservado == true) {
			throw gcnew InvalidOperationException("Solo puede realizar una reserva a la vez");
		}
		if (isButtonPressed == 0) {
			throw gcnew InvalidOperationException("Tiene que seleccionar un estacionamiento");
		}
		if (cmbHora->SelectedItem == nullptr) {
			throw gcnew InvalidOperationException("Seleccione una hora");
		}
			System::Windows::Forms::DialogResult resultado = MessageBox::Show("¿Estás seguro de reservar este espacio?",
				"Confirmación de Reserva",
				System::Windows::Forms::MessageBoxButtons::YesNo,
				System::Windows::Forms::MessageBoxIcon::Question);
			if (resultado == System::Windows::Forms::DialogResult::Yes) {
				/*Model::Reservacion^ reserva = gcnew Model::Reservacion();
				Estacionamiento^ EstacionamientoSeleccionado = SeleccionEstacionamiento();
				Vehiculo^ vehiculo = Service::QueryVehiculoByPlaca(ClienteActual->MiVehiculo->Placa);
				Sensor^ SensorSeleccionado = Service::QuerySensorbyID(EstacionamientoSeleccionado->Id);
				ClienteActual->MiVehiculo = vehiculo;
				vehiculo->AsigandoA = EstacionamientoSeleccionado;
				EstacionamientoSeleccionado->MiSensor = SensorSeleccionado;
				SensorSeleccionado->Detecta = true;
				reserva->Id = EstacionamientoService::Service::GenerateIDReserva();
				reserva->InicioReserva = cmbHora->SelectedItem->ToString();
				reserva->Completada = false;
				ClienteActual->LugarReservado = true;
				ClienteActual->MiReservacion = reserva;
				Service::UpdateVehiculo(vehiculo);
				Service::UpdateCliente(ClienteActual);
				Service::AddReserva(reserva);
				Service::UpdateEstacionamiento(EstacionamientoSeleccionado);
				MessageBox::Show("Reserva Exitosa");
				LimpiarColor();*/
				Estacionamiento^ EstacionamientoSeleccionado = SeleccionEstacionamiento();
				Model::Reservacion^ reserva = gcnew Model::Reservacion();
				reserva->Id = EstacionamientoService::Service::GenerateIDReserva();
				reserva->InicioReserva = cmbHora->SelectedItem->ToString();
				reserva->Completada = false;
				reserva->FechaReserva = now;
				reserva->ClienteID = ClienteActual->Id;
				ClienteActual->LugarReservado = true;
				ClienteActual->MiReservacion = reserva;
				//colocamos  el mismo id a sensor y estacionamiento  (sincronizamos)
				Sensor^ sensor = Service::QuerySensorbyID(EstacionamientoSeleccionado->Id);
				//llenamos los atributos de la variable SENSOR
				sensor->Detecta = true;
				//llenamos los atributos de la variable ESTACIONAMIENTO
				EstacionamientoSeleccionado->MiSensor = sensor;
				EstacionamientoSeleccionado->HoraInicio = reserva->InicioReserva;
				EstacionamientoSeleccionado->HoraSalida = "";

				ClienteActual->MiVehiculo->AsigandoA = EstacionamientoSeleccionado;

				Service::AddReserva(reserva);
				Service::UpdateEstacionamiento(EstacionamientoSeleccionado);
				Service::UpdateCliente(ClienteActual);
				Service::UpdateSensor(sensor);
				MessageBox::Show("Reserva Exitosa");
				LimpiarColor();
			}
			else {
				MessageBox::Show("Reserva cancelada.");
			}
			ShowReservas();
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido realiza la reserva por el siguiente motivo:\n" + ex->Message);
	}

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	array<Button^>^ botones = gcnew array<Button^> { est1, est2, est3, est4, est5, est6, est7, est8, est9, est10, est11, est12, est13, est14, est15, est16 };
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();

	for (int i = 0; i < 16 && i < estacionamientoLista->Count; i++)
	{
		if (estacionamientoLista[i]->MiSensor->Detecta == false) {
			botones[i]->Image = imageListaEstacionamiento->Images[0];
			botones[i]->Enabled = true;
		}
		else {
			botones[i]->Image = imageListaEstacionamiento->Images[1];
			botones[i]->Enabled = false;
		}
	}

}
	   private: void ShowReservas() {
		   List <Model::Reservacion^>^ ReservaLista = Service::QueryAllReservacion();
		   if (ReservaLista != nullptr) {
			   dgvReserva->Rows->Clear();
			   String^ estado;
			   for (int i = ReservaLista->Count; i > 0; i--) {
				   if (ReservaLista[i-1]->ClienteID == ClienteActual->Id) {
					   if (ReservaLista[i - 1]->Completada == true) {
						   estado = "Completada";
					   }
					   else {
						   estado = "Pendiente";
					   }
					   dgvReserva->Rows->Add(gcnew array<String^>{
								estado,
							   (ReservaLista[i - 1]->FechaReserva).Date.ToString("yyyy-MM-dd"),
							   ReservaLista[i - 1]->InicioReserva,
							   ReservaLista[i - 1]->FinReserva,
					   });
				   }
			   }
		   }
	   }

	private: Estacionamiento^ SeleccionEstacionamiento() {
		int i = 0;
		Estacionamiento^ EstacionamientoSeleccionado;
		array<Button^>^ botones = gcnew array<Button^> { est1, est2, est3, est4, est5, est6, est7, est8, est9, est10, est11, est12, est13, est14, est15, est16 };
		List<Estacionamiento^>^ EstacionamientosLista = Service::QueryAllEstacionamientos();
		while (i < 16) {
			if (LastButtonPressed == botones[i]) {
				break;
			}
			i++;
		}	
		EstacionamientoSeleccionado = EstacionamientosLista[i];
		return EstacionamientoSeleccionado;
}
private: void CalculoHora() {
	int minutosactuales = now.Minute;
	int horasactuales = now.Hour;
	int horaredondeada = horasactuales;
	int minutosredondeados = (minutosactuales / 5) * 5;
	if (minutosactuales > 55) {
		if (horasactuales == 23) {
			horaredondeada = 0;
		}
		else {
			horaredondeada = horasactuales + 1;
		}
		minutosredondeados = 0;
	}
	else if (minutosactuales % 5 >= 3) {
		horaredondeada = horasactuales;
		minutosredondeados += 5;
	}
	DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
	tiempo->Add(TiempoRedondeado.ToString("   HH   :   mm   "));
	for (int i = 0; i < 5; i++) {
		minutosredondeados += 5;
		if (minutosredondeados < 55) {
			DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
			tiempo->Add(TiempoRedondeado.ToString("   HH   :   mm   "));
		}
		else {
			minutosredondeados = 0;
			horaredondeada = horasactuales + 1;
			DateTime TiempoRedondeado(now.Year, now.Month, now.Day, horaredondeada, minutosredondeados, 0);
			tiempo->Add(TiempoRedondeado.ToString("   HH   :   mm   "));
		}
	}
}
	   private: bool ConfirmarValidezReserva() {
		   int minutosactuales = now.Minute;
		   int horaactual = now.Hour;
		   DateTime tiemporeserva = DateTime::ParseExact(ClienteActual->MiReservacion->InicioReserva, "   HH   :   mm   ", CultureInfo::InvariantCulture);
		   int horareserva = tiemporeserva.Hour;
		   int minutoreserva = tiemporeserva.Minute;
		   if (horareserva > horaactual) {
			   return true;
		   }
		   else if (horareserva = horaactual) {
			   if (minutosactuales < minutoreserva || minutosactuales-minutoreserva < 5) {
				   return true;
			   }
			   else if (minutosactuales - minutoreserva > 5) {
				   return false;
			   }
		   }
		   else {
			   return false;
		   }
	   }
private: System::Void est1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[0]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est1;
		LimpiarColor();
		est1->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est2_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[1]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est2;
		LimpiarColor();
		est2->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est3_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[2]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est3;
		LimpiarColor();
		est3->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est4_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[3]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est4;
		LimpiarColor();
		est4->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est5_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[4]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est5;
		LimpiarColor();
		est5->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est6_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[5]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est6;
		LimpiarColor();
		est6->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est7_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[6]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est7;
		LimpiarColor();
		est7->BackColor = System::Drawing::Color::LightSkyBlue;
	}

}
private: System::Void est8_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[7]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est8;
		LimpiarColor();
		est8->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est9_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[8]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est9;
		LimpiarColor();
		est9->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est10_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[9]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est10;
		LimpiarColor();
		est10->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est11_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[10]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est11;
		LimpiarColor();
		est11->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est12_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[11]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est12;
		LimpiarColor();
		est12->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est13_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[12]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est13;
		LimpiarColor();
		est13->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est14_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[13]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est14;
		LimpiarColor();
		est14->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est15_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[14]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est15;
		LimpiarColor();
		est15->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: System::Void est16_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Estacionamiento^>^ estacionamientoLista = Service::QueryAllEstacionamientos();
	if (estacionamientoLista[15]->MiSensor->Detecta == false) {
		isButtonPressed = 1;
		LastButtonPressed = est16;
		LimpiarColor();
		est16->BackColor = System::Drawing::Color::LightSkyBlue;
	}
}
private: void LimpiarColor() {
	array<Button^>^ botones = gcnew array<Button^> { est1, est2, est3, est4, est5, est6, est7, est8, est9, est10, est11, est12, est13, est14, est15, est16 };
	for (int i = 0; i < 16; i++) {
		botones[i]->BackColor = System::Drawing::Color::White;
	}
}
};
}
