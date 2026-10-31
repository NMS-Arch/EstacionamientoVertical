#pragma once

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
	/// Summary for Mantenimiento_Registro_Fallas_Form
	/// </summary>
	public ref class Mantenimiento_Registro_Fallas_Form : public System::Windows::Forms::Form
	{

	private:
		Form^ MantenimientoMenuForm;


		controller^ controller_GUI;

		//ControlEspacios^ controlEspacios;
		ControlFallas^ controlFallas;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_ID_Falla;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Afectado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Prioridad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Estado;


	public:
		Mantenimiento_Registro_Fallas_Form(Form^ entrada_MantenimientoMenuForm, controller^ controller_GUI_entrada, ControlFallas^ controlFallas_entrada)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MantenimientoMenuForm = entrada_MantenimientoMenuForm;

			controller_GUI = controller_GUI_entrada;
			controlFallas = controlFallas_entrada;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mantenimiento_Registro_Fallas_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_Descripcion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cb_Afectado;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cb_Prioridad;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cb_Tipo;
	private: System::Windows::Forms::Label^ label_Fecha_Dinamica;


	private: System::Windows::Forms::TextBox^ tb_Fecha;
	private: System::Windows::Forms::Label^ label_Hora_Dinamica;


	private: System::Windows::Forms::TextBox^ tb_Hora;

	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Mantenimiento;
	private: System::Windows::Forms::Button^ btn_Agregar;
	private: System::Windows::Forms::Button^ btn_Modificar;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cb_Estado;

	private: System::Windows::Forms::Button^ btn_Consultar;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID_Registro;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ btn_Filtrar;









	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_Nombre;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tb_Rol;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID_rol;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colum_ID_Falla = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Afectado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Prioridad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_Descripcion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cb_Afectado = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cb_Prioridad = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cb_Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->label_Fecha_Dinamica = (gcnew System::Windows::Forms::Label());
			this->tb_Fecha = (gcnew System::Windows::Forms::TextBox());
			this->label_Hora_Dinamica = (gcnew System::Windows::Forms::Label());
			this->tb_Hora = (gcnew System::Windows::Forms::TextBox());
			this->btn_Regresar_Menu_Mantenimiento = (gcnew System::Windows::Forms::Button());
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cb_Estado = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Consultar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_Registro = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Filtrar = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tb_Rol = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_rol = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Registro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_rol))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Colum_ID_Falla,
					this->Colum_Afectado, this->Colum_Prioridad, this->Colum_Tipo, this->Colum_Fecha, this->Colum_Hora, this->Colum_Estado
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 108);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(901, 351);
			this->dataGridView1->TabIndex = 0;
			// 
			// Colum_ID_Falla
			// 
			this->Colum_ID_Falla->HeaderText = L"ID";
			this->Colum_ID_Falla->MinimumWidth = 6;
			this->Colum_ID_Falla->Name = L"Colum_ID_Falla";
			this->Colum_ID_Falla->Width = 50;
			// 
			// Colum_Afectado
			// 
			this->Colum_Afectado->HeaderText = L"Afectado";
			this->Colum_Afectado->MinimumWidth = 6;
			this->Colum_Afectado->Name = L"Colum_Afectado";
			this->Colum_Afectado->Width = 125;
			// 
			// Colum_Prioridad
			// 
			this->Colum_Prioridad->HeaderText = L"Prioridad";
			this->Colum_Prioridad->MinimumWidth = 6;
			this->Colum_Prioridad->Name = L"Colum_Prioridad";
			this->Colum_Prioridad->Width = 125;
			// 
			// Colum_Tipo
			// 
			this->Colum_Tipo->HeaderText = L"Tipo";
			this->Colum_Tipo->MinimumWidth = 6;
			this->Colum_Tipo->Name = L"Colum_Tipo";
			this->Colum_Tipo->Width = 125;
			// 
			// Colum_Fecha
			// 
			this->Colum_Fecha->HeaderText = L"Fecha";
			this->Colum_Fecha->MinimumWidth = 6;
			this->Colum_Fecha->Name = L"Colum_Fecha";
			this->Colum_Fecha->Width = 125;
			// 
			// Colum_Hora
			// 
			this->Colum_Hora->HeaderText = L"Hora";
			this->Colum_Hora->MinimumWidth = 6;
			this->Colum_Hora->Name = L"Colum_Hora";
			this->Colum_Hora->Width = 75;
			// 
			// Colum_Estado
			// 
			this->Colum_Estado->HeaderText = L"Estado";
			this->Colum_Estado->MinimumWidth = 6;
			this->Colum_Estado->Name = L"Colum_Estado";
			this->Colum_Estado->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"HISTORIAL FALLAS";
			// 
			// tb_Descripcion
			// 
			this->tb_Descripcion->Location = System::Drawing::Point(45, 635);
			this->tb_Descripcion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_Descripcion->Name = L"tb_Descripcion";
			this->tb_Descripcion->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Descripcion->Size = System::Drawing::Size(679, 22);
			this->tb_Descripcion->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 497);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Datos de Registros";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 608);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Descripcion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 545);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Afectado";
			// 
			// cb_Afectado
			// 
			this->cb_Afectado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Afectado->FormattingEnabled = true;
			this->cb_Afectado->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Motor Principal", L"Espacio 1", L"Espacio 2",
					L"Espacio 3", L"Espacio 4", L"Espacio 5", L"Espacio 6", L"Espacio 7", L"Espacio 8", L"Espacio 9", L"Espacio 10"
			});
			this->cb_Afectado->Location = System::Drawing::Point(109, 542);
			this->cb_Afectado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cb_Afectado->Name = L"cb_Afectado";
			this->cb_Afectado->Size = System::Drawing::Size(135, 24);
			this->cb_Afectado->TabIndex = 6;
			this->cb_Afectado->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::cb_Afectado_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(288, 545);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Prioridad";
			// 
			// cb_Prioridad
			// 
			this->cb_Prioridad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Prioridad->FormattingEnabled = true;
			this->cb_Prioridad->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Alta", L"Media", L"Baja", L"Desconocida" });
			this->cb_Prioridad->Location = System::Drawing::Point(356, 542);
			this->cb_Prioridad->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cb_Prioridad->Name = L"cb_Prioridad";
			this->cb_Prioridad->Size = System::Drawing::Size(119, 24);
			this->cb_Prioridad->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(549, 545);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Tipo";
			// 
			// cb_Tipo
			// 
			this->cb_Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Tipo->FormattingEnabled = true;
			this->cb_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mecanica", L"Electrica", L"Limpieza", L"Desconocida" });
			this->cb_Tipo->Location = System::Drawing::Point(604, 542);
			this->cb_Tipo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cb_Tipo->Name = L"cb_Tipo";
			this->cb_Tipo->Size = System::Drawing::Size(121, 24);
			this->cb_Tipo->TabIndex = 10;
			// 
			// label_Fecha_Dinamica
			// 
			this->label_Fecha_Dinamica->AutoSize = true;
			this->label_Fecha_Dinamica->Location = System::Drawing::Point(43, 689);
			this->label_Fecha_Dinamica->Name = L"label_Fecha_Dinamica";
			this->label_Fecha_Dinamica->Size = System::Drawing::Size(45, 16);
			this->label_Fecha_Dinamica->TabIndex = 11;
			this->label_Fecha_Dinamica->Text = L"Fecha";
			// 
			// tb_Fecha
			// 
			this->tb_Fecha->Location = System::Drawing::Point(109, 686);
			this->tb_Fecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_Fecha->Name = L"tb_Fecha";
			this->tb_Fecha->Size = System::Drawing::Size(100, 22);
			this->tb_Fecha->TabIndex = 12;
			// 
			// label_Hora_Dinamica
			// 
			this->label_Hora_Dinamica->AutoSize = true;
			this->label_Hora_Dinamica->Location = System::Drawing::Point(288, 692);
			this->label_Hora_Dinamica->Name = L"label_Hora_Dinamica";
			this->label_Hora_Dinamica->Size = System::Drawing::Size(37, 16);
			this->label_Hora_Dinamica->TabIndex = 13;
			this->label_Hora_Dinamica->Text = L"Hora";
			// 
			// tb_Hora
			// 
			this->tb_Hora->Location = System::Drawing::Point(356, 686);
			this->tb_Hora->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_Hora->Name = L"tb_Hora";
			this->tb_Hora->Size = System::Drawing::Size(119, 22);
			this->tb_Hora->TabIndex = 14;
			// 
			// btn_Regresar_Menu_Mantenimiento
			// 
			this->btn_Regresar_Menu_Mantenimiento->Location = System::Drawing::Point(881, 15);
			this->btn_Regresar_Menu_Mantenimiento->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Regresar_Menu_Mantenimiento->Name = L"btn_Regresar_Menu_Mantenimiento";
			this->btn_Regresar_Menu_Mantenimiento->Size = System::Drawing::Size(232, 60);
			this->btn_Regresar_Menu_Mantenimiento->TabIndex = 15;
			this->btn_Regresar_Menu_Mantenimiento->Text = L"Regresar Menu Mantenimiento";
			this->btn_Regresar_Menu_Mantenimiento->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Mantenimiento->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Regresar_Menu_Mantenimiento_Click);
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Location = System::Drawing::Point(865, 526);
			this->btn_Agregar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(248, 57);
			this->btn_Agregar->TabIndex = 16;
			this->btn_Agregar->Text = L"Agregar";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			this->btn_Agregar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Agregar_Click);
			// 
			// btn_Modificar
			// 
			this->btn_Modificar->Location = System::Drawing::Point(1019, 711);
			this->btn_Modificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(93, 36);
			this->btn_Modificar->TabIndex = 17;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = true;
			this->btn_Modificar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Modificar_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(549, 692);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Estado";
			// 
			// cb_Estado
			// 
			this->cb_Estado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Estado->FormattingEnabled = true;
			this->cb_Estado->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pendiente", L"Solucionado", L"En Mantenimiento" });
			this->cb_Estado->Location = System::Drawing::Point(605, 686);
			this->cb_Estado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cb_Estado->Name = L"cb_Estado";
			this->cb_Estado->Size = System::Drawing::Size(120, 24);
			this->cb_Estado->TabIndex = 19;
			// 
			// btn_Consultar
			// 
			this->btn_Consultar->Location = System::Drawing::Point(865, 711);
			this->btn_Consultar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Consultar->Name = L"btn_Consultar";
			this->btn_Consultar->Size = System::Drawing::Size(117, 36);
			this->btn_Consultar->TabIndex = 20;
			this->btn_Consultar->Text = L"Consultar";
			this->btn_Consultar->UseVisualStyleBackColor = true;
			this->btn_Consultar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Consultar_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(861, 635);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(250, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"ID de Registro para consultar o modificar";
			// 
			// numeric_ID_Registro
			// 
			this->numeric_ID_Registro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numeric_ID_Registro->Location = System::Drawing::Point(865, 670);
			this->numeric_ID_Registro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_ID_Registro->Name = L"numeric_ID_Registro";
			this->numeric_ID_Registro->Size = System::Drawing::Size(247, 26);
			this->numeric_ID_Registro->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(331, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 16);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Filtrar por estado";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pendiendte", L"Solucionado", L"En Mantenimiento" });
			this->comboBox5->Location = System::Drawing::Point(456, 38);
			this->comboBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(128, 24);
			this->comboBox5->TabIndex = 25;
			// 
			// btn_Filtrar
			// 
			this->btn_Filtrar->Location = System::Drawing::Point(613, 38);
			this->btn_Filtrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Filtrar->Name = L"btn_Filtrar";
			this->btn_Filtrar->Size = System::Drawing::Size(124, 26);
			this->btn_Filtrar->TabIndex = 26;
			this->btn_Filtrar->Text = L"Filtrar";
			this->btn_Filtrar->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(43, 787);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 16);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Quien registro la falla";
			// 
			// tb_Nombre
			// 
			this->tb_Nombre->Location = System::Drawing::Point(109, 824);
			this->tb_Nombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_Nombre->Name = L"tb_Nombre";
			this->tb_Nombre->Size = System::Drawing::Size(100, 22);
			this->tb_Nombre->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(43, 827);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 16);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Nombre";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(288, 827);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Rol";
			// 
			// tb_Rol
			// 
			this->tb_Rol->Location = System::Drawing::Point(356, 821);
			this->tb_Rol->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_Rol->Name = L"tb_Rol";
			this->tb_Rol->Size = System::Drawing::Size(119, 22);
			this->tb_Rol->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(552, 827);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 16);
			this->label15->TabIndex = 32;
			this->label15->Text = L"ID";
			// 
			// numeric_ID_rol
			// 
			this->numeric_ID_rol->Location = System::Drawing::Point(605, 826);
			this->numeric_ID_rol->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numeric_ID_rol->Name = L"numeric_ID_rol";
			this->numeric_ID_rol->Size = System::Drawing::Size(120, 22);
			this->numeric_ID_rol->TabIndex = 33;
			// 
			// Mantenimiento_Registro_Fallas_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 895);
			this->Controls->Add(this->numeric_ID_rol);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tb_Rol);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Nombre);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Filtrar);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numeric_ID_Registro);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Consultar);
			this->Controls->Add(this->cb_Estado);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_Modificar);
			this->Controls->Add(this->btn_Agregar);
			this->Controls->Add(this->btn_Regresar_Menu_Mantenimiento);
			this->Controls->Add(this->tb_Hora);
			this->Controls->Add(this->label_Hora_Dinamica);
			this->Controls->Add(this->tb_Fecha);
			this->Controls->Add(this->label_Fecha_Dinamica);
			this->Controls->Add(this->cb_Tipo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cb_Prioridad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cb_Afectado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_Descripcion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Mantenimiento_Registro_Fallas_Form";
			this->Text = L"Mantenimiento_Registro_Fallas_Form";
			this->Load += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::Mantenimiento_Registro_Fallas_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Registro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_rol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void btn_Regresar_Menu_Mantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			MantenimientoMenuForm->Show();

		}

		private: System::Void btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e) {



			Falla^ new_falla = gcnew Falla();

			new_falla->espacioAfectado = Convert::ToUInt32(cb_Afectado->SelectedIndex)+1;

			new_falla->prioridad = cb_Prioridad->SelectedItem->ToString();

			new_falla->tipo = cb_Tipo->SelectedItem->ToString();

			new_falla->descripcion = tb_Descripcion->Text;

			DateTime fechaHora = DateTime::Now;

			new_falla->fecha = fechaHora;

			new_falla->estado = cb_Estado->SelectedItem->ToString();


			new_falla->idUserReportante = Convert::ToInt32(numeric_ID_rol->Value);
			new_falla->nombreUserReportante = tb_Nombre->Text;
			new_falla->rolUser = tb_Rol->Text;

			controlFallas->agregarFalla(new_falla);

			actualizar();


		}


		private: void actualizar() {

			List<Falla^>^ lista_fallas = controlFallas->obtener_todos_Falla();


			dataGridView1->Rows->Clear();

			for each (Falla ^ falla in lista_fallas) {


				int indiceFila = dataGridView1->Rows->Add();
				DataGridViewRow^ fila = dataGridView1->Rows[indiceFila];
				String^ afectado;

				if (falla->espacioAfectado != 11) {
					afectado = "Espacio " + falla->espacioAfectado.ToString();
				}
				else {
					afectado = "Motor Principal";
				}

				fila->Cells["Colum_ID_Falla"]->Value = falla->id;
				fila->Cells["Colum_Afectado"]->Value = afectado;

				fila->Cells["Colum_Prioridad"]->Value = falla->prioridad;

				fila->Cells["Colum_Tipo"]->Value = falla->tipo;

				fila->Cells["Colum_Fecha"]->Value = falla->fecha.ToString("dd/MM/yyyy");
				fila->Cells["Colum_Hora"]->Value = falla->fecha.ToString("HH:mm:ss");

				fila->Cells["Colum_Estado"]->Value = falla->estado;


			}

			

		}	/*private: System::Void cb_Estado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}*/


		private: void ocultar_Hora_Fecha() {
			//
			label_Fecha_Dinamica->Visible = false;
			label_Fecha_Dinamica->Enabled = false;

			label_Hora_Dinamica->Visible = false;
			label_Hora_Dinamica->Enabled = false;

			tb_Fecha->Visible = false;
			tb_Fecha->Enabled = false;

			tb_Hora->Visible = false;
			tb_Hora->Enabled = false;

		}

		private: void mostrar_fecha_hora() {
			//
			label_Fecha_Dinamica->Visible = true;
			label_Fecha_Dinamica->Enabled = false;

			label_Hora_Dinamica->Visible = true;
			label_Hora_Dinamica->Enabled = false;

			tb_Fecha->Visible = true;
			tb_Fecha->Enabled = false;

			tb_Hora->Visible = true;
			tb_Hora->Enabled = false;

		}



		private: System::Void Mantenimiento_Registro_Fallas_Form_Load(System::Object^ sender, System::EventArgs^ e) {

			ocultar_Hora_Fecha();
			actualizar();
		}




		private: System::Void btn_Consultar_Click(System::Object^ sender, System::EventArgs^ e) {


			int id_consultado = Convert::ToInt32(numeric_ID_Registro->Value);


			Falla^ consultada_falla = controlFallas->buscarFalla(id_consultado);


			//cb_Prioridad->SelectedIndex = cb_Prioridad->FindStringExact(consultada_falla->espacioAfectado);

			if (consultada_falla != nullptr) {

				cb_Afectado->SelectedIndex = consultada_falla->espacioAfectado;

				cb_Prioridad->SelectedIndex = cb_Prioridad->FindStringExact(consultada_falla->prioridad);

				cb_Tipo->SelectedIndex = cb_Tipo->FindStringExact(consultada_falla->tipo);

				tb_Descripcion->Text = consultada_falla->descripcion;

				cb_Estado->SelectedIndex = cb_Estado->FindStringExact(consultada_falla->estado);
			
				tb_Fecha->Text = consultada_falla->fecha.ToString("dd/MM/yyyy");
				tb_Hora->Text = consultada_falla->fecha.ToString("HH:mm:ss");

				numeric_ID_rol->Value = Convert::ToDecimal(consultada_falla->idUserReportante);

				tb_Nombre->Text = consultada_falla->nombreUserReportante;

				tb_Rol->Text = consultada_falla->rolUser;

				mostrar_fecha_hora();
			}


			actualizar();

		}




	private: System::Void cb_Afectado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ocultar_Hora_Fecha();
	}




	private: System::Void btn_Modificar_Click(System::Object^ sender, System::EventArgs^ e) {

		int id_consultado = Convert::ToInt32(numeric_ID_Registro->Value);


		Falla^ falla_consultada = gcnew Falla();

		try{

		
			falla_consultada->espacioAfectado = Convert::ToUInt32(cb_Afectado->SelectedIndex) + 1;

			falla_consultada->prioridad = cb_Prioridad->SelectedItem->ToString();

			falla_consultada->tipo = cb_Tipo->SelectedItem->ToString();

			falla_consultada->descripcion = tb_Descripcion->Text;

			DateTime fechaHora = DateTime::Now;

			falla_consultada->fecha = fechaHora;

			falla_consultada->estado = cb_Estado->SelectedItem->ToString();


			falla_consultada->idUserReportante = Convert::ToInt32(numeric_ID_rol->Value);
			falla_consultada->nombreUserReportante = tb_Nombre->Text;
			falla_consultada->rolUser = tb_Rol->Text;

			controlFallas->modificarFalla(id_consultado, falla_consultada);
			actualizar();
		}
		catch (Exception^e) {
			MessageBox::Show(e->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}


		
	}
};
	

}
