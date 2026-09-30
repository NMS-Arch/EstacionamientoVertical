#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BuscadorAutoOperador
	/// </summary>
	public ref class BuscadorAutoOperador : public System::Windows::Forms::Form
	{
	public:
		BuscadorAutoOperador(void)
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
		~BuscadorAutoOperador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonBuscarBuscaOpera;

	private: System::Windows::Forms::Button^ ButtonRegistrarSaliBuscaOpera;
	private: System::Windows::Forms::Button^ buttonLlamarCeldaBuscaOpera;




	private: System::Windows::Forms::DataGridView^ ResultadoBuscadorOpera;
	private: System::Windows::Forms::ComboBox^ comboBoxBuscaOpera;
	private: System::Windows::Forms::TextBox^ textBoxBuscaOpera;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Placa_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Peso_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PagoTotal_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Celda_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraIng_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraSali_BuscaOpera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha_BuscaOpera;














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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonBuscarBuscaOpera = (gcnew System::Windows::Forms::Button());
			this->ButtonRegistrarSaliBuscaOpera = (gcnew System::Windows::Forms::Button());
			this->buttonLlamarCeldaBuscaOpera = (gcnew System::Windows::Forms::Button());
			this->ResultadoBuscadorOpera = (gcnew System::Windows::Forms::DataGridView());
			this->comboBoxBuscaOpera = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxBuscaOpera = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Placa_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Peso_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PagoTotal_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Celda_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraIng_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraSali_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha_BuscaOpera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultadoBuscadorOpera))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Buscar por:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingresar:";
			this->label2->Click += gcnew System::EventHandler(this, &BuscadorAutoOperador::label2_Click);
			// 
			// buttonBuscarBuscaOpera
			// 
			this->buttonBuscarBuscaOpera->Location = System::Drawing::Point(119, 150);
			this->buttonBuscarBuscaOpera->Name = L"buttonBuscarBuscaOpera";
			this->buttonBuscarBuscaOpera->Size = System::Drawing::Size(108, 27);
			this->buttonBuscarBuscaOpera->TabIndex = 2;
			this->buttonBuscarBuscaOpera->Text = L"Buscar";
			this->buttonBuscarBuscaOpera->UseVisualStyleBackColor = true;
			// 
			// ButtonRegistrarSaliBuscaOpera
			// 
			this->ButtonRegistrarSaliBuscaOpera->Location = System::Drawing::Point(699, 306);
			this->ButtonRegistrarSaliBuscaOpera->Name = L"ButtonRegistrarSaliBuscaOpera";
			this->ButtonRegistrarSaliBuscaOpera->Size = System::Drawing::Size(164, 36);
			this->ButtonRegistrarSaliBuscaOpera->TabIndex = 3;
			this->ButtonRegistrarSaliBuscaOpera->Text = L"Registrar salida";
			this->ButtonRegistrarSaliBuscaOpera->UseVisualStyleBackColor = true;
			// 
			// buttonLlamarCeldaBuscaOpera
			// 
			this->buttonLlamarCeldaBuscaOpera->Location = System::Drawing::Point(149, 306);
			this->buttonLlamarCeldaBuscaOpera->Name = L"buttonLlamarCeldaBuscaOpera";
			this->buttonLlamarCeldaBuscaOpera->Size = System::Drawing::Size(164, 36);
			this->buttonLlamarCeldaBuscaOpera->TabIndex = 4;
			this->buttonLlamarCeldaBuscaOpera->Text = L"Llamar celda";
			this->buttonLlamarCeldaBuscaOpera->UseVisualStyleBackColor = true;
			// 
			// ResultadoBuscadorOpera
			// 
			this->ResultadoBuscadorOpera->AllowUserToDeleteRows = false;
			this->ResultadoBuscadorOpera->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultadoBuscadorOpera->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Placa_BuscaOpera,
					this->DNI_BuscaOpera, this->Nombre_BuscaOpera, this->Peso_BuscaOpera, this->PagoTotal_BuscaOpera, this->Celda_BuscaOpera, this->HoraIng_BuscaOpera,
					this->HoraSali_BuscaOpera, this->Fecha_BuscaOpera
			});
			this->ResultadoBuscadorOpera->Location = System::Drawing::Point(301, 59);
			this->ResultadoBuscadorOpera->Name = L"ResultadoBuscadorOpera";
			this->ResultadoBuscadorOpera->ReadOnly = true;
			this->ResultadoBuscadorOpera->RowHeadersWidth = 51;
			this->ResultadoBuscadorOpera->RowTemplate->Height = 24;
			this->ResultadoBuscadorOpera->Size = System::Drawing::Size(783, 147);
			this->ResultadoBuscadorOpera->TabIndex = 5;
			// 
			// comboBoxBuscaOpera
			// 
			this->comboBoxBuscaOpera->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBuscaOpera->FormattingEnabled = true;
			this->comboBoxBuscaOpera->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"DNI", L"Nombre", L"Placa" });
			this->comboBoxBuscaOpera->Location = System::Drawing::Point(119, 44);
			this->comboBoxBuscaOpera->Name = L"comboBoxBuscaOpera";
			this->comboBoxBuscaOpera->Size = System::Drawing::Size(121, 24);
			this->comboBoxBuscaOpera->TabIndex = 6;
			// 
			// textBoxBuscaOpera
			// 
			this->textBoxBuscaOpera->Location = System::Drawing::Point(119, 102);
			this->textBoxBuscaOpera->Name = L"textBoxBuscaOpera";
			this->textBoxBuscaOpera->Size = System::Drawing::Size(126, 22);
			this->textBoxBuscaOpera->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(298, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Resultado:";
			this->label3->Click += gcnew System::EventHandler(this, &BuscadorAutoOperador::label3_Click);
			// 
			// Placa_BuscaOpera
			// 
			this->Placa_BuscaOpera->HeaderText = L"Placa:";
			this->Placa_BuscaOpera->MinimumWidth = 6;
			this->Placa_BuscaOpera->Name = L"Placa_BuscaOpera";
			this->Placa_BuscaOpera->ReadOnly = true;
			this->Placa_BuscaOpera->Width = 77;
			// 
			// DNI_BuscaOpera
			// 
			this->DNI_BuscaOpera->HeaderText = L"DNI:";
			this->DNI_BuscaOpera->MinimumWidth = 6;
			this->DNI_BuscaOpera->Name = L"DNI_BuscaOpera";
			this->DNI_BuscaOpera->ReadOnly = true;
			this->DNI_BuscaOpera->Width = 77;
			// 
			// Nombre_BuscaOpera
			// 
			this->Nombre_BuscaOpera->HeaderText = L"Nombre:";
			this->Nombre_BuscaOpera->MinimumWidth = 6;
			this->Nombre_BuscaOpera->Name = L"Nombre_BuscaOpera";
			this->Nombre_BuscaOpera->ReadOnly = true;
			this->Nombre_BuscaOpera->Width = 77;
			// 
			// Peso_BuscaOpera
			// 
			this->Peso_BuscaOpera->HeaderText = L"Peso:";
			this->Peso_BuscaOpera->MinimumWidth = 6;
			this->Peso_BuscaOpera->Name = L"Peso_BuscaOpera";
			this->Peso_BuscaOpera->ReadOnly = true;
			this->Peso_BuscaOpera->Width = 77;
			// 
			// PagoTotal_BuscaOpera
			// 
			this->PagoTotal_BuscaOpera->HeaderText = L"Pago total:";
			this->PagoTotal_BuscaOpera->MinimumWidth = 6;
			this->PagoTotal_BuscaOpera->Name = L"PagoTotal_BuscaOpera";
			this->PagoTotal_BuscaOpera->ReadOnly = true;
			this->PagoTotal_BuscaOpera->Width = 77;
			// 
			// Celda_BuscaOpera
			// 
			this->Celda_BuscaOpera->HeaderText = L"Numero de celda:";
			this->Celda_BuscaOpera->MinimumWidth = 6;
			this->Celda_BuscaOpera->Name = L"Celda_BuscaOpera";
			this->Celda_BuscaOpera->ReadOnly = true;
			this->Celda_BuscaOpera->Width = 90;
			// 
			// HoraIng_BuscaOpera
			// 
			this->HoraIng_BuscaOpera->HeaderText = L"Hora de ingreso:";
			this->HoraIng_BuscaOpera->MinimumWidth = 6;
			this->HoraIng_BuscaOpera->Name = L"HoraIng_BuscaOpera";
			this->HoraIng_BuscaOpera->ReadOnly = true;
			this->HoraIng_BuscaOpera->Width = 90;
			// 
			// HoraSali_BuscaOpera
			// 
			this->HoraSali_BuscaOpera->HeaderText = L"Hora de salida:";
			this->HoraSali_BuscaOpera->MinimumWidth = 6;
			this->HoraSali_BuscaOpera->Name = L"HoraSali_BuscaOpera";
			this->HoraSali_BuscaOpera->ReadOnly = true;
			this->HoraSali_BuscaOpera->Width = 90;
			// 
			// Fecha_BuscaOpera
			// 
			this->Fecha_BuscaOpera->HeaderText = L"Fecha:";
			this->Fecha_BuscaOpera->MinimumWidth = 6;
			this->Fecha_BuscaOpera->Name = L"Fecha_BuscaOpera";
			this->Fecha_BuscaOpera->ReadOnly = true;
			this->Fecha_BuscaOpera->Width = 77;
			// 
			// BuscadorAutoOperador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 408);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxBuscaOpera);
			this->Controls->Add(this->comboBoxBuscaOpera);
			this->Controls->Add(this->ResultadoBuscadorOpera);
			this->Controls->Add(this->buttonLlamarCeldaBuscaOpera);
			this->Controls->Add(this->ButtonRegistrarSaliBuscaOpera);
			this->Controls->Add(this->buttonBuscarBuscaOpera);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BuscadorAutoOperador";
			this->Text = L"BuscadorAutoOperador";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultadoBuscadorOpera))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
