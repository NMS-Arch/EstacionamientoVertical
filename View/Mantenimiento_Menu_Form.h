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
	using namespace controllerPrincipal;
	using namespace modelPrincipal;

	/// <summary>
	/// Summary for Mantenimiento_Menu_Form
	/// </summary>
	public ref class Mantenimiento_Menu_Form : public System::Windows::Forms::Form
	{
	private:
		//Padre
		Form^ loginForm;
		//hijos
		Mantenimiento_Motor_Principal_Form^ MotorPrincipalForm;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   Mantenimiento_Registro_Fallas_Form^ RegistroFallasForm;

	public:
		Mantenimiento_Menu_Form(Form^ entrada_loginForm)
		{
			InitializeComponent();
			controller::Fallas = controller::cargarFallas();
			controller::Espacios = controller::cargarEspacios();

			array<ComboBox^>^ combos = gcnew array<ComboBox^>(10);
			combos[0] = cb_Espacio_1;
			combos[1] = cb_Espacio_2;
			combos[2] = cb_Espacio_3;
			combos[3] = cb_Espacio_4;
			combos[4] = cb_Espacio_5;
			combos[5] = cb_Espacio_6;
			combos[6] = cb_Espacio_7;
			combos[7] = cb_Espacio_8;
			combos[8] = cb_Espacio_9;
			combos[9] = cb_Espacio_10;

			for (int i = 0; i < 10; i++) {
				combos[i]->SelectedIndex = controller::Espacios[i]->estado - 1;
			}

			//
			//TODO: Add the constructor code here
			loginForm = entrada_loginForm;
			MotorPrincipalForm = gcnew Mantenimiento_Motor_Principal_Form(this);
			RegistroFallasForm = gcnew Mantenimiento_Registro_Fallas_Form(this);
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










	private: System::Windows::Forms::ComboBox^ cb_Espacio_2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_4;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_5;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_6;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_7;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_8;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;



	private: System::Windows::Forms::ComboBox^ cb_Espacio_9;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;



private: System::Windows::Forms::ComboBox^ cb_Espacio_10;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
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
			this->cb_Espacio_2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_4 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_5 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_6 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_7 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_8 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_9 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->cb_Espacio_10 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btn_Registrar_Falla = (gcnew System::Windows::Forms::Button());
			this->btn_Cerrar_Sesion = (gcnew System::Windows::Forms::Button());
			this->btn_Motor_Principal = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 116);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Espacio 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 143);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado";
			// 
			// cb_Espacio_1
			// 
			this->cb_Espacio_1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_1->FormattingEnabled = true;
			this->cb_Espacio_1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_1->Location = System::Drawing::Point(92, 141);
			this->cb_Espacio_1->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_1->Name = L"cb_Espacio_1";
			this->cb_Espacio_1->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_1->TabIndex = 2;
			this->cb_Espacio_1->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_1_SelectedIndexChanged);
			// 
			// cb_Espacio_2
			// 
			this->cb_Espacio_2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_2->FormattingEnabled = true;
			this->cb_Espacio_2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_2->Location = System::Drawing::Point(308, 141);
			this->cb_Espacio_2->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_2->Name = L"cb_Espacio_2";
			this->cb_Espacio_2->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_2->TabIndex = 7;
			this->cb_Espacio_2->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(254, 143);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Estado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(254, 116);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Espacio 2";
			// 
			// cb_Espacio_3
			// 
			this->cb_Espacio_3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_3->FormattingEnabled = true;
			this->cb_Espacio_3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_3->Location = System::Drawing::Point(527, 141);
			this->cb_Espacio_3->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_3->Name = L"cb_Espacio_3";
			this->cb_Espacio_3->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_3->TabIndex = 12;
			this->cb_Espacio_3->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_3_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(473, 143);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Estado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(473, 116);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Espacio 3";
			// 
			// cb_Espacio_4
			// 
			this->cb_Espacio_4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_4->FormattingEnabled = true;
			this->cb_Espacio_4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_4->Location = System::Drawing::Point(735, 141);
			this->cb_Espacio_4->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_4->Name = L"cb_Espacio_4";
			this->cb_Espacio_4->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_4->TabIndex = 17;
			this->cb_Espacio_4->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_4_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(681, 143);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Estado";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(681, 116);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Espacio 4";
			// 
			// cb_Espacio_5
			// 
			this->cb_Espacio_5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_5->FormattingEnabled = true;
			this->cb_Espacio_5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_5->Location = System::Drawing::Point(92, 217);
			this->cb_Espacio_5->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_5->Name = L"cb_Espacio_5";
			this->cb_Espacio_5->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_5->TabIndex = 22;
			this->cb_Espacio_5->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_5_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 219);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Estado";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 193);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Espacio 5";
			// 
			// cb_Espacio_6
			// 
			this->cb_Espacio_6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_6->FormattingEnabled = true;
			this->cb_Espacio_6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_6->Location = System::Drawing::Point(304, 217);
			this->cb_Espacio_6->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_6->Name = L"cb_Espacio_6";
			this->cb_Espacio_6->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_6->TabIndex = 27;
			this->cb_Espacio_6->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_6_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(250, 219);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Estado";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(250, 193);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Espacio 6";
			// 
			// cb_Espacio_7
			// 
			this->cb_Espacio_7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_7->FormattingEnabled = true;
			this->cb_Espacio_7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_7->Location = System::Drawing::Point(527, 217);
			this->cb_Espacio_7->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_7->Name = L"cb_Espacio_7";
			this->cb_Espacio_7->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_7->TabIndex = 32;
			this->cb_Espacio_7->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_7_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(473, 219);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Estado";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(473, 193);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Espacio 7";
			// 
			// cb_Espacio_8
			// 
			this->cb_Espacio_8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_8->FormattingEnabled = true;
			this->cb_Espacio_8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_8->Location = System::Drawing::Point(735, 217);
			this->cb_Espacio_8->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_8->Name = L"cb_Espacio_8";
			this->cb_Espacio_8->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_8->TabIndex = 37;
			this->cb_Espacio_8->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_8_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(681, 219);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Estado";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(681, 193);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Espacio 8";
			// 
			// cb_Espacio_9
			// 
			this->cb_Espacio_9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_9->FormattingEnabled = true;
			this->cb_Espacio_9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_9->Location = System::Drawing::Point(92, 301);
			this->cb_Espacio_9->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_9->Name = L"cb_Espacio_9";
			this->cb_Espacio_9->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_9->TabIndex = 42;
			this->cb_Espacio_9->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_9_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(38, 303);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 13);
			this->label17->TabIndex = 41;
			this->label17->Text = L"Estado";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(38, 276);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 13);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Espacio 9";
			// 
			// cb_Espacio_10
			// 
			this->cb_Espacio_10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_Espacio_10->FormattingEnabled = true;
			this->cb_Espacio_10->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Operativo", L"No Operativo", L"En Mantenimiento" });
			this->cb_Espacio_10->Location = System::Drawing::Point(304, 301);
			this->cb_Espacio_10->Margin = System::Windows::Forms::Padding(2);
			this->cb_Espacio_10->Name = L"cb_Espacio_10";
			this->cb_Espacio_10->Size = System::Drawing::Size(89, 21);
			this->cb_Espacio_10->TabIndex = 47;
			this->cb_Espacio_10->SelectedIndexChanged += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::cb_Espacio_10_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(250, 303);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 13);
			this->label19->TabIndex = 46;
			this->label19->Text = L"Estado";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(250, 276);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 13);
			this->label20->TabIndex = 45;
			this->label20->Text = L"Espacio 10";
			// 
			// btn_Registrar_Falla
			// 
			this->btn_Registrar_Falla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Registrar_Falla->Location = System::Drawing::Point(58, 444);
			this->btn_Registrar_Falla->Margin = System::Windows::Forms::Padding(2);
			this->btn_Registrar_Falla->Name = L"btn_Registrar_Falla";
			this->btn_Registrar_Falla->Size = System::Drawing::Size(155, 67);
			this->btn_Registrar_Falla->TabIndex = 60;
			this->btn_Registrar_Falla->Text = L"Ver Registro de Fallas";
			this->btn_Registrar_Falla->UseVisualStyleBackColor = true;
			this->btn_Registrar_Falla->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Registrar_Falla_Click);
			// 
			// btn_Cerrar_Sesion
			// 
			this->btn_Cerrar_Sesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Cerrar_Sesion->Location = System::Drawing::Point(257, 444);
			this->btn_Cerrar_Sesion->Margin = System::Windows::Forms::Padding(2);
			this->btn_Cerrar_Sesion->Name = L"btn_Cerrar_Sesion";
			this->btn_Cerrar_Sesion->Size = System::Drawing::Size(148, 67);
			this->btn_Cerrar_Sesion->TabIndex = 61;
			this->btn_Cerrar_Sesion->Text = L"Cerrar Sesion";
			this->btn_Cerrar_Sesion->UseVisualStyleBackColor = true;
			this->btn_Cerrar_Sesion->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Cerrar_Sesion_Click);
			// 
			// btn_Motor_Principal
			// 
			this->btn_Motor_Principal->Location = System::Drawing::Point(425, 41);
			this->btn_Motor_Principal->Margin = System::Windows::Forms::Padding(2);
			this->btn_Motor_Principal->Name = L"btn_Motor_Principal";
			this->btn_Motor_Principal->Size = System::Drawing::Size(317, 32);
			this->btn_Motor_Principal->TabIndex = 62;
			this->btn_Motor_Principal->Text = L"MOTOR PRINCIPAL";
			this->btn_Motor_Principal->UseVisualStyleBackColor = true;
			this->btn_Motor_Principal->Click += gcnew System::EventHandler(this, &Mantenimiento_Menu_Form::btn_Motor_Principal_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(42, 51);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(128, 13);
			this->label21->TabIndex = 63;
			this->label21->Text = L"Estado de Motor Principal";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"OPERATIVO", L"NO OPERATIVO", L"EN MANTENIMIENTO" });
			this->comboBox11->Location = System::Drawing::Point(193, 49);
			this->comboBox11->Margin = System::Windows::Forms::Padding(2);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(210, 21);
			this->comboBox11->TabIndex = 64;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(548, 287);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 249);
			this->pictureBox1->TabIndex = 65;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mantenimiento_Menu_Form::pictureBox1_Paint);
			// 
			// Mantenimiento_Menu_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 591);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_Motor_Principal);
			this->Controls->Add(this->btn_Cerrar_Sesion);
			this->Controls->Add(this->btn_Registrar_Falla);
			this->Controls->Add(this->cb_Espacio_10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->cb_Espacio_9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->cb_Espacio_8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->cb_Espacio_7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->cb_Espacio_6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->cb_Espacio_5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->cb_Espacio_4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cb_Espacio_3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cb_Espacio_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cb_Espacio_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Mantenimiento_Menu_Form";
			this->Text = L"Mantenimiento_Menu_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

			//Mantenimiento_Motor_Principal_Form^ MotorPrincipalForm = gcnew Mantenimiento_Motor_Principal_Form(this);

			MotorPrincipalForm->Show();

		}
		private: System::Void btn_Registrar_Falla_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Hide();

			//Mantenimiento_Registro_Fallas_Form^ RegistroFallasForm = gcnew Mantenimiento_Registro_Fallas_Form(this);

			RegistroFallasForm->Show();

		}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;

		int ancho = pictureBox1->Width;
		int alto = pictureBox1->Height;

		// bordes

		g->DrawRectangle(Pens::Black, 0, 0, ancho - 1, alto - 1);
		g->FillRectangle(Brushes::White, 1, 1, ancho - 2, alto - 2);

		array<PointF>^ points = gcnew array<PointF>(100);

		for (int i = 0; i < 100; i++) {
			float x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos(i * 2 * Math::PI / 100);
			float y = alto / 2 + (alto * 2 / 5) * Math::Sin(i * 2 * Math::PI / 100);
			points[i] = PointF(x, y);
		}

		g->DrawLines(Pens::Black, points);

		List<int>^ idFalla = gcnew List<int>();

		for each (Espacio ^ esp in controller::Espacios) {
			for each (Falla ^ falla in controller::Fallas) {
				if (falla->espacioAfectado->id == esp->id) {
					idFalla->Add(esp->id);
				}
			}
		}
		float x;
		float y;
		for each (Espacio ^ esp in controller::Espacios) {
			x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
			y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
			g->FillRectangle(Brushes::Green, int(x - 10), int(y - 10), 20, 20);
		}
		for each (Espacio ^ esp in controller::Espacios) {
			x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
			y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
			if (idFalla->Contains(esp->id)) g->FillRectangle(Brushes::Orange, int(x - 10), int(y - 10), 20, 20);
		}
		for each (Espacio ^ esp in controller::Espacios) {
			x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
			y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
			if (esp->estado == 3) g->FillRectangle(Brushes::Yellow, int(x - 10), int(y - 10), 20, 20);
			if (esp->estado == 2) g->FillRectangle(Brushes::Red, int(x - 10), int(y - 10), 20, 20);
		}
		for each (Espacio ^ esp in controller::Espacios) {
			x = ancho / 2 + (ancho * 2 / 5 - 10) * Math::Cos((esp->id - 1) * 2 * Math::PI / 10);
			y = alto / 2 + (alto * 2 / 5) * Math::Sin((esp->id - 1) * 2 * Math::PI / 10);
			g->DrawString((esp->id).ToString(), DefaultFont, Brushes::Black, x - 5, y - 5);
		}

	}
	private: System::Void cb_Espacio_1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[0];
		int estado = cb_Espacio_1->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[1];
		int estado = cb_Espacio_2->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[2];
		int estado = cb_Espacio_3->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[3];
		int estado = cb_Espacio_4->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[4];
		int estado = cb_Espacio_5->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[5];
		int estado = cb_Espacio_6->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[6];
		int estado = cb_Espacio_7->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[7];
		int estado = cb_Espacio_8->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[8];
		int estado = cb_Espacio_9->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

	private: System::Void cb_Espacio_10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Espacio^ esp = controller::Espacios[9];
		int estado = cb_Espacio_10->SelectedIndex + 1;
		controller::modificarEspacio(esp->id, esp->ocupado, estado, esp->estaEnSuelo);
		controller::guardarEspacios();
		pictureBox1->Invalidate();
	}

};
}
