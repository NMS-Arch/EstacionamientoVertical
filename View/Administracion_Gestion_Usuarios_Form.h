#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administracion_Gestion_Usuarios_Form
	/// </summary>
	public ref class Administracion_Gestion_Usuarios_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ MenuAdminForm;
	public:
		Administracion_Gestion_Usuarios_Form(Form^ entrada_MenuAdminForm)
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
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ tb_Nombre_Personal;
	private: System::Windows::Forms::ComboBox^ cb_Rol_Personal;
	private: System::Windows::Forms::TextBox^ tb_DNI_Personal;
	private: System::Windows::Forms::TextBox^ tb_Usuario;
	private: System::Windows::Forms::TextBox^ tb_Contra;





	private: System::Windows::Forms::Button^ btn_Consultar;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cb_Tipo_Datos_Consultar;

	private: System::Windows::Forms::Button^ btn_Eliminar;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_Dato_Consultar;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Administracion;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->tb_Nombre_Personal = (gcnew System::Windows::Forms::TextBox());
			this->cb_Rol_Personal = (gcnew System::Windows::Forms::ComboBox());
			this->tb_DNI_Personal = (gcnew System::Windows::Forms::TextBox());
			this->tb_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->tb_Contra = (gcnew System::Windows::Forms::TextBox());
			this->btn_Consultar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cb_Tipo_Datos_Consultar = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Eliminar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_Dato_Consultar = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_Regresar_Menu_Administracion = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(404, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(885, 374);
			this->dataGridView1->TabIndex = 1;
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
			this->label5->Location = System::Drawing::Point(39, 458);
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
			this->label7->Location = System::Drawing::Point(39, 496);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Contraseña";
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Location = System::Drawing::Point(42, 553);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(122, 46);
			this->btn_Agregar->TabIndex = 10;
			this->btn_Agregar->Text = L"Agregar";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			// 
			// btn_Modificar
			// 
			this->btn_Modificar->Location = System::Drawing::Point(178, 553);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(126, 46);
			this->btn_Modificar->TabIndex = 11;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = true;
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
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Trabajando", L"Descansando", L"De Baja", L"Despedido" });
			this->comboBox2->Location = System::Drawing::Point(174, 381);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(130, 24);
			this->comboBox2->TabIndex = 13;
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
			this->cb_Rol_Personal->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operario", L"Mantenimiento" });
			this->cb_Rol_Personal->Location = System::Drawing::Point(172, 244);
			this->cb_Rol_Personal->Name = L"cb_Rol_Personal";
			this->cb_Rol_Personal->Size = System::Drawing::Size(129, 24);
			this->cb_Rol_Personal->TabIndex = 15;
			// 
			// tb_DNI_Personal
			// 
			this->tb_DNI_Personal->Location = System::Drawing::Point(174, 339);
			this->tb_DNI_Personal->Name = L"tb_DNI_Personal";
			this->tb_DNI_Personal->Size = System::Drawing::Size(130, 22);
			this->tb_DNI_Personal->TabIndex = 16;
			// 
			// tb_Usuario
			// 
			this->tb_Usuario->Location = System::Drawing::Point(174, 450);
			this->tb_Usuario->Name = L"tb_Usuario";
			this->tb_Usuario->Size = System::Drawing::Size(128, 22);
			this->tb_Usuario->TabIndex = 17;
			// 
			// tb_Contra
			// 
			this->tb_Contra->Location = System::Drawing::Point(174, 490);
			this->tb_Contra->Name = L"tb_Contra";
			this->tb_Contra->Size = System::Drawing::Size(130, 22);
			this->tb_Contra->TabIndex = 18;
			// 
			// btn_Consultar
			// 
			this->btn_Consultar->Location = System::Drawing::Point(575, 615);
			this->btn_Consultar->Name = L"btn_Consultar";
			this->btn_Consultar->Size = System::Drawing::Size(163, 44);
			this->btn_Consultar->TabIndex = 19;
			this->btn_Consultar->Text = L"Consultar";
			this->btn_Consultar->UseVisualStyleBackColor = true;
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
			this->cb_Tipo_Datos_Consultar->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Nombre", L"Usuario", L"DNI" });
			this->cb_Tipo_Datos_Consultar->Location = System::Drawing::Point(497, 557);
			this->cb_Tipo_Datos_Consultar->Name = L"cb_Tipo_Datos_Consultar";
			this->cb_Tipo_Datos_Consultar->Size = System::Drawing::Size(108, 24);
			this->cb_Tipo_Datos_Consultar->TabIndex = 21;
			// 
			// btn_Eliminar
			// 
			this->btn_Eliminar->Location = System::Drawing::Point(1101, 598);
			this->btn_Eliminar->Name = L"btn_Eliminar";
			this->btn_Eliminar->Size = System::Drawing::Size(121, 61);
			this->btn_Eliminar->TabIndex = 22;
			this->btn_Eliminar->Text = L"Eliminar";
			this->btn_Eliminar->UseVisualStyleBackColor = true;
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
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(953, 637);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 24;
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
			this->label13->Location = System::Drawing::Point(39, 130);
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
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Manana", L"Tarde", L"Noche" });
			this->comboBox3->Location = System::Drawing::Point(172, 296);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(131, 24);
			this->comboBox3->TabIndex = 31;
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
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Rol";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Turno";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Estado";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Name User";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Contraseña";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Administracion_Gestion_Usuarios_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1327, 751);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->btn_Regresar_Menu_Administracion);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Dato_Consultar);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Eliminar);
			this->Controls->Add(this->cb_Tipo_Datos_Consultar);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_Consultar);
			this->Controls->Add(this->tb_Contra);
			this->Controls->Add(this->tb_Usuario);
			this->Controls->Add(this->tb_DNI_Personal);
			this->Controls->Add(this->cb_Rol_Personal);
			this->Controls->Add(this->tb_Nombre_Personal);
			this->Controls->Add(this->comboBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Administracion_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();
			MenuAdminForm->Show();

		}
};
}
