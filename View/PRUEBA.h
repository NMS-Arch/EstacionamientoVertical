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

	/// <summary>
	/// Resumen de PRUEBA
	/// </summary>
	public ref class PRUEBA : public System::Windows::Forms::Form
	{
	public:
		PRUEBA(void)
		{
			InitializeComponent();
			controller::Espacios = controller::cargarEspacios();
			controller::Usuarios = controller::cargarUsuarios();
			controller::Clientes = controller::cargarClientes();
			controller::Fallas = controller::cargarFallas();
			controller::Tickets = controller::cargarTickets();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PRUEBA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Libre", L"Ocupado" });
			this->comboBox1->Location = System::Drawing::Point(140, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Listo", L"Mal" });
			this->comboBox2->Location = System::Drawing::Point(140, 108);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(125, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ocupado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"estado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(388, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PRUEBA::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(388, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(388, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PRUEBA::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(388, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"eliminar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(142, 187);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 222);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(133, 261);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(114, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(130, 299);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(116, 20);
			this->textBox6->TabIndex = 14;
			// 
			// PRUEBA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 372);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"PRUEBA";
			this->Text = L"PRUEBA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	try {

		
		int dni = Int32::Parse(textBox1->Text);
		
		Usuario^ esp = controller::buscarUsuario(dni);

		if (esp != nullptr) {
			Console::WriteLine("Usuario encontrado:");
			Console::WriteLine("Tipo: {0}", esp->GetType()->Name);
			Console::WriteLine("ID: {0}", esp->DNI);
			Console::WriteLine("Nombre: {0}", esp->nombre);
			Console::WriteLine("Edad: {0}", esp->edad);
			Console::WriteLine("Sexo: {0}", esp->sexo);

		}
			
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		/*if (comboBox1->SelectedIndex == -1) {
			throw gcnew Exception("Por favor, seleccione una opción en ambos ComboBox.");
		}*/
		int dni = Int32::Parse(textBox1->Text);
		String^ nombre = textBox2->Text;
		int edad = Int32::Parse(textBox3->Text);
		String^ sexo = textBox4->Text;
		int autorizacion = Int32::Parse(textBox5->Text);
		bool vip = comboBox1->SelectedIndex == 0 ? true : false;
		
		
		String^ descripcion = textBox6->Text;
		

		String^ fecha = DateTime::Now.ToString("dd/MM/yyyy");
		String^ hora = DateTime::Now.ToString("HH:mm:ss");

		Cliente^ pruebaCliente = gcnew Cliente(123, "norm", 21, "M", true);

		controller::agregarUsuario(descripcion, nombre, edad, sexo);

		controller::guardarUsuarios();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}

};
}
