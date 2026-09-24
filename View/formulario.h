#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace controller;
	using namespace model;

	/// <summary>
	/// Resumen de formulario
	/// </summary>
	public ref class formulario : public System::Windows::Forms::Form
	{
	public:
		formulario(void)
		{
			InitializeComponent();
		}

	protected:
		~formulario()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblOcupado;
	private: System::Windows::Forms::Label^ lblEstado;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblOcupado = (gcnew System::Windows::Forms::Label());
			this->lblEstado = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Espacios";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(15, 47);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 9;
			this->lblNombre->Text = L"Nombre:";
			// 
			// lblOcupado
			// 
			this->lblOcupado->AutoSize = true;
			this->lblOcupado->Location = System::Drawing::Point(15, 90);
			this->lblOcupado->Name = L"lblOcupado";
			this->lblOcupado->Size = System::Drawing::Size(54, 13);
			this->lblOcupado->TabIndex = 10;
			this->lblOcupado->Text = L"Ocupado:";
			// 
			// lblEstado
			// 
			this->lblEstado->AutoSize = true;
			this->lblEstado->Location = System::Drawing::Point(15, 133);
			this->lblEstado->Name = L"lblEstado";
			this->lblEstado->Size = System::Drawing::Size(43, 13);
			this->lblEstado->TabIndex = 11;
			this->lblEstado->Text = L"Estado:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(15, 176);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 13);
			this->lblId->TabIndex = 12;
			this->lblId->Text = L"ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(75, 173);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formulario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(195, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &formulario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(195, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &formulario::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(195, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &formulario::button4_Click);
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 220);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->lblEstado);
			this->Controls->Add(this->lblOcupado);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"formulario";
			this->Text = L"formulario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Función auxiliar para borrar el contenido de todas las casillas
	private: void LimpiarCampos() {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox4->Text = "";
	}

		   // Función auxiliar para convertir texto a bool de forma segura
	private: bool ParseBool(String^ texto) {
		bool resultado = false;
		if (Boolean::TryParse(texto, resultado)) {
			return resultado;
		}
		String^ t = texto->Trim()->ToLower();
		return (t == "1" || t == "true" || t == "si" || t == "s");
	}

		   // Función auxiliar para obtener el ID desde textBox4
	private: int ObtenerId() {
		int id = 0;
		Int32::TryParse(this->textBox4->Text, id);
		return id;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		bool ocupado = ParseBool(this->textBox2->Text);
		bool estado = ParseBool(this->textBox3->Text);

		::controller::controller::agregarEspacio(ocupado, estado);
		Console::WriteLine("Espacio agregado: Nombre={0}, Ocupado={1}, Estado={2}", nombre, ocupado, estado);

		LimpiarCampos();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ObtenerId();

		Espacio^ esp = ::controller::controller::buscarEspacio(id);
		if (esp == nullptr) {
			Console::WriteLine("No se encontró el espacio con ID {0}.", id);
		}
		else {
			Console::WriteLine("Se encontró el espacio: id {0}, ocupado {1}, est {2}.\n", esp->id, esp->ocupado, esp->estado);
		}

		LimpiarCampos();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ObtenerId();
		bool ocupado = ParseBool(this->textBox2->Text);
		bool estado = ParseBool(this->textBox3->Text);

		if (::controller::controller::modificarEspacio(id, ocupado, estado)) {
			Console::WriteLine("Se modificó el espacio con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró el espacio con ID {0} para modificar.", id);
		}

		LimpiarCampos();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ObtenerId();

		if (::controller::controller::eliminarEspacio(id)) {
			Console::WriteLine("Se eliminó el espacio con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró el espacio con ID {0} para eliminar.", id);
		}

		LimpiarCampos();
	}
	};
}