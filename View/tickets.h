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

	/// 
	/// Resumen de tickets
	/// 
	public ref class tickets : public System::Windows::Forms::Form
	{
	public:
		tickets(void)
		{
			InitializeComponent();
		}

	protected:
		~tickets()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ lblModelo;
	private: System::Windows::Forms::Label^ lblPlaca;
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::Button^ btn_Modificar;

	private: System::Windows::Forms::Button^ btn_Almacenar;



	private: System::Windows::Forms::TextBox^ textBoxDNIOperTick;
	private: System::Windows::Forms::TextBox^ textBoxNombreOperTick;
	private: System::Windows::Forms::TextBox^ textBoxPlacaOperTick;
	private: System::Windows::Forms::TextBox^ textBoxPrecioOperTick;


		   // ID
 // Modelo
 // Placa
 // Precio
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxCeldAsigOperTick;
	private: System::Windows::Forms::TextBox^ textBoxIDGeneOperTick;
	private: System::Windows::Forms::TextBox^ textBoxPesoOperTick;







	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblModelo = (gcnew System::Windows::Forms::Label());
			this->lblPlaca = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->btn_Almacenar = (gcnew System::Windows::Forms::Button());
			this->textBoxDNIOperTick = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombreOperTick = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlacaOperTick = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrecioOperTick = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCeldAsigOperTick = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDGeneOperTick = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPesoOperTick = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Size = System::Drawing::Size(144, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Tickets";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(92, 61);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(33, 16);
			this->lblId->TabIndex = 9;
			this->lblId->Text = L"DNI:";
			// 
			// lblModelo
			// 
			this->lblModelo->AutoSize = true;
			this->lblModelo->Location = System::Drawing::Point(66, 98);
			this->lblModelo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblModelo->Name = L"lblModelo";
			this->lblModelo->Size = System::Drawing::Size(59, 16);
			this->lblModelo->TabIndex = 10;
			this->lblModelo->Text = L"Nombre:";
			// 
			// lblPlaca
			// 
			this->lblPlaca->AutoSize = true;
			this->lblPlaca->Location = System::Drawing::Point(80, 136);
			this->lblPlaca->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPlaca->Name = L"lblPlaca";
			this->lblPlaca->Size = System::Drawing::Size(45, 16);
			this->lblPlaca->TabIndex = 11;
			this->lblPlaca->Text = L"Placa:";
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(320, 61);
			this->lblPrecio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(49, 16);
			this->lblPrecio->TabIndex = 12;
			this->lblPrecio->Text = L"Precio:";
			// 
			// btn_Modificar
			// 
			this->btn_Modificar->Location = System::Drawing::Point(377, 300);
			this->btn_Modificar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(173, 31);
			this->btn_Modificar->TabIndex = 1;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = true;
			// 
			// btn_Almacenar
			// 
			this->btn_Almacenar->Location = System::Drawing::Point(124, 300);
			this->btn_Almacenar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Almacenar->Name = L"btn_Almacenar";
			this->btn_Almacenar->Size = System::Drawing::Size(173, 31);
			this->btn_Almacenar->TabIndex = 2;
			this->btn_Almacenar->Text = L"Almacenar";
			this->btn_Almacenar->UseVisualStyleBackColor = true;
			// 
			// textBoxDNIOperTick
			// 
			this->textBoxDNIOperTick->Location = System::Drawing::Point(133, 58);
			this->textBoxDNIOperTick->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDNIOperTick->Name = L"textBoxDNIOperTick";
			this->textBoxDNIOperTick->ReadOnly = true;
			this->textBoxDNIOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxDNIOperTick->TabIndex = 5;
			// 
			// textBoxNombreOperTick
			// 
			this->textBoxNombreOperTick->Location = System::Drawing::Point(133, 95);
			this->textBoxNombreOperTick->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNombreOperTick->Name = L"textBoxNombreOperTick";
			this->textBoxNombreOperTick->ReadOnly = true;
			this->textBoxNombreOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxNombreOperTick->TabIndex = 6;
			// 
			// textBoxPlacaOperTick
			// 
			this->textBoxPlacaOperTick->Location = System::Drawing::Point(133, 133);
			this->textBoxPlacaOperTick->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPlacaOperTick->Name = L"textBoxPlacaOperTick";
			this->textBoxPlacaOperTick->ReadOnly = true;
			this->textBoxPlacaOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxPlacaOperTick->TabIndex = 7;
			// 
			// textBoxPrecioOperTick
			// 
			this->textBoxPrecioOperTick->Location = System::Drawing::Point(377, 58);
			this->textBoxPrecioOperTick->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrecioOperTick->Name = L"textBoxPrecioOperTick";
			this->textBoxPrecioOperTick->ReadOnly = true;
			this->textBoxPrecioOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxPrecioOperTick->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(320, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Peso:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Celda asignada:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"ID Generado:";
			// 
			// textBoxCeldAsigOperTick
			// 
			this->textBoxCeldAsigOperTick->Location = System::Drawing::Point(133, 174);
			this->textBoxCeldAsigOperTick->Name = L"textBoxCeldAsigOperTick";
			this->textBoxCeldAsigOperTick->ReadOnly = true;
			this->textBoxCeldAsigOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxCeldAsigOperTick->TabIndex = 16;
			// 
			// textBoxIDGeneOperTick
			// 
			this->textBoxIDGeneOperTick->Location = System::Drawing::Point(133, 212);
			this->textBoxIDGeneOperTick->Name = L"textBoxIDGeneOperTick";
			this->textBoxIDGeneOperTick->ReadOnly = true;
			this->textBoxIDGeneOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxIDGeneOperTick->TabIndex = 17;
			// 
			// textBoxPesoOperTick
			// 
			this->textBoxPesoOperTick->Location = System::Drawing::Point(377, 95);
			this->textBoxPesoOperTick->Name = L"textBoxPesoOperTick";
			this->textBoxPesoOperTick->ReadOnly = true;
			this->textBoxPesoOperTick->Size = System::Drawing::Size(132, 22);
			this->textBoxPesoOperTick->TabIndex = 18;
			// 
			// tickets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 402);
			this->Controls->Add(this->textBoxPesoOperTick);
			this->Controls->Add(this->textBoxIDGeneOperTick);
			this->Controls->Add(this->textBoxCeldAsigOperTick);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->lblPlaca);
			this->Controls->Add(this->lblModelo);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->textBoxPrecioOperTick);
			this->Controls->Add(this->textBoxPlacaOperTick);
			this->Controls->Add(this->textBoxNombreOperTick);
			this->Controls->Add(this->textBoxDNIOperTick);
			this->Controls->Add(this->btn_Almacenar);
			this->Controls->Add(this->btn_Modificar);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"tickets";
			this->Text = L"tickets";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

	//	// Función auxiliar para borrar el contenido de todas las casillas
	//private: void LimpiarCampos() {
	//	this->textBox1->Text = "";
	//	this->textBox2->Text = "";
	//	this->textBox3->Text = "";
	//	this->textBox4->Text = "";
	//}

	//	   // Función auxiliar para convertir texto a entero de forma segura
	//private: int ParseIntSeguro(String^ texto, int valorPorDefecto) {
	//	int resultado = 0;
	//	if (Int32::TryParse(texto, resultado)) {
	//		return resultado;
	//	}
	//	return valorPorDefecto;
	//}

	//	   // Función auxiliar para convertir texto a double de forma segura
	//private: double ParseDoubleSeguro(String^ texto, double valorPorDefecto) {
	//	double resultado = 0.0;
	//	if (Double::TryParse(texto, resultado)) {
	//		return resultado;
	//	}
	//	return valorPorDefecto;
	//}

	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ParseIntSeguro(this->textBox1->Text, 0);
	//	Cliente^ cliente = gcnew Cliente(0, "Cliente", 0, "M", 0, false); // Cliente por defecto
	//	String^ modelo = this->textBox2->Text;
	//	String^ placa = this->textBox3->Text;
	//	double precio = ParseDoubleSeguro(this->textBox4->Text, 0.0);

	//	::controller::controller::agregarTicket(id, cliente, modelo, placa, precio);
	//	Console::WriteLine("Ticket agregado: ID={0}, Modelo={1}, Placa={2}, Precio={3}",
	//		id, modelo, placa, precio);

	//	LimpiarCampos();
	//}

	//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ParseIntSeguro(this->textBox1->Text, 0);

	//	TicketAuto^ t = ::controller::controller::buscarTicket(id);
	//	if (t == nullptr) {
	//		Console::WriteLine("No se encontró el ticket con ID {0}.", id);
	//	}
	//	else {
	//		this->textBox2->Text = t->modeloAuto;
	//		this->textBox3->Text = t->placa;
	//		this->textBox4->Text = t->precio.ToString();

	//		Console::WriteLine("Se encontró el ticket: ID={0}, Modelo={1}, Placa={2}, Precio={3}\n",
	//			t->id, t->modeloAuto, t->placa, t->precio);
	//	}
	//}

	//private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ParseIntSeguro(this->textBox1->Text, 0);
	//	Cliente^ cliente = gcnew Cliente(0, "Cliente", 0, "M", 0, false); // Cliente por defecto
	//	String^ modelo = this->textBox2->Text;
	//	String^ placa = this->textBox3->Text;
	//	double precio = ParseDoubleSeguro(this->textBox4->Text, 0.0);

	//	if (::controller::controller::modificarTicket(id, cliente, modelo, placa, precio)) {
	//		Console::WriteLine("Se modificó el ticket con ID {0}.", id);
	//	}
	//	else {
	//		Console::WriteLine("No se encontró el ticket con ID {0} para modificar.", id);
	//	}

	//	LimpiarCampos();
	//}

	//private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ParseIntSeguro(this->textBox1->Text, 0);

	//	if (::controller::controller::eliminarTicket(id)) {
	//		Console::WriteLine("Se eliminó el ticket con ID {0}.", id);
	//	}
	//	else {
	//		Console::WriteLine("No se encontró el ticket con ID {0} para eliminar.", id);
	//	}

	//	LimpiarCampos();
	//}
	};
}