#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace controllerPrincipal;
	using namespace modelPrincipal;

	/// <summary>
	/// Summary for Mantenimiento_Registro_Fallas_Form
	/// </summary>
	public ref class Mantenimiento_Registro_Fallas_Form : public System::Windows::Forms::Form
	{

	private:
		Form^ MantenimientoMenuForm;

	public:
		Mantenimiento_Registro_Fallas_Form(Form^ entrada_MantenimientoMenuForm)
		{
			InitializeComponent();
			controller::Fallas = controller::cargarFallas();
			controller::Espacios = controller::cargarEspacios();
			String^ prio;
			for each (Falla ^ falla in controller::Fallas) {
				if (falla->prioridad == 0) {
					prio = "Desconocida";
				}
				else if (falla->prioridad == 1) {
					prio = "Baja";
				}
				else if (falla->prioridad == 2) {
					prio = "Media";
				}
				else if (falla->prioridad == 3) {
					prio = "Alta";
				}
				dataGridView1->Rows->Add(falla->id, "Espacio " + falla->espacioAfectado->id, prio, falla->tipo, falla->fecha, falla->hora);
			}
			//
			//TODO: Add the constructor code here
			MantenimientoMenuForm = entrada_MantenimientoMenuForm;
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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_Fecha;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_Hora;

	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Mantenimiento;
	private: System::Windows::Forms::Button^ btn_Agregar;
	private: System::Windows::Forms::Button^ btn_Modificar;






	private: System::Windows::Forms::Button^ btn_Consultar;

	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ btn_Filtrar;









	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_Nombre;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tb_Rol;










	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::TextBox^ textBox1;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_Fecha = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_Hora = (gcnew System::Windows::Forms::TextBox());
			this->btn_Regresar_Menu_Mantenimiento = (gcnew System::Windows::Forms::Button());
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->btn_Consultar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Filtrar = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tb_Rol = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 88);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(578, 285);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Mantenimiento_Registro_Fallas_Form::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Afectado";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Prioridad";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Hora";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 75;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 33);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"HISTORIAL FALLAS";
			// 
			// tb_Descripcion
			// 
			this->tb_Descripcion->Location = System::Drawing::Point(35, 508);
			this->tb_Descripcion->Margin = System::Windows::Forms::Padding(2);
			this->tb_Descripcion->Name = L"tb_Descripcion";
			this->tb_Descripcion->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Descripcion->Size = System::Drawing::Size(530, 20);
			this->tb_Descripcion->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 404);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Datos de Registros";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 486);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Descripcion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 443);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
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
			this->cb_Afectado->Location = System::Drawing::Point(82, 440);
			this->cb_Afectado->Margin = System::Windows::Forms::Padding(2);
			this->cb_Afectado->Name = L"cb_Afectado";
			this->cb_Afectado->Size = System::Drawing::Size(130, 21);
			this->cb_Afectado->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(250, 443);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Prioridad";
			// 
			// cb_Prioridad
			// 
			this->cb_Prioridad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Prioridad->FormattingEnabled = true;
			this->cb_Prioridad->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Desconocida", L"Baja", L"Media", L"Alta" });
			this->cb_Prioridad->Location = System::Drawing::Point(302, 440);
			this->cb_Prioridad->Margin = System::Windows::Forms::Padding(2);
			this->cb_Prioridad->Name = L"cb_Prioridad";
			this->cb_Prioridad->Size = System::Drawing::Size(130, 21);
			this->cb_Prioridad->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(467, 443);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Tipo";
			// 
			// cb_Tipo
			// 
			this->cb_Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Tipo->FormattingEnabled = true;
			this->cb_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mecanica", L"Electrica", L"Limpieza", L"Desconocida" });
			this->cb_Tipo->Location = System::Drawing::Point(499, 440);
			this->cb_Tipo->Margin = System::Windows::Forms::Padding(2);
			this->cb_Tipo->Name = L"cb_Tipo";
			this->cb_Tipo->Size = System::Drawing::Size(130, 21);
			this->cb_Tipo->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 560);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Fecha";
			// 
			// tb_Fecha
			// 
			this->tb_Fecha->Location = System::Drawing::Point(82, 557);
			this->tb_Fecha->Margin = System::Windows::Forms::Padding(2);
			this->tb_Fecha->Name = L"tb_Fecha";
			this->tb_Fecha->Size = System::Drawing::Size(76, 20);
			this->tb_Fecha->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(216, 562);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Hora";
			// 
			// tb_Hora
			// 
			this->tb_Hora->Location = System::Drawing::Point(267, 557);
			this->tb_Hora->Margin = System::Windows::Forms::Padding(2);
			this->tb_Hora->Name = L"tb_Hora";
			this->tb_Hora->Size = System::Drawing::Size(90, 20);
			this->tb_Hora->TabIndex = 14;
			// 
			// btn_Regresar_Menu_Mantenimiento
			// 
			this->btn_Regresar_Menu_Mantenimiento->Location = System::Drawing::Point(666, 17);
			this->btn_Regresar_Menu_Mantenimiento->Margin = System::Windows::Forms::Padding(2);
			this->btn_Regresar_Menu_Mantenimiento->Name = L"btn_Regresar_Menu_Mantenimiento";
			this->btn_Regresar_Menu_Mantenimiento->Size = System::Drawing::Size(174, 49);
			this->btn_Regresar_Menu_Mantenimiento->TabIndex = 15;
			this->btn_Regresar_Menu_Mantenimiento->Text = L"Regresar Menu Mantenimiento";
			this->btn_Regresar_Menu_Mantenimiento->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Mantenimiento->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Regresar_Menu_Mantenimiento_Click);
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Location = System::Drawing::Point(666, 426);
			this->btn_Agregar->Margin = System::Windows::Forms::Padding(2);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(186, 46);
			this->btn_Agregar->TabIndex = 16;
			this->btn_Agregar->Text = L"Solucionado";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			this->btn_Agregar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Agregar_Click);
			// 
			// btn_Modificar
			// 
			this->btn_Modificar->Location = System::Drawing::Point(781, 577);
			this->btn_Modificar->Margin = System::Windows::Forms::Padding(2);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(70, 29);
			this->btn_Modificar->TabIndex = 17;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = true;
			this->btn_Modificar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Modificar_Click);
			// 
			// btn_Consultar
			// 
			this->btn_Consultar->Location = System::Drawing::Point(781, 538);
			this->btn_Consultar->Margin = System::Windows::Forms::Padding(2);
			this->btn_Consultar->Name = L"btn_Consultar";
			this->btn_Consultar->Size = System::Drawing::Size(70, 29);
			this->btn_Consultar->TabIndex = 20;
			this->btn_Consultar->Text = L"Consultar";
			this->btn_Consultar->UseVisualStyleBackColor = true;
			this->btn_Consultar->Click += gcnew System::EventHandler(this, &Mantenimiento_Registro_Fallas_Form::btn_Consultar_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(663, 515);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(199, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"ID de Registro para consultar o modificar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(248, 33);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Filtrar por estado";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pendiendte", L"Solucionado", L"En Mantenimiento" });
			this->comboBox5->Location = System::Drawing::Point(342, 31);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(97, 21);
			this->comboBox5->TabIndex = 25;
			// 
			// btn_Filtrar
			// 
			this->btn_Filtrar->Location = System::Drawing::Point(460, 31);
			this->btn_Filtrar->Margin = System::Windows::Forms::Padding(2);
			this->btn_Filtrar->Name = L"btn_Filtrar";
			this->btn_Filtrar->Size = System::Drawing::Size(93, 21);
			this->btn_Filtrar->TabIndex = 26;
			this->btn_Filtrar->Text = L"Filtrar";
			this->btn_Filtrar->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(32, 617);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Quien registro la falla";
			// 
			// tb_Nombre
			// 
			this->tb_Nombre->Enabled = false;
			this->tb_Nombre->Location = System::Drawing::Point(82, 647);
			this->tb_Nombre->Margin = System::Windows::Forms::Padding(2);
			this->tb_Nombre->Name = L"tb_Nombre";
			this->tb_Nombre->Size = System::Drawing::Size(76, 20);
			this->tb_Nombre->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(32, 649);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Nombre";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(216, 649);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Rol";
			// 
			// tb_Rol
			// 
			this->tb_Rol->Enabled = false;
			this->tb_Rol->Location = System::Drawing::Point(267, 644);
			this->tb_Rol->Margin = System::Windows::Forms::Padding(2);
			this->tb_Rol->Name = L"tb_Rol";
			this->tb_Rol->Size = System::Drawing::Size(90, 20);
			this->tb_Rol->TabIndex = 31;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(660, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 261);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mantenimiento_Registro_Fallas_Form::pictureBox1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(666, 557);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 35;
			// 
			// Mantenimiento_Registro_Fallas_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(902, 716);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tb_Rol);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Nombre);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Filtrar);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Consultar);
			this->Controls->Add(this->btn_Modificar);
			this->Controls->Add(this->btn_Agregar);
			this->Controls->Add(this->btn_Regresar_Menu_Mantenimiento);
			this->Controls->Add(this->tb_Hora);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tb_Fecha);
			this->Controls->Add(this->label7);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Mantenimiento_Registro_Fallas_Form";
			this->Text = L"Mantenimiento_Registro_Fallas_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Mantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			MantenimientoMenuForm->Show();

		}
		private: void vaciarCampos() {
			tb_Descripcion->Clear();
			tb_Fecha->Clear();
			tb_Hora->Clear();
			tb_Nombre->Clear();
			tb_Rol->Clear();
			cb_Afectado->SelectedIndex = -1;
			cb_Prioridad->SelectedIndex = -1;
			cb_Tipo->SelectedIndex = -1;
		}

		private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;

			int ancho = pictureBox1->Width;
			int alto = pictureBox1->Height;

			// bordes

			g->DrawRectangle(Pens::Black, 0, 0, ancho - 1, alto - 1);
			g->FillRectangle(Brushes::White, 1, 1, ancho - 2, alto - 2);

			array<PointF>^ points = gcnew array<PointF>(100);

			for (int i = 0; i < 100; i++) {
				float x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos(i * 2 * Math::PI / 100);
				float y = alto / 2 + (alto * 2 / 5) * Math::Sin(i * 2 * Math::PI / 100);
				points[i] = PointF(x, y);
			}

			g->DrawLines(Pens::Black, points);

			List<int>^ idFalla = gcnew List<int>();

			for each (Espacio ^ esp in controller::Espacios) {
				for each (Falla ^ falla in controller::Fallas) {
					if (falla->espacioAfectado->id == esp->id) {
						idFalla->Add(esp->id);
					}
				}
			}
			float x;
			float y;
			for each (Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				g->FillRectangle(Brushes::Green, int(x - 10), int(y - 10), 20, 20);
			}
			for each (Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				if (idFalla->Contains(esp->id)) g->FillRectangle(Brushes::Orange, int(x - 10), int(y - 10), 20, 20);
			}
			for each (Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				if (esp->estado == 3) g->FillRectangle(Brushes::Yellow, int(x - 10), int(y - 10), 20, 20);
				if (esp->estado == 2) g->FillRectangle(Brushes::Red, int(x - 10), int(y - 10), 20, 20);
			}
			for each (Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				g->DrawString((esp->id).ToString(), DefaultFont, Brushes::Black, x - 5, y - 5);
			}

			
		}
		private: void actualizarTabla() {
			dataGridView1->Rows->Clear();
			String^ prio;
			for each (Falla^ falla in controller::Fallas) {
				if (falla->prioridad == 0) {
					prio = "Desconocida";
				}
				else if (falla->prioridad == 1) {
					prio = "Baja";
				}
				else if (falla->prioridad == 2) {
					prio = "Media";
				}
				else if (falla->prioridad == 3) {
					prio = "Alta";
				}
				dataGridView1->Rows->Add(falla->id, "Espacio " + falla->espacioAfectado->id, prio, falla->tipo, falla->fecha, falla->hora);
			}
		}

		private: System::Void btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e) {

			try {
				if (controller::eliminarFalla(Int32::Parse(textBox1->Text))) {
					MessageBox::Show("Falla eliminada correctamente.");
					actualizarTabla();
					vaciarCampos();
					controller::guardarFallas();
					pictureBox1->Invalidate();
				}
				else {
					throw gcnew Exception("La falla no existe");
				}
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al eliminar la falla: " + e->Message);
			}

		}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		DataGridViewRow^ row = dataGridView1->CurrentRow;
		if (row == nullptr || row->IsNewRow) return;

		Falla^ f = controller::buscarFalla(Int32::Parse(row->Cells[0]->Value->ToString()));

		textBox1->Text = f->id.ToString();
		tb_Descripcion->Text = f->descripcion;
		tb_Nombre->Text = f->usuarioReportante->nombre;
		tb_Rol->Text = f->usuarioReportante->GetType()->Name;
		
	}

	private: System::Void btn_Consultar_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			Falla^ f = controller::buscarFalla(Int32::Parse(textBox1->Text));
			if (f == nullptr) throw gcnew Exception("Falla no encontrada.");
			MessageBox::Show("Falla encontrada.");
			tb_Descripcion->Text = f->descripcion;
			tb_Nombre->Text = f->usuarioReportante->nombre;
			tb_Rol->Text = f->usuarioReportante->GetType()->Name;
		}
		catch (Exception^ e) {
			MessageBox::Show("Error al consultar la falla: " + e->Message);
			vaciarCampos();
		}
	}
	private: System::Void btn_Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			
			int id = Int32::Parse(textBox1->Text);
			String^ descripcion = tb_Descripcion->Text;
			String^ tipo;
			int prioridad;
			Falla^ f = controller::buscarFalla(id);
			if (cb_Prioridad->SelectedIndex == -1) {
				prioridad = f->prioridad;
			}
			else {
				prioridad = cb_Prioridad->SelectedIndex;
			}
			if (cb_Tipo->SelectedIndex == -1) {
				tipo = f->tipo;
			}
			else {
				tipo = cb_Tipo->SelectedIndex.ToString();
			}

			controller::modificarFalla(id, descripcion, prioridad, tipo);
			controller::guardarFallas();
			MessageBox::Show("Falla modificada correctamente.");
			actualizarTabla();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error al modificar la falla: " + e->Message);
		}
		finally {
			vaciarCampos();
		}
	}
};
}
