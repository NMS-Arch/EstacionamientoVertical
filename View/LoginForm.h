#pragma once

#include "Operador_Formulario_Form.h"
#include "Administrador_Interfaz_Principal_Form.h"

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Ingresar;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_Usuario;
	private: System::Windows::Forms::TextBox^ tb_Clave;
	private: System::Windows::Forms::Label^ label3;

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
			this->btn_Ingresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->tb_Clave = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Ingresar
			// 
			this->btn_Ingresar->Location = System::Drawing::Point(161, 261);
			this->btn_Ingresar->Name = L"btn_Ingresar";
			this->btn_Ingresar->Size = System::Drawing::Size(150, 36);
			this->btn_Ingresar->TabIndex = 0;
			this->btn_Ingresar->Text = L"INGRESAR";
			this->btn_Ingresar->UseVisualStyleBackColor = true;
			this->btn_Ingresar->Click += gcnew System::EventHandler(this, &LoginForm::btn_Ingresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña";
			// 
			// tb_Usuario
			// 
			this->tb_Usuario->Location = System::Drawing::Point(161, 134);
			this->tb_Usuario->Name = L"tb_Usuario";
			this->tb_Usuario->Size = System::Drawing::Size(150, 22);
			this->tb_Usuario->TabIndex = 3;
			// 
			// tb_Clave
			// 
			this->tb_Clave->Location = System::Drawing::Point(161, 195);
			this->tb_Clave->Name = L"tb_Clave";
			this->tb_Clave->Size = System::Drawing::Size(149, 22);
			this->tb_Clave->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(178, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"LOGIN";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 383);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_Clave);
			this->Controls->Add(this->tb_Usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Ingresar);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ usuario = tb_Usuario->Text;
			String^ contra = tb_Clave->Text;


			// 2. Rol: OPERADOR (Ingresa a formulario y tickets)
			if (usuario == "operador" && contra == "ope123") {

				this->Hide();

				Operador_Formulario_Form^ FormularioForm = gcnew Operador_Formulario_Form(this);
				FormularioForm->Show();


			}
			// 3. Rol: ADMINISTRADOR (Ingresa a reclamos y usuarios)
			else if (usuario == "admin" && contra == "admin123") {

				this->Hide();

				Administrador_Interfaz_Principal_Form^ MenuAdminForm = gcnew Administrador_Interfaz_Principal_Form(this);
				MenuAdminForm->Show();

			//}
			//// 4. Rol: MECÁNICO / MANTENIMIENTO (Ingresa a fallas)
			//else if (usuario == "mecanico" && contra == "mec123") {

			//	fallas^ ventanaFallas = gcnew fallas();
			//	ventanaFallas->Show();

			//	this->Hide();
			}
			// 5. Validación de error
			else {
				MessageBox::Show("Usuario o contraseña incorrectos.", "Error de Acceso", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}
};
}
