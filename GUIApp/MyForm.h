#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Button^ bttAdd;
	protected:
	private: System::Windows::Forms::Button^ bttUpdate;
	private: System::Windows::Forms::Button^ bttDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->bttAdd = (gcnew System::Windows::Forms::Button());
			this->bttUpdate = (gcnew System::Windows::Forms::Button());
			this->bttDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bttAdd
			// 
			this->bttAdd->Location = System::Drawing::Point(27, 236);
			this->bttAdd->Name = L"bttAdd";
			this->bttAdd->Size = System::Drawing::Size(91, 31);
			this->bttAdd->TabIndex = 0;
			this->bttAdd->Text = L"Agregar";
			this->bttAdd->UseVisualStyleBackColor = true;
			// 
			// bttUpdate
			// 
			this->bttUpdate->Location = System::Drawing::Point(142, 236);
			this->bttUpdate->Name = L"bttUpdate";
			this->bttUpdate->Size = System::Drawing::Size(89, 31);
			this->bttUpdate->TabIndex = 1;
			this->bttUpdate->Text = L"Modificar";
			this->bttUpdate->UseVisualStyleBackColor = true;
			// 
			// bttDelete
			// 
			this->bttDelete->Location = System::Drawing::Point(253, 236);
			this->bttDelete->Name = L"bttDelete";
			this->bttDelete->Size = System::Drawing::Size(88, 31);
			this->bttDelete->TabIndex = 2;
			this->bttDelete->Text = L"Eliminar";
			this->bttDelete->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Disponibilidad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Piso";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(670, 452);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttDelete);
			this->Controls->Add(this->bttUpdate);
			this->Controls->Add(this->bttAdd);
			this->Name = L"MyForm";
			this->Text = L"Mantenimiento Personal de Limpiez";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
