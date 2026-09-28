#pragma once

#include "formulario.h"
#include "tickets.h"
#include "usuarios.h"
#include "reclamos.h"
#include "fallas.h"

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm_Login_Principal
	/// </summary>
	public ref class MyForm_Login_Principal : public System::Windows::Forms::Form
	{
	public:
		MyForm_Login_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm_Login_Principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ Boton_Ingresar_Sesion;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Boton_Ingresar_Sesion = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// Boton_Ingresar_Sesion
			// 
			this->Boton_Ingresar_Sesion->Location = System::Drawing::Point(84, 156);
			this->Boton_Ingresar_Sesion->Name = L"Boton_Ingresar_Sesion";
			this->Boton_Ingresar_Sesion->Size = System::Drawing::Size(75, 23);
			this->Boton_Ingresar_Sesion->TabIndex = 2;
			this->Boton_Ingresar_Sesion->Text = L"Ingresar";
			this->Boton_Ingresar_Sesion->UseVisualStyleBackColor = true;
			this->Boton_Ingresar_Sesion->Click += gcnew System::EventHandler(this, &MyForm_Login_Principal::Boton_Ingresar_Sesion_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm_Login_Principal::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contraseña";
			// 
			// MyForm_Login_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Boton_Ingresar_Sesion);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm_Login_Principal";
			this->Text = L"MyForm_Login_Principal";
			this->Load += gcnew System::EventHandler(this, &MyForm_Login_Principal::MyForm_Login_Principal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Login_Principal_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Boton_Ingresar_Sesion_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Capturar el texto ingresado
	String^ usuario = textBox1->Text;
	String^ contra = textBox2->Text;

	// 2. Rol: OPERADOR (Ingresa a formulario y tickets)
	if (usuario == "operador" && contra == "ope123") {

		// gcnew crea la ventana en memoria
		formulario^ ventanaForm = gcnew formulario();
		ventanaForm->Show(); // Show() la hace visible en pantalla

		tickets^ ventanaTickets = gcnew tickets();
		ventanaTickets->Show();

		this->Hide(); // this->Hide() oculta la ventana actual de Login
	}
	// 3. Rol: ADMINISTRADOR (Ingresa a reclamos y usuarios)
	else if (usuario == "admin" && contra == "admin123") {

		reclamos^ ventanaReclamos = gcnew reclamos();
		ventanaReclamos->Show();

		usuarios^ ventanaUsuarios = gcnew usuarios();
		ventanaUsuarios->Show();

		this->Hide();
	}
	// 4. Rol: MECÁNICO / MANTENIMIENTO (Ingresa a fallas)
	else if (usuario == "mecanico" && contra == "mec123") {

		fallas^ ventanaFallas = gcnew fallas();
		ventanaFallas->Show();

		this->Hide();
	}
	// 5. Validación de error
	else {
		MessageBox::Show("Usuario o contraseña incorrectos.", "Error de Acceso", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
