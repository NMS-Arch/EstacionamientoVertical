#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operador_Buscar_Auto_Form
	/// </summary>
	public ref class Operador_Buscar_Auto_Form : public System::Windows::Forms::Form
	{


	private:
		Form^ FormularioForm;

	public:
		Operador_Buscar_Auto_Form(Form^ entrada_FormularioForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			FormularioForm = entrada_FormularioForm;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Operador_Buscar_Auto_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_Dato_Busqueda;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Buscar_Registro;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_ID_Espacio;
	private: System::Windows::Forms::TextBox^ tb_Placa_Vehiculo;
	private: System::Windows::Forms::TextBox^ tb_Modelo_Vehiculo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tb_DNI;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btn_Obtener_Precio_por_Estacionar;

	private: System::Windows::Forms::NumericUpDown^ numeric_Precio_por_Estacionar;
	private: System::Windows::Forms::Button^ btn_Bajar_Espacio;



	private: System::Windows::Forms::Button^ btn_Imprimir_Boleta;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb_Fecha_Entrada;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tb_Hora_Ingreso;

	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ tb_Fecha_Salida;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tb_Hora_Salida;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ tb_Tiempo_Transcurrido;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Vehiculo;
	private: System::Windows::Forms::Button^ btn_Regresar_Formulario;
	private: System::Windows::Forms::Button^ btn_Procesar_Pago;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::Button^ btn_Anular_Pago;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Dato_Busqueda = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Buscar_Registro = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_ID_Espacio = (gcnew System::Windows::Forms::TextBox());
			this->tb_Placa_Vehiculo = (gcnew System::Windows::Forms::TextBox());
			this->tb_Modelo_Vehiculo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_Obtener_Precio_por_Estacionar = (gcnew System::Windows::Forms::Button());
			this->numeric_Precio_por_Estacionar = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Bajar_Espacio = (gcnew System::Windows::Forms::Button());
			this->btn_Imprimir_Boleta = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb_Fecha_Entrada = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tb_Hora_Ingreso = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tb_Fecha_Salida = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tb_Hora_Salida = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tb_Tiempo_Transcurrido = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Peso_Vehiculo = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Regresar_Formulario = (gcnew System::Windows::Forms::Button());
			this->btn_Procesar_Pago = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_Anular_Pago = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Precio_por_Estacionar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Buscar Auto para Salida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Buscar por ";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ticket", L"Placa", L"DNI" });
			this->comboBox1->Location = System::Drawing::Point(117, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(150, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingresar dato de busqueda";
			// 
			// tb_Dato_Busqueda
			// 
			this->tb_Dato_Busqueda->Location = System::Drawing::Point(39, 157);
			this->tb_Dato_Busqueda->Name = L"tb_Dato_Busqueda";
			this->tb_Dato_Busqueda->Size = System::Drawing::Size(117, 22);
			this->tb_Dato_Busqueda->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13
			});
			this->dataGridView1->Location = System::Drawing::Point(333, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(848, 88);
			this->dataGridView1->TabIndex = 5;
			// 
			// btn_Buscar_Registro
			// 
			this->btn_Buscar_Registro->Location = System::Drawing::Point(37, 200);
			this->btn_Buscar_Registro->Name = L"btn_Buscar_Registro";
			this->btn_Buscar_Registro->Size = System::Drawing::Size(239, 41);
			this->btn_Buscar_Registro->TabIndex = 6;
			this->btn_Buscar_Registro->Text = L"Buscar Registro";
			this->btn_Buscar_Registro->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Datos del Registro";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 392);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID Espacio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 438);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Placa Vehiculo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 488);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Modelo vehiculo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Datos Vehiculo";
			// 
			// tb_ID_Espacio
			// 
			this->tb_ID_Espacio->Location = System::Drawing::Point(168, 386);
			this->tb_ID_Espacio->Name = L"tb_ID_Espacio";
			this->tb_ID_Espacio->Size = System::Drawing::Size(145, 22);
			this->tb_ID_Espacio->TabIndex = 12;
			// 
			// tb_Placa_Vehiculo
			// 
			this->tb_Placa_Vehiculo->Location = System::Drawing::Point(169, 436);
			this->tb_Placa_Vehiculo->Name = L"tb_Placa_Vehiculo";
			this->tb_Placa_Vehiculo->Size = System::Drawing::Size(143, 22);
			this->tb_Placa_Vehiculo->TabIndex = 13;
			// 
			// tb_Modelo_Vehiculo
			// 
			this->tb_Modelo_Vehiculo->Location = System::Drawing::Point(169, 482);
			this->tb_Modelo_Vehiculo->Name = L"tb_Modelo_Vehiculo";
			this->tb_Modelo_Vehiculo->Size = System::Drawing::Size(143, 22);
			this->tb_Modelo_Vehiculo->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(412, 386);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Datos Propietario";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(412, 357);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(202, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Rellenar si no se completo antes";
			// 
			// tb_DNI
			// 
			this->tb_DNI->Location = System::Drawing::Point(473, 415);
			this->tb_DNI->Name = L"tb_DNI";
			this->tb_DNI->Size = System::Drawing::Size(115, 22);
			this->tb_DNI->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(412, 421);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 16);
			this->label11->TabIndex = 18;
			this->label11->Text = L"DNI";
			// 
			// btn_Obtener_Precio_por_Estacionar
			// 
			this->btn_Obtener_Precio_por_Estacionar->Location = System::Drawing::Point(765, 323);
			this->btn_Obtener_Precio_por_Estacionar->Name = L"btn_Obtener_Precio_por_Estacionar";
			this->btn_Obtener_Precio_por_Estacionar->Size = System::Drawing::Size(252, 85);
			this->btn_Obtener_Precio_por_Estacionar->TabIndex = 19;
			this->btn_Obtener_Precio_por_Estacionar->Text = L"Obtener Precio por Estacionar";
			this->btn_Obtener_Precio_por_Estacionar->UseVisualStyleBackColor = true;
			// 
			// numeric_Precio_por_Estacionar
			// 
			this->numeric_Precio_por_Estacionar->Location = System::Drawing::Point(765, 426);
			this->numeric_Precio_por_Estacionar->Name = L"numeric_Precio_por_Estacionar";
			this->numeric_Precio_por_Estacionar->Size = System::Drawing::Size(252, 22);
			this->numeric_Precio_por_Estacionar->TabIndex = 20;
			// 
			// btn_Bajar_Espacio
			// 
			this->btn_Bajar_Espacio->Location = System::Drawing::Point(765, 488);
			this->btn_Bajar_Espacio->Name = L"btn_Bajar_Espacio";
			this->btn_Bajar_Espacio->Size = System::Drawing::Size(113, 100);
			this->btn_Bajar_Espacio->TabIndex = 21;
			this->btn_Bajar_Espacio->Text = L"Bajar Espacio";
			this->btn_Bajar_Espacio->UseVisualStyleBackColor = true;
			// 
			// btn_Imprimir_Boleta
			// 
			this->btn_Imprimir_Boleta->Location = System::Drawing::Point(1082, 323);
			this->btn_Imprimir_Boleta->Name = L"btn_Imprimir_Boleta";
			this->btn_Imprimir_Boleta->Size = System::Drawing::Size(96, 131);
			this->btn_Imprimir_Boleta->TabIndex = 22;
			this->btn_Imprimir_Boleta->Text = L"Imprimir Boleta";
			this->btn_Imprimir_Boleta->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 648);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Fecha Entrada";
			// 
			// tb_Fecha_Entrada
			// 
			this->tb_Fecha_Entrada->Location = System::Drawing::Point(170, 642);
			this->tb_Fecha_Entrada->Name = L"tb_Fecha_Entrada";
			this->tb_Fecha_Entrada->Size = System::Drawing::Size(107, 22);
			this->tb_Fecha_Entrada->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(36, 609);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(166, 16);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Datos de Almacenamiento";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(357, 648);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 16);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Hora Ingreso";
			// 
			// tb_Hora_Ingreso
			// 
			this->tb_Hora_Ingreso->Location = System::Drawing::Point(473, 642);
			this->tb_Hora_Ingreso->Name = L"tb_Hora_Ingreso";
			this->tb_Hora_Ingreso->Size = System::Drawing::Size(115, 22);
			this->tb_Hora_Ingreso->TabIndex = 27;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(36, 531);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 16);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Peso Vehiculo";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(35, 683);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 16);
			this->label16->TabIndex = 30;
			this->label16->Text = L"Fecha Salida";
			// 
			// tb_Fecha_Salida
			// 
			this->tb_Fecha_Salida->Location = System::Drawing::Point(168, 680);
			this->tb_Fecha_Salida->Name = L"tb_Fecha_Salida";
			this->tb_Fecha_Salida->Size = System::Drawing::Size(108, 22);
			this->tb_Fecha_Salida->TabIndex = 31;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(357, 686);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(79, 16);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Hora Salida";
			// 
			// tb_Hora_Salida
			// 
			this->tb_Hora_Salida->Location = System::Drawing::Point(473, 680);
			this->tb_Hora_Salida->Name = L"tb_Hora_Salida";
			this->tb_Hora_Salida->Size = System::Drawing::Size(115, 22);
			this->tb_Hora_Salida->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(668, 656);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(133, 16);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Tiempo Transcurrido";
			// 
			// tb_Tiempo_Transcurrido
			// 
			this->tb_Tiempo_Transcurrido->Location = System::Drawing::Point(671, 680);
			this->tb_Tiempo_Transcurrido->Name = L"tb_Tiempo_Transcurrido";
			this->tb_Tiempo_Transcurrido->Size = System::Drawing::Size(130, 22);
			this->tb_Tiempo_Transcurrido->TabIndex = 35;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(885, 656);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 16);
			this->label19->TabIndex = 36;
			this->label19->Text = L"PRECIO BASE";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(888, 680);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(171, 22);
			this->numericUpDown1->TabIndex = 37;
			// 
			// numeric_Peso_Vehiculo
			// 
			this->numeric_Peso_Vehiculo->DecimalPlaces = 2;
			this->numeric_Peso_Vehiculo->Location = System::Drawing::Point(168, 525);
			this->numeric_Peso_Vehiculo->Name = L"numeric_Peso_Vehiculo";
			this->numeric_Peso_Vehiculo->Size = System::Drawing::Size(145, 22);
			this->numeric_Peso_Vehiculo->TabIndex = 38;
			// 
			// btn_Regresar_Formulario
			// 
			this->btn_Regresar_Formulario->Location = System::Drawing::Point(960, 23);
			this->btn_Regresar_Formulario->Name = L"btn_Regresar_Formulario";
			this->btn_Regresar_Formulario->Size = System::Drawing::Size(218, 44);
			this->btn_Regresar_Formulario->TabIndex = 39;
			this->btn_Regresar_Formulario->Text = L"Regresar a Formulario";
			this->btn_Regresar_Formulario->UseVisualStyleBackColor = true;
			this->btn_Regresar_Formulario->Click += gcnew System::EventHandler(this, &Operador_Buscar_Auto_Form::btn_Regresar_Formulario_Click);
			// 
			// btn_Procesar_Pago
			// 
			this->btn_Procesar_Pago->Location = System::Drawing::Point(916, 485);
			this->btn_Procesar_Pago->Name = L"btn_Procesar_Pago";
			this->btn_Procesar_Pago->Size = System::Drawing::Size(114, 100);
			this->btn_Procesar_Pago->TabIndex = 40;
			this->btn_Procesar_Pago->Text = L"Procesar Pago";
			this->btn_Procesar_Pago->UseVisualStyleBackColor = true;
			this->btn_Procesar_Pago->Click += gcnew System::EventHandler(this, &Operador_Buscar_Auto_Form::btn_Procesar_Pago_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID Registro";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ticket";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Espacio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Placa";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Modelo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"DNI";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Peso";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Precio Base";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Tiempo Transcurrido";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Fecha Entrada";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Hora Entrada";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Fecha Salida";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Hora Salida";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 125;
			// 
			// btn_Anular_Pago
			// 
			this->btn_Anular_Pago->Location = System::Drawing::Point(1066, 482);
			this->btn_Anular_Pago->Name = L"btn_Anular_Pago";
			this->btn_Anular_Pago->Size = System::Drawing::Size(112, 103);
			this->btn_Anular_Pago->TabIndex = 41;
			this->btn_Anular_Pago->Text = L"Anular Pago";
			this->btn_Anular_Pago->UseVisualStyleBackColor = true;
			// 
			// Operador_Buscar_Auto_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1229, 736);
			this->Controls->Add(this->btn_Anular_Pago);
			this->Controls->Add(this->btn_Procesar_Pago);
			this->Controls->Add(this->btn_Regresar_Formulario);
			this->Controls->Add(this->numeric_Peso_Vehiculo);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->tb_Tiempo_Transcurrido);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->tb_Hora_Salida);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->tb_Fecha_Salida);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tb_Hora_Ingreso);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->tb_Fecha_Entrada);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_Imprimir_Boleta);
			this->Controls->Add(this->btn_Bajar_Espacio);
			this->Controls->Add(this->numeric_Precio_por_Estacionar);
			this->Controls->Add(this->btn_Obtener_Precio_por_Estacionar);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tb_DNI);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tb_Modelo_Vehiculo);
			this->Controls->Add(this->tb_Placa_Vehiculo);
			this->Controls->Add(this->tb_ID_Espacio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Buscar_Registro);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tb_Dato_Busqueda);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Operador_Buscar_Auto_Form";
			this->Text = L"Operador_Buscar_Auto_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Precio_por_Estacionar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Vehiculo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Formulario_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

			FormularioForm->Show();

		}
		private: System::Void btn_Procesar_Pago_Click(System::Object^ sender, System::EventArgs^ e) {

			MessageBox::Show("Se logro registrar el pago del vehiculo","Aviso Pago",MessageBoxButtons::OK,MessageBoxIcon::Information);

		}
};
}
