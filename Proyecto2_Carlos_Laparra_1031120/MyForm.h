#pragma once
#include"Nodo.h"
#include"MatrizBahias.h"
#include"Bahia.h"

namespace Proyecto2CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//se crea la matriz para las bahias 
		MatrizBahias<Bahia<String>*>* lista_de_bahias;
	public:			
		MyForm(void)
		{

			InitializeComponent();			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbCrearBahia;
	protected:
	private: System::Windows::Forms::TextBox^ gb1_txtPeso;
	private: System::Windows::Forms::ComboBox^ gb1_cbProductos;
	private: System::Windows::Forms::TextBox^ gb1_txtColumna;
	private: System::Windows::Forms::TextBox^ gb1_txtFila;
	private: System::Windows::Forms::Label^ gb1_lblPeso;
	private: System::Windows::Forms::Label^ gb1_lblAlmacenar;
	private: System::Windows::Forms::Label^ gb1_lblColumna;
	private: System::Windows::Forms::Label^ gb1_lblFila;
	private: System::Windows::Forms::GroupBox^ gbAlmacenarProducto;
	private: System::Windows::Forms::GroupBox^ gbRetirarProducto;
	private: System::Windows::Forms::GroupBox^ gbBodega;




	private: System::Windows::Forms::GroupBox^ gbInventario;

	private: System::Windows::Forms::GroupBox^ gbEliminarBahia;

	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblElegirOpcion;
	private: System::Windows::Forms::ComboBox^ cbPrincipal;
	private: System::Windows::Forms::Button^ gb1_btnCrear;
	private: System::Windows::Forms::Button^ gb2_btnCrear;
	private: System::Windows::Forms::DateTimePicker^ gb2_dtpFecha;
	private: System::Windows::Forms::TextBox^ gb2_txtResponsable;




	private: System::Windows::Forms::TextBox^ gb2_txtCantProductos;


	private: System::Windows::Forms::ComboBox^ gb2_cbTipoProducto;
	private: System::Windows::Forms::TextBox^ gb2_txtPesoU;

	private: System::Windows::Forms::TextBox^ gb2_txtBahia;
	private: System::Windows::Forms::Label^ gb2_lblFecha;
	private: System::Windows::Forms::Label^ gb2_lblResponsable;
	private: System::Windows::Forms::Label^ gb2_TotalProductos;
	private: System::Windows::Forms::Label^ gb2_lblPesoU;
	private: System::Windows::Forms::Label^ gb2_lblTipoProducto;
	private: System::Windows::Forms::Label^ gb2_lblBahia;
	private: System::Windows::Forms::DateTimePicker^ gb3_dtpRetiro;

	private: System::Windows::Forms::TextBox^ gb3_txtProductosRetirar;
	private: System::Windows::Forms::Label^ gb3_lblRetiro;

	private: System::Windows::Forms::ComboBox^ gb3_cbRetirarProducto;
	private: System::Windows::Forms::Label^ gb3_lblCantidadRetirar;
	private: System::Windows::Forms::Label^ gb3_lblProductoRetirar;
	private: System::Windows::Forms::Button^ gb3_btnCrear;
	private: System::Windows::Forms::TextBox^ gb3_txtBahia;
	private: System::Windows::Forms::TextBox^ gb3_txtResponsable;
	private: System::Windows::Forms::Label^ gb3_lblBahiaRetiro;
	private: System::Windows::Forms::Label^ gb3_lblResponsable;
	private: System::Windows::Forms::Button^ gb4_btnEliminar;
	private: System::Windows::Forms::TextBox^ gb4_txtIDBahia;
	private: System::Windows::Forms::Label^ gb4_lblIDBahia;
	private: System::Windows::Forms::Button^ gb5_btnAceptar;
	private: System::Windows::Forms::ComboBox^ gb5_cbOrdenar;
	private: System::Windows::Forms::Label^ gb5_lblInventario;
	private: System::Windows::Forms::Button^ gb0_btnBodega;
	private: System::Windows::Forms::TextBox^ gb0_txtBodega;
	private: System::Windows::Forms::Label^ gb0_lblBodega;

	protected:







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		int eleccionPrincipal;
		int tipoProductoA;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbCrearBahia = (gcnew System::Windows::Forms::GroupBox());
			this->gb1_btnCrear = (gcnew System::Windows::Forms::Button());
			this->gb1_txtPeso = (gcnew System::Windows::Forms::TextBox());
			this->gb1_cbProductos = (gcnew System::Windows::Forms::ComboBox());
			this->gb1_txtColumna = (gcnew System::Windows::Forms::TextBox());
			this->gb1_txtFila = (gcnew System::Windows::Forms::TextBox());
			this->gb1_lblPeso = (gcnew System::Windows::Forms::Label());
			this->gb1_lblAlmacenar = (gcnew System::Windows::Forms::Label());
			this->gb1_lblColumna = (gcnew System::Windows::Forms::Label());
			this->gb1_lblFila = (gcnew System::Windows::Forms::Label());
			this->gbAlmacenarProducto = (gcnew System::Windows::Forms::GroupBox());
			this->gb2_btnCrear = (gcnew System::Windows::Forms::Button());
			this->gb2_dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->gb2_txtResponsable = (gcnew System::Windows::Forms::TextBox());
			this->gb2_txtCantProductos = (gcnew System::Windows::Forms::TextBox());
			this->gb2_cbTipoProducto = (gcnew System::Windows::Forms::ComboBox());
			this->gb2_txtPesoU = (gcnew System::Windows::Forms::TextBox());
			this->gb2_txtBahia = (gcnew System::Windows::Forms::TextBox());
			this->gb2_lblFecha = (gcnew System::Windows::Forms::Label());
			this->gb2_lblResponsable = (gcnew System::Windows::Forms::Label());
			this->gb2_TotalProductos = (gcnew System::Windows::Forms::Label());
			this->gb2_lblPesoU = (gcnew System::Windows::Forms::Label());
			this->gb2_lblTipoProducto = (gcnew System::Windows::Forms::Label());
			this->gb2_lblBahia = (gcnew System::Windows::Forms::Label());
			this->gbRetirarProducto = (gcnew System::Windows::Forms::GroupBox());
			this->gb3_btnCrear = (gcnew System::Windows::Forms::Button());
			this->gb3_txtBahia = (gcnew System::Windows::Forms::TextBox());
			this->gb3_txtResponsable = (gcnew System::Windows::Forms::TextBox());
			this->gb3_lblBahiaRetiro = (gcnew System::Windows::Forms::Label());
			this->gb3_dtpRetiro = (gcnew System::Windows::Forms::DateTimePicker());
			this->gb3_lblResponsable = (gcnew System::Windows::Forms::Label());
			this->gb3_txtProductosRetirar = (gcnew System::Windows::Forms::TextBox());
			this->gb3_lblRetiro = (gcnew System::Windows::Forms::Label());
			this->gb3_cbRetirarProducto = (gcnew System::Windows::Forms::ComboBox());
			this->gb3_lblCantidadRetirar = (gcnew System::Windows::Forms::Label());
			this->gb3_lblProductoRetirar = (gcnew System::Windows::Forms::Label());
			this->gbBodega = (gcnew System::Windows::Forms::GroupBox());
			this->gb0_btnBodega = (gcnew System::Windows::Forms::Button());
			this->gb0_txtBodega = (gcnew System::Windows::Forms::TextBox());
			this->gb0_lblBodega = (gcnew System::Windows::Forms::Label());
			this->gbInventario = (gcnew System::Windows::Forms::GroupBox());
			this->gb5_btnAceptar = (gcnew System::Windows::Forms::Button());
			this->gb5_cbOrdenar = (gcnew System::Windows::Forms::ComboBox());
			this->gb5_lblInventario = (gcnew System::Windows::Forms::Label());
			this->gbEliminarBahia = (gcnew System::Windows::Forms::GroupBox());
			this->gb4_btnEliminar = (gcnew System::Windows::Forms::Button());
			this->gb4_txtIDBahia = (gcnew System::Windows::Forms::TextBox());
			this->gb4_lblIDBahia = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblElegirOpcion = (gcnew System::Windows::Forms::Label());
			this->cbPrincipal = (gcnew System::Windows::Forms::ComboBox());
			this->gbCrearBahia->SuspendLayout();
			this->gbAlmacenarProducto->SuspendLayout();
			this->gbRetirarProducto->SuspendLayout();
			this->gbBodega->SuspendLayout();
			this->gbInventario->SuspendLayout();
			this->gbEliminarBahia->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbCrearBahia
			// 
			this->gbCrearBahia->Controls->Add(this->gb1_btnCrear);
			this->gbCrearBahia->Controls->Add(this->gb1_txtPeso);
			this->gbCrearBahia->Controls->Add(this->gb1_cbProductos);
			this->gbCrearBahia->Controls->Add(this->gb1_txtColumna);
			this->gbCrearBahia->Controls->Add(this->gb1_txtFila);
			this->gbCrearBahia->Controls->Add(this->gb1_lblPeso);
			this->gbCrearBahia->Controls->Add(this->gb1_lblAlmacenar);
			this->gbCrearBahia->Controls->Add(this->gb1_lblColumna);
			this->gbCrearBahia->Controls->Add(this->gb1_lblFila);
			this->gbCrearBahia->Location = System::Drawing::Point(483, 136);
			this->gbCrearBahia->Name = L"gbCrearBahia";
			this->gbCrearBahia->Size = System::Drawing::Size(434, 284);
			this->gbCrearBahia->TabIndex = 0;
			this->gbCrearBahia->TabStop = false;
			this->gbCrearBahia->Text = L"Crear Bahía";
			this->gbCrearBahia->Visible = false;
			// 
			// gb1_btnCrear
			// 
			this->gb1_btnCrear->Location = System::Drawing::Point(167, 241);
			this->gb1_btnCrear->Name = L"gb1_btnCrear";
			this->gb1_btnCrear->Size = System::Drawing::Size(95, 32);
			this->gb1_btnCrear->TabIndex = 10;
			this->gb1_btnCrear->Text = L"button1";
			this->gb1_btnCrear->UseVisualStyleBackColor = true;
			this->gb1_btnCrear->Click += gcnew System::EventHandler(this, &MyForm::gb1_btnCrear_Click);
			// 
			// gb1_txtPeso
			// 
			this->gb1_txtPeso->Location = System::Drawing::Point(210, 167);
			this->gb1_txtPeso->Name = L"gb1_txtPeso";
			this->gb1_txtPeso->Size = System::Drawing::Size(76, 26);
			this->gb1_txtPeso->TabIndex = 9;
			// 
			// gb1_cbProductos
			// 
			this->gb1_cbProductos->FormattingEnabled = true;
			this->gb1_cbProductos->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Material para oficina", L"Ropa", L"Material de contrucción",
					L"Material de oficina y ropa", L"Material para oficina y material de constucción", L"Ropa y material de construcción", L"Los 3 productos"
			});
			this->gb1_cbProductos->Location = System::Drawing::Point(210, 126);
			this->gb1_cbProductos->Name = L"gb1_cbProductos";
			this->gb1_cbProductos->Size = System::Drawing::Size(218, 28);
			this->gb1_cbProductos->TabIndex = 8;
			this->gb1_cbProductos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::gb1_cbProductos_SelectedIndexChanged);
			// 
			// gb1_txtColumna
			// 
			this->gb1_txtColumna->Location = System::Drawing::Point(210, 83);
			this->gb1_txtColumna->Name = L"gb1_txtColumna";
			this->gb1_txtColumna->Size = System::Drawing::Size(76, 26);
			this->gb1_txtColumna->TabIndex = 5;
			// 
			// gb1_txtFila
			// 
			this->gb1_txtFila->Location = System::Drawing::Point(210, 42);
			this->gb1_txtFila->Name = L"gb1_txtFila";
			this->gb1_txtFila->Size = System::Drawing::Size(76, 26);
			this->gb1_txtFila->TabIndex = 4;
			// 
			// gb1_lblPeso
			// 
			this->gb1_lblPeso->AutoSize = true;
			this->gb1_lblPeso->Location = System::Drawing::Point(6, 170);
			this->gb1_lblPeso->Name = L"gb1_lblPeso";
			this->gb1_lblPeso->Size = System::Drawing::Size(130, 20);
			this->gb1_lblPeso->TabIndex = 3;
			this->gb1_lblPeso->Text = L"Peso de la bahía:";
			// 
			// gb1_lblAlmacenar
			// 
			this->gb1_lblAlmacenar->AutoSize = true;
			this->gb1_lblAlmacenar->Location = System::Drawing::Point(6, 126);
			this->gb1_lblAlmacenar->Name = L"gb1_lblAlmacenar";
			this->gb1_lblAlmacenar->Size = System::Drawing::Size(176, 20);
			this->gb1_lblAlmacenar->TabIndex = 2;
			this->gb1_lblAlmacenar->Text = L"Productos a almacenar:";
			// 
			// gb1_lblColumna
			// 
			this->gb1_lblColumna->AutoSize = true;
			this->gb1_lblColumna->Location = System::Drawing::Point(6, 83);
			this->gb1_lblColumna->Name = L"gb1_lblColumna";
			this->gb1_lblColumna->Size = System::Drawing::Size(76, 20);
			this->gb1_lblColumna->TabIndex = 1;
			this->gb1_lblColumna->Text = L"Columna:";
			// 
			// gb1_lblFila
			// 
			this->gb1_lblFila->AutoSize = true;
			this->gb1_lblFila->Location = System::Drawing::Point(6, 42);
			this->gb1_lblFila->Name = L"gb1_lblFila";
			this->gb1_lblFila->Size = System::Drawing::Size(38, 20);
			this->gb1_lblFila->TabIndex = 0;
			this->gb1_lblFila->Text = L"Fila:";
			// 
			// gbAlmacenarProducto
			// 
			this->gbAlmacenarProducto->Controls->Add(this->gb2_btnCrear);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_dtpFecha);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_txtResponsable);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_txtCantProductos);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_cbTipoProducto);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_txtPesoU);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_txtBahia);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_lblFecha);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_lblResponsable);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_TotalProductos);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_lblPesoU);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_lblTipoProducto);
			this->gbAlmacenarProducto->Controls->Add(this->gb2_lblBahia);
			this->gbAlmacenarProducto->Location = System::Drawing::Point(930, 136);
			this->gbAlmacenarProducto->Name = L"gbAlmacenarProducto";
			this->gbAlmacenarProducto->Size = System::Drawing::Size(400, 284);
			this->gbAlmacenarProducto->TabIndex = 1;
			this->gbAlmacenarProducto->TabStop = false;
			this->gbAlmacenarProducto->Text = L"Almacenar producto";
			this->gbAlmacenarProducto->Visible = false;
			// 
			// gb2_btnCrear
			// 
			this->gb2_btnCrear->Location = System::Drawing::Point(173, 241);
			this->gb2_btnCrear->Name = L"gb2_btnCrear";
			this->gb2_btnCrear->Size = System::Drawing::Size(95, 32);
			this->gb2_btnCrear->TabIndex = 11;
			this->gb2_btnCrear->Text = L"button2";
			this->gb2_btnCrear->UseVisualStyleBackColor = true;
			this->gb2_btnCrear->Click += gcnew System::EventHandler(this, &MyForm::gb2_btnCrear_Click);
			// 
			// gb2_dtpFecha
			// 
			this->gb2_dtpFecha->Location = System::Drawing::Point(193, 209);
			this->gb2_dtpFecha->Name = L"gb2_dtpFecha";
			this->gb2_dtpFecha->Size = System::Drawing::Size(200, 26);
			this->gb2_dtpFecha->TabIndex = 8;
			// 
			// gb2_txtResponsable
			// 
			this->gb2_txtResponsable->Location = System::Drawing::Point(287, 176);
			this->gb2_txtResponsable->Name = L"gb2_txtResponsable";
			this->gb2_txtResponsable->Size = System::Drawing::Size(76, 26);
			this->gb2_txtResponsable->TabIndex = 13;
			// 
			// gb2_txtCantProductos
			// 
			this->gb2_txtCantProductos->Location = System::Drawing::Point(287, 140);
			this->gb2_txtCantProductos->Name = L"gb2_txtCantProductos";
			this->gb2_txtCantProductos->Size = System::Drawing::Size(76, 26);
			this->gb2_txtCantProductos->TabIndex = 12;
			// 
			// gb2_cbTipoProducto
			// 
			this->gb2_cbTipoProducto->FormattingEnabled = true;
			this->gb2_cbTipoProducto->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Material para oficina", L"Ropa", L"Material de contrucción" });
			this->gb2_cbTipoProducto->Location = System::Drawing::Point(287, 71);
			this->gb2_cbTipoProducto->Name = L"gb2_cbTipoProducto";
			this->gb2_cbTipoProducto->Size = System::Drawing::Size(76, 28);
			this->gb2_cbTipoProducto->TabIndex = 10;
			// 
			// gb2_txtPesoU
			// 
			this->gb2_txtPesoU->Location = System::Drawing::Point(287, 104);
			this->gb2_txtPesoU->Name = L"gb2_txtPesoU";
			this->gb2_txtPesoU->Size = System::Drawing::Size(76, 26);
			this->gb2_txtPesoU->TabIndex = 11;
			// 
			// gb2_txtBahia
			// 
			this->gb2_txtBahia->Location = System::Drawing::Point(287, 42);
			this->gb2_txtBahia->Name = L"gb2_txtBahia";
			this->gb2_txtBahia->Size = System::Drawing::Size(76, 26);
			this->gb2_txtBahia->TabIndex = 10;
			// 
			// gb2_lblFecha
			// 
			this->gb2_lblFecha->AutoSize = true;
			this->gb2_lblFecha->Location = System::Drawing::Point(22, 215);
			this->gb2_lblFecha->Name = L"gb2_lblFecha";
			this->gb2_lblFecha->Size = System::Drawing::Size(165, 20);
			this->gb2_lblFecha->TabIndex = 5;
			this->gb2_lblFecha->Text = L"Fecha de almacenaje:";
			// 
			// gb2_lblResponsable
			// 
			this->gb2_lblResponsable->AutoSize = true;
			this->gb2_lblResponsable->Location = System::Drawing::Point(22, 182);
			this->gb2_lblResponsable->Name = L"gb2_lblResponsable";
			this->gb2_lblResponsable->Size = System::Drawing::Size(107, 20);
			this->gb2_lblResponsable->TabIndex = 4;
			this->gb2_lblResponsable->Text = L"Responsable:";
			// 
			// gb2_TotalProductos
			// 
			this->gb2_TotalProductos->AutoSize = true;
			this->gb2_TotalProductos->Location = System::Drawing::Point(22, 143);
			this->gb2_TotalProductos->Name = L"gb2_TotalProductos";
			this->gb2_TotalProductos->Size = System::Drawing::Size(174, 20);
			this->gb2_TotalProductos->TabIndex = 3;
			this->gb2_TotalProductos->Text = L"Cantidad de productos:";
			// 
			// gb2_lblPesoU
			// 
			this->gb2_lblPesoU->AutoSize = true;
			this->gb2_lblPesoU->Location = System::Drawing::Point(22, 107);
			this->gb2_lblPesoU->Name = L"gb2_lblPesoU";
			this->gb2_lblPesoU->Size = System::Drawing::Size(197, 20);
			this->gb2_lblPesoU->TabIndex = 2;
			this->gb2_lblPesoU->Text = L"Peso unitario del producto:";
			// 
			// gb2_lblTipoProducto
			// 
			this->gb2_lblTipoProducto->AutoSize = true;
			this->gb2_lblTipoProducto->Location = System::Drawing::Point(22, 74);
			this->gb2_lblTipoProducto->Name = L"gb2_lblTipoProducto";
			this->gb2_lblTipoProducto->Size = System::Drawing::Size(168, 20);
			this->gb2_lblTipoProducto->TabIndex = 1;
			this->gb2_lblTipoProducto->Text = L"Producto a almacenar:";
			// 
			// gb2_lblBahia
			// 
			this->gb2_lblBahia->AutoSize = true;
			this->gb2_lblBahia->Location = System::Drawing::Point(22, 42);
			this->gb2_lblBahia->Name = L"gb2_lblBahia";
			this->gb2_lblBahia->Size = System::Drawing::Size(210, 20);
			this->gb2_lblBahia->TabIndex = 0;
			this->gb2_lblBahia->Text = L"Bahía en la que almacenará:";
			// 
			// gbRetirarProducto
			// 
			this->gbRetirarProducto->Controls->Add(this->gb3_btnCrear);
			this->gbRetirarProducto->Controls->Add(this->gb3_txtBahia);
			this->gbRetirarProducto->Controls->Add(this->gb3_txtResponsable);
			this->gbRetirarProducto->Controls->Add(this->gb3_lblBahiaRetiro);
			this->gbRetirarProducto->Controls->Add(this->gb3_dtpRetiro);
			this->gbRetirarProducto->Controls->Add(this->gb3_lblResponsable);
			this->gbRetirarProducto->Controls->Add(this->gb3_txtProductosRetirar);
			this->gbRetirarProducto->Controls->Add(this->gb3_lblRetiro);
			this->gbRetirarProducto->Controls->Add(this->gb3_cbRetirarProducto);
			this->gbRetirarProducto->Controls->Add(this->gb3_lblCantidadRetirar);
			this->gbRetirarProducto->Controls->Add(this->gb3_lblProductoRetirar);
			this->gbRetirarProducto->Location = System::Drawing::Point(31, 441);
			this->gbRetirarProducto->Name = L"gbRetirarProducto";
			this->gbRetirarProducto->Size = System::Drawing::Size(400, 284);
			this->gbRetirarProducto->TabIndex = 1;
			this->gbRetirarProducto->TabStop = false;
			this->gbRetirarProducto->Text = L"Retirar producto";
			this->gbRetirarProducto->Visible = false;
			// 
			// gb3_btnCrear
			// 
			this->gb3_btnCrear->Location = System::Drawing::Point(158, 241);
			this->gb3_btnCrear->Name = L"gb3_btnCrear";
			this->gb3_btnCrear->Size = System::Drawing::Size(95, 32);
			this->gb3_btnCrear->TabIndex = 14;
			this->gb3_btnCrear->Text = L"button2";
			this->gb3_btnCrear->UseVisualStyleBackColor = true;
			// 
			// gb3_txtBahia
			// 
			this->gb3_txtBahia->Location = System::Drawing::Point(297, 170);
			this->gb3_txtBahia->Name = L"gb3_txtBahia";
			this->gb3_txtBahia->Size = System::Drawing::Size(76, 26);
			this->gb3_txtBahia->TabIndex = 15;
			// 
			// gb3_txtResponsable
			// 
			this->gb3_txtResponsable->Location = System::Drawing::Point(297, 134);
			this->gb3_txtResponsable->Name = L"gb3_txtResponsable";
			this->gb3_txtResponsable->Size = System::Drawing::Size(76, 26);
			this->gb3_txtResponsable->TabIndex = 15;
			// 
			// gb3_lblBahiaRetiro
			// 
			this->gb3_lblBahiaRetiro->AutoSize = true;
			this->gb3_lblBahiaRetiro->Location = System::Drawing::Point(21, 173);
			this->gb3_lblBahiaRetiro->Name = L"gb3_lblBahiaRetiro";
			this->gb3_lblBahiaRetiro->Size = System::Drawing::Size(177, 20);
			this->gb3_lblBahiaRetiro->TabIndex = 14;
			this->gb3_lblBahiaRetiro->Text = L"Bahía en la que retirará:";
			// 
			// gb3_dtpRetiro
			// 
			this->gb3_dtpRetiro->Location = System::Drawing::Point(192, 209);
			this->gb3_dtpRetiro->Name = L"gb3_dtpRetiro";
			this->gb3_dtpRetiro->Size = System::Drawing::Size(200, 26);
			this->gb3_dtpRetiro->TabIndex = 15;
			// 
			// gb3_lblResponsable
			// 
			this->gb3_lblResponsable->AutoSize = true;
			this->gb3_lblResponsable->Location = System::Drawing::Point(21, 140);
			this->gb3_lblResponsable->Name = L"gb3_lblResponsable";
			this->gb3_lblResponsable->Size = System::Drawing::Size(107, 20);
			this->gb3_lblResponsable->TabIndex = 14;
			this->gb3_lblResponsable->Text = L"Responsable:";
			// 
			// gb3_txtProductosRetirar
			// 
			this->gb3_txtProductosRetirar->Location = System::Drawing::Point(297, 92);
			this->gb3_txtProductosRetirar->Name = L"gb3_txtProductosRetirar";
			this->gb3_txtProductosRetirar->Size = System::Drawing::Size(76, 26);
			this->gb3_txtProductosRetirar->TabIndex = 15;
			// 
			// gb3_lblRetiro
			// 
			this->gb3_lblRetiro->AutoSize = true;
			this->gb3_lblRetiro->Location = System::Drawing::Point(21, 215);
			this->gb3_lblRetiro->Name = L"gb3_lblRetiro";
			this->gb3_lblRetiro->Size = System::Drawing::Size(120, 20);
			this->gb3_lblRetiro->TabIndex = 14;
			this->gb3_lblRetiro->Text = L"Fecha de retiro:";
			// 
			// gb3_cbRetirarProducto
			// 
			this->gb3_cbRetirarProducto->FormattingEnabled = true;
			this->gb3_cbRetirarProducto->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Material para oficina", L"Ropa",
					L"Material de contrucción"
			});
			this->gb3_cbRetirarProducto->Location = System::Drawing::Point(297, 48);
			this->gb3_cbRetirarProducto->Name = L"gb3_cbRetirarProducto";
			this->gb3_cbRetirarProducto->Size = System::Drawing::Size(76, 28);
			this->gb3_cbRetirarProducto->TabIndex = 15;
			// 
			// gb3_lblCantidadRetirar
			// 
			this->gb3_lblCantidadRetirar->AutoSize = true;
			this->gb3_lblCantidadRetirar->Location = System::Drawing::Point(21, 98);
			this->gb3_lblCantidadRetirar->Name = L"gb3_lblCantidadRetirar";
			this->gb3_lblCantidadRetirar->Size = System::Drawing::Size(232, 20);
			this->gb3_lblCantidadRetirar->TabIndex = 14;
			this->gb3_lblCantidadRetirar->Text = L"Cantidad de productos a retirar:";
			// 
			// gb3_lblProductoRetirar
			// 
			this->gb3_lblProductoRetirar->AutoSize = true;
			this->gb3_lblProductoRetirar->Location = System::Drawing::Point(21, 48);
			this->gb3_lblProductoRetirar->Name = L"gb3_lblProductoRetirar";
			this->gb3_lblProductoRetirar->Size = System::Drawing::Size(135, 20);
			this->gb3_lblProductoRetirar->TabIndex = 14;
			this->gb3_lblProductoRetirar->Text = L"Producto a retirar:";
			// 
			// gbBodega
			// 
			this->gbBodega->Controls->Add(this->gb0_btnBodega);
			this->gbBodega->Controls->Add(this->gb0_txtBodega);
			this->gbBodega->Controls->Add(this->gb0_lblBodega);
			this->gbBodega->Location = System::Drawing::Point(56, 136);
			this->gbBodega->Name = L"gbBodega";
			this->gbBodega->Size = System::Drawing::Size(400, 284);
			this->gbBodega->TabIndex = 4;
			this->gbBodega->TabStop = false;
			this->gbBodega->Text = L"Bodegas";
			// 
			// gb0_btnBodega
			// 
			this->gb0_btnBodega->Location = System::Drawing::Point(133, 231);
			this->gb0_btnBodega->Name = L"gb0_btnBodega";
			this->gb0_btnBodega->Size = System::Drawing::Size(95, 32);
			this->gb0_btnBodega->TabIndex = 11;
			this->gb0_btnBodega->Text = L"button1";
			this->gb0_btnBodega->UseVisualStyleBackColor = true;
			this->gb0_btnBodega->Click += gcnew System::EventHandler(this, &MyForm::gb0_btnBodega_Click);
			// 
			// gb0_txtBodega
			// 
			this->gb0_txtBodega->Location = System::Drawing::Point(133, 128);
			this->gb0_txtBodega->Name = L"gb0_txtBodega";
			this->gb0_txtBodega->Size = System::Drawing::Size(100, 26);
			this->gb0_txtBodega->TabIndex = 1;
			// 
			// gb0_lblBodega
			// 
			this->gb0_lblBodega->AutoSize = true;
			this->gb0_lblBodega->Location = System::Drawing::Point(118, 79);
			this->gb0_lblBodega->Name = L"gb0_lblBodega";
			this->gb0_lblBodega->Size = System::Drawing::Size(140, 20);
			this->gb0_lblBodega->TabIndex = 0;
			this->gb0_lblBodega->Text = L"Bodega a trabajar:";
			// 
			// gbInventario
			// 
			this->gbInventario->Controls->Add(this->gb5_btnAceptar);
			this->gbInventario->Controls->Add(this->gb5_cbOrdenar);
			this->gbInventario->Controls->Add(this->gb5_lblInventario);
			this->gbInventario->Location = System::Drawing::Point(930, 441);
			this->gbInventario->Name = L"gbInventario";
			this->gbInventario->Size = System::Drawing::Size(400, 284);
			this->gbInventario->TabIndex = 3;
			this->gbInventario->TabStop = false;
			this->gbInventario->Text = L"Inventario";
			this->gbInventario->Visible = false;
			// 
			// gb5_btnAceptar
			// 
			this->gb5_btnAceptar->Location = System::Drawing::Point(173, 241);
			this->gb5_btnAceptar->Name = L"gb5_btnAceptar";
			this->gb5_btnAceptar->Size = System::Drawing::Size(95, 32);
			this->gb5_btnAceptar->TabIndex = 16;
			this->gb5_btnAceptar->Text = L"button1";
			this->gb5_btnAceptar->UseVisualStyleBackColor = true;
			// 
			// gb5_cbOrdenar
			// 
			this->gb5_cbOrdenar->FormattingEnabled = true;
			this->gb5_cbOrdenar->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Tipo de producto", L"Cantidad de unidades",
					L"Peso unitario", L"Fecha de ingreso"
			});
			this->gb5_cbOrdenar->Location = System::Drawing::Point(210, 87);
			this->gb5_cbOrdenar->Name = L"gb5_cbOrdenar";
			this->gb5_cbOrdenar->Size = System::Drawing::Size(169, 28);
			this->gb5_cbOrdenar->TabIndex = 12;
			// 
			// gb5_lblInventario
			// 
			this->gb5_lblInventario->AutoSize = true;
			this->gb5_lblInventario->Location = System::Drawing::Point(6, 87);
			this->gb5_lblInventario->Name = L"gb5_lblInventario";
			this->gb5_lblInventario->Size = System::Drawing::Size(182, 20);
			this->gb5_lblInventario->TabIndex = 11;
			this->gb5_lblInventario->Text = L"Inventario ordenado por:";
			// 
			// gbEliminarBahia
			// 
			this->gbEliminarBahia->Controls->Add(this->gb4_btnEliminar);
			this->gbEliminarBahia->Controls->Add(this->gb4_txtIDBahia);
			this->gbEliminarBahia->Controls->Add(this->gb4_lblIDBahia);
			this->gbEliminarBahia->Location = System::Drawing::Point(483, 441);
			this->gbEliminarBahia->Name = L"gbEliminarBahia";
			this->gbEliminarBahia->Size = System::Drawing::Size(428, 284);
			this->gbEliminarBahia->TabIndex = 2;
			this->gbEliminarBahia->TabStop = false;
			this->gbEliminarBahia->Text = L"Eliminar bahía";
			this->gbEliminarBahia->Visible = false;
			// 
			// gb4_btnEliminar
			// 
			this->gb4_btnEliminar->Location = System::Drawing::Point(167, 241);
			this->gb4_btnEliminar->Name = L"gb4_btnEliminar";
			this->gb4_btnEliminar->Size = System::Drawing::Size(95, 32);
			this->gb4_btnEliminar->TabIndex = 11;
			this->gb4_btnEliminar->Text = L"button1";
			this->gb4_btnEliminar->UseVisualStyleBackColor = true;
			// 
			// gb4_txtIDBahia
			// 
			this->gb4_txtIDBahia->Location = System::Drawing::Point(289, 87);
			this->gb4_txtIDBahia->Name = L"gb4_txtIDBahia";
			this->gb4_txtIDBahia->Size = System::Drawing::Size(76, 26);
			this->gb4_txtIDBahia->TabIndex = 15;
			// 
			// gb4_lblIDBahia
			// 
			this->gb4_lblIDBahia->AutoSize = true;
			this->gb4_lblIDBahia->Location = System::Drawing::Point(24, 87);
			this->gb4_lblIDBahia->Name = L"gb4_lblIDBahia";
			this->gb4_lblIDBahia->Size = System::Drawing::Size(191, 20);
			this->gb4_lblIDBahia->TabIndex = 14;
			this->gb4_lblIDBahia->Text = L"Bahía que desea eliminar:";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Oswald", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(411, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(511, 47);
			this->lblTitulo->TabIndex = 5;
			this->lblTitulo->Text = L"Bodegas Inteligentes de Guatemala S.A";
			// 
			// lblElegirOpcion
			// 
			this->lblElegirOpcion->AutoSize = true;
			this->lblElegirOpcion->Font = (gcnew System::Drawing::Font(L"Oswald", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblElegirOpcion->Location = System::Drawing::Point(448, 78);
			this->lblElegirOpcion->Name = L"lblElegirOpcion";
			this->lblElegirOpcion->Size = System::Drawing::Size(120, 30);
			this->lblElegirOpcion->TabIndex = 6;
			this->lblElegirOpcion->Text = L"Elegir opción:";
			this->lblElegirOpcion->Visible = false;
			// 
			// cbPrincipal
			// 
			this->cbPrincipal->FormattingEnabled = true;
			this->cbPrincipal->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Bodegas", L"Crear bahía", L"Almacenar producto",
					L"Retirar producto", L"Eliminar bahía", L"Inventario"
			});
			this->cbPrincipal->Location = System::Drawing::Point(687, 78);
			this->cbPrincipal->Name = L"cbPrincipal";
			this->cbPrincipal->Size = System::Drawing::Size(218, 28);
			this->cbPrincipal->TabIndex = 7;
			this->cbPrincipal->Visible = false;
			this->cbPrincipal->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbPrincipal_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 766);
			this->Controls->Add(this->gbCrearBahia);
			this->Controls->Add(this->gbInventario);
			this->Controls->Add(this->cbPrincipal);
			this->Controls->Add(this->lblElegirOpcion);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->gbBodega);
			this->Controls->Add(this->gbRetirarProducto);
			this->Controls->Add(this->gbAlmacenarProducto);
			this->Controls->Add(this->gbEliminarBahia);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->gbCrearBahia->ResumeLayout(false);
			this->gbCrearBahia->PerformLayout();
			this->gbAlmacenarProducto->ResumeLayout(false);
			this->gbAlmacenarProducto->PerformLayout();
			this->gbRetirarProducto->ResumeLayout(false);
			this->gbRetirarProducto->PerformLayout();
			this->gbBodega->ResumeLayout(false);
			this->gbBodega->PerformLayout();
			this->gbInventario->ResumeLayout(false);
			this->gbInventario->PerformLayout();
			this->gbEliminarBahia->ResumeLayout(false);
			this->gbEliminarBahia->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion						
	private: System::Void gb0_btnBodega_Click(System::Object^ sender, System::EventArgs^ e) {
		cbPrincipal->Visible = true;
		String^ nombreBodega = gb0_txtBodega->Text;
		array<String^>^ nombres;
	}
