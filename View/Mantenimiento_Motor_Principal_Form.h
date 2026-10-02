#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mantenimiento_Motor_Principal_Form
	/// </summary>
	public ref class Mantenimiento_Motor_Principal_Form : public System::Windows::Forms::Form
	{

	private:
		Form^ MantenimientoMenuForm;

	public:
		Mantenimiento_Motor_Principal_Form(Form^ entrada_MantenimientoMenuForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MantenimientoMenuForm = entrada_MantenimientoMenuForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mantenimiento_Motor_Principal_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btn_Parada_Emergencia;

	private: System::Windows::Forms::Button^ btn_Puesta_Marcha;

	private: System::Windows::Forms::Button^ btn_Regresar;
	private: System::Windows::Forms::Button^ btn_En_Mantenimiento;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Parada_Emergencia = (gcnew System::Windows::Forms::Button());
			this->btn_Puesta_Marcha = (gcnew System::Windows::Forms::Button());
			this->btn_Regresar = (gcnew System::Windows::Forms::Button());
			this->btn_En_Mantenimiento = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Estado Motor Principal";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"OPERATIVO", L"NO OPERATIVO", L"EN MANTENIMIENTO" });
			this->comboBox1->Location = System::Drawing::Point(250, 76);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// btn_Parada_Emergencia
			// 
			this->btn_Parada_Emergencia->Location = System::Drawing::Point(53, 162);
			this->btn_Parada_Emergencia->Name = L"btn_Parada_Emergencia";
			this->btn_Parada_Emergencia->Size = System::Drawing::Size(393, 69);
			this->btn_Parada_Emergencia->TabIndex = 2;
			this->btn_Parada_Emergencia->Text = L"PARADA DE EMERGENCIA";
			this->btn_Parada_Emergencia->UseVisualStyleBackColor = true;
			// 
			// btn_Puesta_Marcha
			// 
			this->btn_Puesta_Marcha->Location = System::Drawing::Point(53, 261);
			this->btn_Puesta_Marcha->Name = L"btn_Puesta_Marcha";
			this->btn_Puesta_Marcha->Size = System::Drawing::Size(393, 71);
			this->btn_Puesta_Marcha->TabIndex = 3;
			this->btn_Puesta_Marcha->Text = L"PUESTA EN MARCHA";
			this->btn_Puesta_Marcha->UseVisualStyleBackColor = true;
			// 
			// btn_Regresar
			// 
			this->btn_Regresar->Location = System::Drawing::Point(510, 212);
			this->btn_Regresar->Name = L"btn_Regresar";
			this->btn_Regresar->Size = System::Drawing::Size(108, 169);
			this->btn_Regresar->TabIndex = 4;
			this->btn_Regresar->Text = L"REGRESAR";
			this->btn_Regresar->UseVisualStyleBackColor = true;
			this->btn_Regresar->Click += gcnew System::EventHandler(this, &Mantenimiento_Motor_Principal_Form::btn_Regresar_Click);
			// 
			// btn_En_Mantenimiento
			// 
			this->btn_En_Mantenimiento->Location = System::Drawing::Point(53, 369);
			this->btn_En_Mantenimiento->Name = L"btn_En_Mantenimiento";
			this->btn_En_Mantenimiento->Size = System::Drawing::Size(393, 71);
			this->btn_En_Mantenimiento->TabIndex = 5;
			this->btn_En_Mantenimiento->Text = L"EN MANTENIMIENTO";
			this->btn_En_Mantenimiento->UseVisualStyleBackColor = true;
			// 
			// Mantenimiento_Motor_Principal_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 475);
			this->Controls->Add(this->btn_En_Mantenimiento);
			this->Controls->Add(this->btn_Regresar);
			this->Controls->Add(this->btn_Puesta_Marcha);
			this->Controls->Add(this->btn_Parada_Emergencia);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Mantenimiento_Motor_Principal_Form";
			this->Text = L"Mantenimiento_Motor_Principal_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			MantenimientoMenuForm->Show();

		}
};
}
