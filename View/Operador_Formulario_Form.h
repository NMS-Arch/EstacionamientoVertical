#pragma once
#include "Operador_Registrar_Ticket_Form.h"
#include "Operador_Buscar_Auto_Form.h"
#include "Operador_Registrar_Falla_Form.h"


namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operador_Formulario_Form
	/// </summary>
	public ref class Operador_Formulario_Form : public System::Windows::Forms::Form
	{

	private:

		Form^ loginForm;

	public:
		Operador_Formulario_Form(Form^ entrada_loginForm)
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
		~Operador_Formulario_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Espacios_Disponibles;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Vehiculo;
	private: System::Windows::Forms::NumericUpDown^ numeric_Espacios_Disponibles;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numeric_;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Listar_Historial;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cb_ID_Vehiculo_Dinamico;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Registrar_TIcket;
	private: System::Windows::Forms::Button^ btn_Buscar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID_forzado;

	private: System::Windows::Forms::Button^ btn_Forzar_Bajada;
	private: System::Windows::Forms::Button^ btn_Bajar_Espacio;
	private: System::Windows::Forms::Button^ btn_Cerrar_Sesion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID_Operario_Cuenta;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_Registrar_Falla;












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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Espacios_Disponibles = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numeric_Peso_Vehiculo = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Espacios_Disponibles = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numeric_ = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Listar_Historial = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cb_ID_Vehiculo_Dinamico = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Registrar_TIcket = (gcnew System::Windows::Forms::Button());
			this->btn_Buscar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_forzado = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Forzar_Bajada = (gcnew System::Windows::Forms::Button());
			this->btn_Bajar_Espacio = (gcnew System::Windows::Forms::Button());
			this->btn_Cerrar_Sesion = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_Operario_Cuenta = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_Registrar_Falla = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Disponibles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_forzado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Operario_Cuenta))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gestion de Espacios - Operario";
			// 
			// btn_Espacios_Disponibles
			// 
			this->btn_Espacios_Disponibles->Location = System::Drawing::Point(41, 133);
			this->btn_Espacios_Disponibles->Name = L"btn_Espacios_Disponibles";
			this->btn_Espacios_Disponibles->Size = System::Drawing::Size(192, 41);
			this->btn_Espacios_Disponibles->TabIndex = 3;
			this->btn_Espacios_Disponibles->Text = L"Espacios Disponibles";
			this->btn_Espacios_Disponibles->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Pesar Vehiculo";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// numeric_Peso_Vehiculo
			// 
			this->numeric_Peso_Vehiculo->DecimalPlaces = 1;
			this->numeric_Peso_Vehiculo->Location = System::Drawing::Point(43, 425);
			this->numeric_Peso_Vehiculo->Name = L"numeric_Peso_Vehiculo";
			this->numeric_Peso_Vehiculo->Size = System::Drawing::Size(188, 22);
			this->numeric_Peso_Vehiculo->TabIndex = 5;
			// 
			// numeric_Espacios_Disponibles
			// 
			this->numeric_Espacios_Disponibles->Location = System::Drawing::Point(128, 195);
			this->numeric_Espacios_Disponibles->Name = L"numeric_Espacios_Disponibles";
			this->numeric_Espacios_Disponibles->Size = System::Drawing::Size(103, 22);
			this->numeric_Espacios_Disponibles->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 474);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Precio por Hora";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// numeric_
			// 
			this->numeric_->DecimalPlaces = 2;
			this->numeric_->Location = System::Drawing::Point(44, 513);
			this->numeric_->Name = L"numeric_";
			this->numeric_->Size = System::Drawing::Size(186, 22);
			this->numeric_->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(306, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(908, 310);
			this->dataGridView1->TabIndex = 9;
			// 
			// btn_Listar_Historial
			// 
			this->btn_Listar_Historial->Location = System::Drawing::Point(487, 79);
			this->btn_Listar_Historial->Name = L"btn_Listar_Historial";
			this->btn_Listar_Historial->Size = System::Drawing::Size(123, 37);
			this->btn_Listar_Historial->TabIndex = 10;
			this->btn_Listar_Historial->Text = L"Actualizar";
			this->btn_Listar_Historial->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Cantidad";
			// 
			// cb_ID_Vehiculo_Dinamico
			// 
			this->cb_ID_Vehiculo_Dinamico->FormattingEnabled = true;
			this->cb_ID_Vehiculo_Dinamico->Location = System::Drawing::Point(131, 250);
			this->cb_ID_Vehiculo_Dinamico->Name = L"cb_ID_Vehiculo_Dinamico";
			this->cb_ID_Vehiculo_Dinamico->Size = System::Drawing::Size(100, 24);
			this->cb_ID_Vehiculo_Dinamico->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Espacios";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"HISTORIAL RECIENTE";
			// 
			// btn_Registrar_TIcket
			// 
			this->btn_Registrar_TIcket->Location = System::Drawing::Point(306, 475);
			this->btn_Registrar_TIcket->Name = L"btn_Registrar_TIcket";
			this->btn_Registrar_TIcket->Size = System::Drawing::Size(176, 60);
			this->btn_Registrar_TIcket->TabIndex = 15;
			this->btn_Registrar_TIcket->Text = L"Registrar Ticket";
			this->btn_Registrar_TIcket->UseVisualStyleBackColor = true;
			this->btn_Registrar_TIcket->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Registrar_TIcket_Click);
			// 
			// btn_Buscar
			// 
			this->btn_Buscar->Location = System::Drawing::Point(573, 475);
			this->btn_Buscar->Name = L"btn_Buscar";
			this->btn_Buscar->Size = System::Drawing::Size(182, 60);
			this->btn_Buscar->TabIndex = 16;
			this->btn_Buscar->Text = L"Buscar para Retiro";
			this->btn_Buscar->UseVisualStyleBackColor = true;
			this->btn_Buscar->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Buscar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(899, 481);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Forzar Bajada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(899, 497);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"ID de espacio";
			// 
			// numeric_ID_forzado
			// 
			this->numeric_ID_forzado->Location = System::Drawing::Point(902, 533);
			this->numeric_ID_forzado->Name = L"numeric_ID_forzado";
			this->numeric_ID_forzado->Size = System::Drawing::Size(88, 22);
			this->numeric_ID_forzado->TabIndex = 19;
			// 
			// btn_Forzar_Bajada
			// 
			this->btn_Forzar_Bajada->Location = System::Drawing::Point(1023, 514);
			this->btn_Forzar_Bajada->Name = L"btn_Forzar_Bajada";
			this->btn_Forzar_Bajada->Size = System::Drawing::Size(146, 45);
			this->btn_Forzar_Bajada->TabIndex = 20;
			this->btn_Forzar_Bajada->Text = L"Forzar Bajada";
			this->btn_Forzar_Bajada->UseVisualStyleBackColor = true;
			// 
			// btn_Bajar_Espacio
			// 
			this->btn_Bajar_Espacio->Location = System::Drawing::Point(43, 320);
			this->btn_Bajar_Espacio->Name = L"btn_Bajar_Espacio";
			this->btn_Bajar_Espacio->Size = System::Drawing::Size(188, 30);
			this->btn_Bajar_Espacio->TabIndex = 21;
			this->btn_Bajar_Espacio->Text = L"Bajar Espacio";
			this->btn_Bajar_Espacio->UseVisualStyleBackColor = true;
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(956, 25);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(258, 48);
			this->btn_Cerrar_Sesion->TabIndex = 22;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Cerrar_Sesion_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ticket";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Espacio";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Placa";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Modelo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Peso";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Precio Base";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Hora Entrada";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"R.I. Completo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(38, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"ID Operario";
			// 
			// numeric_ID_Operario_Cuenta
			// 
			this->numeric_ID_Operario_Cuenta->Location = System::Drawing::Point(128, 77);
			this->numeric_ID_Operario_Cuenta->Name = L"numeric_ID_Operario_Cuenta";
			this->numeric_ID_Operario_Cuenta->Size = System::Drawing::Size(105, 22);
			this->numeric_ID_Operario_Cuenta->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 16);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Disponibles";
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Location = System::Drawing::Point(902, 596);
			this->btn_Registrar_Falla->Name = L"btn_Registrar_Falla";
			this->btn_Registrar_Falla->Size = System::Drawing::Size(267, 46);
			this->btn_Registrar_Falla->TabIndex = 26;
			this->btn_Registrar_Falla->Text = L"Registrar Falla";
			this->btn_Registrar_Falla->UseVisualStyleBackColor = true;
			this->btn_Registrar_Falla->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Registrar_Falla_Click);
			// 
			// Operador_Formulario_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1253, 664);
			this->Controls->Add(this->btn_Registrar_Falla);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numeric_ID_Operario_Cuenta);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_Cerrar_Sesion);
			this->Controls->Add(this->btn_Bajar_Espacio);
			this->Controls->Add(this->btn_Forzar_Bajada);
			this->Controls->Add(this->numeric_ID_forzado);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_Buscar);
			this->Controls->Add(this->btn_Registrar_TIcket);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cb_ID_Vehiculo_Dinamico);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Listar_Historial);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->numeric_);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numeric_Espacios_Disponibles);
			this->Controls->Add(this->numeric_Peso_Vehiculo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_Espacios_Disponibles);
			this->Controls->Add(this->label3);
			this->Name = L"Operador_Formulario_Form";
			this->Text = L"Operador_Formulario_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Disponibles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_forzado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Operario_Cuenta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		#pragma endregion
		private: System::Void btn_Cerrar_Sesion_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			loginForm->Show();
		}
		private: System::Void btn_Registrar_TIcket_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			Operador_Registrar_Ticket_Form^ RegistrarTicketForm = gcnew Operador_Registrar_Ticket_Form(this);

			RegistrarTicketForm->Show();
		}
		private: System::Void btn_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			Operador_Buscar_Auto_Form^ BuscarVehiculoForm = gcnew Operador_Buscar_Auto_Form(this);

			BuscarVehiculoForm->Show();

		}
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			Operador_Registrar_Falla_Form^ RegistrarFallaForm = gcnew Operador_Registrar_Falla_Form(this);

			RegistrarFallaForm->Show();
		}
};
}
