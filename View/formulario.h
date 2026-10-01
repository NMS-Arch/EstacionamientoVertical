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
	public ref class formulario : public System::Windows::Forms::Form
	{
	public:
		formulario(void)
		{
			InitializeComponent();
		}

	protected:
		~formulario()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblOcupado;
	private: System::Windows::Forms::Label^ lblEstado;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Button^ btn_Agregar;

	private: System::Windows::Forms::Button^ btn_Buscar;


	private: System::Windows::Forms::TextBox^ TextBoxNombreOperForm;

	private: System::Windows::Forms::TextBox^ textBoxDNIOperForm;
	private: System::Windows::Forms::TextBox^ textBoxOperForm;
	private: System::Windows::Forms::TextBox^ textBoxPesoOperForm;







	private: System::Windows::Forms::DataGridView^ CuadroDeHistorialOperadorForm;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_Pesar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPrecioOperForm;









	private: System::Windows::Forms::TextBox^ textBoxMuestraPrecioTotalOperForm;
	private: System::Windows::Forms::Button^ btn_Generar_Precio;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Placa_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Peso_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PagoTotal_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Celda_OperaForm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraIngreso_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraSalida_Historial_Oper_Form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha_Historial_Oper_Form;













	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblOcupado = (gcnew System::Windows::Forms::Label());
			this->lblEstado = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->btn_Buscar = (gcnew System::Windows::Forms::Button());
			this->TextBoxNombreOperForm = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDNIOperForm = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOperForm = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPesoOperForm = (gcnew System::Windows::Forms::TextBox());
			this->CuadroDeHistorialOperadorForm = (gcnew System::Windows::Forms::DataGridView());
			this->Placa_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Peso_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PagoTotal_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Celda_OperaForm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraIngreso_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraSalida_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha_Historial_Oper_Form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_Pesar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrecioOperForm = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMuestraPrecioTotalOperForm = (gcnew System::Windows::Forms::TextBox());
			this->btn_Generar_Precio = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CuadroDeHistorialOperadorForm))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(157, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Espacios";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(35, 91);
			this->lblNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(59, 16);
			this->lblNombre->TabIndex = 9;
			this->lblNombre->Text = L"Nombre:";
			// 
			// lblOcupado
			// 
			this->lblOcupado->AutoSize = true;
			this->lblOcupado->Location = System::Drawing::Point(61, 52);
			this->lblOcupado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOcupado->Name = L"lblOcupado";
			this->lblOcupado->Size = System::Drawing::Size(33, 16);
			this->lblOcupado->TabIndex = 10;
			this->lblOcupado->Text = L"DNI:";
			// 
			// lblEstado
			// 
			this->lblEstado->AutoSize = true;
			this->lblEstado->Location = System::Drawing::Point(49, 134);
			this->lblEstado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEstado->Name = L"lblEstado";
			this->lblEstado->Size = System::Drawing::Size(45, 16);
			this->lblEstado->TabIndex = 11;
			this->lblEstado->Text = L"Placa:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(52, 210);
			this->lblId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(42, 16);
			this->lblId->TabIndex = 12;
			this->lblId->Text = L"Peso:";
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Location = System::Drawing::Point(281, 52);
			this->btn_Agregar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(187, 31);
			this->btn_Agregar->TabIndex = 1;
			this->btn_Agregar->Text = L"agregar";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			// 
			// btn_Buscar
			// 
			this->btn_Buscar->Location = System::Drawing::Point(281, 110);
			this->btn_Buscar->Margin = System::Windows::Forms::Padding(4);
			this->btn_Buscar->Name = L"btn_Buscar";
			this->btn_Buscar->Size = System::Drawing::Size(187, 31);
			this->btn_Buscar->TabIndex = 2;
			this->btn_Buscar->Text = L"buscar";
			this->btn_Buscar->UseVisualStyleBackColor = true;
			// 
			// TextBoxNombreOperForm
			// 
			this->TextBoxNombreOperForm->Location = System::Drawing::Point(100, 88);
			this->TextBoxNombreOperForm->Margin = System::Windows::Forms::Padding(4);
			this->TextBoxNombreOperForm->Name = L"TextBoxNombreOperForm";
			this->TextBoxNombreOperForm->Size = System::Drawing::Size(132, 22);
			this->TextBoxNombreOperForm->TabIndex = 5;
			// 
			// textBoxDNIOperForm
			// 
			this->textBoxDNIOperForm->Location = System::Drawing::Point(100, 49);
			this->textBoxDNIOperForm->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDNIOperForm->Name = L"textBoxDNIOperForm";
			this->textBoxDNIOperForm->Size = System::Drawing::Size(132, 22);
			this->textBoxDNIOperForm->TabIndex = 6;
			// 
			// textBoxOperForm
			// 
			this->textBoxOperForm->Location = System::Drawing::Point(100, 131);
			this->textBoxOperForm->Margin = System::Windows::Forms::Padding(4);
			this->textBoxOperForm->Name = L"textBoxOperForm";
			this->textBoxOperForm->Size = System::Drawing::Size(132, 22);
			this->textBoxOperForm->TabIndex = 7;
			// 
			// textBoxPesoOperForm
			// 
			this->textBoxPesoOperForm->Location = System::Drawing::Point(100, 207);
			this->textBoxPesoOperForm->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPesoOperForm->Name = L"textBoxPesoOperForm";
			this->textBoxPesoOperForm->ReadOnly = true;
			this->textBoxPesoOperForm->Size = System::Drawing::Size(132, 22);
			this->textBoxPesoOperForm->TabIndex = 8;
			// 
			// CuadroDeHistorialOperadorForm
			// 
			this->CuadroDeHistorialOperadorForm->AllowUserToAddRows = false;
			this->CuadroDeHistorialOperadorForm->AllowUserToDeleteRows = false;
			this->CuadroDeHistorialOperadorForm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CuadroDeHistorialOperadorForm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Placa_Historial_Oper_Form,
					this->DNI_Historial_Oper_Form, this->Nombre_Historial_Oper_Form, this->Peso_Historial_Oper_Form, this->PagoTotal_Historial_Oper_Form,
					this->Celda_OperaForm, this->HoraIngreso_Historial_Oper_Form, this->HoraSalida_Historial_Oper_Form, this->Fecha_Historial_Oper_Form
			});
			this->CuadroDeHistorialOperadorForm->Location = System::Drawing::Point(562, 66);
			this->CuadroDeHistorialOperadorForm->Name = L"CuadroDeHistorialOperadorForm";
			this->CuadroDeHistorialOperadorForm->ReadOnly = true;
			this->CuadroDeHistorialOperadorForm->RowHeadersWidth = 51;
			this->CuadroDeHistorialOperadorForm->RowTemplate->Height = 24;
			this->CuadroDeHistorialOperadorForm->Size = System::Drawing::Size(795, 186);
			this->CuadroDeHistorialOperadorForm->TabIndex = 13;
			// 
			// Placa_Historial_Oper_Form
			// 
			this->Placa_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Placa_Historial_Oper_Form->HeaderText = L"Placa:";
			this->Placa_Historial_Oper_Form->MinimumWidth = 6;
			this->Placa_Historial_Oper_Form->Name = L"Placa_Historial_Oper_Form";
			this->Placa_Historial_Oper_Form->ReadOnly = true;
			// 
			// DNI_Historial_Oper_Form
			// 
			this->DNI_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->DNI_Historial_Oper_Form->HeaderText = L"DNI:";
			this->DNI_Historial_Oper_Form->MinimumWidth = 6;
			this->DNI_Historial_Oper_Form->Name = L"DNI_Historial_Oper_Form";
			this->DNI_Historial_Oper_Form->ReadOnly = true;
			// 
			// Nombre_Historial_Oper_Form
			// 
			this->Nombre_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre_Historial_Oper_Form->HeaderText = L"Nombre:";
			this->Nombre_Historial_Oper_Form->MinimumWidth = 6;
			this->Nombre_Historial_Oper_Form->Name = L"Nombre_Historial_Oper_Form";
			this->Nombre_Historial_Oper_Form->ReadOnly = true;
			// 
			// Peso_Historial_Oper_Form
			// 
			this->Peso_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Peso_Historial_Oper_Form->HeaderText = L"Peso";
			this->Peso_Historial_Oper_Form->MinimumWidth = 6;
			this->Peso_Historial_Oper_Form->Name = L"Peso_Historial_Oper_Form";
			this->Peso_Historial_Oper_Form->ReadOnly = true;
			// 
			// PagoTotal_Historial_Oper_Form
			// 
			this->PagoTotal_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->PagoTotal_Historial_Oper_Form->HeaderText = L"PagoTotal";
			this->PagoTotal_Historial_Oper_Form->MinimumWidth = 6;
			this->PagoTotal_Historial_Oper_Form->Name = L"PagoTotal_Historial_Oper_Form";
			this->PagoTotal_Historial_Oper_Form->ReadOnly = true;
			// 
			// Celda_OperaForm
			// 
			this->Celda_OperaForm->HeaderText = L"Numero de celda:";
			this->Celda_OperaForm->MinimumWidth = 6;
			this->Celda_OperaForm->Name = L"Celda_OperaForm";
			this->Celda_OperaForm->ReadOnly = true;
			this->Celda_OperaForm->Width = 77;
			// 
			// HoraIngreso_Historial_Oper_Form
			// 
			this->HoraIngreso_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->HoraIngreso_Historial_Oper_Form->HeaderText = L"Hora de Ingreso:";
			this->HoraIngreso_Historial_Oper_Form->MinimumWidth = 6;
			this->HoraIngreso_Historial_Oper_Form->Name = L"HoraIngreso_Historial_Oper_Form";
			this->HoraIngreso_Historial_Oper_Form->ReadOnly = true;
			// 
			// HoraSalida_Historial_Oper_Form
			// 
			this->HoraSalida_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->HoraSalida_Historial_Oper_Form->HeaderText = L"Hora de Salida";
			this->HoraSalida_Historial_Oper_Form->MinimumWidth = 6;
			this->HoraSalida_Historial_Oper_Form->Name = L"HoraSalida_Historial_Oper_Form";
			this->HoraSalida_Historial_Oper_Form->ReadOnly = true;
			// 
			// Fecha_Historial_Oper_Form
			// 
			this->Fecha_Historial_Oper_Form->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Fecha_Historial_Oper_Form->HeaderText = L"Fecha:";
			this->Fecha_Historial_Oper_Form->MinimumWidth = 6;
			this->Fecha_Historial_Oper_Form->Name = L"Fecha_Historial_Oper_Form";
			this->Fecha_Historial_Oper_Form->ReadOnly = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(581, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Historial:";
			// 
			// btn_Pesar
			// 
			this->btn_Pesar->Location = System::Drawing::Point(100, 170);
			this->btn_Pesar->Name = L"btn_Pesar";
			this->btn_Pesar->Size = System::Drawing::Size(132, 30);
			this->btn_Pesar->TabIndex = 17;
			this->btn_Pesar->Text = L"Pesar";
			this->btn_Pesar->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Precio:";
			// 
			// textBoxPrecioOperForm
			// 
			this->textBoxPrecioOperForm->Location = System::Drawing::Point(100, 289);
			this->textBoxPrecioOperForm->Name = L"textBoxPrecioOperForm";
			this->textBoxPrecioOperForm->ReadOnly = true;
			this->textBoxPrecioOperForm->Size = System::Drawing::Size(100, 22);
			this->textBoxPrecioOperForm->TabIndex = 19;
			// 
			// textBoxMuestraPrecioTotalOperForm
			// 
			this->textBoxMuestraPrecioTotalOperForm->Location = System::Drawing::Point(331, 286);
			this->textBoxMuestraPrecioTotalOperForm->Name = L"textBoxMuestraPrecioTotalOperForm";
			this->textBoxMuestraPrecioTotalOperForm->ReadOnly = true;
			this->textBoxMuestraPrecioTotalOperForm->Size = System::Drawing::Size(100, 22);
			this->textBoxMuestraPrecioTotalOperForm->TabIndex = 20;
			// 
			// btn_Generar_Precio
			// 
			this->btn_Generar_Precio->Location = System::Drawing::Point(325, 245);
			this->btn_Generar_Precio->Name = L"btn_Generar_Precio";
			this->btn_Generar_Precio->Size = System::Drawing::Size(106, 23);
			this->btn_Generar_Precio->TabIndex = 21;
			this->btn_Generar_Precio->Text = L"Generar precio";
			this->btn_Generar_Precio->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(248, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Precio total:";
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1391, 384);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Generar_Precio);
			this->Controls->Add(this->textBoxMuestraPrecioTotalOperForm);
			this->Controls->Add(this->textBoxPrecioOperForm);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_Pesar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CuadroDeHistorialOperadorForm);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->lblEstado);
			this->Controls->Add(this->lblOcupado);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->textBoxPesoOperForm);
			this->Controls->Add(this->textBoxOperForm);
			this->Controls->Add(this->textBoxDNIOperForm);
			this->Controls->Add(this->TextBoxNombreOperForm);
			this->Controls->Add(this->btn_Buscar);
			this->Controls->Add(this->btn_Agregar);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"formulario";
			this->Text = L"formulario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CuadroDeHistorialOperadorForm))->EndInit();
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

	//	   // Función auxiliar para convertir texto a bool de forma segura
	//private: bool ParseBool(String^ texto) {
	//	bool resultado = false;
	//	if (Boolean::TryParse(texto, resultado)) {
	//		return resultado;
	//	}
	//	String^ t = texto->Trim()->ToLower();
	//	return (t == "1" || t == "true" || t == "si" || t == "s");
	//}

	//	   // Función auxiliar para obtener el ID desde textBox4
	//private: int ObtenerId() {
	//	int id = 0;
	//	Int32::TryParse(this->textBox4->Text, id);
	//	return id;
	//}

	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//	String^ nombre = this->textBox1->Text;
	//	bool ocupado = ParseBool(this->textBox2->Text);
	//	bool estado = ParseBool(this->textBox3->Text);

	//	::controller::controller::agregarEspacio(ocupado, estado);
	//	Console::WriteLine("Espacio agregado: Nombre={0}, Ocupado={1}, Estado={2}", nombre, ocupado, estado);

	//	LimpiarCampos();
	//}

	//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ObtenerId();

	//	Espacio^ esp = ::controller::controller::buscarEspacio(id);
	//	if (esp == nullptr) {
	//		Console::WriteLine("No se encontró el espacio con ID {0}.", id);
	//	}
	//	else {
	//		Console::WriteLine("Se encontró el espacio: id {0}, ocupado {1}, est {2}.\n", esp->id, esp->ocupado, esp->estado);
	//	}

	//	LimpiarCampos();
	//}

	//private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ObtenerId();
	//	bool ocupado = ParseBool(this->textBox2->Text);
	//	bool estado = ParseBool(this->textBox3->Text);

	//	if (::controller::controller::modificarEspacio(id, ocupado, estado)) {
	//		Console::WriteLine("Se modificó el espacio con ID {0}.", id);
	//	}
	//	else {
	//		Console::WriteLine("No se encontró el espacio con ID {0} para modificar.", id);
	//	}

	//	LimpiarCampos();
	//}

	//private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int id = ObtenerId();

	//	if (::controller::controller::eliminarEspacio(id)) {
	//		Console::WriteLine("Se eliminó el espacio con ID {0}.", id);
	//	}
	//	else {
	//		Console::WriteLine("No se encontró el espacio con ID {0} para eliminar.", id);
	//	}

	//	LimpiarCampos();
	//}
	//private: System::Void lblOcupado_Click(System::Object^ sender, System::EventArgs^ e) {
	//}
	//private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	//}
	//private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//}
};
}