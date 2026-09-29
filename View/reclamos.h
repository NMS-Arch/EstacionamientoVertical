#pragma once
#include "usuarios.h"
#include "MyForm_Login_Principal.h"

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace controller;
	using namespace model;

	/// 
	/// Resumen de reclamos
	/// 
	public ref class reclamos : public System::Windows::Forms::Form
	{
	public:
		reclamos(void)
		{
			InitializeComponent();
		}

	protected:
		~reclamos()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::Label^ lblDescripcion;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1; // ID
	private: System::Windows::Forms::TextBox^ textBox2; // Fecha
	private: System::Windows::Forms::TextBox^ textBox3; // Hora
	private: System::Windows::Forms::TextBox^ textBox4; // Descripción
	private: System::Windows::Forms::Button^ btn_usuarios;
	private: System::Windows::Forms::Button^ btn_Cerrar_Sesion;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->lblDescripcion = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_usuarios = (gcnew System::Windows::Forms::Button());
			this->btn_Cerrar_Sesion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Reclamos";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(20, 58);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(23, 16);
			this->lblId->TabIndex = 9;
			this->lblId->Text = L"ID:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(20, 98);
			this->lblFecha->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(48, 16);
			this->lblFecha->TabIndex = 10;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->Location = System::Drawing::Point(20, 139);
			this->lblHora->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(40, 16);
			this->lblHora->TabIndex = 11;
			this->lblHora->Text = L"Hora:";
			// 
			// lblDescripcion
			// 
			this->lblDescripcion->AutoSize = true;
			this->lblDescripcion->Location = System::Drawing::Point(20, 180);
			this->lblDescripcion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDescripcion->Name = L"lblDescripcion";
			this->lblDescripcion->Size = System::Drawing::Size(82, 16);
			this->lblDescripcion->TabIndex = 12;
			this->lblDescripcion->Text = L"Descripción:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 52);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &reclamos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(273, 92);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &reclamos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(273, 133);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 31);
			this->button3->TabIndex = 3;
			this->button3->Text = L"modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &reclamos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(273, 174);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(173, 31);
			this->button4->TabIndex = 4;
			this->button4->Text = L"eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &reclamos::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 95);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(113, 135);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(113, 176);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 8;
			// 
			// btn_usuarios
			// 
			this->btn_usuarios->Location = System::Drawing::Point(505, 54);
			this->btn_usuarios->Name = L"btn_usuarios";
			this->btn_usuarios->Size = System::Drawing::Size(108, 60);
			this->btn_usuarios->TabIndex = 13;
			this->btn_usuarios->Text = L"Ver Usuarios";
			this->btn_usuarios->UseVisualStyleBackColor = true;
			this->btn_usuarios->Click += gcnew System::EventHandler(this, &reclamos::btn_usuarios_Click);
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(505, 156);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(108, 48);
			this->btn_Cerrar_Sesion->TabIndex = 14;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &reclamos::btn_Cerrar_Sesion_Click);
			// 
			// reclamos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 246);
			this->Controls->Add(this->btn_Cerrar_Sesion);
			this->Controls->Add(this->btn_usuarios);
			this->Controls->Add(this->lblDescripcion);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->lblFecha);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"reclamos";
			this->Text = L"reclamos";
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
		String^ fecha = this->textBox2->Text;
		String^ hora = this->textBox3->Text;
		String^ descripcion = this->textBox4->Text;

		::controller::controller::agregarReclamo(id, fecha, hora, descripcion);
		Console::WriteLine("Reclamo agregado: ID={0}, Fecha={1}, Hora={2}, Descripcion={3}",
			id, fecha, hora, descripcion);

		LimpiarCampos();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);

		Reclamo^ r = ::controller::controller::buscarReclamo(id);
		if (r == nullptr) {
			Console::WriteLine("No se encontró el reclamo con ID {0}.", id);
		}
		else {
			this->textBox2->Text = r->fecha;
			this->textBox3->Text = r->hora;
			this->textBox4->Text = r->descripcion;

			Console::WriteLine("Se encontró el reclamo: ID={0}, Fecha={1}, Hora={2}, Descripcion={3}\n",
				r->id, r->fecha, r->hora, r->descripcion);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);
		String^ fecha = this->textBox2->Text;
		String^ hora = this->textBox3->Text;
		String^ descripcion = this->textBox4->Text;

		if (::controller::controller::modificarReclamo(id, fecha, hora, descripcion)) {
			Console::WriteLine("Se modificó el reclamo con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró el reclamo con ID {0} para modificar.", id);
		}

		LimpiarCampos();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = ParseIntSeguro(this->textBox1->Text, 0);

		if (::controller::controller::eliminarReclamo(id)) {
			Console::WriteLine("Se eliminó el reclamo con ID {0}.", id);
		}
		else {
			Console::WriteLine("No se encontró el reclamo con ID {0} para eliminar.", id);
		}

		LimpiarCampos();
	}
	private: System::Void btn_Cerrar_Sesion_Click(System::Object^ sender, System::EventArgs^ e) {

		// 1. Instanciamos la ventana de reclamos
		MyForm_Login_Principal^ volverLogin = gcnew MyForm_Login_Principal();

		// 2. La mostramos
		volverLogin->Show();

		// 3. Opcional: Ocultamos la ventana actual de usuarios
		this->Hide();
	}
	private: System::Void btn_usuarios_Click(System::Object^ sender, System::EventArgs^ e) {

		// 1. Instanciamos la ventana de reclamos
		usuarios^ volverUsuarios = gcnew usuarios();

		// 2. La mostramos
		volverUsuarios->Show();

		// 3. Opcional: Ocultamos la ventana actual de usuarios
		this->Hide();


	}
};
}