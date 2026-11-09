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
	/// Summary for Administracion_Gestion_Usuarios_Form
	/// </summary>
	public ref class Administracion_Gestion_Usuarios_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ MenuAdminForm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Rol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Turno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Name_User;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Password_User;

		   ControlReporteFinanciero^ controladorFinanzas;
	private: System::Windows::Forms::Label^ label_Dinamico_0;

	private: System::Windows::Forms::TextBox^ tb_Dinamico;

	private: System::Windows::Forms::Label^ label_Dinamico;

		   ControlUsuario^ controladorUsuarios;
	private: System::Windows::Forms::Label^ label_Dinamic_ID;
	private: System::Windows::Forms::NumericUpDown^ numeric_dinamico_id_consultado;

		   int dato_consultado;
		   int id_consultado;

	public:
		Administracion_Gestion_Usuarios_Form(Form^ entrada_MenuAdminForm, ControlReporteFinanciero^ entrada_ControladorFinanzas, ControlUsuario^ controladorUsuarios_entrada)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MenuAdminForm = entrada_MenuAdminForm;
			controladorFinanzas = entrada_ControladorFinanzas;
			controladorUsuarios = controladorUsuarios_entrada;

			dato_consultado = -1;
			id_consultado = -1;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administracion_Gestion_Usuarios_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btn_Aplicar_Filtro;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btn_Agregar;
	private: System::Windows::Forms::Button^ btn_Modificar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cb_Estado;

	private: System::Windows::Forms::TextBox^ tb_Nombre_Personal;
	private: System::Windows::Forms::ComboBox^ cb_Rol_Personal;
	private: System::Windows::Forms::TextBox^ tb_DNI_Personal;
	private: System::Windows::Forms::TextBox^ tb_nombre_Usuario;
	private: System::Windows::Forms::TextBox^ tb_password_Usuario;







	private: System::Windows::Forms::Button^ btn_Consultar;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cb_Tipo_Datos_Consultar;

	private: System::Windows::Forms::Button^ btn_Eliminar;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_Dato_Consultar;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Administracion;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ cb_Turno;










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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colum_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Rol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Turno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Name_User = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Password_User = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Aplicar_Filtro = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_Estado = (gcnew System::Windows::Forms::ComboBox());
			this->tb_Nombre_Personal = (gcnew System::Windows::Forms::TextBox());
			this->cb_Rol_Personal = (gcnew System::Windows::Forms::ComboBox());
			this->tb_DNI_Personal = (gcnew System::Windows::Forms::TextBox());
			this->tb_nombre_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->tb_password_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->btn_Consultar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cb_Tipo_Datos_Consultar = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Eliminar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_Dato_Consultar = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_Regresar_Menu_Administracion = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->cb_Turno = (gcnew System::Windows::Forms::ComboBox());
			this->label_Dinamico_0 = (gcnew System::Windows::Forms::Label());
			this->tb_Dinamico = (gcnew System::Windows::Forms::TextBox());
			this->label_Dinamico = (gcnew System::Windows::Forms::Label());
			this->label_Dinamic_ID = (gcnew System::Windows::Forms::Label());
			this->numeric_dinamico_id_consultado = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_dinamico_id_consultado))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion de Personal";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Colum_ID,
					this->Colum_Nombre, this->Colum_Rol, this->Colum_Turno, this->Colum_DNI, this->Colum_Estado, this->Colum_Name_User, this->Colum_Password_User
			});
			this->dataGridView1->Location = System::Drawing::Point(404, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(885, 374);
			this->dataGridView1->TabIndex = 1;
			// 
			// Colum_ID
			// 
			this->Colum_ID->HeaderText = L"ID";
			this->Colum_ID->MinimumWidth = 6;
			this->Colum_ID->Name = L"Colum_ID";
			this->Colum_ID->Width = 125;
			// 
			// Colum_Nombre
			// 
			this->Colum_Nombre->HeaderText = L"Nombre";
			this->Colum_Nombre->MinimumWidth = 6;
			this->Colum_Nombre->Name = L"Colum_Nombre";
			this->Colum_Nombre->Width = 125;
			// 
			// Colum_Rol
			// 
			this->Colum_Rol->HeaderText = L"Rol";
			this->Colum_Rol->MinimumWidth = 6;
			this->Colum_Rol->Name = L"Colum_Rol";
			this->Colum_Rol->Width = 125;
			// 
			// Colum_Turno
			// 
			this->Colum_Turno->HeaderText = L"Turno";
			this->Colum_Turno->MinimumWidth = 6;
			this->Colum_Turno->Name = L"Colum_Turno";
			this->Colum_Turno->Width = 125;
			// 
			// Colum_DNI
			// 
			this->Colum_DNI->HeaderText = L"DNI";
			this->Colum_DNI->MinimumWidth = 6;
			this->Colum_DNI->Name = L"Colum_DNI";
			this->Colum_DNI->Width = 125;
			// 
			// Colum_Estado
			// 
			this->Colum_Estado->HeaderText = L"Estado";
			this->Colum_Estado->MinimumWidth = 6;
			this->Colum_Estado->Name = L"Colum_Estado";
			this->Colum_Estado->Width = 125;
			// 
			// Colum_Name_User
			// 
			this->Colum_Name_User->HeaderText = L"Name User";
			this->Colum_Name_User->MinimumWidth = 6;
			this->Colum_Name_User->Name = L"Colum_Name_User";
			this->Colum_Name_User->Width = 125;
			// 
			// Colum_Password_User
			// 
			this->Colum_Password_User->HeaderText = L"Contraseña";
			this->Colum_Password_User->MinimumWidth = 6;
			this->Colum_Password_User->Name = L"Colum_Password_User";
			this->Colum_Password_User->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(403, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo de personal";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Todos", L"Operario", L"Mantenimiento" });
			this->comboBox1->Location = System::Drawing::Point(519, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(127, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// btn_Aplicar_Filtro
			// 
			this->btn_Aplicar_Filtro->Location = System::Drawing::Point(675, 77);
			this->btn_Aplicar_Filtro->Name = L"btn_Aplicar_Filtro";
			this->btn_Aplicar_Filtro->Size = System::Drawing::Size(141, 40);
			this->btn_Aplicar_Filtro->TabIndex = 4;
			this->btn_Aplicar_Filtro->Text = L"Aplicar Filtro";
			this->btn_Aplicar_Filtro->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Rol de Personal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 559);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Nombre Usuario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"DNI";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 597);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Contraseña";
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Location = System::Drawing::Point(42, 654);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(122, 46);
			this->btn_Agregar->TabIndex = 10;
			this->btn_Agregar->Text = L"Agregar";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			this->btn_Agregar->Click += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::btn_Agregar_Click);
			// 
			// btn_Modificar
			// 
			this->btn_Modificar->Enabled = false;
			this->btn_Modificar->Location = System::Drawing::Point(178, 654);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(126, 46);
			this->btn_Modificar->TabIndex = 11;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = true;
			this->btn_Modificar->Visible = false;
			this->btn_Modificar->Click += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::btn_Modificar_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 389);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Estado";
			// 
			// cb_Estado
			// 
			this->cb_Estado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Estado->FormattingEnabled = true;
			this->cb_Estado->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Trabajando", L"Descansando", L"De Baja", L"Despedido" });
			this->cb_Estado->Location = System::Drawing::Point(172, 381);
			this->cb_Estado->Name = L"cb_Estado";
			this->cb_Estado->Size = System::Drawing::Size(130, 24);
			this->cb_Estado->TabIndex = 13;
			// 
			// tb_Nombre_Personal
			// 
			this->tb_Nombre_Personal->Location = System::Drawing::Point(172, 191);
			this->tb_Nombre_Personal->Name = L"tb_Nombre_Personal";
			this->tb_Nombre_Personal->Size = System::Drawing::Size(130, 22);
			this->tb_Nombre_Personal->TabIndex = 14;
			// 
			// cb_Rol_Personal
			// 
			this->cb_Rol_Personal->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Rol_Personal->FormattingEnabled = true;
			this->cb_Rol_Personal->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operador", L"Mantenimiento", L"Administrador" });
			this->cb_Rol_Personal->Location = System::Drawing::Point(172, 244);
			this->cb_Rol_Personal->Name = L"cb_Rol_Personal";
			this->cb_Rol_Personal->Size = System::Drawing::Size(129, 24);
			this->cb_Rol_Personal->TabIndex = 15;
			this->cb_Rol_Personal->SelectedIndexChanged += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::cb_Rol_Personal_SelectedIndexChanged);
			// 
			// tb_DNI_Personal
			// 
			this->tb_DNI_Personal->Location = System::Drawing::Point(174, 339);
			this->tb_DNI_Personal->Name = L"tb_DNI_Personal";
			this->tb_DNI_Personal->Size = System::Drawing::Size(130, 22);
			this->tb_DNI_Personal->TabIndex = 16;
			// 
			// tb_nombre_Usuario
			// 
			this->tb_nombre_Usuario->Location = System::Drawing::Point(174, 551);
			this->tb_nombre_Usuario->Name = L"tb_nombre_Usuario";
			this->tb_nombre_Usuario->Size = System::Drawing::Size(128, 22);
			this->tb_nombre_Usuario->TabIndex = 17;
			// 
			// tb_password_Usuario
			// 
			this->tb_password_Usuario->Location = System::Drawing::Point(174, 591);
			this->tb_password_Usuario->Name = L"tb_password_Usuario";
			this->tb_password_Usuario->Size = System::Drawing::Size(130, 22);
			this->tb_password_Usuario->TabIndex = 18;
			// 
			// btn_Consultar
			// 
			this->btn_Consultar->Location = System::Drawing::Point(575, 615);
			this->btn_Consultar->Name = L"btn_Consultar";
			this->btn_Consultar->Size = System::Drawing::Size(163, 44);
			this->btn_Consultar->TabIndex = 19;
			this->btn_Consultar->Text = L"Consultar";
			this->btn_Consultar->UseVisualStyleBackColor = true;
			this->btn_Consultar->Click += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::btn_Consultar_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(405, 560);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Consultar por";
			// 
			// cb_Tipo_Datos_Consultar
			// 
			this->cb_Tipo_Datos_Consultar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Tipo_Datos_Consultar->FormattingEnabled = true;
			this->cb_Tipo_Datos_Consultar->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ID", L"DNI" });
			this->cb_Tipo_Datos_Consultar->Location = System::Drawing::Point(497, 557);
			this->cb_Tipo_Datos_Consultar->Name = L"cb_Tipo_Datos_Consultar";
			this->cb_Tipo_Datos_Consultar->Size = System::Drawing::Size(108, 24);
			this->cb_Tipo_Datos_Consultar->TabIndex = 21;
			this->cb_Tipo_Datos_Consultar->SelectedIndexChanged += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::cb_Tipo_Datos_Consultar_SelectedIndexChanged);
			// 
			// btn_Eliminar
			// 
			this->btn_Eliminar->Location = System::Drawing::Point(1101, 598);
			this->btn_Eliminar->Name = L"btn_Eliminar";
			this->btn_Eliminar->Size = System::Drawing::Size(121, 61);
			this->btn_Eliminar->TabIndex = 22;
			this->btn_Eliminar->Text = L"Eliminar";
			this->btn_Eliminar->UseVisualStyleBackColor = true;
			this->btn_Eliminar->Click += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::btn_Eliminar_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(950, 594);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 16);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Ingrese el ID";
			// 
			// numeric_ID
			// 
			this->numeric_ID->Location = System::Drawing::Point(953, 637);
			this->numeric_ID->Name = L"numeric_ID";
			this->numeric_ID->Size = System::Drawing::Size(120, 22);
			this->numeric_ID->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(950, 610);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"para eliminar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(405, 602);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Ingrese el dato a consultar";
			// 
			// tb_Dato_Consultar
			// 
			this->tb_Dato_Consultar->Location = System::Drawing::Point(408, 637);
			this->tb_Dato_Consultar->Name = L"tb_Dato_Consultar";
			this->tb_Dato_Consultar->Size = System::Drawing::Size(128, 22);
			this->tb_Dato_Consultar->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(37, 112);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 16);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Datos de Personal";
			// 
			// btn_Regresar_Menu_Administracion
			// 
			this->btn_Regresar_Menu_Administracion->Location = System::Drawing::Point(1050, 49);
			this->btn_Regresar_Menu_Administracion->Name = L"btn_Regresar_Menu_Administracion";
			this->btn_Regresar_Menu_Administracion->Size = System::Drawing::Size(172, 68);
			this->btn_Regresar_Menu_Administracion->TabIndex = 29;
			this->btn_Regresar_Menu_Administracion->Text = L"Regresar al Menu de Administracion";
			this->btn_Regresar_Menu_Administracion->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Administracion->Click += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::btn_Regresar_Menu_Administracion_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(39, 303);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Turno";
			// 
			// cb_Turno
			// 
			this->cb_Turno->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Turno->FormattingEnabled = true;
			this->cb_Turno->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Manana", L"Tarde", L"Noche" });
			this->cb_Turno->Location = System::Drawing::Point(172, 296);
			this->cb_Turno->Name = L"cb_Turno";
			this->cb_Turno->Size = System::Drawing::Size(131, 24);
			this->cb_Turno->TabIndex = 31;
			// 
			// label_Dinamico_0
			// 
			this->label_Dinamico_0->AutoSize = true;
			this->label_Dinamico_0->Location = System::Drawing::Point(39, 518);
			this->label_Dinamico_0->Name = L"label_Dinamico_0";
			this->label_Dinamico_0->Size = System::Drawing::Size(143, 16);
			this->label_Dinamico_0->TabIndex = 32;
			this->label_Dinamico_0->Text = L"Elija el rol del personal";
			this->label_Dinamico_0->Visible = false;
			// 
			// tb_Dinamico
			// 
			this->tb_Dinamico->Enabled = false;
			this->tb_Dinamico->Location = System::Drawing::Point(42, 473);
			this->tb_Dinamico->Name = L"tb_Dinamico";
			this->tb_Dinamico->Size = System::Drawing::Size(127, 22);
			this->tb_Dinamico->TabIndex = 33;
			this->tb_Dinamico->Visible = false;
			// 
			// label_Dinamico
			// 
			this->label_Dinamico->AutoSize = true;
			this->label_Dinamico->Location = System::Drawing::Point(39, 454);
			this->label_Dinamico->Name = L"label_Dinamico";
			this->label_Dinamico->Size = System::Drawing::Size(67, 16);
			this->label_Dinamico->TabIndex = 34;
			this->label_Dinamico->Text = L"Seleccion";
			this->label_Dinamico->Visible = false;
			// 
			// label_Dinamic_ID
			// 
			this->label_Dinamic_ID->AutoSize = true;
			this->label_Dinamic_ID->Location = System::Drawing::Point(39, 155);
			this->label_Dinamic_ID->Name = L"label_Dinamic_ID";
			this->label_Dinamic_ID->Size = System::Drawing::Size(89, 16);
			this->label_Dinamic_ID->TabIndex = 35;
			this->label_Dinamic_ID->Text = L"ID consultado";
			this->label_Dinamic_ID->Visible = false;
			// 
			// numeric_dinamico_id_consultado
			// 
			this->numeric_dinamico_id_consultado->Enabled = false;
			this->numeric_dinamico_id_consultado->Location = System::Drawing::Point(172, 153);
			this->numeric_dinamico_id_consultado->Name = L"numeric_dinamico_id_consultado";
			this->numeric_dinamico_id_consultado->Size = System::Drawing::Size(120, 22);
			this->numeric_dinamico_id_consultado->TabIndex = 36;
			this->numeric_dinamico_id_consultado->Visible = false;
			// 
			// Administracion_Gestion_Usuarios_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1327, 751);
			this->Controls->Add(this->numeric_dinamico_id_consultado);
			this->Controls->Add(this->label_Dinamic_ID);
			this->Controls->Add(this->label_Dinamico);
			this->Controls->Add(this->tb_Dinamico);
			this->Controls->Add(this->label_Dinamico_0);
			this->Controls->Add(this->cb_Turno);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->btn_Regresar_Menu_Administracion);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Dato_Consultar);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numeric_ID);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Eliminar);
			this->Controls->Add(this->cb_Tipo_Datos_Consultar);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_Consultar);
			this->Controls->Add(this->tb_password_Usuario);
			this->Controls->Add(this->tb_nombre_Usuario);
			this->Controls->Add(this->tb_DNI_Personal);
			this->Controls->Add(this->cb_Rol_Personal);
			this->Controls->Add(this->tb_Nombre_Personal);
			this->Controls->Add(this->cb_Estado);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_Modificar);
			this->Controls->Add(this->btn_Agregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_Aplicar_Filtro);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"Administracion_Gestion_Usuarios_Form";
			this->Text = L"Administracion_Gestion_Usuarios_Form";
			this->Load += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::Administracion_Gestion_Usuarios_Form_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Administracion_Gestion_Usuarios_Form::Administracion_Gestion_Usuarios_Form_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_dinamico_id_consultado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Administracion_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			MenuAdminForm->Show();

		}

		private: System::Void btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e) {

			

			if (cb_Rol_Personal->SelectedIndex == 0) {

				Operador^ new_usuario = gcnew Operador();
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->EstacionAsignada = tb_Dinamico->Text;

				controladorUsuarios->RegistrarUsuario(new_usuario);

				
			}
			else if(cb_Rol_Personal->SelectedIndex == 1)
			{
				Mantenimiento^ new_usuario = gcnew Mantenimiento();
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->EspecialidadTecnica = tb_Dinamico->Text;

				controladorUsuarios->RegistrarUsuario(new_usuario);

			}
			else if (cb_Rol_Personal->SelectedIndex == 2) {

				Administrador^ new_usuario = gcnew Administrador();
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->NivelAcceso = tb_Dinamico->Text;

				controladorUsuarios->RegistrarUsuario(new_usuario);
			}

			limpiar();
			actualizar_celdas();

		}

		private: void limpiar() {
			tb_Nombre_Personal->Clear();
			tb_DNI_Personal->Clear();;
			cb_Estado->SelectedIndex=-1;

			tb_nombre_Usuario->Clear();;
			tb_password_Usuario->Clear();;

			tb_Dinamico->Clear();

			this->label_Dinamico_0->Visible = false;
			this->label_Dinamico->Visible = false;
			this->tb_Dinamico->Visible = false;
			this->tb_Dinamico->Enabled = false;
		}

		
		
		
		private: void mostrar_id_consultado() {

			if (id_consultado != -1) {
				label_Dinamic_ID->Visible = true;
				numeric_dinamico_id_consultado->Visible = true;
				numeric_dinamico_id_consultado->Enabled = false;

				btn_Modificar->Visible = true;
				btn_Modificar->Enabled = true;
			}

		}
		private: void ocultar_id_consultado() {
			id_consultado = -1;
			label_Dinamic_ID->Visible = false;
			numeric_dinamico_id_consultado->Visible = false;
			numeric_dinamico_id_consultado->Enabled = false;

			btn_Modificar->Visible = false;
			btn_Modificar->Enabled = false;
		}






		

		private: System::Void btn_Modificar_Click(System::Object^ sender, System::EventArgs^ e) {

			int id_user = Convert::ToInt32(numeric_ID->Value);


			if (cb_Rol_Personal->SelectedIndex == 0) {

				Operador^ new_usuario = gcnew Operador();
				new_usuario->Id = id_user;
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->EstacionAsignada = tb_Dinamico->Text;

				controladorUsuarios->ModificarUsuario(new_usuario->Id,new_usuario);

				ocultar_id_consultado();
			}
			else if (cb_Rol_Personal->SelectedIndex == 1)
			{
				Mantenimiento^ new_usuario = gcnew Mantenimiento();
				new_usuario->Id = id_user;
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->EspecialidadTecnica = tb_Dinamico->Text;

				controladorUsuarios->ModificarUsuario(new_usuario->Id, new_usuario);

				ocultar_id_consultado();

			}
			else if (cb_Rol_Personal->SelectedIndex == 2) {

				Administrador^ new_usuario = gcnew Administrador();
				new_usuario->Id = id_user;
				new_usuario->Nombre = tb_Nombre_Personal->Text;
				new_usuario->Turno = cb_Turno->SelectedItem->ToString();
				new_usuario->DNI = Convert::ToInt32(tb_DNI_Personal->Text);
				new_usuario->Estado = cb_Estado->SelectedItem->ToString();

				new_usuario->NombreUsuario = tb_nombre_Usuario->Text;
				new_usuario->PasswordUsuario = tb_password_Usuario->Text;

				new_usuario->NivelAcceso = tb_Dinamico->Text;

				controladorUsuarios->ModificarUsuario(new_usuario->Id, new_usuario);

				ocultar_id_consultado();
			}

			limpiar();
			actualizar_celdas();
			
		}



		private: System::Void btn_Consultar_Click(System::Object^ sender, System::EventArgs^ e) {
			
			Usuario^ usuario_consultado = nullptr;

			if (dato_consultado == 0) {

				String^ criterio = "id";
				int id = Convert::ToInt32(tb_Dato_Consultar->Text);
				usuario_consultado = controladorUsuarios->BuscarAvanzado(criterio, id);
			}
			else if (dato_consultado == 1) {

				String^ criterio = "dni";
				int dni = Convert::ToInt32(tb_Dato_Consultar->Text);
				usuario_consultado = controladorUsuarios->BuscarAvanzado(criterio, dni);

				
			}

			if (usuario_consultado != nullptr) {

				// 1. Mostrar datos generales compartidos por todos los usuarios
				numeric_ID->Value = Convert::ToDecimal(usuario_consultado->Id);
				tb_Nombre_Personal->Text = usuario_consultado->Nombre;
				tb_DNI_Personal->Text = usuario_consultado->DNI.ToString();
				//tb_nombre_Usuario->Text = usuario_consultado->NombreUsuario;
				//tb_password_Usuario->Text = usuario_consultado->PasswordUsuario;

				//// 2. Mostrar datos en ComboBoxes usando FindStringExact para mayor seguridad
				//cb_Turno->SelectedIndex = cb_Turno->FindStringExact(usuario_consultado->Turno);
				//cb_Estado->SelectedIndex = cb_Estado->FindStringExact(usuario_consultado->Estado);

				// 3. Determinar el ROL específico y llenar el campo dinámico

				// Intentamos convertir a Operador
				if (dynamic_cast<Operador^>(usuario_consultado) != nullptr) {
					cb_Rol_Personal->SelectedIndex = 0;

					

					Operador^ op = dynamic_cast<Operador^>(usuario_consultado);
					tb_Dinamico->Text = op->EstacionAsignada;
					tb_nombre_Usuario->Text = op->NombreUsuario;
					tb_password_Usuario->Text = op->PasswordUsuario;
					cb_Turno->SelectedIndex = cb_Turno->FindStringExact(op->Turno);
					cb_Estado->SelectedIndex = cb_Estado->FindStringExact(op->Estado);

					id_consultado=op->Id;
					mostrar_id_consultado();
				}
				// Intentamos convertir a Mantenimiento
				else if (dynamic_cast<Mantenimiento^>(usuario_consultado) != nullptr) {
					cb_Rol_Personal->SelectedIndex = 1;

					Mantenimiento^ mant = dynamic_cast<Mantenimiento^>(usuario_consultado);
					tb_Dinamico->Text = mant->EspecialidadTecnica;
					tb_nombre_Usuario->Text = mant->NombreUsuario;
					tb_password_Usuario->Text = mant->PasswordUsuario;
					cb_Turno->SelectedIndex = cb_Turno->FindStringExact(mant->Turno);
					cb_Estado->SelectedIndex = cb_Estado->FindStringExact(mant->Estado);

					id_consultado = mant->Id;
					mostrar_id_consultado();
				}
				// Intentamos convertir a Administrador
				else if (dynamic_cast<Administrador^>(usuario_consultado) != nullptr) {
					cb_Rol_Personal->SelectedIndex = 2;

					Administrador^ admin = dynamic_cast<Administrador^>(usuario_consultado);
					tb_Dinamico->Text = admin->NivelAcceso;
					tb_nombre_Usuario->Text = admin->NombreUsuario;
					tb_password_Usuario->Text = admin->PasswordUsuario;
					cb_Turno->SelectedIndex = cb_Turno->FindStringExact(admin->Turno);
					cb_Estado->SelectedIndex = cb_Estado->FindStringExact(admin->Estado);

					id_consultado = admin->Id;
					mostrar_id_consultado();
				}

			}
			else {
				// Si es nullptr, significa que la búsqueda no arrojó resultados
				id_consultado = -1;
				MessageBox::Show("No se encontró ningún usuario con el dato ingresado.", "Búsqueda", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			
			
		}



		private: System::Void btn_Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
			
			int id_user = Convert::ToInt32(numeric_ID->Value);

			controladorUsuarios->EliminarUsuario(id_user);
			actualizar_celdas();
			
		}


		



		private: System::Void cb_Rol_Personal_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			

			if (cb_Rol_Personal->SelectedIndex == 0) {

				this->label_Dinamico_0->Visible = false;
				this->label_Dinamico->Visible = true;

				label_Dinamico->Text = "Ingrese la estacion asignada";

				this->tb_Dinamico->Visible = true;
				this->tb_Dinamico->Enabled = true;


			}
			else if (cb_Rol_Personal->SelectedIndex == 1)
			{
				this->label_Dinamico_0->Visible = false;
				this->label_Dinamico->Visible = true;

				label_Dinamico->Text = "Ingrese la especialidad";

				this->tb_Dinamico->Visible = true;
				this->tb_Dinamico->Enabled = true;

			}
			else if (cb_Rol_Personal->SelectedIndex == 2) {

				this->label_Dinamico_0->Visible = false;
				this->label_Dinamico->Visible = true;

				label_Dinamico->Text = "Ingrese el nivel de acceso";

				this->tb_Dinamico->Visible = true;
				this->tb_Dinamico->Enabled = true;
			}

		
		}


		private: System::Void cb_Tipo_Datos_Consultar_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
			dato_consultado = cb_Tipo_Datos_Consultar->SelectedIndex;
		}


			   //String^ valueDNI;
	   ////valor DNI si no se coloca
	   //if (ticket->dni != 0 && ticket->dni >= 10000000 && ticket->dni <= 99999999) {
	   //	valueDNI = ticket->dni.ToString();
	   //}
	   //else {
	   //	valueDNI = "No introducido";
	   //}

		private: void actualizar_celdas() {

			List<Usuario^>^ lista_usuarios = controladorUsuarios->ObtenerTodos();
			dataGridView1->Rows->Clear();

			for each (Usuario ^ usuario in lista_usuarios) {

				// 1. Intentamos convertir a Empleado ANTES de crear la fila
				Empleado^ empleado = dynamic_cast<Empleado^>(usuario);

				// Si el objeto NO es un empleado (por ejemplo, es un Cliente), lo ignoramos
				if (empleado == nullptr) {
					continue; // Salta inmediatamente al siguiente 'usuario' del ciclo for
				}

				// --- A partir de aquí, estamos 100% seguros de que es un Empleado ---

				int indiceFila = dataGridView1->Rows->Add();
				DataGridViewRow^ fila = dataGridView1->Rows[indiceFila];

				// 2. Llenamos los datos (podemos usar 'empleado' directamente para todo)
				fila->Cells["Colum_ID"]->Value = empleado->Id;
				fila->Cells["Colum_Nombre"]->Value = empleado->Nombre;
				fila->Cells["Colum_DNI"]->Value = empleado->DNI;

				fila->Cells["Colum_Turno"]->Value = empleado->Turno;
				fila->Cells["Colum_Estado"]->Value = empleado->Estado;
				fila->Cells["Colum_Name_User"]->Value = empleado->NombreUsuario;
				fila->Cells["Colum_Password_User"]->Value = empleado->PasswordUsuario;

				// 3. Identificamos el rol específico
				String^ rolTexto = "Desconocido";

				if (dynamic_cast<Operador^>(empleado) != nullptr) {
					rolTexto = "Operador";
				}
				else if (dynamic_cast<Mantenimiento^>(empleado) != nullptr) {
					rolTexto = "Mantenimiento";
				}
				else if (dynamic_cast<Administrador^>(empleado) != nullptr) {
					rolTexto = "Administrador";
				}

				fila->Cells["Colum_Rol"]->Value = rolTexto;
			}
		}

		private: System::Void Administracion_Gestion_Usuarios_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		
			actualizar_celdas();
		
		}
		private: System::Void Administracion_Gestion_Usuarios_Form_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		
		
			actualizar_celdas();
		}
};
}
