#pragma once

namespace View
{
    public ref class Mantenimiento_Estadisticas_Fallas_Form : public System::Windows::Forms::Form
    {
    private:
        System::Windows::Forms::Form^ menuMantenimiento;

        System::Windows::Forms::Label^ labelTitulo;
        System::Windows::Forms::Label^ labelFecha;
        System::Windows::Forms::Label^ labelTotal;
        System::Windows::Forms::DateTimePicker^ dateTimePickerFecha;
        System::Windows::Forms::Button^ btnActualizar;
        System::Windows::Forms::Button^ btnRegresar;
        System::Windows::Forms::PictureBox^ pictureBoxGrafica;

        System::Collections::Generic::List<modelPrincipal::Falla^>^ listaFallas;
        cli::array<int>^ fallasPorEspacio;

    public:
        Mantenimiento_Estadisticas_Fallas_Form(System::Windows::Forms::Form^ formularioMenu)
        {
            menuMantenimiento = formularioMenu;
            listaFallas = gcnew System::Collections::Generic::List<modelPrincipal::Falla^>();
            fallasPorEspacio = gcnew cli::array<int>(8);

            InitializeComponent();

            this->Load += gcnew System::EventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::Mantenimiento_Estadisticas_Fallas_Form_Load);
            this->VisibleChanged += gcnew System::EventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::Mantenimiento_Estadisticas_Fallas_Form_VisibleChanged);
        }

    protected:
        ~Mantenimiento_Estadisticas_Fallas_Form()
        {
        }

    private:
        void InitializeComponent(void)
        {
            this->labelTitulo = gcnew System::Windows::Forms::Label();
            this->labelFecha = gcnew System::Windows::Forms::Label();
            this->labelTotal = gcnew System::Windows::Forms::Label();
            this->dateTimePickerFecha = gcnew System::Windows::Forms::DateTimePicker();
            this->btnActualizar = gcnew System::Windows::Forms::Button();
            this->btnRegresar = gcnew System::Windows::Forms::Button();
            this->pictureBoxGrafica = gcnew System::Windows::Forms::PictureBox();

            this->SuspendLayout();

            // Titulo del formulario
            this->labelTitulo->AutoSize = true;
            this->labelTitulo->Font = gcnew System::Drawing::Font(
                L"Microsoft Sans Serif", 16.0f, System::Drawing::FontStyle::Bold);
            this->labelTitulo->Location = System::Drawing::Point(30, 22);
            this->labelTitulo->Name = L"labelTitulo";
            this->labelTitulo->Size = System::Drawing::Size(390, 26);
            this->labelTitulo->Text = L"ESTADISTICAS DE FALLAS";

            // Selector de fecha
            this->labelFecha->AutoSize = true;
            this->labelFecha->Location = System::Drawing::Point(35, 78);
            this->labelFecha->Name = L"labelFecha";
            this->labelFecha->Size = System::Drawing::Size(94, 13);
            this->labelFecha->Text = L"Seleccionar fecha:";

            this->dateTimePickerFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->dateTimePickerFecha->Location = System::Drawing::Point(140, 73);
            this->dateTimePickerFecha->Name = L"dateTimePickerFecha";
            this->dateTimePickerFecha->Size = System::Drawing::Size(125, 20);
            this->dateTimePickerFecha->Value = System::DateTime::Now;
            this->dateTimePickerFecha->ValueChanged += gcnew System::EventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::dateTimePickerFecha_ValueChanged);

            // Boton para volver a consultar SQL
            this->btnActualizar->Location = System::Drawing::Point(285, 69);
            this->btnActualizar->Name = L"btnActualizar";
            this->btnActualizar->Size = System::Drawing::Size(125, 28);
            this->btnActualizar->Text = L"Actualizar datos";
            this->btnActualizar->UseVisualStyleBackColor = true;
            this->btnActualizar->Click += gcnew System::EventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::btnActualizar_Click);

            // Total de fallas del dia
            this->labelTotal->AutoSize = true;
            this->labelTotal->Font = gcnew System::Drawing::Font(
                L"Microsoft Sans Serif", 9.0f, System::Drawing::FontStyle::Bold);
            this->labelTotal->Location = System::Drawing::Point(445, 77);
            this->labelTotal->Name = L"labelTotal";
            this->labelTotal->Size = System::Drawing::Size(150, 15);
            this->labelTotal->Text = L"Total de fallas: 0";

            // Boton regresar al menu
            this->btnRegresar->Location = System::Drawing::Point(735, 25);
            this->btnRegresar->Name = L"btnRegresar";
            this->btnRegresar->Size = System::Drawing::Size(150, 32);
            this->btnRegresar->Text = L"Regresar al menu";
            this->btnRegresar->UseVisualStyleBackColor = true;
            this->btnRegresar->Click += gcnew System::EventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::btnRegresar_Click);

            // Area donde se dibuja el grafico de barras
            this->pictureBoxGrafica->BackColor = System::Drawing::Color::White;
            this->pictureBoxGrafica->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBoxGrafica->Location = System::Drawing::Point(30, 120);
            this->pictureBoxGrafica->Name = L"pictureBoxGrafica";
            this->pictureBoxGrafica->Size = System::Drawing::Size(855, 405);
            this->pictureBoxGrafica->TabStop = false;
            this->pictureBoxGrafica->Paint += gcnew System::Windows::Forms::PaintEventHandler(
                this, &Mantenimiento_Estadisticas_Fallas_Form::pictureBoxGrafica_Paint);

            // Configuracion general
            this->AutoScaleDimensions = System::Drawing::SizeF(6.0f, 13.0f);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(915, 550);
            this->Controls->Add(this->pictureBoxGrafica);
            this->Controls->Add(this->btnRegresar);
            this->Controls->Add(this->labelTotal);
            this->Controls->Add(this->btnActualizar);
            this->Controls->Add(this->dateTimePickerFecha);
            this->Controls->Add(this->labelFecha);
            this->Controls->Add(this->labelTitulo);
            this->Name = L"Mantenimiento_Estadisticas_Fallas_Form";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Estadisticas de fallas por espacio";

            this->ResumeLayout(false);
            this->PerformLayout();
        }

        void cargarFallasDesdeBD()
        {
            try
            {
                // ControlFallas obtiene los registros directamente desde SQL Server.
                listaFallas = controllerPrincipal::ControlFallas::obtener_todos_Falla();

                if (listaFallas == nullptr)
                {
                    listaFallas = gcnew System::Collections::Generic::List<modelPrincipal::Falla^>();
                }

                actualizarConteoPorFecha();
            }
            catch (System::Exception^ ex)
            {
                System::Windows::Forms::MessageBox::Show(
                    L"No se pudieron cargar las fallas desde SQL Server.\n" + ex->Message,
                    L"Error al consultar fallas",
                    System::Windows::Forms::MessageBoxButtons::OK,
                    System::Windows::Forms::MessageBoxIcon::Error);
            }
        }

        void actualizarConteoPorFecha()
        {
            int total = 0;
            System::DateTime fechaSeleccionada = this->dateTimePickerFecha->Value.Date;

            for (int i = 0; i < 8; i++)
            {
                fallasPorEspacio[i] = 0;
            }

            if (listaFallas != nullptr)
            {
                for each (modelPrincipal::Falla ^ falla in listaFallas)
                {
                    if (falla == nullptr)
                    {
                        continue;
                    }

                    // Los IDs 1 a 10 corresponden a los espacios vehiculares.
                    // El ID 11 corresponde al motor principal y no se grafica.
                    if (falla->espacioAfectado >= 1 && falla->espacioAfectado <= 8 &&
                        falla->fecha.Date == fechaSeleccionada)
                    {
                        fallasPorEspacio[falla->espacioAfectado - 1]++;
                        total++;
                    }
                }
            }

            this->labelTotal->Text = L"Total de fallas en espacios: " + System::Convert::ToString(total);
            this->pictureBoxGrafica->Invalidate();
        }

        System::Void Mantenimiento_Estadisticas_Fallas_Form_Load(
            System::Object^ sender, System::EventArgs^ e)
        {
            cargarFallasDesdeBD();
        }

        System::Void Mantenimiento_Estadisticas_Fallas_Form_VisibleChanged(
            System::Object^ sender, System::EventArgs^ e)
        {
            if (this->Visible)
            {
                cargarFallasDesdeBD();
            }
        }

        System::Void dateTimePickerFecha_ValueChanged(
            System::Object^ sender, System::EventArgs^ e)
        {
            actualizarConteoPorFecha();
        }

        System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            cargarFallasDesdeBD();
        }

        System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Hide();

            if (menuMantenimiento != nullptr)
            {
                menuMantenimiento->Show();
            }
        }

        System::Void pictureBoxGrafica_Paint(
            System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
        {
            System::Drawing::Graphics^ grafico = e->Graphics;
            grafico->Clear(System::Drawing::Color::White);

            int ancho = this->pictureBoxGrafica->ClientSize.Width;
            int alto = this->pictureBoxGrafica->ClientSize.Height;

            int margenIzquierdo = 65;
            int margenDerecho = 20;
            int margenSuperior = 42;
            int margenInferior = 55;

            int anchoGrafico = ancho - margenIzquierdo - margenDerecho;
            int altoGrafico = alto - margenSuperior - margenInferior;

            if (anchoGrafico <= 0 || altoGrafico <= 0)
            {
                return;
            }

            int mayorCantidad = 0;
            for (int i = 0; i < 8; i++)
            {
                if (fallasPorEspacio[i] > mayorCantidad)
                {
                    mayorCantidad = fallasPorEspacio[i];
                }
            }

            int pasoEscala = (mayorCantidad + 4) / 5;
            if (pasoEscala < 1)
            {
                pasoEscala = 1;
            }
            int maximoEscala = pasoEscala * 5;

            System::Drawing::Font^ fuenteTitulo = gcnew System::Drawing::Font(
                L"Microsoft Sans Serif", 10.0f, System::Drawing::FontStyle::Bold);
            System::Drawing::Font^ fuenteNormal = gcnew System::Drawing::Font(
                L"Microsoft Sans Serif", 8.0f, System::Drawing::FontStyle::Regular);

            System::Drawing::SolidBrush^ pincelNegro = gcnew System::Drawing::SolidBrush(
                System::Drawing::Color::Black);
            System::Drawing::SolidBrush^ pincelBarras = gcnew System::Drawing::SolidBrush(
                System::Drawing::Color::CornflowerBlue);
            System::Drawing::SolidBrush^ pincelMensaje = gcnew System::Drawing::SolidBrush(
                System::Drawing::Color::DimGray);
            System::Drawing::Pen^ lapizEjes = gcnew System::Drawing::Pen(
                System::Drawing::Color::Black, 1.0f);
            System::Drawing::Pen^ lapizCuadricula = gcnew System::Drawing::Pen(
                System::Drawing::Color::LightGray, 1.0f);

            System::String^ titulo = L"Cantidad de fallas por espacio vehicular";
            System::Drawing::SizeF tamTitulo = grafico->MeasureString(titulo, fuenteTitulo);
            grafico->DrawString(
                titulo, fuenteTitulo, pincelNegro,
                System::Drawing::PointF((ancho - tamTitulo.Width) / 2.0f, 10.0f));

            // Lineas horizontales y etiquetas del eje vertical.
            for (int i = 0; i <= 5; i++)
            {
                int valor = i * pasoEscala;
                int y = margenSuperior + altoGrafico -
                    (int)((double)valor * altoGrafico / maximoEscala);

                grafico->DrawLine(
                    lapizCuadricula,
                    System::Drawing::Point(margenIzquierdo, y),
                    System::Drawing::Point(ancho - margenDerecho, y));

                grafico->DrawString(
                    System::Convert::ToString(valor), fuenteNormal, pincelNegro,
                    System::Drawing::PointF(25.0f, (float)(y - 8)));
            }

            // Ejes principales.
            grafico->DrawLine(
                lapizEjes,
                System::Drawing::Point(margenIzquierdo, margenSuperior),
                System::Drawing::Point(margenIzquierdo, margenSuperior + altoGrafico));
            grafico->DrawLine(
                lapizEjes,
                System::Drawing::Point(margenIzquierdo, margenSuperior + altoGrafico),
                System::Drawing::Point(ancho - margenDerecho, margenSuperior + altoGrafico));

            int anchoColumna = anchoGrafico / 8;
            int anchoBarra = (int)(anchoColumna * 0.55);

            for (int i = 0; i < 8; i++)
            {
                int x = margenIzquierdo + i * anchoColumna +
                    (anchoColumna - anchoBarra) / 2;
                int altoBarra = (int)((double)fallasPorEspacio[i] * altoGrafico / maximoEscala);
                int y = margenSuperior + altoGrafico - altoBarra;

                if (fallasPorEspacio[i] > 0)
                {
                    grafico->FillRectangle(
                        pincelBarras,
                        System::Drawing::Rectangle(x, y, anchoBarra, altoBarra));
                }

                System::String^ valorTexto = System::Convert::ToString(fallasPorEspacio[i]);
                System::Drawing::SizeF tamValor = grafico->MeasureString(valorTexto, fuenteNormal);
                grafico->DrawString(
                    valorTexto, fuenteNormal, pincelNegro,
                    System::Drawing::PointF(
                        x + (anchoBarra - tamValor.Width) / 2.0f,
                        (float)(y - 18)));

                System::String^ etiqueta = L"Esp. " + System::Convert::ToString(i + 1);
                System::Drawing::SizeF tamEtiqueta = grafico->MeasureString(etiqueta, fuenteNormal);
                grafico->DrawString(
                    etiqueta, fuenteNormal, pincelNegro,
                    System::Drawing::PointF(
                        margenIzquierdo + i * anchoColumna +
                        (anchoColumna - tamEtiqueta.Width) / 2.0f,
                        (float)(margenSuperior + altoGrafico + 8)));
            }

            if (mayorCantidad == 0)
            {
                System::String^ mensaje = L"No hay fallas registradas para este dia.";
                System::Drawing::SizeF tamMensaje = grafico->MeasureString(mensaje, fuenteNormal);
                grafico->DrawString(
                    mensaje, fuenteNormal, pincelMensaje,
                    System::Drawing::PointF(
                        (ancho - tamMensaje.Width) / 2.0f,
                        margenSuperior + altoGrafico / 2.0f));
            }

            grafico->DrawString(
                L"Cantidad de fallas", fuenteNormal, pincelNegro,
                System::Drawing::PointF(8.0f, 20.0f));

            delete fuenteTitulo;
            delete fuenteNormal;
            delete pincelNegro;
            delete pincelBarras;
            delete pincelMensaje;
            delete lapizEjes;
            delete lapizCuadricula;
        }
    };
}
