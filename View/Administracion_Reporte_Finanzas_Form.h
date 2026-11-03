#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace controllerPrincipal;
	using namespace modelPrincipal;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Administracion_Reporte_Finanzas_Form
	/// </summary>
	public ref class Administracion_Reporte_Finanzas_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ MenuAdminForm;

		ControlReporteFinanciero^ controladorFinanzas;

		bool seAplicoFiltro;

		List<RegistroFinanciero^>^ registrosFinancieros;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Monto_Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Ticket;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Espacio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Placa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Peso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Precio_Base;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Tiempo_Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Fecha_Entrada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Hora_Entrada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Fecha_Salida;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Hora_Salida;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_ID_Operario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Nombre_Ope;

		

	public:
		Administracion_Reporte_Finanzas_Form(Form^ entrada_MenuAdminForm, ControlReporteFinanciero^ entrada_ControladorFinanzas)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MenuAdminForm = entrada_MenuAdminForm;
			controladorFinanzas = entrada_ControladorFinanzas;


			seAplicoFiltro= false;

			registrosFinancieros = gcnew List<RegistroFinanciero^>();

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administracion_Reporte_Finanzas_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cb_Filtro;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ tb_Aplicar_Filtro;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numeric_Ganancias_En_Tiempo;

	private: System::Windows::Forms::Button^ btn_Regresar_Menu_Administracion;
















































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
			this->cb_Filtro = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_Aplicar_Filtro = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colum_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Monto_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Ticket = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Espacio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Placa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Peso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Precio_Base = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Tiempo_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Fecha_Entrada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Hora_Entrada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Fecha_Salida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Hora_Salida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_ID_Operario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Nombre_Ope = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numeric_Ganancias_En_Tiempo = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Regresar_Menu_Administracion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Ganancias_En_Tiempo))->BeginInit();
			this->SuspendLayout();
			// 
			// cb_Filtro
			// 
			this->cb_Filtro->FormattingEnabled = true;
			this->cb_Filtro->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Hoy", L"Ayer", L"Esta Semana", L"Este Mes" });
			this->cb_Filtro->Location = System::Drawing::Point(147, 70);
			this->cb_Filtro->Name = L"cb_Filtro";
			this->cb_Filtro->Size = System::Drawing::Size(121, 24);
			this->cb_Filtro->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filtrar por ";
			// 
			// tb_Aplicar_Filtro
			// 
			this->tb_Aplicar_Filtro->Location = System::Drawing::Point(315, 62);
			this->tb_Aplicar_Filtro->Name = L"tb_Aplicar_Filtro";
			this->tb_Aplicar_Filtro->Size = System::Drawing::Size(138, 38);
			this->tb_Aplicar_Filtro->TabIndex = 2;
			this->tb_Aplicar_Filtro->Text = L"Aplicar Filtro";
			this->tb_Aplicar_Filtro->UseVisualStyleBackColor = true;
			this->tb_Aplicar_Filtro->Click += gcnew System::EventHandler(this, &Administracion_Reporte_Finanzas_Form::tb_Aplicar_Filtro_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Colum_ID,
					this->Colum_Monto_Total, this->Colum_Ticket, this->Colum_Espacio, this->Colum_Placa, this->Colum_Modelo, this->Colum_DNI, this->Colum_Peso,
					this->Colum_Precio_Base, this->Colum_Tiempo_Total, this->Colum_Fecha_Entrada, this->Colum_Hora_Entrada, this->Colum_Fecha_Salida,
					this->Colum_Hora_Salida, this->Colum_ID_Operario, this->Colum_Nombre_Ope
			});
			this->dataGridView1->Location = System::Drawing::Point(68, 167);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1554, 352);
			this->dataGridView1->TabIndex = 3;
			// 
			// Colum_ID
			// 
			this->Colum_ID->HeaderText = L"ID Registro";
			this->Colum_ID->MinimumWidth = 6;
			this->Colum_ID->Name = L"Colum_ID";
			this->Colum_ID->Width = 125;
			// 
			// Colum_Monto_Total
			// 
			this->Colum_Monto_Total->HeaderText = L"Monto Total";
			this->Colum_Monto_Total->MinimumWidth = 6;
			this->Colum_Monto_Total->Name = L"Colum_Monto_Total";
			this->Colum_Monto_Total->Width = 125;
			// 
			// Colum_Ticket
			// 
			this->Colum_Ticket->HeaderText = L"Ticket";
			this->Colum_Ticket->MinimumWidth = 6;
			this->Colum_Ticket->Name = L"Colum_Ticket";
			this->Colum_Ticket->Width = 125;
			// 
			// Colum_Espacio
			// 
			this->Colum_Espacio->HeaderText = L"Espacio";
			this->Colum_Espacio->MinimumWidth = 6;
			this->Colum_Espacio->Name = L"Colum_Espacio";
			this->Colum_Espacio->Width = 125;
			// 
			// Colum_Placa
			// 
			this->Colum_Placa->HeaderText = L"Placa";
			this->Colum_Placa->MinimumWidth = 6;
			this->Colum_Placa->Name = L"Colum_Placa";
			this->Colum_Placa->Width = 125;
			// 
			// Colum_Modelo
			// 
			this->Colum_Modelo->HeaderText = L"Modelo";
			this->Colum_Modelo->MinimumWidth = 6;
			this->Colum_Modelo->Name = L"Colum_Modelo";
			this->Colum_Modelo->Width = 125;
			// 
			// Colum_DNI
			// 
			this->Colum_DNI->HeaderText = L"DNI";
			this->Colum_DNI->MinimumWidth = 6;
			this->Colum_DNI->Name = L"Colum_DNI";
			this->Colum_DNI->Width = 125;
			// 
			// Colum_Peso
			// 
			this->Colum_Peso->HeaderText = L"Peso";
			this->Colum_Peso->MinimumWidth = 6;
			this->Colum_Peso->Name = L"Colum_Peso";
			this->Colum_Peso->Width = 125;
			// 
			// Colum_Precio_Base
			// 
			this->Colum_Precio_Base->HeaderText = L"Precio Base";
			this->Colum_Precio_Base->MinimumWidth = 6;
			this->Colum_Precio_Base->Name = L"Colum_Precio_Base";
			this->Colum_Precio_Base->Width = 125;
			// 
			// Colum_Tiempo_Total
			// 
			this->Colum_Tiempo_Total->HeaderText = L"Tiempo Total";
			this->Colum_Tiempo_Total->MinimumWidth = 6;
			this->Colum_Tiempo_Total->Name = L"Colum_Tiempo_Total";
			this->Colum_Tiempo_Total->Width = 125;
			// 
			// Colum_Fecha_Entrada
			// 
			this->Colum_Fecha_Entrada->HeaderText = L"Fecha Entrada";
			this->Colum_Fecha_Entrada->MinimumWidth = 6;
			this->Colum_Fecha_Entrada->Name = L"Colum_Fecha_Entrada";
			this->Colum_Fecha_Entrada->Width = 125;
			// 
			// Colum_Hora_Entrada
			// 
			this->Colum_Hora_Entrada->HeaderText = L"Hora Entrada";
			this->Colum_Hora_Entrada->MinimumWidth = 6;
			this->Colum_Hora_Entrada->Name = L"Colum_Hora_Entrada";
			this->Colum_Hora_Entrada->Width = 125;
			// 
			// Colum_Fecha_Salida
			// 
			this->Colum_Fecha_Salida->HeaderText = L"Fecha Salida";
			this->Colum_Fecha_Salida->MinimumWidth = 6;
			this->Colum_Fecha_Salida->Name = L"Colum_Fecha_Salida";
			this->Colum_Fecha_Salida->Width = 125;
			// 
			// Colum_Hora_Salida
			// 
			this->Colum_Hora_Salida->HeaderText = L"Hora Salida";
			this->Colum_Hora_Salida->MinimumWidth = 6;
			this->Colum_Hora_Salida->Name = L"Colum_Hora_Salida";
			this->Colum_Hora_Salida->Width = 125;
			// 
			// Colum_ID_Operario
			// 
			this->Colum_ID_Operario->HeaderText = L"ID Operario";
			this->Colum_ID_Operario->MinimumWidth = 6;
			this->Colum_ID_Operario->Name = L"Colum_ID_Operario";
			this->Colum_ID_Operario->Width = 125;
			// 
			// Colum_Nombre_Ope
			// 
			this->Colum_Nombre_Ope->HeaderText = L"Nombre Ope.";
			this->Colum_Nombre_Ope->MinimumWidth = 6;
			this->Colum_Nombre_Ope->Name = L"Colum_Nombre_Ope";
			this->Colum_Nombre_Ope->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 542);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Total Recaudado por este Periodo";
			// 
			// numeric_Ganancias_En_Tiempo
			// 
			this->numeric_Ganancias_En_Tiempo->DecimalPlaces = 2;
			this->numeric_Ganancias_En_Tiempo->Location = System::Drawing::Point(315, 540);
			this->numeric_Ganancias_En_Tiempo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numeric_Ganancias_En_Tiempo->Name = L"numeric_Ganancias_En_Tiempo";
			this->numeric_Ganancias_En_Tiempo->Size = System::Drawing::Size(204, 22);
			this->numeric_Ganancias_En_Tiempo->TabIndex = 5;
			// 
			// btn_Regresar_Menu_Administracion
			// 
			this->btn_Regresar_Menu_Administracion->Location = System::Drawing::Point(1409, 40);
			this->btn_Regresar_Menu_Administracion->Name = L"btn_Regresar_Menu_Administracion";
			this->btn_Regresar_Menu_Administracion->Size = System::Drawing::Size(169, 60);
			this->btn_Regresar_Menu_Administracion->TabIndex = 6;
			this->btn_Regresar_Menu_Administracion->Text = L"Regresar al Menu de Administracion";
			this->btn_Regresar_Menu_Administracion->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Administracion->Click += gcnew System::EventHandler(this, &Administracion_Reporte_Finanzas_Form::btn_Regresar_Menu_Administracion_Click);
			// 
			// Administracion_Reporte_Finanzas_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1701, 601);
			this->Controls->Add(this->btn_Regresar_Menu_Administracion);
			this->Controls->Add(this->numeric_Ganancias_En_Tiempo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tb_Aplicar_Filtro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cb_Filtro);
			this->Name = L"Administracion_Reporte_Finanzas_Form";
			this->Text = L"Administracion_Reporte_Finanzas_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Ganancias_En_Tiempo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Administracion_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			MenuAdminForm->Show();
		}


		//private: void actualizar_segun_filtro() {

		//	dataGridView1->Rows->Clear();

		//	if (registrosFinancieros == nullptr) {

		//		registrosFinancieros
		//	}


		//	List<TicketAuto^>^ tickets = controlador_GUI->listarTickets();


		//	dataGridView1->Rows->Clear();

		//	for each (TicketAuto ^ ticket in tickets) {

		//		String^ valueDNI;
		//		//valor DNI si no se coloca
		//		if (ticket->dni != 0 && ticket->dni >= 10000000 && ticket->dni <= 99999999) {
		//			valueDNI = ticket->dni.ToString();
		//		}
		//		else {
		//			valueDNI = "No introducido";
		//		}


		//		//dataGridView1->Rows->Add(
		//		//	ticket->id,
		//		//	ticket->id_espacio,
		//		//	ticket->placa,
		//		//	ticket->modeloAuto,
		//		//	ticket->peso,
		//		//	ticket->precio,
		//		//	ticket->fechaIngreso.ToString("HH:mm:ss"),
		//		//	valueDNI
		//		//);

		//		int indiceFila = dataGridView1->Rows->Add();
		//		DataGridViewRow^ fila = dataGridView1->Rows[indiceFila];



		//		fila->Cells["Colum_ID"]->Value = ticket->id;
		//		fila->Cells["Colum_Monto_Total"]->Value = ticket->id_espacio;
		//		fila->Cells["Colum_Ticket"]->Value = ticket->placa;
		//		fila->Cells["Colum_Espacio"]->Value = ticket->modeloAuto;
		//		fila->Cells["Colum_Placa"]->Value = ticket->peso;
		//		fila->Cells["Colum_Modelo"]->Value = ticket->precio;
		//		fila->Cells["Colum_DNI"]->Value = ticket->fechaIngreso.ToString("HH:mm:ss");
		//		fila->Cells["Colum_Peso"]->Value = valueDNI;
		//		fila->Cells["Colum_Precio_Base"]->Value = ticket->codigoBarras;//ticket->id;
		//		fila->Cells["Colum_Tiempo_Total"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_Fecha_Entrada"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_Hora_Entrada"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_Fecha_Salida"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_Hora_Salida"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_ID_Operario"]->Value = ticket->codigoBarras;
		//		fila->Cells["Colum_Nombre_Operario"]->Value = ticket->codigoBarras;


		//	}



		//}


		

		private: System::Void tb_Aplicar_Filtro_Click(System::Object^ sender, System::EventArgs^ e) {

			
			/*int seleccionado = cb_Filtro->SelectedIndex; String^ periodo;

			if (seleccionado == 0) {
				periodo = "Hoy";
				seAplicoFiltro = true;
			}
			else if (seleccionado == 1) {
				periodo = "Ayer";
				seAplicoFiltro = true;
			}
			else if (seleccionado == 2) {
				periodo = "Esta Semana";
				seAplicoFiltro = true;
			}
			else if (seleccionado == 3) {
				periodo = "Este Mes";
				seAplicoFiltro = true;
			}
			else {
				seAplicoFiltro = false;
			}

			if (seAplicoFiltro==true) {
				registrosFinancieros = controladorFinanzas->filtrarRegistrosPorPeriodo(periodo);
			}
			
			registrosFinancieros = controladorFinanzas->ObtenerRegistrosFin();*/
		}
};
}
