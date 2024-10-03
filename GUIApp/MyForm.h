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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(670, 452);
			this->Controls->Add(this->bttDelete);
			this->Controls->Add(this->bttUpdate);
			this->Controls->Add(this->bttAdd);
			this->Name = L"MyForm";
			this->Text = L"Mantenimiento Personal de Limpiez";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
