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
	public ref class usuarios : public System::Windows::Forms::Form
	{
	public:
		usuarios(void)
		{
			InitializeComponent();
		}

	protected:
		~usuarios()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblDni;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblEdad;
	private: System::Windows::Forms::Label^ lblSexo;
	private: System::Windows::Forms::Label^ lblAutorizacion;
	private: System::Windows::Forms::Label^ lblVip;

	private: System::Windows::Forms::TextBox^ textBox1; // DNI (String)
	private: System::Windows::Forms::TextBox^ textBox2; // Nombre (String)
	private: System::Windows::Forms::TextBox^ textBox3; // Edad (String)
	private: System::Windows::Forms::TextBox^ textBox4; // Sexo (String)
	private: System::Windows::Forms::TextBox^ textBox5; // Autorización (String)
	private: System::Windows::Forms::TextBox^ textBox6; // VIP (bool)

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDni = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->lblSexo = (gcnew System::Windows::Forms::Label());
			this->lblAutorizacion = (gcnew System::Windows::Forms::Label());
			this->lblVip = (gcnew System::Windows::Forms::Label());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());

			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Text = L"Gestión de Usuarios";
			// 
			// lblDni
			// 
			this->lblDni->AutoSize = true;
			this->lblDni->Location = System::Drawing::Point(15, 47);
			this->lblDni->Name = L"lblDni";
			this->lblDni->Size = System::Drawing::Size(29, 13);
			this->lblDni->TabIndex = 9;
			this->lblDni->Text = L"DNI:";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(15, 80);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 10;
			this->lblNombre->Text = L"Nombre:";
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Location = System::Drawing::Point(15, 113);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(35, 13);
			this->lblEdad->TabIndex = 11;
			this->lblEdad->Text = L"Edad:";
			// 
			// lblSexo
			// 
			this->lblSexo->AutoSize = true;
			this->lblSexo->Location = System::Drawing::Point(15, 146);
			this->lblSexo->Name = L"lblSexo";
			this->lblSexo->Size = System::Drawing::Size(34, 13);
			this->lblSexo->TabIndex = 12;
			this->lblSexo->Text = L"Sexo:";
			// 
			// lblAutorizacion
			// 
			this->lblAutorizacion->AutoSize = true;
			this->lblAutorizacion->Location = System::Drawing::Point(15, 179);
			this->lblAutorizacion->Name = L"lblAutorizacion";
			this->lblAutorizacion->Size = System::Drawing::Size(68, 13);
			this->lblAutorizacion->TabIndex = 13;
			this->lblAutorizacion->Text = L"Autorización:";
			// 
			// lblVip
			// 
			this->lblVip->AutoSize = true;
			this->lblVip->Location = System::Drawing::Point(15, 212);
			this->lblVip->Name = L"lblVip";
			this->lblVip->Size = System::Drawing::Size(27, 13);
			this->lblVip->TabIndex = 14;
			this->lblVip->Text = L"VIP:";
			// 
			// textBox1 (DNI)
			// 
			this->textBox1->Location = System::Drawing::Point(90, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2 (Nombre)
			// 
			this->textBox2->Location = System::Drawing::Point(90, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3 (Edad)
			// 
			this->textBox3->Location = System::Drawing::Point(90, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4 (Sexo)
			// 
			this->textBox4->Location = System::Drawing::Point(90, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5 (Autorización)
			// 
			this->textBox5->Location = System::Drawing::Point(90, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6 (VIP)
			// 
			this->textBox6->Location = System::Drawing::Point(90, 209);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(210, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usuarios::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(210, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &usuarios::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(210, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &usuarios::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(210, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &usuarios::button4_Click);
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 250);
			this->Controls->Add(this->lblVip);
			this->Controls->Add(this->lblAutorizacion);
			this->Controls->Add(this->lblSexo);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblDni);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
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
			this->Text = L"Formulario de Usuarios";
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
		this->textBox5->Text = "";
		this->textBox6->Text = "";
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int dni = Int32::Parse(this->textBox1->Text);
		String^ nombre = this->textBox2->Text;
		int edad = Int32::Parse(this->textBox3->Text);
		String^ sexo = this->textBox4->Text;
		int autorizacion = Int32::Parse(this->textBox5->Text);
		bool vip = ParseBool(this->textBox6->Text);

		::controller::controller::agregarUsuario(dni, nombre, edad, sexo, autorizacion, vip);
		Console::WriteLine("Usuario agregado: DNI={0}, Nombre={1}, Edad={2}, Sexo={3}, Aut={4}, VIP={5}",
			dni, nombre, edad, sexo, autorizacion, vip);

		LimpiarCampos();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int dni = Int32::Parse(this->textBox1->Text);

		Usuario^ usr = ::controller::controller::buscarUsuario(dni);
		if (usr == nullptr) {
			Console::WriteLine("No se encontró el usuario con DNI {0}.", dni);
		}
		else {
			this->textBox2->Text = usr->nombre;
			this->textBox3->Text = usr->edad.ToString();
			this->textBox4->Text = usr->sexo;
			this->textBox5->Text = usr->autorizacion.ToString();
			//this->textBox6->Text = usr->vip.ToString();

			Console::WriteLine("Se encontró el usuario: DNI {0}, Nombre {1}.\n", usr->DNI, usr->nombre);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int dni = Int32::Parse(this->textBox1->Text);
		String^ nombre = this->textBox2->Text;
		int edad = Int32::Parse(this->textBox3->Text);
		String^ sexo = this->textBox4->Text;
		int autorizacion = Int32::Parse(this->textBox5->Text);
		bool vip = ParseBool(this->textBox6->Text);

		if (::controller::controller::modificarUsuario(dni, nombre, edad, sexo, autorizacion, vip)) {
			Console::WriteLine("Se modificó el usuario con DNI {0}.", dni);
		}
		else {
			Console::WriteLine("No se encontró el usuario con DNI {0} para modificar.", dni);
		}

		LimpiarCampos();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int dni = Int32::Parse(this->textBox1->Text);

		if (::controller::controller::eliminarUsuario(dni)) {
			Console::WriteLine("Se eliminó el usuario con DNI {0}.", dni);
		}
		else {
			Console::WriteLine("No se encontró el usuario con DNI {0} para eliminar.", dni);
		}

		LimpiarCampos();
	}
	};
}