private: System::Void gb1_btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void gb1_cbProductos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	tipoProductoA = gb1_cbProductos->SelectedIndex;
}
private: System::Void cbPrincipal_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	eleccionPrincipal = cbPrincipal->SelectedIndex;
	if (eleccionPrincipal==0) {	
		gbCrearBahia->Visible = true;
		gbAlmacenarProducto->Visible = false;
		gbRetirarProducto->Visible = false;
		gbEliminarBahia->Visible = false;
		gbInventario->Visible = false;
		gbBodega->Visible = false;	
	}
	else if (eleccionPrincipal == 1) {
		gbCrearBahia->Visible = true;
		gbAlmacenarProducto->Visible = false;
		gbRetirarProducto->Visible = false;
		gbEliminarBahia->Visible = false;		
		gbInventario->Visible = false;
		gbBodega->Visible = false;				
	}
	else if (eleccionPrincipal == 2) {
		gbCrearBahia->Visible = false;
		gbAlmacenarProducto->Visible = true;
		gbRetirarProducto->Visible = false;
		gbEliminarBahia->Visible = false;
		gbInventario->Visible = false;
		gbBodega->Visible = false;
	}
	else if (eleccionPrincipal == 3) {
		gbCrearBahia->Visible = false;
		gbAlmacenarProducto->Visible = false;
		gbRetirarProducto->Visible = true;
		gbEliminarBahia->Visible = false;
		gbInventario->Visible = false;
		gbBodega->Visible = false;
	}
	else if (eleccionPrincipal == 4) {
		gbCrearBahia->Visible = false;
		gbAlmacenarProducto->Visible = false;
		gbRetirarProducto->Visible = false;
		gbEliminarBahia->Visible = true;
		gbInventario->Visible = false;
		gbBodega->Visible = false;
	}
	else if (eleccionPrincipal == 5) {
		gbCrearBahia->Visible = false;
		gbAlmacenarProducto->Visible = false;
		gbRetirarProducto->Visible = false;
		gbEliminarBahia->Visible = false;
		gbInventario->Visible = true;
		gbBodega->Visible = false;
	}
}
private: System::Void gb2_btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {	

}
};
}
