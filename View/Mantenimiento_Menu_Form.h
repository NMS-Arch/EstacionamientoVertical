#pragma once
#include "Mantenimiento_Motor_Principal_Form.h"
#include "Mantenimiento_Registro_Fallas_Form.h"


namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mantenimiento_Menu_Form
	/// </summary>
	public ref class Mantenimiento_Menu_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ loginForm;

	public:
		Mantenimiento_Menu_Form(Form^ entrada_loginForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			loginForm = entrada_loginForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mantenimiento_Menu_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_1;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_1;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_1;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_2;



	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_2;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_3;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_3;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_4;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_4;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_4;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_5;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_5;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_5;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_6;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_6;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_6;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_7;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_7;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_7;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_8;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_8;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_8;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_9;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_9;
	private: System::Windows::Forms::ComboBox^ cb_Espacio_9;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btn_Inhabilitar_Espacio_10;

	private: System::Windows::Forms::Button^ btn_Habilitar_Espacio_10;
private: System::Windows::Forms::ComboBox^ cb_Espacio_10;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ En_Mantenimiento_1;
	private: System::Windows::Forms::Button^ En_Mantenimiento_2;
	private: System::Windows::Forms::Button^ En_Mantenimiento_3;
	private: System::Windows::Forms::Button^ En_Mantenimiento_4;
	private: System::Windows::Forms::Button^ En_Mantenimiento_5;
private: System::Windows::Forms::Button^ En_Mantenimiento_6;
private: System::Windows::Forms::Button^ En_Mantenimiento_7;
private: System::Windows::Forms::Button^ En_Mantenimiento_8;
private: System::Windows::Forms::Button^ En_Mantenimiento_10;









private: System::Windows::Forms::Button^ En_Mantenimiento_9;

	private: System::Windows::Forms::Button^ btn_Registrar_Falla;
	private: System::Windows::Forms::Button^ btn_Cerrar_Sesion;
	private: System::Windows::Forms::Button^ btn_Motor_Principal;



	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::ComboBox^ comboBox11;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Habilitar_Espacio_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Inhabilitar_Espacio_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Inhabilitar_Espacio_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_2 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_3 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_3 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_4 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_4 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_4 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_5 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_5 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_5 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_6 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_6 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_6 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_7 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_7 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_7 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_8 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_8 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_8 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_9 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_9 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_9 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_Inhabilitar_Espacio_10 = (gcnew System::Windows::Forms::Button());
			this->btn_Habilitar_Espacio_10 = (gcnew System::Windows::Forms::Button());
			this->cb_Espacio_10 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->En_Mantenimiento_1 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_2 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_3 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_4 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_5 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_6 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_7 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_8 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_10 = (gcnew System::Windows::Forms::Button());
			this->En_Mantenimiento_9 = (gcnew System::Windows::Forms::Button());
			this->btn_Registrar_Falla = (gcnew System::Windows::Forms::Button());
			this->btn_Cerrar_Sesion = (gcnew System::Windows::Forms::Button());
			this->btn_Motor_Principal = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Espacio 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado";
			// 
			// cb_Espacio_1
			// 
			this->cb_Espacio_1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_1->FormattingEnabled = true;
			this->cb_Espacio_1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_1->Location = System::Drawing::Point(122, 173);
			this->cb_Espacio_1->Name = L"cb_Espacio_1";
			this->cb_Espacio_1->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_1->TabIndex = 2;
			// 
			// btn_Habilitar_Espacio_1
			// 
			this->btn_Habilitar_Espacio_1->Location = System::Drawing::Point(53, 219);
			this->btn_Habilitar_Espacio_1->Name = L"btn_Habilitar_Espacio_1";
			this->btn_Habilitar_Espacio_1->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_1->TabIndex = 3;
			this->btn_Habilitar_Espacio_1->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_1->UseVisualStyleBackColor = true;
			// 
			// btn_Inhabilitar_Espacio_1
			// 
			this->btn_Inhabilitar_Espacio_1->Location = System::Drawing::Point(164, 217);
			this->btn_Inhabilitar_Espacio_1->Name = L"btn_Inhabilitar_Espacio_1";
			this->btn_Inhabilitar_Espacio_1->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_1->TabIndex = 4;
			this->btn_Inhabilitar_Espacio_1->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_1->UseVisualStyleBackColor = true;
			// 
			// btn_Inhabilitar_Espacio_2
			// 
			this->btn_Inhabilitar_Espacio_2->Location = System::Drawing::Point(453, 217);
			this->btn_Inhabilitar_Espacio_2->Name = L"btn_Inhabilitar_Espacio_2";
			this->btn_Inhabilitar_Espacio_2->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_2->TabIndex = 9;
			this->btn_Inhabilitar_Espacio_2->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_2->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_2
			// 
			this->btn_Habilitar_Espacio_2->Location = System::Drawing::Point(342, 219);
			this->btn_Habilitar_Espacio_2->Name = L"btn_Habilitar_Espacio_2";
			this->btn_Habilitar_Espacio_2->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_2->TabIndex = 8;
			this->btn_Habilitar_Espacio_2->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_2->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_2
			// 
			this->cb_Espacio_2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_2->FormattingEnabled = true;
			this->cb_Espacio_2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_2->Location = System::Drawing::Point(411, 173);
			this->cb_Espacio_2->Name = L"cb_Espacio_2";
			this->cb_Espacio_2->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(339, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Estado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(339, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Espacio 2";
			// 
			// btn_Inhabilitar_Espacio_3
			// 
			this->btn_Inhabilitar_Espacio_3->Location = System::Drawing::Point(745, 217);
			this->btn_Inhabilitar_Espacio_3->Name = L"btn_Inhabilitar_Espacio_3";
			this->btn_Inhabilitar_Espacio_3->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_3->TabIndex = 14;
			this->btn_Inhabilitar_Espacio_3->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_3->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_3
			// 
			this->btn_Habilitar_Espacio_3->Location = System::Drawing::Point(634, 219);
			this->btn_Habilitar_Espacio_3->Name = L"btn_Habilitar_Espacio_3";
			this->btn_Habilitar_Espacio_3->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_3->TabIndex = 13;
			this->btn_Habilitar_Espacio_3->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_3->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_3
			// 
			this->cb_Espacio_3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_3->FormattingEnabled = true;
			this->cb_Espacio_3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_3->Location = System::Drawing::Point(703, 173);
			this->cb_Espacio_3->Name = L"cb_Espacio_3";
			this->cb_Espacio_3->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(631, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Estado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(631, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Espacio 3";
			// 
			// btn_Inhabilitar_Espacio_4
			// 
			this->btn_Inhabilitar_Espacio_4->Location = System::Drawing::Point(1022, 217);
			this->btn_Inhabilitar_Espacio_4->Name = L"btn_Inhabilitar_Espacio_4";
			this->btn_Inhabilitar_Espacio_4->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_4->TabIndex = 19;
			this->btn_Inhabilitar_Espacio_4->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_4->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_4
			// 
			this->btn_Habilitar_Espacio_4->Location = System::Drawing::Point(911, 219);
			this->btn_Habilitar_Espacio_4->Name = L"btn_Habilitar_Espacio_4";
			this->btn_Habilitar_Espacio_4->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_4->TabIndex = 18;
			this->btn_Habilitar_Espacio_4->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_4->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_4
			// 
			this->cb_Espacio_4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_4->FormattingEnabled = true;
			this->cb_Espacio_4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_4->Location = System::Drawing::Point(980, 173);
			this->cb_Espacio_4->Name = L"cb_Espacio_4";
			this->cb_Espacio_4->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_4->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(908, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Estado";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(908, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Espacio 4";
			// 
			// btn_Inhabilitar_Espacio_5
			// 
			this->btn_Inhabilitar_Espacio_5->Location = System::Drawing::Point(170, 400);
			this->btn_Inhabilitar_Espacio_5->Name = L"btn_Inhabilitar_Espacio_5";
			this->btn_Inhabilitar_Espacio_5->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_5->TabIndex = 24;
			this->btn_Inhabilitar_Espacio_5->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_5->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_5
			// 
			this->btn_Habilitar_Espacio_5->Location = System::Drawing::Point(59, 402);
			this->btn_Habilitar_Espacio_5->Name = L"btn_Habilitar_Espacio_5";
			this->btn_Habilitar_Espacio_5->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_5->TabIndex = 23;
			this->btn_Habilitar_Espacio_5->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_5->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_5
			// 
			this->cb_Espacio_5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_5->FormattingEnabled = true;
			this->cb_Espacio_5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_5->Location = System::Drawing::Point(128, 356);
			this->cb_Espacio_5->Name = L"cb_Espacio_5";
			this->cb_Espacio_5->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_5->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(56, 359);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Estado";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(56, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Espacio 5";
			// 
			// btn_Inhabilitar_Espacio_6
			// 
			this->btn_Inhabilitar_Espacio_6->Location = System::Drawing::Point(453, 400);
			this->btn_Inhabilitar_Espacio_6->Name = L"btn_Inhabilitar_Espacio_6";
			this->btn_Inhabilitar_Espacio_6->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_6->TabIndex = 29;
			this->btn_Inhabilitar_Espacio_6->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_6->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_6
			// 
			this->btn_Habilitar_Espacio_6->Location = System::Drawing::Point(342, 402);
			this->btn_Habilitar_Espacio_6->Name = L"btn_Habilitar_Espacio_6";
			this->btn_Habilitar_Espacio_6->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_6->TabIndex = 28;
			this->btn_Habilitar_Espacio_6->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_6->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_6
			// 
			this->cb_Espacio_6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_6->FormattingEnabled = true;
			this->cb_Espacio_6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_6->Location = System::Drawing::Point(411, 356);
			this->cb_Espacio_6->Name = L"cb_Espacio_6";
			this->cb_Espacio_6->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_6->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(339, 359);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Estado";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(339, 326);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 16);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Espacio 6";
			// 
			// btn_Inhabilitar_Espacio_7
			// 
			this->btn_Inhabilitar_Espacio_7->Location = System::Drawing::Point(745, 400);
			this->btn_Inhabilitar_Espacio_7->Name = L"btn_Inhabilitar_Espacio_7";
			this->btn_Inhabilitar_Espacio_7->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_7->TabIndex = 34;
			this->btn_Inhabilitar_Espacio_7->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_7->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_7
			// 
			this->btn_Habilitar_Espacio_7->Location = System::Drawing::Point(634, 402);
			this->btn_Habilitar_Espacio_7->Name = L"btn_Habilitar_Espacio_7";
			this->btn_Habilitar_Espacio_7->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_7->TabIndex = 33;
			this->btn_Habilitar_Espacio_7->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_7->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_7
			// 
			this->cb_Espacio_7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_7->FormattingEnabled = true;
			this->cb_Espacio_7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_7->Location = System::Drawing::Point(703, 356);
			this->cb_Espacio_7->Name = L"cb_Espacio_7";
			this->cb_Espacio_7->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_7->TabIndex = 32;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(631, 359);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Estado";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(631, 326);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Espacio 7";
			// 
			// btn_Inhabilitar_Espacio_8
			// 
			this->btn_Inhabilitar_Espacio_8->Location = System::Drawing::Point(1022, 400);
			this->btn_Inhabilitar_Espacio_8->Name = L"btn_Inhabilitar_Espacio_8";
			this->btn_Inhabilitar_Espacio_8->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_8->TabIndex = 39;
			this->btn_Inhabilitar_Espacio_8->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_8->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_8
			// 
			this->btn_Habilitar_Espacio_8->Location = System::Drawing::Point(911, 402);
			this->btn_Habilitar_Espacio_8->Name = L"btn_Habilitar_Espacio_8";
			this->btn_Habilitar_Espacio_8->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_8->TabIndex = 38;
			this->btn_Habilitar_Espacio_8->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_8->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_8
			// 
			this->cb_Espacio_8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_8->FormattingEnabled = true;
			this->cb_Espacio_8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_8->Location = System::Drawing::Point(980, 356);
			this->cb_Espacio_8->Name = L"cb_Espacio_8";
			this->cb_Espacio_8->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_8->TabIndex = 37;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(908, 359);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 16);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Estado";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(908, 326);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 16);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Espacio 8";
			// 
			// btn_Inhabilitar_Espacio_9
			// 
			this->btn_Inhabilitar_Espacio_9->Location = System::Drawing::Point(170, 589);
			this->btn_Inhabilitar_Espacio_9->Name = L"btn_Inhabilitar_Espacio_9";
			this->btn_Inhabilitar_Espacio_9->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_9->TabIndex = 44;
			this->btn_Inhabilitar_Espacio_9->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_9->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_9
			// 
			this->btn_Habilitar_Espacio_9->Location = System::Drawing::Point(59, 591);
			this->btn_Habilitar_Espacio_9->Name = L"btn_Habilitar_Espacio_9";
			this->btn_Habilitar_Espacio_9->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_9->TabIndex = 43;
			this->btn_Habilitar_Espacio_9->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_9->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_9
			// 
			this->cb_Espacio_9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_9->FormattingEnabled = true;
			this->cb_Espacio_9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_9->Location = System::Drawing::Point(128, 545);
			this->cb_Espacio_9->Name = L"cb_Espacio_9";
			this->cb_Espacio_9->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_9->TabIndex = 42;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(56, 548);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 16);
			this->label17->TabIndex = 41;
			this->label17->Text = L"Estado";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(56, 515);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 16);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Espacio 9";
			// 
			// btn_Inhabilitar_Espacio_10
			// 
			this->btn_Inhabilitar_Espacio_10->Location = System::Drawing::Point(453, 589);
			this->btn_Inhabilitar_Espacio_10->Name = L"btn_Inhabilitar_Espacio_10";
			this->btn_Inhabilitar_Espacio_10->Size = System::Drawing::Size(75, 28);
			this->btn_Inhabilitar_Espacio_10->TabIndex = 49;
			this->btn_Inhabilitar_Espacio_10->Text = L"Inhabilitar";
			this->btn_Inhabilitar_Espacio_10->UseVisualStyleBackColor = true;
			// 
			// btn_Habilitar_Espacio_10
			// 
			this->btn_Habilitar_Espacio_10->Location = System::Drawing::Point(342, 591);
			this->btn_Habilitar_Espacio_10->Name = L"btn_Habilitar_Espacio_10";
			this->btn_Habilitar_Espacio_10->Size = System::Drawing::Size(70, 26);
			this->btn_Habilitar_Espacio_10->TabIndex = 48;
			this->btn_Habilitar_Espacio_10->Text = L"Habilitar";
			this->btn_Habilitar_Espacio_10->UseVisualStyleBackColor = true;
			// 
			// cb_Espacio_10
			// 
			this->cb_Espacio_10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_10->FormattingEnabled = true;
			this->cb_Espacio_10->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_10->Location = System::Drawing::Point(411, 545);
			this->cb_Espacio_10->Name = L"cb_Espacio_10";
			this->cb_Espacio_10->Size = System::Drawing::Size(117, 24);
			this->cb_Espacio_10->TabIndex = 47;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(339, 548);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 16);
			this->label19->TabIndex = 46;
			this->label19->Text = L"Estado";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(339, 515);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(74, 16);
			this->label20->TabIndex = 45;
			this->label20->Text = L"Espacio 10";
			// 
			// En_Mantenimiento_1
			// 
			this->En_Mantenimiento_1->Location = System::Drawing::Point(53, 264);
			this->En_Mantenimiento_1->Name = L"En_Mantenimiento_1";
			this->En_Mantenimiento_1->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_1->TabIndex = 50;
			this->En_Mantenimiento_1->Text = L"En Mantenimiento";
			this->En_Mantenimiento_1->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_2
			// 
			this->En_Mantenimiento_2->Location = System::Drawing::Point(342, 264);
			this->En_Mantenimiento_2->Name = L"En_Mantenimiento_2";
			this->En_Mantenimiento_2->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_2->TabIndex = 51;
			this->En_Mantenimiento_2->Text = L"En Mantenimiento";
			this->En_Mantenimiento_2->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_3
			// 
			this->En_Mantenimiento_3->Location = System::Drawing::Point(634, 264);
			this->En_Mantenimiento_3->Name = L"En_Mantenimiento_3";
			this->En_Mantenimiento_3->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_3->TabIndex = 52;
			this->En_Mantenimiento_3->Text = L"En Mantenimiento";
			this->En_Mantenimiento_3->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_4
			// 
			this->En_Mantenimiento_4->Location = System::Drawing::Point(911, 264);
			this->En_Mantenimiento_4->Name = L"En_Mantenimiento_4";
			this->En_Mantenimiento_4->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_4->TabIndex = 53;
			this->En_Mantenimiento_4->Text = L"En Mantenimiento";
			this->En_Mantenimiento_4->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_5
			// 
			this->En_Mantenimiento_5->Location = System::Drawing::Point(59, 444);
			this->En_Mantenimiento_5->Name = L"En_Mantenimiento_5";
			this->En_Mantenimiento_5->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_5->TabIndex = 54;
			this->En_Mantenimiento_5->Text = L"En Mantenimiento";
			this->En_Mantenimiento_5->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_6
			// 
			this->En_Mantenimiento_6->Location = System::Drawing::Point(342, 444);
			this->En_Mantenimiento_6->Name = L"En_Mantenimiento_6";
			this->En_Mantenimiento_6->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_6->TabIndex = 55;
			this->En_Mantenimiento_6->Text = L"En Mantenimiento";
			this->En_Mantenimiento_6->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_7
			// 
			this->En_Mantenimiento_7->Location = System::Drawing::Point(634, 444);
			this->En_Mantenimiento_7->Name = L"En_Mantenimiento_7";
			this->En_Mantenimiento_7->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_7->TabIndex = 56;
			this->En_Mantenimiento_7->Text = L"En Mantenimiento";
			this->En_Mantenimiento_7->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_8
			// 
			this->En_Mantenimiento_8->Location = System::Drawing::Point(911, 444);
			this->En_Mantenimiento_8->Name = L"En_Mantenimiento_8";
			this->En_Mantenimiento_8->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_8->TabIndex = 57;
			this->En_Mantenimiento_8->Text = L"En Mantenimiento";
			this->En_Mantenimiento_8->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_10
			// 
			this->En_Mantenimiento_10->Location = System::Drawing::Point(342, 634);
			this->En_Mantenimiento_10->Name = L"En_Mantenimiento_10";
			this->En_Mantenimiento_10->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_10->TabIndex = 58;
			this->En_Mantenimiento_10->Text = L"En Mantenimiento";
			this->En_Mantenimiento_10->UseVisualStyleBackColor = true;
			// 
			// En_Mantenimiento_9
			// 
			this->En_Mantenimiento_9->Location = System::Drawing::Point(59, 634);
			this->En_Mantenimiento_9->Name = L"En_Mantenimiento_9";
			this->En_Mantenimiento_9->Size = System::Drawing::Size(186, 29);
			this->En_Mantenimiento_9->TabIndex = 59;
			this->En_Mantenimiento_9->Text = L"En Mantenimiento";
			this->En_Mantenimiento_9->UseVisualStyleBackColor = true;
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Location = System::Drawing::Point(634, 564);
			this->btn_Registrar_Falla->Name = L"btn_Registrar_Falla";
			this->btn_Registrar_Falla->Size = System::Drawing::Size(186, 80);
			this->btn_Registrar_Falla->TabIndex = 60;
			this->btn_Registrar_Falla->Text = L"Ver Registro de Fallas";
			this->btn_Registrar_Falla->UseVisualStyleBackColor = true;
			this->btn_Registrar_Falla->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Registrar_Falla_Click);
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(911, 562);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(186, 82);
			this->btn_Cerrar_Sesion->TabIndex = 61;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Cerrar_Sesion_Click);
			// 
			// btn_Motor_Principal
			// 
			this->btn_Motor_Principal->Location = System::Drawing::Point(567, 51);
			this->btn_Motor_Principal->Name = L"btn_Motor_Principal";
			this->btn_Motor_Principal->Size = System::Drawing::Size(423, 40);
			this->btn_Motor_Principal->TabIndex = 62;
			this->btn_Motor_Principal->Text = L"MOTOR PRINCIPAL";
			this->btn_Motor_Principal->UseVisualStyleBackColor = true;
			this->btn_Motor_Principal->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Motor_Principal_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(56, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(161, 16);
			this->label21->TabIndex = 63;
			this->label21->Text = L"Estado de Motor Principal";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"OPERATIVO", L"NO OPERATIVO", L"EN MANTENIMIENTO" });
			this->comboBox11->Location = System::Drawing::Point(257, 60);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(278, 24);
			this->comboBox11->TabIndex = 64;
			// 
			// Mantenimiento_Menu_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 727);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_Motor_Principal);
			this->Controls->Add(this->btn_Cerrar_Sesion);
			this->Controls->Add(this->btn_Registrar_Falla);
			this->Controls->Add(this->En_Mantenimiento_9);
			this->Controls->Add(this->En_Mantenimiento_10);
			this->Controls->Add(this->En_Mantenimiento_8);
			this->Controls->Add(this->En_Mantenimiento_7);
			this->Controls->Add(this->En_Mantenimiento_6);
			this->Controls->Add(this->En_Mantenimiento_5);
			this->Controls->Add(this->En_Mantenimiento_4);
			this->Controls->Add(this->En_Mantenimiento_3);
			this->Controls->Add(this->En_Mantenimiento_2);
			this->Controls->Add(this->En_Mantenimiento_1);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_10);
			this->Controls->Add(this->btn_Habilitar_Espacio_10);
			this->Controls->Add(this->cb_Espacio_10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_9);
			this->Controls->Add(this->btn_Habilitar_Espacio_9);
			this->Controls->Add(this->cb_Espacio_9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_8);
			this->Controls->Add(this->btn_Habilitar_Espacio_8);
			this->Controls->Add(this->cb_Espacio_8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_7);
			this->Controls->Add(this->btn_Habilitar_Espacio_7);
			this->Controls->Add(this->cb_Espacio_7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_6);
			this->Controls->Add(this->btn_Habilitar_Espacio_6);
			this->Controls->Add(this->cb_Espacio_6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_5);
			this->Controls->Add(this->btn_Habilitar_Espacio_5);
			this->Controls->Add(this->cb_Espacio_5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_4);
			this->Controls->Add(this->btn_Habilitar_Espacio_4);
			this->Controls->Add(this->cb_Espacio_4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_3);
			this->Controls->Add(this->btn_Habilitar_Espacio_3);
			this->Controls->Add(this->cb_Espacio_3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_2);
			this->Controls->Add(this->btn_Habilitar_Espacio_2);
			this->Controls->Add(this->cb_Espacio_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Inhabilitar_Espacio_1);
			this->Controls->Add(this->btn_Habilitar_Espacio_1);
			this->Controls->Add(this->cb_Espacio_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Mantenimiento_Menu_Form";
			this->Text = L"Mantenimiento_Menu_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Cerrar_Sesion_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			loginForm->Show();

		}
		private: System::Void btn_Motor_Principal_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			Mantenimiento_Motor_Principal_Form^ MotorPrincipalForm = gcnew Mantenimiento_Motor_Principal_Form(this);

			MotorPrincipalForm->Show();

		}
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			Mantenimiento_Registro_Fallas_Form^ RegistroFallasForm = gcnew Mantenimiento_Registro_Fallas_Form(this);

			RegistroFallasForm->Show();

		}
};
}
