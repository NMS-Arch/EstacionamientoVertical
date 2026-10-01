#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace controllerPrincipal;
	using namespace model;

	/// 
	/// Resumen de fallas
	/// 
	public ref class fallas : public System::Windows::Forms::Form
	{
	public:
		fallas(void)
		{
			InitializeComponent();
		}

	protected:
		~fallas()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ lblDescripcion;
	private: System::Windows::Forms::Label^ lblPrioridad;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1; // ID
	private: System::Windows::Forms::TextBox^ textBox2; // Descripción
	private: System::Windows::Forms::TextBox^ textBox3; // Prioridad
	private: System::Windows::Forms::TextBox^ textBox4; // Fecha
	private: System::Windows::Forms::TextBox^ textBox5; // Hora

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblDescripcion = (gcnew System::Windows::Forms::Label());
			this->lblPrioridad = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Fallas";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(15, 47);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 13);
			this->lblId->TabIndex = 9;
			this->lblId->Text = L"ID:";
			// 
			// lblDescripcion
			// 
			this->lblDescripcion->AutoSize = true;
			this->lblDescripcion->Location = System::Drawing::Point(15, 80);
			this->lblDescripcion->Name = L"lblDescripcion";
			this->lblDescripcion->Size = System::Drawing::Size(66, 13);
			this->lblDescripcion->TabIndex = 10;
			this->lblDescripcion->Text = L"Descripción:";
			// 
			// lblPrioridad
			// 
			this->lblPrioridad->AutoSize = true;
			this->lblPrioridad->Location = System::Drawing::Point(15, 113);
			this->lblPrioridad->Name = L"lblPrioridad";
			this->lblPrioridad->Size = System::Drawing::Size(51, 13);
			this->lblPrioridad->TabIndex = 11;
			this->lblPrioridad->Text = L"Prioridad:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(15, 146);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(40, 13);
			this->lblFecha->TabIndex = 12;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->Location = System::Drawing::Point(15, 179);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(33, 13);
			this->lblHora->TabIndex = 13;
			this->lblHora->Text = L"Hora:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(85, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &fallas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(205, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &fallas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(205, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &fallas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(205, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &fallas::button4_Click);
			// 
			// fallas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 220);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblPrioridad);
			this->Controls->Add(this->lblDescripcion);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"fallas";
			this->Text = L"fallas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma region

		// Función auxiliar para borrar el contenido de todas las casillas
	private: void LimpiarCampos() {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox4->Text = "";
		this->textBox5->Text = "";
	}

		   // Función auxiliar para convertir texto a entero de forma segura
	private: int ParseIntSeguro(String^ texto, int valorPorDefecto) {
		int resultado = 0;
		if (Int32::TryParse(texto, resultado)) {
			return resultado;
		}
		return valorPorDefecto;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);
		String^ descripcion = this->textBox2->Text;
		int prioridad = ParseIntSeguro(this->textBox3->Text, 0);
		String^ fecha = this->textBox4->Text;
		String^ hora = this->textBox5->Text;

		controller::agregarFalla(id, descripcion, prioridad, fecha, hora);
		Console::WriteLine("Falla agregada: ID={0}, Descripcion={1}, Prioridad={2}, Fecha={3}, Hora={4}",
			id, descripcion, prioridad, fecha, hora);

		LimpiarCampos();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);

		Falla^ f = controller::buscarFalla(id);
		if (f == nullptr) {
			Console::WriteLine("No se encontró la falla con ID {0}.", id);
		}
		else {
			this->textBox2->Text = f->descripcion;
			this->textBox3->Text = f->prioridad.ToString();
			this->textBox4->Text = f->fecha;
			this->textBox5->Text = f->hora;

			Console::WriteLine("Se encontró la falla: ID={0}, Descripcion={1}, Prioridad={2}, Fecha={3}, Hora={4}\n",
				f->id, f->descripcion, f->prioridad, f->fecha, f->hora);
		}

		LimpiarCampos();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);
		String^ descripcion = this->textBox2->Text;
		int prioridad = ParseIntSeguro(this->textBox3->Text, 0);
		String^ fecha = this->textBox4->Text;
		String^ hora = this->textBox5->Text;

		if (controller::modificarFalla(id, descripcion, prioridad, fecha, hora)) {
			Console::WriteLine("Se modificó la falla con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró la falla con ID {0} para modificar.", id);
		}

		LimpiarCampos();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);

		if (controller::eliminarFalla(id)) {
			Console::WriteLine("Se eliminó la falla con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró la falla con ID {0} para eliminar.", id);
		}

		LimpiarCampos();
	}
	};
}