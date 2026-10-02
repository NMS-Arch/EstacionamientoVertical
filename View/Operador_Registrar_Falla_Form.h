#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operador_Registrar_Falla_Form
	/// </summary>
	public ref class Operador_Registrar_Falla_Form : public System::Windows::Forms::Form
	{
	private:

		Form^ FormularioForm;

	public:
		Operador_Registrar_Falla_Form(Form^ entrada_FormularioForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			FormularioForm = entrada_FormularioForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Operador_Registrar_Falla_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cb_ID_Espacio;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Detener_Motor;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numeric_ID_Solicitante;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tb_Rol_Solicitante;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tb_Nompre_Solicitante;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ cb_Estado;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tb_Hora;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_Fecha;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cb_Tipo;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cb_Prioridad;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cb_Afectado;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tb_Descripcion;

	private: System::Windows::Forms::Button^ btn_Registrar_Falla;

	private: System::Windows::Forms::Button^ btn_Regresar_Sin_Cambios;


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
			this->btn_Inhabilitar_Espacio = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cb_ID_Espacio = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Detener_Motor = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numeric_ID_Solicitante = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb_Rol_Solicitante = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_Nompre_Solicitante = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cb_Estado = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tb_Hora = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_Fecha = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cb_Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cb_Prioridad = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cb_Afectado = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tb_Descripcion = (gcnew System::Windows::Forms::TextBox());
			this->btn_Registrar_Falla = (gcnew System::Windows::Forms::Button());
			this->btn_Regresar_Sin_Cambios = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Solicitante))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos Registro";
			// 
			// btn_Inhabilitar_Espacio
			// 
			this->btn_Inhabilitar_Espacio->Location = System::Drawing::Point(70, 129);
			this->btn_Inhabilitar_Espacio->Name = L"btn_Inhabilitar_Espacio";
			this->btn_Inhabilitar_Espacio->Size = System::Drawing::Size(141, 40);
			this->btn_Inhabilitar_Espacio->TabIndex = 1;
			this->btn_Inhabilitar_Espacio->Text = L"Inhabilitar Espacio";
			this->btn_Inhabilitar_Espacio->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID Espacio de estacionamiento";
			// 
			// cb_ID_Espacio
			// 
			this->cb_ID_Espacio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_ID_Espacio->FormattingEnabled = true;
			this->cb_ID_Espacio->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->cb_ID_Espacio->Location = System::Drawing::Point(239, 89);
			this->cb_ID_Espacio->Name = L"cb_ID_Espacio";
			this->cb_ID_Espacio->Size = System::Drawing::Size(121, 24);
			this->cb_ID_Espacio->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(524, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Motor Principal";
			// 
			// btn_Detener_Motor
			// 
			this->btn_Detener_Motor->Location = System::Drawing::Point(626, 74);
			this->btn_Detener_Motor->Name = L"btn_Detener_Motor";
			this->btn_Detener_Motor->Size = System::Drawing::Size(215, 39);
			this->btn_Detener_Motor->TabIndex = 5;
			this->btn_Detener_Motor->Text = L"Detener Motor Principal";
			this->btn_Detener_Motor->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Seleccione una accion";
			// 
			// numeric_ID_Solicitante
			// 
			this->numeric_ID_Solicitante->Location = System::Drawing::Point(592, 568);
			this->numeric_ID_Solicitante->Name = L"numeric_ID_Solicitante";
			this->numeric_ID_Solicitante->Size = System::Drawing::Size(120, 22);
			this->numeric_ID_Solicitante->TabIndex = 54;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(539, 570);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 16);
			this->label15->TabIndex = 53;
			this->label15->Text = L"ID";
			// 
			// tb_Rol_Solicitante
			// 
			this->tb_Rol_Solicitante->Location = System::Drawing::Point(343, 564);
			this->tb_Rol_Solicitante->Name = L"tb_Rol_Solicitante";
			this->tb_Rol_Solicitante->Size = System::Drawing::Size(118, 22);
			this->tb_Rol_Solicitante->TabIndex = 52;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(275, 570);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 16);
			this->label14->TabIndex = 51;
			this->label14->Text = L"Rol";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(30, 570);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 16);
			this->label13->TabIndex = 50;
			this->label13->Text = L"Nombre";
			// 
			// tb_Nompre_Solicitante
			// 
			this->tb_Nompre_Solicitante->Location = System::Drawing::Point(97, 567);
			this->tb_Nompre_Solicitante->Name = L"tb_Nompre_Solicitante";
			this->tb_Nompre_Solicitante->Size = System::Drawing::Size(100, 22);
			this->tb_Nompre_Solicitante->TabIndex = 49;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 530);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 16);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Quien registro la falla";
			// 
			// cb_Estado
			// 
			this->cb_Estado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Estado->FormattingEnabled = true;
			this->cb_Estado->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pendiente", L"Solucionado", L"En Mantenimiento" });
			this->cb_Estado->Location = System::Drawing::Point(592, 465);
			this->cb_Estado->Name = L"cb_Estado";
			this->cb_Estado->Size = System::Drawing::Size(120, 24);
			this->cb_Estado->TabIndex = 47;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(536, 471);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Estado";
			// 
			// tb_Hora
			// 
			this->tb_Hora->Location = System::Drawing::Point(343, 465);
			this->tb_Hora->Name = L"tb_Hora";
			this->tb_Hora->Size = System::Drawing::Size(118, 22);
			this->tb_Hora->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(275, 471);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 16);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Hora";
			// 
			// tb_Fecha
			// 
			this->tb_Fecha->Location = System::Drawing::Point(97, 465);
			this->tb_Fecha->Name = L"tb_Fecha";
			this->tb_Fecha->Size = System::Drawing::Size(100, 22);
			this->tb_Fecha->TabIndex = 43;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 468);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 16);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Fecha";
			// 
			// cb_Tipo
			// 
			this->cb_Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Tipo->FormattingEnabled = true;
			this->cb_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mecanica", L"Electrica", L"Limpieza", L"Desconocida" });
			this->cb_Tipo->Location = System::Drawing::Point(591, 321);
			this->cb_Tipo->Name = L"cb_Tipo";
			this->cb_Tipo->Size = System::Drawing::Size(121, 24);
			this->cb_Tipo->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(536, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 16);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Tipo";
			// 
			// cb_Prioridad
			// 
			this->cb_Prioridad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Prioridad->FormattingEnabled = true;
			this->cb_Prioridad->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Alta", L"Media", L"Baja", L"Desconocida" });
			this->cb_Prioridad->Location = System::Drawing::Point(343, 321);
			this->cb_Prioridad->Name = L"cb_Prioridad";
			this->cb_Prioridad->Size = System::Drawing::Size(118, 24);
			this->cb_Prioridad->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(275, 324);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Prioridad";
			// 
			// cb_Afectado
			// 
			this->cb_Afectado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Afectado->FormattingEnabled = true;
			this->cb_Afectado->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Motor Principal", L"Espacio 1", L"Espacio 2",
					L"Espacio 3", L"Espacio 4", L"Espacio 5", L"Espacio 6", L"Espacio 7", L"Espacio 8", L"Espacio 9", L"Espacio 10"
			});
			this->cb_Afectado->Location = System::Drawing::Point(97, 321);
			this->cb_Afectado->Name = L"cb_Afectado";
			this->cb_Afectado->Size = System::Drawing::Size(135, 24);
			this->cb_Afectado->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 324);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 16);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Afectado";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(30, 387);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 16);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Descripcion";
			// 
			// tb_Descripcion
			// 
			this->tb_Descripcion->Location = System::Drawing::Point(33, 406);
			this->tb_Descripcion->Name = L"tb_Descripcion";
			this->tb_Descripcion->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Descripcion->Size = System::Drawing::Size(679, 22);
			this->tb_Descripcion->TabIndex = 34;
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Location = System::Drawing::Point(804, 324);
			this->btn_Registrar_Falla->Name = L"btn_Registrar_Falla";
			this->btn_Registrar_Falla->Size = System::Drawing::Size(143, 112);
			this->btn_Registrar_Falla->TabIndex = 55;
			this->btn_Registrar_Falla->Text = L"Registrar Falla";
			this->btn_Registrar_Falla->UseVisualStyleBackColor = true;
			this->btn_Registrar_Falla->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Registrar_Falla_Click);
			// 
			// btn_Regresar_Sin_Cambios
			// 
			this->btn_Regresar_Sin_Cambios->Location = System::Drawing::Point(804, 486);
			this->btn_Regresar_Sin_Cambios->Name = L"btn_Regresar_Sin_Cambios";
			this->btn_Regresar_Sin_Cambios->Size = System::Drawing::Size(143, 105);
			this->btn_Regresar_Sin_Cambios->TabIndex = 56;
			this->btn_Regresar_Sin_Cambios->Text = L"Regresar sin hacer cambios";
			this->btn_Regresar_Sin_Cambios->UseVisualStyleBackColor = true;
			this->btn_Regresar_Sin_Cambios->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Regresar_Sin_Cambios_Click);
			// 
			// Operador_Registrar_Falla_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 635);
			this->Controls->Add(this->btn_Regresar_Sin_Cambios);
			this->Controls->Add(this->btn_Registrar_Falla);
			this->Controls->Add(this->numeric_ID_Solicitante);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tb_Rol_Solicitante);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Nompre_Solicitante);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->cb_Estado);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tb_Hora);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tb_Fecha);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cb_Tipo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cb_Prioridad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cb_Afectado);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tb_Descripcion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Detener_Motor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cb_ID_Espacio);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Inhabilitar_Espacio);
			this->Controls->Add(this->label1);
			this->Name = L"Operador_Registrar_Falla_Form";
			this->Text = L"Operador_Registrar_Falla_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_ID_Solicitante))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Sin_Cambios_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();
			
			FormularioForm->Show();
		}
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			FormularioForm->Show();
		}
};
}
