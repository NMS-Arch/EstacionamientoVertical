#pragma once

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
		String^ RolLogueado;

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
	private: System::Windows::Forms::Button^ Btn_Ingresar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_usuario;
	private: System::Windows::Forms::TextBox^ tb_clave;
	protected:

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
			this->Btn_Ingresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->tb_clave = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Btn_Ingresar
			// 
			this->Btn_Ingresar->Location = System::Drawing::Point(209, 254);
			this->Btn_Ingresar->Name = L"Btn_Ingresar";
			this->Btn_Ingresar->Size = System::Drawing::Size(75, 23);
			this->Btn_Ingresar->TabIndex = 0;
			this->Btn_Ingresar->Text = L"Ingresar";
			this->Btn_Ingresar->UseVisualStyleBackColor = true;
			this->Btn_Ingresar->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña";
			// 
			// tb_usuario
			// 
			this->tb_usuario->Location = System::Drawing::Point(220, 91);
			this->tb_usuario->Name = L"tb_usuario";
			this->tb_usuario->Size = System::Drawing::Size(100, 22);
			this->tb_usuario->TabIndex = 3;
			// 
			// tb_clave
			// 
			this->tb_clave->Location = System::Drawing::Point(220, 150);
			this->tb_clave->Name = L"tb_clave";
			this->tb_clave->Size = System::Drawing::Size(100, 22);
			this->tb_clave->TabIndex = 4;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 382);
			this->Controls->Add(this->tb_clave);
			this->Controls->Add(this->tb_usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Btn_Ingresar);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ usuario = tb_usuario->Text; String^ clave = tb_usuario->Text;

		if (String::IsNullOrWhiteSpace(usuario) || String::IsNullOrWhiteSpace(clave)) {
			MessageBox::Show("Por favor, ingrese usuario y contraseña.", "Validación",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}


		// 2. Comprobar credenciales (ejemplo básico estático)
		if (usuario == "admin" && clave == "admin123") {
			RolLogueado = "Administrador"; // Guardamos el rol
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
		else if (usuario == "operador" && clave == "operador123") {
			RolLogueado = "Operador"; // Guardamos el rol
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
		else if (usuario == "mantnimiento" && clave == "mantenimiento123") {
			RolLogueado = "mantnimiento"; // Guardamos el rol
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}else{
		
			MessageBox::Show("Credenciales inválidas", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
