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
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Operador_Registrar_Falla_Form
	/// </summary>
	public ref class Operador_Registrar_Falla_Form : public System::Windows::Forms::Form
	{
	private:

		Form^ FormularioForm;
		controller^ controlador_GUI;
	private: System::Windows::Forms::TextBox^ textBox1;
		   ControlEspacios^ controladorEspacios;



	public:
		Operador_Registrar_Falla_Form(Form^ entrada_FormularioForm, controller^ controlador_entrada_GUI, ControlEspacios^ controladorEspacios_entrada)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			FormularioForm = entrada_FormularioForm;

			controlador_GUI = controlador_entrada_GUI;
			controladorEspacios = controladorEspacios_entrada;
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


	private: System::Windows::Forms::Label^ label15;






	private: System::Windows::Forms::Label^ label12;



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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 271);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos Registro";
			// 
			// btn_Inhabilitar_Espacio
			// 
			this->btn_Inhabilitar_Espacio->Location = System::Drawing::Point(52, 105);
			this->btn_Inhabilitar_Espacio->Margin = System::Windows::Forms::Padding(2);
			this->btn_Inhabilitar_Espacio->Name = L"btn_Inhabilitar_Espacio";
			this->btn_Inhabilitar_Espacio->Size = System::Drawing::Size(106, 32);
			this->btn_Inhabilitar_Espacio->TabIndex = 1;
			this->btn_Inhabilitar_Espacio->Text = L"Inhabilitar Espacio";
			this->btn_Inhabilitar_Espacio->UseVisualStyleBackColor = true;
			this->btn_Inhabilitar_Espacio->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Inhabilitar_Espacio_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 75);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 13);
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
			this->cb_ID_Espacio->Location = System::Drawing::Point(179, 72);
			this->cb_ID_Espacio->Margin = System::Windows::Forms::Padding(2);
			this->cb_ID_Espacio->Name = L"cb_ID_Espacio";
			this->cb_ID_Espacio->Size = System::Drawing::Size(92, 21);
			this->cb_ID_Espacio->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 174);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Motor Principal";
			// 
			// btn_Detener_Motor
			// 
			this->btn_Detener_Motor->Location = System::Drawing::Point(110, 162);
			this->btn_Detener_Motor->Margin = System::Windows::Forms::Padding(2);
			this->btn_Detener_Motor->Name = L"btn_Detener_Motor";
			this->btn_Detener_Motor->Size = System::Drawing::Size(161, 32);
			this->btn_Detener_Motor->TabIndex = 5;
			this->btn_Detener_Motor->Text = L"Detener Motor Principal";
			this->btn_Detener_Motor->UseVisualStyleBackColor = true;
			this->btn_Detener_Motor->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Detener_Motor_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 32);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Seleccione una accion";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(28, 515);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 13);
			this->label15->TabIndex = 53;
			this->label15->Text = L"DNI";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 481);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 13);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Quien registro la falla";
			// 
			// tb_Hora
			// 
			this->tb_Hora->Location = System::Drawing::Point(255, 428);
			this->tb_Hora->Margin = System::Windows::Forms::Padding(2);
			this->tb_Hora->Name = L"tb_Hora";
			this->tb_Hora->Size = System::Drawing::Size(90, 20);
			this->tb_Hora->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(204, 433);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Hora";
			// 
			// tb_Fecha
			// 
			this->tb_Fecha->Location = System::Drawing::Point(71, 428);
			this->tb_Fecha->Margin = System::Windows::Forms::Padding(2);
			this->tb_Fecha->Name = L"tb_Fecha";
			this->tb_Fecha->Size = System::Drawing::Size(76, 20);
			this->tb_Fecha->TabIndex = 43;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 430);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Fecha";
			// 
			// cb_Tipo
			// 
			this->cb_Tipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Tipo->FormattingEnabled = true;
			this->cb_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mecanica", L"Electrica", L"Limpieza", L"Desconocida" });
			this->cb_Tipo->Location = System::Drawing::Point(441, 311);
			this->cb_Tipo->Margin = System::Windows::Forms::Padding(2);
			this->cb_Tipo->Name = L"cb_Tipo";
			this->cb_Tipo->Size = System::Drawing::Size(92, 21);
			this->cb_Tipo->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(400, 313);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Tipo";
			// 
			// cb_Prioridad
			// 
			this->cb_Prioridad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Prioridad->FormattingEnabled = true;
			this->cb_Prioridad->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Alta", L"Media", L"Baja", L"Desconocida" });
			this->cb_Prioridad->Location = System::Drawing::Point(255, 311);
			this->cb_Prioridad->Margin = System::Windows::Forms::Padding(2);
			this->cb_Prioridad->Name = L"cb_Prioridad";
			this->cb_Prioridad->Size = System::Drawing::Size(90, 21);
			this->cb_Prioridad->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(204, 313);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
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
			this->cb_Afectado->Location = System::Drawing::Point(71, 311);
			this->cb_Afectado->Margin = System::Windows::Forms::Padding(2);
			this->cb_Afectado->Name = L"cb_Afectado";
			this->cb_Afectado->Size = System::Drawing::Size(102, 21);
			this->cb_Afectado->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 313);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Afectado";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 364);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Descripcion";
			// 
			// tb_Descripcion
			// 
			this->tb_Descripcion->Location = System::Drawing::Point(23, 380);
			this->tb_Descripcion->Margin = System::Windows::Forms::Padding(2);
			this->tb_Descripcion->Name = L"tb_Descripcion";
			this->tb_Descripcion->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Descripcion->Size = System::Drawing::Size(510, 20);
			this->tb_Descripcion->TabIndex = 34;
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Location = System::Drawing::Point(581, 340);
			this->btn_Registrar_Falla->Margin = System::Windows::Forms::Padding(2);
			this->btn_Registrar_Falla->Name = L"btn_Registrar_Falla";
			this->btn_Registrar_Falla->Size = System::Drawing::Size(90, 60);
			this->btn_Registrar_Falla->TabIndex = 55;
			this->btn_Registrar_Falla->Text = L"Registrar Falla";
			this->btn_Registrar_Falla->UseVisualStyleBackColor = true;
			this->btn_Registrar_Falla->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Registrar_Falla_Click);
			// 
			// btn_Regresar_Sin_Cambios
			// 
			this->btn_Regresar_Sin_Cambios->Location = System::Drawing::Point(581, 445);
			this->btn_Regresar_Sin_Cambios->Margin = System::Windows::Forms::Padding(2);
			this->btn_Regresar_Sin_Cambios->Name = L"btn_Regresar_Sin_Cambios";
			this->btn_Regresar_Sin_Cambios->Size = System::Drawing::Size(90, 60);
			this->btn_Regresar_Sin_Cambios->TabIndex = 56;
			this->btn_Regresar_Sin_Cambios->Text = L"Regresar sin hacer cambios";
			this->btn_Regresar_Sin_Cambios->UseVisualStyleBackColor = true;
			this->btn_Regresar_Sin_Cambios->Click += gcnew System::EventHandler(this, &Operador_Registrar_Falla_Form::btn_Regresar_Sin_Cambios_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(378, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(201, 263);
			this->pictureBox1->TabIndex = 57;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Operador_Registrar_Falla_Form::pictureBox1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 512);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(103, 20);
			this->textBox1->TabIndex = 58;
			// 
			// Operador_Registrar_Falla_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 571);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_Regresar_Sin_Cambios);
			this->Controls->Add(this->btn_Registrar_Falla);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label12);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Operador_Registrar_Falla_Form";
			this->Text = L"Operador_Registrar_Falla_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Sin_Cambios_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();
			
			FormularioForm->Show();
		}
	
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			try {
				if (cb_Prioridad->SelectedIndex == -1) {
					throw gcnew Exception("Debe seleccionar una prioridad.");
				}
				if (cb_Tipo->SelectedIndex == -1) {
					throw gcnew Exception("Debe seleccionar un tipo.");
				}
				if (cb_Afectado->SelectedIndex == -1) {
					throw gcnew Exception("Debe seleccionar un espacio afectado.");
				}
				String^ descripcion = tb_Descripcion->Text;
				String^ tipo = cb_Tipo->SelectedItem->ToString();
				String^ fecha = tb_Fecha->Text;
				String^ hora = tb_Hora->Text;
				int prioridad = cb_Prioridad->SelectedIndex;
				Espacio^ espacio;
				Usuario^ solicitante = controller::buscarUsuario(Int32::Parse(textBox1->Text));
				switch (cb_Afectado->SelectedIndex) {
				case 1:
					espacio = controller::Espacios[0];
					break;
				case 2:
					espacio = controller::Espacios[1];
					break;
				case 3:
					espacio = controller::Espacios[2];
					break;
				case 4:
					espacio = controller::Espacios[3];
					break;
				case 5:
					espacio = controller::Espacios[4];
					break;
				case 6:
					espacio = controller::Espacios[5];
					break;
				case 7:
					espacio = controller::Espacios[6];
					break;
				case 8:
					espacio = controller::Espacios[7];
					break;
				case 9:
					espacio = controller::Espacios[8];
					break;
				case 10:
					espacio = controller::Espacios[9];
					break;
				default:
					break;
				}
				controller::agregarFalla(descripcion, prioridad, tipo, fecha, hora, espacio, solicitante);
				controller::guardarFallas();
				MessageBox::Show("Falla agregada correctamente.");
				pictureBox1->Invalidate();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al agregar la falla: " + ex->Message);
			}

			this->Hide();

			FormularioForm->Show();
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

			for each(Espacio ^ esp in controller::Espacios) {
				for each(Falla ^ falla in controller::Fallas) {
					if (falla->espacioAfectado->id == esp->id) {
						idFalla->Add(esp->id);
					}
				}
			}
			float x;
			float y;
			for each(Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				g->FillRectangle(Brushes::Green, int(x - 10), int(y - 10), 20, 20);
			}
			for each(Espacio ^ esp in controller::Espacios) {
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
			for each(Espacio ^ esp in controller::Espacios) {
				x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
				y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
				g->DrawString((esp->id).ToString(), DefaultFont, Brushes::Black, x - 5, y - 5);
			}

		}

		private: System::Void btn_Inhabilitar_Espacio_Click(System::Object^ sender, System::EventArgs^ e) {

			if (cb_ID_Espacio->SelectedIndex >= 0) {
				String^ numeroID = cb_ID_Espacio->Text;
				controladorEspacios->inhabiltarEspacio(Convert::ToInt32(numeroID));
				controller::Espacios = controller::cargarEspacios();
			}
			pictureBox1->Invalidate();
		}


		private: System::Void btn_Detener_Motor_Click(System::Object^ sender, System::EventArgs^ e) {
				controladorEspacios->paraEmergenciaGeneral();
		}

};
}
