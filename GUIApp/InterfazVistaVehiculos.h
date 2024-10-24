#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InterfazVistaVehiculos
	/// </summary>
	public ref class InterfazVistaVehiculos : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::ImageList^ imgListaEstacionamiento;
	private: System::Windows::Forms::PictureBox^ est;

	private: System::Windows::Forms::PictureBox^ est2;
	private: System::Windows::Forms::PictureBox^ est4;
	private: System::Windows::Forms::PictureBox^ est3;








	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
















	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;








	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::GroupBox^ imgBox;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfazVistaVehiculos::typeid));
			this->imgListaEstacionamiento = (gcnew System::Windows::Forms::ImageList(this->components));
			this->est = (gcnew System::Windows::Forms::PictureBox());
			this->est2 = (gcnew System::Windows::Forms::PictureBox());
			this->est4 = (gcnew System::Windows::Forms::PictureBox());
			this->est3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->imgBox = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			this->imgBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// imgListaEstacionamiento
			// 
			this->imgListaEstacionamiento->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imgListaEstacionamiento.ImageStream")));
			this->imgListaEstacionamiento->TransparentColor = System::Drawing::Color::Transparent;
			this->imgListaEstacionamiento->Images->SetKeyName(0, L"Espacio_Disponible.png");
			this->imgListaEstacionamiento->Images->SetKeyName(1, L"Espacio_Lleno.png");
			this->imgListaEstacionamiento->Images->SetKeyName(2, L"Espacio_Reservado.png");
			// 
			// est
			// 
			this->est->Location = System::Drawing::Point(9, 4);
			this->est->Name = L"est";
			this->est->Size = System::Drawing::Size(90, 90);
			this->est->TabIndex = 0;
			this->est->TabStop = false;
			// 
			// est2
			// 
			this->est2->Location = System::Drawing::Point(105, 4);
			this->est2->Name = L"est2";
			this->est2->Size = System::Drawing::Size(90, 90);
			this->est2->TabIndex = 1;
			this->est2->TabStop = false;
			// 
			// est4
			// 
			this->est4->Location = System::Drawing::Point(297, 4);
			this->est4->Name = L"est4";
			this->est4->Size = System::Drawing::Size(90, 90);
			this->est4->TabIndex = 3;
			this->est4->TabStop = false;
			// 
			// est3
			// 
			this->est3->Location = System::Drawing::Point(201, 4);
			this->est3->Name = L"est3";
			this->est3->Size = System::Drawing::Size(90, 90);
			this->est3->TabIndex = 2;
			this->est3->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(297, 100);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(90, 90);
			this->pictureBox9->TabIndex = 15;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(201, 100);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(90, 90);
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(105, 100);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(90, 90);
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(9, 100);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(90, 90);
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Location = System::Drawing::Point(297, 330);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(90, 90);
			this->pictureBox29->TabIndex = 39;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Location = System::Drawing::Point(201, 330);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(90, 90);
			this->pictureBox30->TabIndex = 38;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Location = System::Drawing::Point(105, 330);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(90, 90);
			this->pictureBox31->TabIndex = 37;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Location = System::Drawing::Point(9, 330);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(90, 90);
			this->pictureBox32->TabIndex = 36;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Location = System::Drawing::Point(297, 234);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(90, 90);
			this->pictureBox41->TabIndex = 27;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Location = System::Drawing::Point(201, 234);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(90, 90);
			this->pictureBox42->TabIndex = 26;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Location = System::Drawing::Point(105, 234);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(90, 90);
			this->pictureBox43->TabIndex = 25;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Location = System::Drawing::Point(9, 234);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(90, 90);
			this->pictureBox44->TabIndex = 24;
			this->pictureBox44->TabStop = false;
			// 
			// imgBox
			// 
			this->imgBox->Controls->Add(this->pictureBox29);
			this->imgBox->Controls->Add(this->pictureBox30);
			this->imgBox->Controls->Add(this->pictureBox31);
			this->imgBox->Controls->Add(this->pictureBox32);
			this->imgBox->Controls->Add(this->pictureBox41);
			this->imgBox->Controls->Add(this->pictureBox42);
			this->imgBox->Controls->Add(this->pictureBox43);
			this->imgBox->Controls->Add(this->pictureBox44);
			this->imgBox->Controls->Add(this->pictureBox9);
			this->imgBox->Controls->Add(this->pictureBox10);
			this->imgBox->Controls->Add(this->pictureBox11);
			this->imgBox->Controls->Add(this->pictureBox12);
			this->imgBox->Controls->Add(this->est4);
			this->imgBox->Controls->Add(this->est3);
			this->imgBox->Controls->Add(this->est2);
			this->imgBox->Controls->Add(this->est);
			this->imgBox->Location = System::Drawing::Point(30, 34);
			this->imgBox->Name = L"imgBox";
			this->imgBox->Size = System::Drawing::Size(398, 428);
			this->imgBox->TabIndex = 48;
			this->imgBox->TabStop = false;
			// 
			// InterfazVistaVehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 516);
			this->Controls->Add(this->imgBox);
			this->Name = L"InterfazVistaVehiculos";
			this->Text = L"InterfazVistaVehiculos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->est3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			this->imgBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
