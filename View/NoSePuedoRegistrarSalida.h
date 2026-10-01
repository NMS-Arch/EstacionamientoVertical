#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NoSePuedoRegistrarSalida
	/// </summary>
	public ref class NoSePuedoRegistrarSalida : public System::Windows::Forms::Form
	{
	public:
		NoSePuedoRegistrarSalida(void)
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
		~NoSePuedoRegistrarSalida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(337, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ya salio el carro o no llamo la celda primero";
			// 
			// NoSePuedoRegistrarSalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 102);
			this->Controls->Add(this->label1);
			this->Name = L"NoSePuedoRegistrarSalida";
			this->Text = L"NoSePuedoRegistrarSalida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
