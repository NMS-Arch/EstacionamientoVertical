#pragma once
#include "Administracion_Gestion_Usuarios_Form.h"
#include "Administracion_Reporte_Finanzas_Form.h"
#include "Administracion_Tarifas_y_Auditoria_Form.h"

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administrador_Interfaz_Principal_Form
	/// </summary>
	public ref class Administrador_Interfaz_Principal_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ loginForm;
	public:
		Administrador_Interfaz_Principal_Form(Form^ entrada_loginForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			loginForm = entrada_loginForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administrador_Interfaz_Principal_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;







	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_ver_Reportes_Financieros;
	private: System::Windows::Forms::Button^ btn_ver_Gestion_Personal;
	private: System::Windows::Forms::Button^ btn_Configurar_Pagos_Auditoria;



	private: System::Windows::Forms::Button^ btn_Cerrar_Sesion;
	private: System::Windows::Forms::NumericUpDown^ numeric_Ingresos_Hoy;
	private: System::Windows::Forms::NumericUpDown^ numeric_Autos_Atendidos_Hoy;
	private: System::Windows::Forms::NumericUpDown^ numeric_Espacios_Ocupados;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_ver_Reportes_Financieros = (gcnew System::Windows::Forms::Button());
			this->btn_ver_Gestion_Personal = (gcnew System::Windows::Forms::Button());
			this->btn_Configurar_Pagos_Auditoria = (gcnew System::Windows::Forms::Button());
			this->btn_Cerrar_Sesion = (gcnew System::Windows::Forms::Button());
			this->numeric_Ingresos_Hoy = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Autos_Atendidos_Hoy = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Espacios_Ocupados = (gcnew System::Windows::Forms::NumericUpDown());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Ingresos_Hoy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Autos_Atendidos_Hoy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Ocupados))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMINISTRACION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Resumen del Dia";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingresos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(272, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Autos Atendidos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(551, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ocupacion Actual";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(551, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"de Espacios";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(43, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Ultimos 5 Movimientos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(46, 264);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1082, 172);
			this->dataGridView1->TabIndex = 10;
			// 
			// btn_ver_Reportes_Financieros
			// 
			this->btn_ver_Reportes_Financieros->Location = System::Drawing::Point(46, 476);
			this->btn_ver_Reportes_Financieros->Name = L"btn_ver_Reportes_Financieros";
			this->btn_ver_Reportes_Financieros->Size = System::Drawing::Size(182, 43);
			this->btn_ver_Reportes_Financieros->TabIndex = 11;
			this->btn_ver_Reportes_Financieros->Text = L"ver Reportes Financieros";
			this->btn_ver_Reportes_Financieros->UseVisualStyleBackColor = true;
			this->btn_ver_Reportes_Financieros->Click += gcnew System::EventHandler(this, &Administrador_Interfaz_Principal_Form::btn_ver_Reportes_Financieros_Click);
			// 
			// btn_ver_Gestion_Personal
			// 
			this->btn_ver_Gestion_Personal->Location = System::Drawing::Point(426, 476);
			this->btn_ver_Gestion_Personal->Name = L"btn_ver_Gestion_Personal";
			this->btn_ver_Gestion_Personal->Size = System::Drawing::Size(182, 43);
			this->btn_ver_Gestion_Personal->TabIndex = 12;
			this->btn_ver_Gestion_Personal->Text = L"ver Gestion de Personal";
			this->btn_ver_Gestion_Personal->UseVisualStyleBackColor = true;
			this->btn_ver_Gestion_Personal->Click += gcnew System::EventHandler(this, &Administrador_Interfaz_Principal_Form::btn_ver_Gestion_Personal_Click);
			// 
			// btn_Configurar_Pagos_Auditoria
			// 
			this->btn_Configurar_Pagos_Auditoria->Location = System::Drawing::Point(761, 476);
			this->btn_Configurar_Pagos_Auditoria->Name = L"btn_Configurar_Pagos_Auditoria";
			this->btn_Configurar_Pagos_Auditoria->Size = System::Drawing::Size(256, 38);
			this->btn_Configurar_Pagos_Auditoria->TabIndex = 13;
			this->btn_Configurar_Pagos_Auditoria->Text = L"Configurar Pagos y Auditoria";
			this->btn_Configurar_Pagos_Auditoria->UseVisualStyleBackColor = true;
			this->btn_Configurar_Pagos_Auditoria->Click += gcnew System::EventHandler(this, &Administrador_Interfaz_Principal_Form::btn_Configurar_Pagos_Auditoria_Click);
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(915, 84);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(200, 47);
			this->btn_Cerrar_Sesion->TabIndex = 14;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &Administrador_Interfaz_Principal_Form::btn_Cerrar_Sesion_Click);
			// 
			// numeric_Ingresos_Hoy
			// 
			this->numeric_Ingresos_Hoy->DecimalPlaces = 2;
			this->numeric_Ingresos_Hoy->Location = System::Drawing::Point(108, 165);
			this->numeric_Ingresos_Hoy->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numeric_Ingresos_Hoy->Name = L"numeric_Ingresos_Hoy";
			this->numeric_Ingresos_Hoy->Size = System::Drawing::Size(124, 22);
			this->numeric_Ingresos_Hoy->TabIndex = 15;
			// 
			// numeric_Autos_Atendidos_Hoy
			// 
			this->numeric_Autos_Atendidos_Hoy->Location = System::Drawing::Point(383, 163);
			this->numeric_Autos_Atendidos_Hoy->Name = L"numeric_Autos_Atendidos_Hoy";
			this->numeric_Autos_Atendidos_Hoy->Size = System::Drawing::Size(132, 22);
			this->numeric_Autos_Atendidos_Hoy->TabIndex = 16;
			// 
			// numeric_Espacios_Ocupados
			// 
			this->numeric_Espacios_Ocupados->Location = System::Drawing::Point(692, 159);
			this->numeric_Espacios_Ocupados->Name = L"numeric_Espacios_Ocupados";
			this->numeric_Espacios_Ocupados->Size = System::Drawing::Size(120, 22);
			this->numeric_Espacios_Ocupados->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID Registro";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Monto Total";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ticket";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Placa";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Precio Base";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Tiempo Total";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ID Operario";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nombre Ope.";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Administrador_Interfaz_Principal_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1154, 563);
			this->Controls->Add(this->numeric_Espacios_Ocupados);
			this->Controls->Add(this->numeric_Autos_Atendidos_Hoy);
			this->Controls->Add(this->numeric_Ingresos_Hoy);
			this->Controls->Add(this->btn_Cerrar_Sesion);
			this->Controls->Add(this->btn_Configurar_Pagos_Auditoria);
			this->Controls->Add(this->btn_ver_Gestion_Personal);
			this->Controls->Add(this->btn_ver_Reportes_Financieros);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Administrador_Interfaz_Principal_Form";
			this->Text = L"Administrador_Interfaz_Principal_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Ingresos_Hoy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Autos_Atendidos_Hoy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Ocupados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Cerrar_Sesion_Click(System::Object^ sender, System::EventArgs^ e) {


			this->Close();
			loginForm->Show();
		}
		private: System::Void btn_ver_Reportes_Financieros_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			Administracion_Reporte_Finanzas_Form^ AdminReportesFinanForm = gcnew Administracion_Reporte_Finanzas_Form(this);
			AdminReportesFinanForm->Show();
		}
		private: System::Void btn_ver_Gestion_Personal_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			Administracion_Gestion_Usuarios_Form^ AdminGestionUsuarios = gcnew Administracion_Gestion_Usuarios_Form(this);
			AdminGestionUsuarios->Show();
		}
		private: System::Void btn_Configurar_Pagos_Auditoria_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			Administracion_Tarifas_y_Auditoria_Form^ AdminTarifasAuditoriaForm = gcnew Administracion_Tarifas_y_Auditoria_Form(this);
			AdminTarifasAuditoriaForm->Show();
		}
};
}
