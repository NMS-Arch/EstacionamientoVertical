#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operador_Registrar_Ticket_Form
	/// </summary>
	public ref class Operador_Registrar_Ticket_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ FormularioForm;

	public:
		Operador_Registrar_Ticket_Form(Form^ entrada_FormularioForm)
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
		~Operador_Registrar_Ticket_Form()
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
	private: System::Windows::Forms::CheckBox^ checkb_registro_completo;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btn_Generar_ID_Ticket;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tb_ID_Generado;
	private: System::Windows::Forms::Button^ btn_Imprimir_y_Registrar_ID_Ticket;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btn_Regresar_Formulario;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Vehiculo;

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
			this->checkb_registro_completo = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Generar_ID_Ticket = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tb_ID_Generado = (gcnew System::Windows::Forms::TextBox());
			this->btn_Imprimir_y_Registrar_ID_Ticket = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Regresar_Formulario = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numeric_Peso_Vehiculo = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrar Ticket";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID de espacio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Placa del Vehiculo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Modelo del Vehiculo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Registro Completo \?";
			// 
			// checkb_registro_completo
			// 
			this->checkb_registro_completo->AutoSize = true;
			this->checkb_registro_completo->Location = System::Drawing::Point(210, 306);
			this->checkb_registro_completo->Name = L"checkb_registro_completo";
			this->checkb_registro_completo->Size = System::Drawing::Size(133, 20);
			this->checkb_registro_completo->TabIndex = 5;
			this->checkb_registro_completo->Text = L"registro completo";
			this->checkb_registro_completo->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(204, 242);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(117, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Datos del Vehiculo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(386, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Datos del propietario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(386, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"DNI";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(445, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 12;
			// 
			// btn_Generar_ID_Ticket
			// 
			this->btn_Generar_ID_Ticket->Location = System::Drawing::Point(56, 419);
			this->btn_Generar_ID_Ticket->Name = L"btn_Generar_ID_Ticket";
			this->btn_Generar_ID_Ticket->Size = System::Drawing::Size(117, 38);
			this->btn_Generar_ID_Ticket->TabIndex = 13;
			this->btn_Generar_ID_Ticket->Text = L"Generar ID";
			this->btn_Generar_ID_Ticket->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(54, 388);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Generar ID del Ticket";
			// 
			// tb_ID_Generado
			// 
			this->tb_ID_Generado->Location = System::Drawing::Point(205, 427);
			this->tb_ID_Generado->Name = L"tb_ID_Generado";
			this->tb_ID_Generado->Size = System::Drawing::Size(117, 22);
			this->tb_ID_Generado->TabIndex = 15;
			// 
			// btn_Imprimir_y_Registrar_ID_Ticket
			// 
			this->btn_Imprimir_y_Registrar_ID_Ticket->Location = System::Drawing::Point(445, 376);
			this->btn_Imprimir_y_Registrar_ID_Ticket->Name = L"btn_Imprimir_y_Registrar_ID_Ticket";
			this->btn_Imprimir_y_Registrar_ID_Ticket->Size = System::Drawing::Size(143, 118);
			this->btn_Imprimir_y_Registrar_ID_Ticket->TabIndex = 16;
			this->btn_Imprimir_y_Registrar_ID_Ticket->Text = L"Imprimir y Registrar ID del TIcket";
			this->btn_Imprimir_y_Registrar_ID_Ticket->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(386, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Datos Auxiliares";
			// 
			// btn_Regresar_Formulario
			// 
			this->btn_Regresar_Formulario->Location = System::Drawing::Point(448, 265);
			this->btn_Regresar_Formulario->Name = L"btn_Regresar_Formulario";
			this->btn_Regresar_Formulario->Size = System::Drawing::Size(140, 73);
			this->btn_Regresar_Formulario->TabIndex = 18;
			this->btn_Regresar_Formulario->Text = L"Regresar a formulario";
			this->btn_Regresar_Formulario->UseVisualStyleBackColor = true;
			this->btn_Regresar_Formulario->Click += gcnew System::EventHandler(this, &Operador_Registrar_Ticket_Form::btn_Regresar_Formulario_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(54, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Peso Vehiculo";
			// 
			// numeric_Peso_Vehiculo
			// 
			this->numeric_Peso_Vehiculo->Location = System::Drawing::Point(200, 118);
			this->numeric_Peso_Vehiculo->Name = L"numeric_Peso_Vehiculo";
			this->numeric_Peso_Vehiculo->Size = System::Drawing::Size(121, 22);
			this->numeric_Peso_Vehiculo->TabIndex = 20;
			// 
			// Operador_Registrar_Ticket_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 506);
			this->Controls->Add(this->numeric_Peso_Vehiculo);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btn_Regresar_Formulario);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Imprimir_y_Registrar_ID_Ticket);
			this->Controls->Add(this->tb_ID_Generado);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_Generar_ID_Ticket);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkb_registro_completo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Operador_Registrar_Ticket_Form";
			this->Text = L"Operador_Registrar_Ticket_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Formulario_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			FormularioForm->Show();

		}


};
}
