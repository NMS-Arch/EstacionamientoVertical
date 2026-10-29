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

	using namespace controllerPrincipal;
	using namespace modelPrincipal;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Operador_Formulario_Form
	/// </summary>
	public ref class Operador_Formulario_Form : public System::Windows::Forms::Form
	{

	private:
		//Padre
		Form^ loginForm;
		//hijos
		Operador_Registrar_Falla_Form^ RegistrarFallaForm;
		Operador_Buscar_Auto_Form^ BuscarVehiculoForm;
		Operador_Registrar_Ticket_Form^ RegistrarTicketForm;

		controller^ controlador_GUI;
		double peso_vehiculo;
		int ID_espacio_vehiculo;
		double precio_hora;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;

	public:
		Operador_Formulario_Form(Form^ entrada_loginForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			this->IsMdiContainer = true;
			
			loginForm = entrada_loginForm;

			controlador_GUI = gcnew controller();

			this->peso_vehiculo;
			this->ID_espacio_vehiculo;
			this->precio_hora;


			RegistrarFallaForm = gcnew Operador_Registrar_Falla_Form(this);
			BuscarVehiculoForm = gcnew Operador_Buscar_Auto_Form(this);


			RegistrarTicketForm = nullptr;
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
	private: System::Windows::Forms::Button^ btn_Pesar_Vehiculo;

	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Vehiculo;
	private: System::Windows::Forms::NumericUpDown^ numeric_Espacios_Disponibles;
	private: System::Windows::Forms::Button^ btn_Precio_Hora;



	private: System::Windows::Forms::NumericUpDown^ numeric_Precio_Hora;


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
			this->btn_Pesar_Vehiculo = (gcnew System::Windows::Forms::Button());
			this->numeric_Peso_Vehiculo = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Espacios_Disponibles = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Precio_Hora = (gcnew System::Windows::Forms::Button());
			this->numeric_Precio_Hora = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_Operario_Cuenta = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_Registrar_Falla = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Disponibles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Precio_Hora))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_forzado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Operario_Cuenta))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gestion de Espacios - Operario";
			// 
			// btn_Espacios_Disponibles
			// 
			this->btn_Espacios_Disponibles->Location = System::Drawing::Point(41, 133);
			this->btn_Espacios_Disponibles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Espacios_Disponibles->Name = L"btn_Espacios_Disponibles";
			this->btn_Espacios_Disponibles->Size = System::Drawing::Size(192, 41);
			this->btn_Espacios_Disponibles->TabIndex = 3;
			this->btn_Espacios_Disponibles->Text = L"Espacios Disponibles";
			this->btn_Espacios_Disponibles->UseVisualStyleBackColor = true;
			// 
			// btn_Pesar_Vehiculo
			// 
			this->btn_Pesar_Vehiculo->Location = System::Drawing::Point(41, 380);
			this->btn_Pesar_Vehiculo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Pesar_Vehiculo->Name = L"btn_Pesar_Vehiculo";
			this->btn_Pesar_Vehiculo->Size = System::Drawing::Size(189, 28);
			this->btn_Pesar_Vehiculo->TabIndex = 4;
			this->btn_Pesar_Vehiculo->Text = L"Pesar Vehiculo";
			this->btn_Pesar_Vehiculo->UseVisualStyleBackColor = true;
			this->btn_Pesar_Vehiculo->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Pesar_Vehiculo_Click);
			// 
			// numeric_Peso_Vehiculo
			// 
			this->numeric_Peso_Vehiculo->DecimalPlaces = 1;
			this->numeric_Peso_Vehiculo->Location = System::Drawing::Point(43, 425);
			this->numeric_Peso_Vehiculo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_Peso_Vehiculo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numeric_Peso_Vehiculo->Name = L"numeric_Peso_Vehiculo";
			this->numeric_Peso_Vehiculo->Size = System::Drawing::Size(188, 22);
			this->numeric_Peso_Vehiculo->TabIndex = 5;
			// 
			// numeric_Espacios_Disponibles
			// 
			this->numeric_Espacios_Disponibles->Location = System::Drawing::Point(128, 194);
			this->numeric_Espacios_Disponibles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_Espacios_Disponibles->Name = L"numeric_Espacios_Disponibles";
			this->numeric_Espacios_Disponibles->Size = System::Drawing::Size(103, 22);
			this->numeric_Espacios_Disponibles->TabIndex = 6;
			// 
			// btn_Precio_Hora
			// 
			this->btn_Precio_Hora->Location = System::Drawing::Point(43, 474);
			this->btn_Precio_Hora->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Precio_Hora->Name = L"btn_Precio_Hora";
			this->btn_Precio_Hora->Size = System::Drawing::Size(185, 31);
			this->btn_Precio_Hora->TabIndex = 7;
			this->btn_Precio_Hora->Text = L"Precio por Hora";
			this->btn_Precio_Hora->UseVisualStyleBackColor = true;
			this->btn_Precio_Hora->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Precio_Hora_Click);
			// 
			// numeric_Precio_Hora
			// 
			this->numeric_Precio_Hora->DecimalPlaces = 2;
			this->numeric_Precio_Hora->Location = System::Drawing::Point(44, 513);
			this->numeric_Precio_Hora->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_Precio_Hora->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numeric_Precio_Hora->Name = L"numeric_Precio_Hora";
			this->numeric_Precio_Hora->Size = System::Drawing::Size(187, 22);
			this->numeric_Precio_Hora->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(307, 133);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(932, 310);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ticket";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 75;
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
			this->Column3->Width = 75;
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
			this->Column5->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Precio Base";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 75;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Hora Entrada";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 75;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"R.I. Completo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// btn_Listar_Historial
			// 
			this->btn_Listar_Historial->Location = System::Drawing::Point(487, 79);
			this->btn_Listar_Historial->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Listar_Historial->Name = L"btn_Listar_Historial";
			this->btn_Listar_Historial->Size = System::Drawing::Size(123, 37);
			this->btn_Listar_Historial->TabIndex = 10;
			this->btn_Listar_Historial->Text = L"Actualizar";
			this->btn_Listar_Historial->UseVisualStyleBackColor = true;
			this->btn_Listar_Historial->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Listar_Historial_Click);
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
			this->cb_ID_Vehiculo_Dinamico->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_ID_Vehiculo_Dinamico->FormattingEnabled = true;
			this->cb_ID_Vehiculo_Dinamico->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10"
			});
			this->cb_ID_Vehiculo_Dinamico->Location = System::Drawing::Point(131, 250);
			this->cb_ID_Vehiculo_Dinamico->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cb_ID_Vehiculo_Dinamico->Name = L"cb_ID_Vehiculo_Dinamico";
			this->cb_ID_Vehiculo_Dinamico->Size = System::Drawing::Size(100, 24);
			this->cb_ID_Vehiculo_Dinamico->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 254);
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
			this->btn_Registrar_TIcket->Location = System::Drawing::Point(307, 475);
			this->btn_Registrar_TIcket->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btn_Buscar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Buscar->Name = L"btn_Buscar";
			this->btn_Buscar->Size = System::Drawing::Size(181, 60);
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
			this->numeric_ID_forzado->Location = System::Drawing::Point(901, 533);
			this->numeric_ID_forzado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_ID_forzado->Name = L"numeric_ID_forzado";
			this->numeric_ID_forzado->Size = System::Drawing::Size(88, 22);
			this->numeric_ID_forzado->TabIndex = 19;
			// 
			// btn_Forzar_Bajada
			// 
			this->btn_Forzar_Bajada->Location = System::Drawing::Point(1023, 514);
			this->btn_Forzar_Bajada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Forzar_Bajada->Name = L"btn_Forzar_Bajada";
			this->btn_Forzar_Bajada->Size = System::Drawing::Size(147, 46);
			this->btn_Forzar_Bajada->TabIndex = 20;
			this->btn_Forzar_Bajada->Text = L"Forzar Bajada";
			this->btn_Forzar_Bajada->UseVisualStyleBackColor = true;
			// 
			// btn_Bajar_Espacio
			// 
			this->btn_Bajar_Espacio->Location = System::Drawing::Point(43, 320);
			this->btn_Bajar_Espacio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Bajar_Espacio->Name = L"btn_Bajar_Espacio";
			this->btn_Bajar_Espacio->Size = System::Drawing::Size(188, 30);
			this->btn_Bajar_Espacio->TabIndex = 21;
			this->btn_Bajar_Espacio->Text = L"Bajar Espacio";
			this->btn_Bajar_Espacio->UseVisualStyleBackColor = true;
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(956, 25);
			this->btn_Cerrar_Sesion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(259, 48);
			this->btn_Cerrar_Sesion->TabIndex = 22;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &Operador_Formulario_Form::btn_Cerrar_Sesion_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"ID Operario";
			// 
			// numeric_ID_Operario_Cuenta
			// 
			this->numeric_ID_Operario_Cuenta->Location = System::Drawing::Point(128, 78);
			this->numeric_ID_Operario_Cuenta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_ID_Operario_Cuenta->Name = L"numeric_ID_Operario_Cuenta";
			this->numeric_ID_Operario_Cuenta->Size = System::Drawing::Size(105, 22);
			this->numeric_ID_Operario_Cuenta->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 270);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 16);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Disponibles";
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Location = System::Drawing::Point(901, 596);
			this->btn_Registrar_Falla->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->ClientSize = System::Drawing::Size(1269, 665);
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
			this->Controls->Add(this->numeric_Precio_Hora);
			this->Controls->Add(this->btn_Precio_Hora);
			this->Controls->Add(this->numeric_Espacios_Disponibles);
			this->Controls->Add(this->numeric_Peso_Vehiculo);
			this->Controls->Add(this->btn_Pesar_Vehiculo);
			this->Controls->Add(this->btn_Espacios_Disponibles);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Operador_Formulario_Form";
			this->Text = L"Operador_Formulario_Form";
			this->Load += gcnew System::EventHandler(this, &Operador_Formulario_Form::Operador_Formulario_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Espacios_Disponibles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Precio_Hora))->EndInit();
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


			if (cb_ID_Vehiculo_Dinamico->SelectedIndex <0) {
				MessageBox::Show("Debe seleccionar un espacio disponible.", "Falta información", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}


			if (numeric_Peso_Vehiculo->Value <= 0) {
				MessageBox::Show("Debe existir un peso válido para el vehículo.","Falta información", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if(numeric_Precio_Hora->Value <= 0) {
				MessageBox::Show("Debe existir un precio válido por hora.", "Falta información", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}


			ID_espacio_vehiculo = Convert::ToInt32(cb_ID_Vehiculo_Dinamico->SelectedItem->ToString());

			peso_vehiculo = Convert::ToDouble(numeric_Peso_Vehiculo->Value);

			if (RegistrarTicketForm == nullptr || RegistrarTicketForm->IsDisposed) {

				RegistrarTicketForm = gcnew Operador_Registrar_Ticket_Form(this, controlador_GUI, peso_vehiculo, ID_espacio_vehiculo, precio_hora);
			}
				
			RegistrarTicketForm->Actualizar_datos(peso_vehiculo, ID_espacio_vehiculo, precio_hora);



			this->Hide();
			//Operador_Registrar_Ticket_Form^ RegistrarTicketForm = gcnew Operador_Registrar_Ticket_Form(this);
			RegistrarTicketForm->Show();
		}
		private: System::Void btn_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			//Operador_Buscar_Auto_Form^ BuscarVehiculoForm = gcnew Operador_Buscar_Auto_Form(this);

			BuscarVehiculoForm->Show();

		}
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			//Operador_Registrar_Falla_Form^ RegistrarFallaForm = gcnew Operador_Registrar_Falla_Form(this);

			RegistrarFallaForm->Show();
		}

		private: System::Void btn_Pesar_Vehiculo_Click(System::Object^ sender, System::EventArgs^ e) {

			// Simulación de la acción de pesar un vehículo
			numeric_Peso_Vehiculo->Value = Convert::ToDecimal(1500.45); // Asignar un peso simulado de 1500 kg

			peso_vehiculo = Convert::ToDouble(numeric_Peso_Vehiculo->Value);

		}

		private: System::Void btn_Precio_Hora_Click(System::Object^ sender, System::EventArgs^ e) {

			// Simulación de la acción de pesar un vehículo
			numeric_Precio_Hora->Value = Convert::ToDecimal(150.45); // Asignar un precio simulado de 1500 kg

			precio_hora = Convert::ToDouble(numeric_Precio_Hora->Value);


		}

		private: void actualizar() {
			List<TicketAuto^>^ tickets = controlador_GUI->listarTickets();


			dataGridView1->Rows->Clear();

			for each (TicketAuto ^ ticket in tickets) {

				String^ valueRIC;
				//valor RIC
				if (ticket->RC) {
					valueRIC = "Sí";
				}
				else {
					valueRIC = "No";
				}


				dataGridView1->Rows->Add(
					ticket->id,
					ticket->id_espacio,
					ticket->placa,
					ticket->modeloAuto,
					ticket->peso,
					ticket->precio,
					ticket->fechaIngreso.ToString("HH:mm:ss"),
					valueRIC
				);
			}
		}

		private: System::Void btn_Listar_Historial_Click(System::Object^ sender, System::EventArgs^ e) {

			actualizar();
			 
			 


		}
		private: System::Void Operador_Formulario_Form_Load(System::Object^ sender, System::EventArgs^ e) {

			actualizar();
		}
};
}
