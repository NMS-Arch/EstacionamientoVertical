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
	/// Summary for Administracion_Tarifas_y_Auditoria_Form
	/// </summary>
	public ref class Administracion_Tarifas_y_Auditoria_Form : public System::Windows::Forms::Form
	{
	private:
		Form^ MenuAdminForm;

		Administrador^ administrador_informacion;
	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Umbral;

	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::NumericUpDown^ numeric_Peso_Umbral_para_Aplicar;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_CostoHora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Peso_Umbral;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Costo_Adicional;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colum_Fecha;

		   ControlReporteFinanciero^ controladorFinanzas;
		   ControlTarifas^ controladorTarifas;

	public:
		Administracion_Tarifas_y_Auditoria_Form(Form^ entrada_MenuAdminForm, ControlReporteFinanciero^ entrada_ControladorFinanzas, Administrador^ admin_entrada)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			controladorTarifas = gcnew ControlTarifas();

			MenuAdminForm = entrada_MenuAdminForm;

			administrador_informacion = admin_entrada;

			controladorFinanzas = entrada_ControladorFinanzas;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administracion_Tarifas_y_Auditoria_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoHora_Actual;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoPesoAdicional_Actual;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoHora_Modificar;
	private: System::Windows::Forms::NumericUpDown^ numeric_CostoPesoAdicional_Modificar;










	private: System::Windows::Forms::Button^ btn_Actualizar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numeric_CostoHora_Actual = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_CostoPesoAdicional_Actual = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numeric_CostoHora_Modificar = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_CostoPesoAdicional_Modificar = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_Actualizar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Colum_CostoHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Peso_Umbral = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Costo_Adicional = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colum_Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_Regresar_Menu_Administracion = (gcnew System::Windows::Forms::Button());
			this->numeric_Peso_Umbral = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numeric_Peso_Umbral_para_Aplicar = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Actual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Actual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Modificar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Modificar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Umbral))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Umbral_para_Aplicar))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Costo por Hora Actual";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(496, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Costo por Peso Adicional";
			// 
			// numeric_CostoHora_Actual
			// 
			this->numeric_CostoHora_Actual->DecimalPlaces = 2;
			this->numeric_CostoHora_Actual->Enabled = false;
			this->numeric_CostoHora_Actual->Location = System::Drawing::Point(60, 125);
			this->numeric_CostoHora_Actual->Name = L"numeric_CostoHora_Actual";
			this->numeric_CostoHora_Actual->Size = System::Drawing::Size(135, 22);
			this->numeric_CostoHora_Actual->TabIndex = 2;
			// 
			// numeric_CostoPesoAdicional_Actual
			// 
			this->numeric_CostoPesoAdicional_Actual->DecimalPlaces = 2;
			this->numeric_CostoPesoAdicional_Actual->Enabled = false;
			this->numeric_CostoPesoAdicional_Actual->Location = System::Drawing::Point(499, 125);
			this->numeric_CostoPesoAdicional_Actual->Name = L"numeric_CostoPesoAdicional_Actual";
			this->numeric_CostoPesoAdicional_Actual->Size = System::Drawing::Size(156, 22);
			this->numeric_CostoPesoAdicional_Actual->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Modificar Precios";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Costo por Hora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(56, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Datos de Tarifas Actuales";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(57, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Costo para cada Tn Adicional";
			// 
			// numeric_CostoHora_Modificar
			// 
			this->numeric_CostoHora_Modificar->DecimalPlaces = 2;
			this->numeric_CostoHora_Modificar->Location = System::Drawing::Point(251, 257);
			this->numeric_CostoHora_Modificar->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numeric_CostoHora_Modificar->Name = L"numeric_CostoHora_Modificar";
			this->numeric_CostoHora_Modificar->Size = System::Drawing::Size(125, 22);
			this->numeric_CostoHora_Modificar->TabIndex = 13;
			// 
			// numeric_CostoPesoAdicional_Modificar
			// 
			this->numeric_CostoPesoAdicional_Modificar->DecimalPlaces = 2;
			this->numeric_CostoPesoAdicional_Modificar->Location = System::Drawing::Point(251, 333);
			this->numeric_CostoPesoAdicional_Modificar->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0,
					0
			});
			this->numeric_CostoPesoAdicional_Modificar->Name = L"numeric_CostoPesoAdicional_Modificar";
			this->numeric_CostoPesoAdicional_Modificar->Size = System::Drawing::Size(125, 22);
			this->numeric_CostoPesoAdicional_Modificar->TabIndex = 14;
			// 
			// btn_Actualizar
			// 
			this->btn_Actualizar->Location = System::Drawing::Point(395, 249);
			this->btn_Actualizar->Name = L"btn_Actualizar";
			this->btn_Actualizar->Size = System::Drawing::Size(82, 106);
			this->btn_Actualizar->TabIndex = 16;
			this->btn_Actualizar->Text = L"Actualizar";
			this->btn_Actualizar->UseVisualStyleBackColor = true;
			this->btn_Actualizar->Click += gcnew System::EventHandler(this, &Administracion_Tarifas_y_Auditoria_Form::btn_Actualizar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(59, 448);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1051, 206);
			this->dataGridView1->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Operario";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Acction";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(58, 409);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(194, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Bitacora de movimientos";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(546, 224);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(185, 16);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Registro de anteriores Tarifas";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Colum_CostoHora,
					this->Colum_Peso_Umbral, this->Colum_Costo_Adicional, this->Colum_Fecha
			});
			this->dataGridView2->Location = System::Drawing::Point(549, 253);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(561, 113);
			this->dataGridView2->TabIndex = 20;
			// 
			// Colum_CostoHora
			// 
			this->Colum_CostoHora->HeaderText = L"CostoHora";
			this->Colum_CostoHora->MinimumWidth = 6;
			this->Colum_CostoHora->Name = L"Colum_CostoHora";
			this->Colum_CostoHora->Width = 125;
			// 
			// Colum_Peso_Umbral
			// 
			this->Colum_Peso_Umbral->HeaderText = L"PesoUmbral";
			this->Colum_Peso_Umbral->MinimumWidth = 6;
			this->Colum_Peso_Umbral->Name = L"Colum_Peso_Umbral";
			this->Colum_Peso_Umbral->Width = 125;
			// 
			// Colum_Costo_Adicional
			// 
			this->Colum_Costo_Adicional->HeaderText = L"CostoAdicional";
			this->Colum_Costo_Adicional->MinimumWidth = 6;
			this->Colum_Costo_Adicional->Name = L"Colum_Costo_Adicional";
			this->Colum_Costo_Adicional->Width = 125;
			// 
			// Colum_Fecha
			// 
			this->Colum_Fecha->HeaderText = L"FechaRegistro";
			this->Colum_Fecha->MinimumWidth = 6;
			this->Colum_Fecha->Name = L"Colum_Fecha";
			this->Colum_Fecha->Width = 125;
			// 
			// btn_Regresar_Menu_Administracion
			// 
			this->btn_Regresar_Menu_Administracion->Location = System::Drawing::Point(922, 64);
			this->btn_Regresar_Menu_Administracion->Name = L"btn_Regresar_Menu_Administracion";
			this->btn_Regresar_Menu_Administracion->Size = System::Drawing::Size(188, 73);
			this->btn_Regresar_Menu_Administracion->TabIndex = 21;
			this->btn_Regresar_Menu_Administracion->Text = L"Regresar Menu de Administracion";
			this->btn_Regresar_Menu_Administracion->UseVisualStyleBackColor = true;
			this->btn_Regresar_Menu_Administracion->Click += gcnew System::EventHandler(this, &Administracion_Tarifas_y_Auditoria_Form::btn_Regresar_Menu_Administracion_Click);
			// 
			// numeric_Peso_Umbral
			// 
			this->numeric_Peso_Umbral->DecimalPlaces = 2;
			this->numeric_Peso_Umbral->Enabled = false;
			this->numeric_Peso_Umbral->Location = System::Drawing::Point(265, 125);
			this->numeric_Peso_Umbral->Name = L"numeric_Peso_Umbral";
			this->numeric_Peso_Umbral->Size = System::Drawing::Size(156, 22);
			this->numeric_Peso_Umbral->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(262, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Peso Umbral (tn)";
			// 
			// numeric_Peso_Umbral_para_Aplicar
			// 
			this->numeric_Peso_Umbral_para_Aplicar->DecimalPlaces = 2;
			this->numeric_Peso_Umbral_para_Aplicar->Location = System::Drawing::Point(251, 299);
			this->numeric_Peso_Umbral_para_Aplicar->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numeric_Peso_Umbral_para_Aplicar->Name = L"numeric_Peso_Umbral_para_Aplicar";
			this->numeric_Peso_Umbral_para_Aplicar->Size = System::Drawing::Size(125, 22);
			this->numeric_Peso_Umbral_para_Aplicar->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(57, 305);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Peso Umbral (toneladas)";
			// 
			// Administracion_Tarifas_y_Auditoria_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1158, 682);
			this->Controls->Add(this->numeric_Peso_Umbral_para_Aplicar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numeric_Peso_Umbral);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_Regresar_Menu_Administracion);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Actualizar);
			this->Controls->Add(this->numeric_CostoPesoAdicional_Modificar);
			this->Controls->Add(this->numeric_CostoHora_Modificar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numeric_CostoPesoAdicional_Actual);
			this->Controls->Add(this->numeric_CostoHora_Actual);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Administracion_Tarifas_y_Auditoria_Form";
			this->Text = L"Administracion_Tarifas_y_Auditoria_Form";
			this->Load += gcnew System::EventHandler(this, &Administracion_Tarifas_y_Auditoria_Form::Administracion_Tarifas_y_Auditoria_Form_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Administracion_Tarifas_y_Auditoria_Form::Administracion_Tarifas_y_Auditoria_Form_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Actual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Actual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoHora_Modificar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_CostoPesoAdicional_Modificar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Umbral))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Peso_Umbral_para_Aplicar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void btn_Regresar_Menu_Administracion_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			MenuAdminForm->Show();
		}

		private: void Actualizar_Celdas_Tarifas() {
			try {
				// 1. Solicitamos los datos al Controlador
				List<Tarifa^>^ historial_Tarifas = controladorTarifas->ListarHistorialPrecios();

				// Limpiamos la grilla por precaución
				dataGridView2->Rows->Clear();

				// 2. BLINDAJE DE ARRANQUE EN FRÍO (Cold Start)
				// Validamos que la lista exista en memoria y que tenga al menos 1 elemento
				if (historial_Tarifas == nullptr || historial_Tarifas->Count == 0) {
					// Opcional: Avisar al usuario visualmente
					MessageBox::Show("El sistema no tiene tarifas configuradas actualmente. Por favor, registre un precio inicial.",
						"Aviso de Sistema", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// EL TRUCO: Interrumpimos la ejecución de este método usando 'return'
					// Esto evita que se llame a Actualizar_Datos_Actuales() y ocurra el colapso.
					return;
				}

				// 3. Si sobrevivimos al if de arriba, significa que SÍ hay datos. Poblamos normal.
				for each (Tarifa ^ tarif in historial_Tarifas) {
					int indiceFila = dataGridView2->Rows->Add();
					DataGridViewRow^ fila = dataGridView2->Rows[indiceFila];

					fila->Cells["Colum_CostoHora"]->Value = tarif->PrecioBase;
					fila->Cells["Colum_Peso_Umbral"]->Value = tarif->PesoUmbral;
					fila->Cells["Colum_Costo_Adicional"]->Value = tarif->PrecioAdicional;
					fila->Cells["Colum_Fecha"]->Value = tarif->FechaRegistro.ToString("dd/MM/yyyy");
				}

				// 4. Como usamos 'return' arriba si estaba vacío, este método ahora es seguro de llamar
				// porque tenemos la garantía matemática de que al menos hay 1 tarifa registrada.
				Actualizar_Datos_Actuales();
			}
			catch (Exception^ ex) {
				// En un patrón MVC-P, la Vista es responsable de atrapar y mostrar los errores visualmente
				MessageBox::Show("Error crítico al cargar la tabla de tarifas: " + ex->Message,
					"Error de Base de Datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: void Actualizar_Datos_Actuales() {

			Tarifa^ tarifa_actual = controladorTarifas->ObtenerPrecioActual();

			numeric_CostoHora_Actual->Value = Convert::ToDecimal(tarifa_actual->PrecioBase);

			numeric_CostoPesoAdicional_Actual->Value = Convert::ToDecimal(tarifa_actual->PrecioAdicional);

			numeric_Peso_Umbral->Value = Convert::ToDecimal(tarifa_actual->PesoUmbral);

		}


		private: System::Void Administracion_Tarifas_y_Auditoria_Form_Load(System::Object^ sender, System::EventArgs^ e) {

			Actualizar_Celdas_Tarifas();
		}






		private: System::Void btn_Actualizar_Click(System::Object^ sender, System::EventArgs^ e) {

			Tarifa^ tarifa = gcnew Tarifa();



			try {
				tarifa->PrecioBase = Convert::ToDouble(numeric_CostoHora_Modificar->Value);
				tarifa->PrecioAdicional = Convert::ToDouble(numeric_CostoPesoAdicional_Modificar->Value);
				tarifa->PesoUmbral = Convert::ToDouble(numeric_Peso_Umbral_para_Aplicar->Value);

				controladorTarifas->GuardarNuevaTarifa(tarifa);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al registrar la nueva tarida","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
			

			Actualizar_Celdas_Tarifas();
		}
		private: System::Void Administracion_Tarifas_y_Auditoria_Form_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		
			Actualizar_Celdas_Tarifas();
		}
};
}
