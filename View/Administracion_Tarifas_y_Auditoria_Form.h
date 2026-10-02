#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administracion_Tarifas_y_Auditoria_Form
	/// </summary>
	public ref class Administracion_Tarifas_y_Auditoria_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ MenuAdminForm;
	public:
		Administracion_Tarifas_y_Auditoria_Form(Form^ entrada_MenuAdminForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MenuAdminForm = entrada_MenuAdminForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administracion_Tarifas_y_Auditoria_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoHora_Actual;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoPesoAdicional_Actual;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoHora_Modificar;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoPesoAdicional_Modificar;










	private: System::Windows::Forms::Button^ btn_Actualizar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Administracion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numeric_CostoHora_Actual = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_CostoPesoAdicional_Actual = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numeric_CostoHora_Modificar = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_CostoPesoAdicional_Modificar = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Actualizar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Regresar_Menu_Administracion = (gcnew System::Windows::Forms::Button());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Actual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Actual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Modificar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Modificar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Costo por Hora Actual";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(252, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Costo por Peso Adicional";
			// 
			// numeric_CostoHora_Actual
			// 
			this->numeric_CostoHora_Actual->DecimalPlaces = 2;
			this->numeric_CostoHora_Actual->Location = System::Drawing::Point(60, 125);
			this->numeric_CostoHora_Actual->Name = L"numeric_CostoHora_Actual";
			this->numeric_CostoHora_Actual->Size = System::Drawing::Size(135, 22);
			this->numeric_CostoHora_Actual->TabIndex = 2;
			// 
			// numeric_CostoPesoAdicional_Actual
			// 
			this->numeric_CostoPesoAdicional_Actual->DecimalPlaces = 2;
			this->numeric_CostoPesoAdicional_Actual->Location = System::Drawing::Point(255, 125);
			this->numeric_CostoPesoAdicional_Actual->Name = L"numeric_CostoPesoAdicional_Actual";
			this->numeric_CostoPesoAdicional_Actual->Size = System::Drawing::Size(156, 22);
			this->numeric_CostoPesoAdicional_Actual->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Modificar Precios";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Costo por Hora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(56, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Datos de Tarifas Actuales";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(57, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Costo por Peso Adicional";
			// 
			// numeric_CostoHora_Modificar
			// 
			this->numeric_CostoHora_Modificar->DecimalPlaces = 2;
			this->numeric_CostoHora_Modificar->Location = System::Drawing::Point(244, 261);
			this->numeric_CostoHora_Modificar->Name = L"numeric_CostoHora_Modificar";
			this->numeric_CostoHora_Modificar->Size = System::Drawing::Size(125, 22);
			this->numeric_CostoHora_Modificar->TabIndex = 13;
			// 
			// numeric_CostoPesoAdicional_Modificar
			// 
			this->numeric_CostoPesoAdicional_Modificar->DecimalPlaces = 2;
			this->numeric_CostoPesoAdicional_Modificar->Location = System::Drawing::Point(244, 301);
			this->numeric_CostoPesoAdicional_Modificar->Name = L"numeric_CostoPesoAdicional_Modificar";
			this->numeric_CostoPesoAdicional_Modificar->Size = System::Drawing::Size(125, 22);
			this->numeric_CostoPesoAdicional_Modificar->TabIndex = 14;
			// 
			// btn_Actualizar
			// 
			this->btn_Actualizar->Location = System::Drawing::Point(407, 247);
			this->btn_Actualizar->Name = L"btn_Actualizar";
			this->btn_Actualizar->Size = System::Drawing::Size(82, 78);
			this->btn_Actualizar->TabIndex = 16;
			this->btn_Actualizar->Text = L"Actualizar";
			this->btn_Actualizar->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(59, 448);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(902, 206);
			this->dataGridView1->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Operario";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Acction";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(58, 409);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(194, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Bitacora de movimientos";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(604, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(185, 16);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Registro de anteriores Tarifas";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column5,
					this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(607, 247);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(347, 72);
			this->dataGridView2->TabIndex = 20;
			// 
			// btn_Regresar_Menu_Administracion
			// 
			this->btn_Regresar_Menu_Administracion->Location = System::Drawing::Point(766, 64);
			this->btn_Regresar_Menu_Administracion->Name = L"btn_Regresar_Menu_Administracion";
			this->btn_Regresar_Menu_Administracion->Size = System::Drawing::Size(188, 73);
			this->btn_Regresar_Menu_Administracion->TabIndex = 21;
			this->btn_Regresar_Menu_Administracion->Text = L"Regresar Menu de Administracion";
			this->btn_Regresar_Menu_Administracion->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Administracion->Click += gcnew System::EventHandler(this, &Administracion_Tarifas_y_Auditoria_Form::btn_Regresar_Menu_Administracion_Click);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"CostoHora";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"CostoAdicional";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Administracion_Tarifas_y_Auditoria_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 682);
			this->Controls->Add(this->btn_Regresar_Menu_Administracion);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Actualizar);
			this->Controls->Add(this->numeric_CostoPesoAdicional_Modificar);
			this->Controls->Add(this->numeric_CostoHora_Modificar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numeric_CostoPesoAdicional_Actual);
			this->Controls->Add(this->numeric_CostoHora_Actual);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Administracion_Tarifas_y_Auditoria_Form";
			this->Text = L"Administracion_Tarifas_y_Auditoria_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Actual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Actual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Modificar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Modificar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Administracion_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			MenuAdminForm->Show();
		}
};
}
