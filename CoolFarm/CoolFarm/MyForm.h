#pragma once

#include "Settings.h"
#include <iostream>
#include <fstream>
#include <functional>
#include <json\json.h>
#include <string>
#include <locale>
#include <msclr/marshal_cppstd.h>
#include <random>
#include <filesystem>
#include <utility>
#include <algorithm>  
#include <vector>


namespace CoolFarm {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	const int FILAS = 10;
	const int COLUMNAS = 10;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int numHilos;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textboxNomPartida;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public:
		Granjero* granjero = new Granjero();
		MyForm(void)
		{
			
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPartida;

	protected:

	private:
		cli::array<System::Windows::Forms::Button^, 2>^ botones;  // Matriz de botones
		cli::array<System::Threading::Thread^>^ hilos;  // Arreglo de hilos


	private: System::Windows::Forms::Button^ abrirMercadoButt;
	private: System::Windows::Forms::Button^ botonPlantarHeap;
	private: System::Windows::Forms::Button^ botonPlantarAVL;
	private: System::Windows::Forms::Button^ botonPlantarSplay;
	private: System::Windows::Forms::Button^ botonPlantarOrdenado;
	private: System::Windows::Forms::Button^ buttonPonerEspanta;
	private: System::Windows::Forms::Button^ buttonNuevaPartida;
	private: System::Windows::Forms::Button^ buttonCargarPartida;
	private: System::Windows::Forms::Button^ buttonPausarPartida;
	private: System::Windows::Forms::Button^ buttonGuardarPartida;






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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->abrirMercadoButt = (gcnew System::Windows::Forms::Button());
			this->botonPlantarHeap = (gcnew System::Windows::Forms::Button());
			this->botonPlantarAVL = (gcnew System::Windows::Forms::Button());
			this->botonPlantarSplay = (gcnew System::Windows::Forms::Button());
			this->botonPlantarOrdenado = (gcnew System::Windows::Forms::Button());
			this->buttonPonerEspanta = (gcnew System::Windows::Forms::Button());
			this->buttonNuevaPartida = (gcnew System::Windows::Forms::Button());
			this->buttonCargarPartida = (gcnew System::Windows::Forms::Button());
			this->buttonPausarPartida = (gcnew System::Windows::Forms::Button());
			this->buttonGuardarPartida = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPartida = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textboxNomPartida = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::YellowGreen;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(292, 32);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(376, 406);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(192, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"DEBUG";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Location = System::Drawing::Point(10, 16);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SETTINGS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// abrirMercadoButt
			// 
			this->abrirMercadoButt->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->abrirMercadoButt->Location = System::Drawing::Point(10, 52);
			this->abrirMercadoButt->Margin = System::Windows::Forms::Padding(2);
			this->abrirMercadoButt->Name = L"abrirMercadoButt";
			this->abrirMercadoButt->Size = System::Drawing::Size(74, 26);
			this->abrirMercadoButt->TabIndex = 5;
			this->abrirMercadoButt->Text = L"MERCADO";
			this->abrirMercadoButt->UseVisualStyleBackColor = false;
			this->abrirMercadoButt->Click += gcnew System::EventHandler(this, &MyForm::abrirMercadoButt_Click);
			// 
			// botonPlantarHeap
			// 
			this->botonPlantarHeap->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarHeap->Location = System::Drawing::Point(10, 236);
			this->botonPlantarHeap->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarHeap->Name = L"botonPlantarHeap";
			this->botonPlantarHeap->Size = System::Drawing::Size(111, 26);
			this->botonPlantarHeap->TabIndex = 6;
			this->botonPlantarHeap->Text = L"PLANTAR HEAP";
			this->botonPlantarHeap->UseVisualStyleBackColor = false;
			this->botonPlantarHeap->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// botonPlantarAVL
			// 
			this->botonPlantarAVL->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarAVL->Location = System::Drawing::Point(10, 277);
			this->botonPlantarAVL->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarAVL->Name = L"botonPlantarAVL";
			this->botonPlantarAVL->Size = System::Drawing::Size(111, 26);
			this->botonPlantarAVL->TabIndex = 7;
			this->botonPlantarAVL->Text = L"PLANTAR AVL";
			this->botonPlantarAVL->UseVisualStyleBackColor = false;
			this->botonPlantarAVL->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarAVL_Click);
			// 
			// botonPlantarSplay
			// 
			this->botonPlantarSplay->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarSplay->Location = System::Drawing::Point(10, 316);
			this->botonPlantarSplay->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarSplay->Name = L"botonPlantarSplay";
			this->botonPlantarSplay->Size = System::Drawing::Size(111, 26);
			this->botonPlantarSplay->TabIndex = 8;
			this->botonPlantarSplay->Text = L"PLANTAR SPLAY";
			this->botonPlantarSplay->UseVisualStyleBackColor = false;
			this->botonPlantarSplay->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarSplay_Click);
			// 
			// botonPlantarOrdenado
			// 
			this->botonPlantarOrdenado->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarOrdenado->Location = System::Drawing::Point(10, 353);
			this->botonPlantarOrdenado->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarOrdenado->Name = L"botonPlantarOrdenado";
			this->botonPlantarOrdenado->Size = System::Drawing::Size(111, 35);
			this->botonPlantarOrdenado->TabIndex = 9;
			this->botonPlantarOrdenado->Text = L"PLANTAR B ORDENADO";
			this->botonPlantarOrdenado->UseVisualStyleBackColor = false;
			this->botonPlantarOrdenado->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarOrdenado_Click);
			// 
			// buttonPonerEspanta
			// 
			this->buttonPonerEspanta->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPonerEspanta->Location = System::Drawing::Point(10, 401);
			this->buttonPonerEspanta->Margin = System::Windows::Forms::Padding(2);
			this->buttonPonerEspanta->Name = L"buttonPonerEspanta";
			this->buttonPonerEspanta->Size = System::Drawing::Size(111, 37);
			this->buttonPonerEspanta->TabIndex = 10;
			this->buttonPonerEspanta->Text = L"COLOCAR ESPANTAPAJAROS";
			this->buttonPonerEspanta->UseVisualStyleBackColor = false;
			this->buttonPonerEspanta->Click += gcnew System::EventHandler(this, &MyForm::buttonPonerEspanta_Click);
			// 
			// buttonNuevaPartida
			// 
			this->buttonNuevaPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonNuevaPartida->Location = System::Drawing::Point(732, 81);
			this->buttonNuevaPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonNuevaPartida->Name = L"buttonNuevaPartida";
			this->buttonNuevaPartida->Size = System::Drawing::Size(182, 49);
			this->buttonNuevaPartida->TabIndex = 11;
			this->buttonNuevaPartida->Text = L"NUEVA PARTIDA";
			this->buttonNuevaPartida->UseVisualStyleBackColor = false;
			this->buttonNuevaPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonNuevaPartida_Click);
			// 
			// buttonCargarPartida
			// 
			this->buttonCargarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonCargarPartida->Location = System::Drawing::Point(732, 405);
			this->buttonCargarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonCargarPartida->Name = L"buttonCargarPartida";
			this->buttonCargarPartida->Size = System::Drawing::Size(182, 49);
			this->buttonCargarPartida->TabIndex = 12;
			this->buttonCargarPartida->Text = L"CARGAR PARTIDA";
			this->buttonCargarPartida->UseVisualStyleBackColor = false;
			this->buttonCargarPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonCargarPartida_Click);
			// 
			// buttonPausarPartida
			// 
			this->buttonPausarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPausarPartida->Location = System::Drawing::Point(732, 213);
			this->buttonPausarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonPausarPartida->Name = L"buttonPausarPartida";
			this->buttonPausarPartida->Size = System::Drawing::Size(182, 49);
			this->buttonPausarPartida->TabIndex = 13;
			this->buttonPausarPartida->Text = L"PAUSAR PARTIDA";
			this->buttonPausarPartida->UseVisualStyleBackColor = false;
			this->buttonPausarPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonPausarPartida_Click);
			// 
			// buttonGuardarPartida
			// 
			this->buttonGuardarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonGuardarPartida->Location = System::Drawing::Point(732, 146);
			this->buttonGuardarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonGuardarPartida->Name = L"buttonGuardarPartida";
			this->buttonGuardarPartida->Size = System::Drawing::Size(182, 49);
			this->buttonGuardarPartida->TabIndex = 14;
			this->buttonGuardarPartida->Text = L"GUARDAR PARTIDA";
			this->buttonGuardarPartida->UseVisualStyleBackColor = false;
			this->buttonGuardarPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonGuardarPartida_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(750, 351);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"INGRESE EL NÚMERO DE ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(738, 364);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"PARTIDA QUE DESEA CARGAR";
			// 
			// textBoxPartida
			// 
			this->textBoxPartida->Location = System::Drawing::Point(772, 380);
			this->textBoxPartida->Name = L"textBoxPartida";
			this->textBoxPartida->Size = System::Drawing::Size(100, 20);
			this->textBoxPartida->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button2->Location = System::Drawing::Point(732, 277);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 49);
			this->button2->TabIndex = 18;
			this->button2->Text = L"LISTA DE PUNTAJES";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// textboxNomPartida
			// 
			this->textboxNomPartida->Location = System::Drawing::Point(772, 57);
			this->textboxNomPartida->Name = L"textboxNomPartida";
			this->textboxNomPartida->Size = System::Drawing::Size(100, 20);
			this->textboxNomPartida->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(762, 41);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"LA NUEVA PARTIDA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(750, 28);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"INGRESE EL  NOMBRE DE ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(962, 498);
			this->Controls->Add(this->textboxNomPartida);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxPartida);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonGuardarPartida);
			this->Controls->Add(this->buttonPausarPartida);
			this->Controls->Add(this->buttonCargarPartida);
			this->Controls->Add(this->buttonNuevaPartida);
			this->Controls->Add(this->buttonPonerEspanta);
			this->Controls->Add(this->botonPlantarOrdenado);
			this->Controls->Add(this->botonPlantarSplay);
			this->Controls->Add(this->botonPlantarAVL);
			this->Controls->Add(this->botonPlantarHeap);
			this->Controls->Add(this->abrirMercadoButt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

			numHilos = 0;
			botones = gcnew cli::array<System::Windows::Forms::Button^, 2>(FILAS, COLUMNAS);
			hilos = gcnew cli::array<System::Threading::Thread^>(1000);
			for (int fila = 0; fila < FILAS; fila++)
			{
				for (int columna = 0; columna < COLUMNAS; columna++)
				{
					System::Windows::Forms::Button^ boton = gcnew System::Windows::Forms::Button();
					boton->Text = "Boton " + (fila + 1) + ", " + (columna + 1);
					boton->Tag = gcnew System::Drawing::Point(fila, columna);
					boton->Click += gcnew System::EventHandler(this, &MyForm::Boton_Click);

					// Agregar el botón al arreglo
					botones[fila, columna] = boton;
					boton->Text = "";

					// Agregar el botón al tableLayoutPanel1
					tableLayoutPanel1->Controls->Add(boton, columna, fila);
				}
			}
			// Crear y configurar los botone
			// Dibujar la matriz inicial
			DibujarMatriz();
		}
	

		void MyForm::Boton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ boton = dynamic_cast<Button^>(sender);
			Point pos = (Point)boton->Tag;
			int fila = pos.X;
			int columna = pos.Y;
			if (arbolesBinarios[fila][columna]!=NULL) {
				MessageBox::Show("Ubicacion: "+ arbolesBinarios[fila][columna]->fila+","+ arbolesBinarios[fila][columna]->columna+
					"\nCantidad de frutos: " + arbolesBinarios[fila][columna]->cantidadFrutosA+ "\nMonto total: "+ arbolesBinarios
				[fila][columna]->montoTotal+ "\nVendidos: "+ arbolesBinarios[fila][columna]->cantidadFrutosVendidos+ "\nPerdidos: "
				+ arbolesBinarios[fila][columna]->cantidadFrutosPerdidos);
			}
			
		}


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			CoolFarm::Settings^ settings = gcnew CoolFarm::Settings();
			settings->Show();
		}

		void DibujarMatriz() {
			for (int i = 0; i < FILAS; i++) {
				for (int j = 0; j < COLUMNAS; j++) {

					if (botones[i, j]->Text == "E" /* || arbolesBinarios[i][j]->letra == "E"*/) {
						botones[i, j]->BackColor = Color::Gold;

						// Verificar si las posiciones adyacentes existen
						if (j + 1 < COLUMNAS) {
							botones[i, j + 1]->BackColor = Color::Gold;
						}
						if (j - 1 >= 0) {
							botones[i, j - 1]->BackColor = Color::Gold;
						}
						if (i + 1 < FILAS) {
							botones[i + 1, j]->BackColor = Color::Gold;
							if (j + 1 < COLUMNAS) {
								botones[i + 1, j + 1]->BackColor = Color::Gold;
							}
							if (j - 1 >= 0) {
								botones[i + 1, j - 1]->BackColor = Color::Gold;
							}
						}
						if (i - 1 >= 0) {
							botones[i - 1, j]->BackColor = Color::Gold;
							if (j + 1 < COLUMNAS) {
								botones[i - 1, j + 1]->BackColor = Color::Gold;
							}
							if (j - 1 >= 0) {
								botones[i - 1, j - 1]->BackColor = Color::Gold;
							}
						}
					}
					if (botones[i, j]->BackColor != Color::Gold) {
						botones[i, j]->BackColor = Color::YellowGreen;
					}
					if (i == granjero->columna && j == granjero->fila) {
						botones[i, j]->BackColor = Color::Red;
					}
					
				}
			}
		}

		void MoverObjeto(int x, int y) {
			// Verificar que las nuevas coordenadas estén dentro de los límites de la matriz
			if (x >= 0 && x < COLUMNAS && y >= 0 && y < FILAS) {
				granjero->fila = x;
				granjero->columna = y;
				DibujarMatriz();
			}
		}

		void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e) {
			// Obtener la tecla presionada
			Keys tecla = e->KeyCode;

			// Mover el objeto en función de la tecla presionada
			switch (tecla) {
			case Keys::W:
				MoverObjeto(granjero->fila, granjero->columna - 1);
				break;
			case Keys::S:
				MoverObjeto(granjero->fila, granjero->columna + 1);
				break;
			case Keys::A:
				MoverObjeto(granjero->fila - 1, granjero->columna);
				break;
			case Keys::D:
				MoverObjeto(granjero->fila + 1, granjero->columna);
				break;
			}
		}


		private: System::Void abrirMercadoButt_Click(System::Object^ sender, System::EventArgs^ e) {
			CoolFarm::Mercadoh^ mercado = gcnew CoolFarm::Mercadoh();
			float precios = this->calcularPrecio();
			precioBinario += precios;
			precioHeap += precios;
			precioAVL += precios;
			precioSplay += precios;
			precioEspanta += precios;
			mercado->Show();
		}

		float calcularPrecio() {
			float resul;
			float precio = 1 + rand() % 20;
			int rebaja = rand() % 2;
			if (rebaja == 0) {
				resul = -(precio / 100.0);
			}
			else {
				resul = precio / 100.0;
			}
			return resul;
		}

		void plantar(arbol * arbol, System::String^ letra) {
			arbol->tipo = toStandardString(letra);
			arbolesBinarios[granjero->columna][granjero->fila] = arbol;
			botones[granjero->columna, granjero->fila]->Text = letra;
			arbol->columna = granjero->columna;
			arbol->fila = granjero->fila;

		}

		BinarioOrdenado* BTemp = new BinarioOrdenado();
		Heap* HTemp = new Heap(10);
		avl_tree* AVTemp = new avl_tree();
		SplayTree* STemp = new SplayTree();

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colaHeap.empty()) {
			MessageBox::Show("No hay arboles de este tipo");
		}
		else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
			MessageBox::Show("Ya hay un elemento en esta posicion");
			return;
		}
		else{
			Heap * a = colaHeap.front();
			HTemp = a;
			System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThreadHeap);
			System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
			numHilos++;
			hilos[numHilos - 1] = thread;
			thread->Start();
			plantar(a, "h");
			arregloHeap.push_back(a);
			colaHeap.pop();
		}
	}


private: System::Void botonPlantarAVL_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colaAVL.empty()) {
		MessageBox::Show("No hay arboles de este tipo");
		return;
	}
	else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
		MessageBox::Show("Ya hay un elemento en esta posicion");
		return;
	}
	else {
		avl_tree * a = colaAVL.front();
		AVTemp = a;
		System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThreadAVL);
		System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
		numHilos++;
		hilos[numHilos - 1] = thread;
		thread->Start();
		plantar(a, "a");
		arregloAVL.push_back(a);
		colaAVL.pop();
	}
}
private: System::Void botonPlantarSplay_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colaSplay.empty()) {
		MessageBox::Show("No hay arboles de este tipo");
		return;
	}
	else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
		MessageBox::Show("Ya hay un elemento en esta posicion");
		return;
	}
	else {
		SplayTree * a = colaSplay.front();
		STemp = a;
		System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThreadSplay);
		System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
		numHilos++;
		hilos[numHilos - 1] = thread;
		thread->Start();
		plantar(a, "s");
		arregloSplay.push_back(a);
		colaSplay.pop();
	}
}	
	   

private: System::Void botonPlantarOrdenado_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colaBinarioOrdenado.empty()) {
		MessageBox::Show("No hay arboles de este tipo");
		return;
	}
	else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
		MessageBox::Show("Ya hay un elemento en esta posicion");
		return;
	}
	else {
		BinarioOrdenado * a = colaBinarioOrdenado.front();
		BTemp = a;
		System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThread);
		System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
		numHilos++;
		hilos[numHilos-1] = thread;
		thread->Start();
		plantar(a, "o");
		arregloBinario.push_back(a);
		colaBinarioOrdenado.pop();
	}
	
}
	   void GenerateFruitsThread()
	   {
		   while (true) {
			   // Llamada al método generateFruits con los parámetros requeridos
			   while (isRunning) {
				   generateFruits(BTemp);
			   }
		   }
	   }

	   void GenerateFruitsThreadHeap() {
		   while (true) {
			   // Llamada al método generateFruits con los parámetros requeridos
			   while (isRunning) {
				   generateFruitsHeap(HTemp);
			   }
		   }
	   }

	   void GenerateFruitsThreadAVL() {
		   while (true) {
			   // Llamada al método generateFruits con los parámetros requeridos
			   while (isRunning) {
				   generateFruitsAVL(AVTemp);
			   }
		   }
	   }

	   void GenerateFruitsThreadSplay() {
		   while (true) {
			   // Llamada al método generateFruits con los parámetros requeridos
			   while (isRunning) {
				   generateFruitsSplay(STemp);
			   }
		   }
	   }

private: System::Void buttonPonerEspanta_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colaEspantapajaro.empty()) {
		MessageBox::Show("No tienes espantapajaros");
		return;
	}
	else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
			MessageBox::Show("Ya hay un elemento en esta posicion");
			return;
	}
	else {
		arbol* a = colaEspantapajaro.front();
		plantar(a, "E");
		colaEspantapajaro.pop();
		DibujarMatriz();
	}
	

}
	   double generateRandomNumber(double min, double max) {
		   // Crea un generador de números aleatorios
		   std::random_device rd;
		   std::mt19937 gen(rd());

		   // Crea una distribución uniforme en el rango especificado
		   std::uniform_real_distribution<double> dis(min, max);

		   // Genera y devuelve un número aleatorio en el rango especificado
		   return dis(gen);
	   }

	   void generateFruits(BinarioOrdenado * arbol) {
			   //label1->Text = columna + " " + fila;

			   // Esperar 5 segundos
			   std::this_thread::sleep_for(std::chrono::seconds(creceBinario));
			   botones[arbol->columna, arbol->fila]->Text = "O";
			   while (isRunning) {
				// Esperar 5 segundos
				   botones[arbol->columna, arbol->fila]->Text = "O";
				   std::this_thread::sleep_for(std::chrono::seconds(tiempoCosechaB));
				   for (int i = 0; i < cosechaB; i++) {
					   double random = generateRandomNumber(0.001, 5.0);
					   arbol->insertNode(arbol->root, random);
					   label1->Text = System::Convert::ToString(random);
					   this->Refresh();
				   }

				   
			   }

			   // Espera 5 segundos

	   }

	   void generateFruitsHeap(Heap* arbol) {
		   //label1->Text = columna + " " + fila;
		   // Esperar 5 segundos
		   std::this_thread::sleep_for(std::chrono::seconds(creceH));
		   botones[arbol->columna, arbol->fila]->Text = "H";
		   int counter=0;
		   while (isRunning) {
			   if (counter < arbol->tamanoMaximo) {
				   counter++;
				   // Esperar 5 segundos
				   botones[arbol->columna, arbol->fila]->Text = "H";
				   std::this_thread::sleep_for(std::chrono::seconds(tiempoCosechaH));
				   for (int i = 0; i < cosechaH;i++) {
					   double random = generateRandomNumber(0.001, 5.0);
					   arbol->insertar(random);
					   label1->Text = System::Convert::ToString(random);
					   this->Refresh();
				   }

			   }
			   else {
				   botones[arbol->columna, arbol->fila]->Text = "H";
			   }

		   
		   }
		   // Espera 5 segundos
	   }

	   void generateFruitsAVL(avl_tree* arbol) {
		   //label1->Text = columna + " " + fila;
		   // Esperar 5 segundos
		   std::this_thread::sleep_for(std::chrono::seconds(creceA));
		   botones[arbol->columna, arbol->fila]->Text = "A";
		   while (isRunning) {
			   // Esperar 5 segundos
			   botones[arbol->columna, arbol->fila]->Text = "A";
			   std::this_thread::sleep_for(std::chrono::seconds(tiempoCosechaA));
			   for (int i = 0; i < cosechaA;i++) {
				   double random = generateRandomNumber(2.0, 20.0);
				   arbol->r=arbol->insert(arbol->r, random);
				   label1->Text = System::Convert::ToString(random);
				   this->Refresh();
			   }
		   }
		   // Espera 5 segundos
	   }

	   void generateFruitsSplay(SplayTree* arbol) {

		   std::this_thread::sleep_for(std::chrono::seconds(creceS));
		   botones[arbol->columna, arbol->fila]->Text = "S";
		   while (isRunning) {
			   // Esperar 5 segundos
			   botones[arbol->columna, arbol->fila]->Text = "S";
			   std::this_thread::sleep_for(std::chrono::seconds(tiempoCosechaS));
			   for (int i = 0; i < cosechaS; i++) {
				   double random = generateRandomNumber(5.0, 50.0);
				   arbol->root=arbol->Insert(random);
				   label1->Text = System::Convert::ToString(random);
				   this->Refresh();
			   }
		   }
	   }



private: System::Void buttonPausarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isRunning) {
		isRunning = false;
		MessageBox::Show("Partida Pausada");
	}
	else {
		isRunning = true;
		MessageBox::Show("Partida Reanudada");
	}
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	for (int i = 0; i < numHilos; i++) {
		hilos[i]->Abort();
	}
}
private:  static String^ toSystemString(string str) {
	return gcnew String(str.c_str());
}

private: System::Void buttonNuevaPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	nombrePartida = toStandardString(this->textboxNomPartida->Text);
	isRunning = true;
	if (isRunning) {
		MessageBox::Show("Comenzando Partida " + this->textboxNomPartida->Text);
	}
	
}

	void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

private: System::Void buttonGuardarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nombrePartida == "") {
		MessageBox::Show("Debe iniciar una partida antes de guardar.");
	}
	else {
		nombreJson = "partida" + nombrePartida + ".json";
		guardarDatosJuego(nombreJson);
	}
}
	   
Json::Value guardarArbolBin(Node* raiz) {

	Json::Value j;

	if (raiz == nullptr) {
		j["data"] = Json::nullValue;
	}
	else {
		j["data"] = raiz->value;
		j["left"] = guardarArbolBin(raiz->left);
		j["right"] = guardarArbolBin(raiz->right);
	}

	return j;
}


Json::Value guardarArbolHeap(Heap* heap) {
	Json::Value j;
	j["tamano"] = heap->tamano;
	j["tamanoMaximo"] = heap->tamanoMaximo;

	// Guardar los elementos del arreglo en un arreglo JSON
	Json::Value arrJson(Json::arrayValue);
	for (int i = 0; i < heap->tamano; i++) {
		arrJson.append(heap->arr[i]);
	}
	j["arr"] = arrJson;

	return j;
}


Json::Value guardarArbolAVL(avl* avlTree) {
	Json::Value j;

	// Guardar los elementos del árbol en un arreglo JSON
	Json::Value arrJson(Json::arrayValue);
	guardarArbolAVLRec(avlTree->r, arrJson);
	j["arbol"] = arrJson;

	return j;
}

void guardarArbolAVLRec(avl* node, Json::Value& arrJson) {
	if (node == nullptr) {
		return;
	}

	Json::Value nodoJson;
	nodoJson["d"] = node->d;
	nodoJson["l"] = Json::nullValue; // Opcional: Puedes manejar nodos nulos de esta manera
	nodoJson["r"] = Json::nullValue; // Opcional: Puedes manejar nodos nulos de esta manera

	if (node->l != nullptr) {
		nodoJson["l"] = Json::Value(Json::objectValue);
		guardarArbolAVLRec(node->l, nodoJson["l"]);
	}

	if (node->r != nullptr) {
		nodoJson["r"] = Json::Value(Json::objectValue);
		guardarArbolAVLRec(node->r, nodoJson["r"]);
	}

	arrJson.append(nodoJson);
}

Json::Value guardarArbolSplay(s* raiz) {
	Json::Value j;

	// Guardar los elementos del árbol en un arreglo JSON
	Json::Value arrJson(Json::arrayValue);
	guardarArbolSplayRec(raiz, arrJson);
	j["arbol"] = arrJson;

	return j;
}

void guardarArbolSplayRec(s* node, Json::Value& arrJson) {
	if (node == nullptr) {
		return;
	}

	Json::Value nodoJson;
	nodoJson["k"] = node->k;
	nodoJson["lch"] = Json::nullValue; // Opcional: Puedes manejar nodos nulos de esta manera
	nodoJson["rch"] = Json::nullValue; // Opcional: Puedes manejar nodos nulos de esta manera

	if (node->lch != nullptr) {
		nodoJson["lch"] = Json::Value(Json::objectValue);
		guardarArbolSplayRec(node->lch, nodoJson["lch"]);
	}

	if (node->rch != nullptr) {
		nodoJson["rch"] = Json::Value(Json::objectValue);
		guardarArbolSplayRec(node->rch, nodoJson["rch"]);
	}

	arrJson.append(nodoJson);
}

Json::Value guardarMatriz() {
	Json::Value matrizJson(Json::arrayValue);

	for (int i = 0; i < 10; ++i) {
		Json::Value filaJson(Json::arrayValue);

		for (int j = 0; j < 10; ++j) {
			const arbol* arbolActual = arbolesBinarios[i][j];
			if (arbolActual != nullptr) {
				Json::Value arbolJson;
				if (botones[i, j]->Text != "") {
					string gg = msclr::interop::marshal_as<std::string>(botones[i, j]->Text);
					arbolJson["letra"] = gg;
					if (gg == "O") {
						BinarioOrdenado* arbol = (BinarioOrdenado*)arbolActual;
						arbolJson["datosArbol"] = guardarArbolBin(arbol->root);
					}
					else if (gg == "H") {
						Heap * heapraiz = (Heap*)arbolActual;
						arbolJson["datosArbol"] = guardarArbolHeap(heapraiz);
					}
					else if (gg == "A") {
						avl_tree* avlraiz = (avl_tree*)arbolActual;
						arbolJson["datosArbol"] = guardarArbolAVL(avlraiz->r);
					}
					else if (gg == "S") {
						SplayTree* splayraiz = (SplayTree*)arbolActual;
						arbolJson["datosArbol"] = guardarArbolSplay(splayraiz->root);
					}
				}
				arbolJson["fila"] = arbolActual->fila;
				arbolJson["columna"] = arbolActual->columna;
				arbolJson["cantidadFrutos"] = arbolActual->cantidadFrutosA;
				arbolJson["montoTotal"] = arbolActual->montoTotal;
				arbolJson["frutosVendidos"] = arbolActual->cantidadFrutosVendidos;
				arbolJson["frutosPerdidos"] = arbolActual->cantidadFrutosPerdidos;


				filaJson.append(arbolJson);
			}
			else {
				filaJson.append(Json::Value());
			}
		}

		matrizJson.append(filaJson);
	}
	return matrizJson;
}

	void guardarDatosJuego(const std::string& nombreArchivo) {
		Json::Value datosJuego;

		datosJuego["NombrePartida"] = nombreJson;
		datosJuego["Matriz"] = guardarMatriz();

		datosJuego["ColaBinario"] = colaBinarioOrdenado.size();
		datosJuego["ColaEspanta"] = colaEspantapajaro.size();
		datosJuego["ColaHEAP"] = colaHeap.size();
		datosJuego["ColaAVL"] = colaAVL.size();
		datosJuego["ColaSplay"] = colaSplay.size();

		datosJuego["SettingPorcentOveja"] = porcentOvejas;
		datosJuego["SettingAparicionOveja"] = aparicionOvejas;
		datosJuego["SettingTiempoOveja"] = tiempoAparicionOvejas;
		datosJuego["SettingfrutosOveja"] = frutosOvejas;
		datosJuego["SettingTiempoFrutosOveja"] = tiempoFrutosOvejas;

		datosJuego["SettingPorcentCuervos"] = porcentCuervos;
		datosJuego["SettingAparicionCuervos"] = aparicionCuervos;
		datosJuego["SettingTiempoCuervos"] = tiempoAparicionCuervos;
		datosJuego["SettingfrutosCuervos"] = frutosCuervos;
		datosJuego["SettingTiempoFrutosCuervos"] = tiempoFrutosCuervos;

		datosJuego["SettingPorcentPlagas"] = porcentPlagas;
		datosJuego["SettingAparicionPlagas"] = aparicionPlagas;
		datosJuego["SettingTiempoPlagas"] = tiempoAparicionPlagas;

		datosJuego["SettingsMercadoAparicion"] = mercadoAparicion;
		datosJuego["SettingsMercadoApertura"] = mercadoApertura;

		datosJuego["FrutosBinario"] = frutosBinario;
		datosJuego["FrutosHeap"] = frutosHeap;
		datosJuego["FrutosAVL"] = frutosAVL;
		datosJuego["FrutosSplay"] = frutosSplay;

		datosJuego["PrecioBinario"] = precioBinario;
		datosJuego["creceBinario"] = creceBinario;
		datosJuego["cosechaB"] = cosechaB;
		datosJuego["tiempoCosechaB"] = tiempoCosechaB;

		datosJuego["PrecioHeap"] = precioHeap;
		datosJuego["creceH"] = creceH;
		datosJuego["cosechaH"] = cosechaH;
		datosJuego["tiempoCosechaH"] = tiempoCosechaH;

		datosJuego["PrecioAVL"] = precioAVL;
		datosJuego["creceA"] = creceA;
		datosJuego["cosechaA"] = cosechaA;
		datosJuego["tiempoCosechaA"] = tiempoCosechaA;

		datosJuego["PrecioSplay"] = precioSplay;
		datosJuego["creceS"] = creceS;
		datosJuego["cosechaS"] = cosechaS;
		datosJuego["tiempoCosechaS"] = tiempoCosechaS;

		datosJuego["PrecioEspanta"] = precioEspanta;

		datosJuego["EspantapajarosDispo"] = espantapajarosDispo;

		datosJuego["Dinero"] = dinero;


		std::ofstream archivo(nombreArchivo);

		if (archivo.is_open())
		{
			// Convertir el objeto JSON a una cadena de texto
			std::string jsonString = datosJuego.toStyledString();

			// Escribir la cadena de texto en el archivo
			archivo << jsonString;

			// Cerrar el archivo
			archivo.close();

			MessageBox::Show("Datos del juego guardados");
		}
		else{
			MessageBox::Show("Error al abrir el archivo");
		}
	}

private: static string toStandardString(System::String^ string) {
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}


private: System::Void buttonCargarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	ifstream archivo(toStandardString(this->textBoxPartida->Text));
	if (archivo.is_open()) {
		Json::CharReaderBuilder builder;
		Json::Value root; // Inicializar el objeto root
		//archivo >> root;
		JSONCPP_STRING errs;

		if (Json::parseFromStream(builder, archivo, &root, &errs)) {
			nombreJson = root["NombrePartida"].asString();
			MessageBox::Show(toSystemString(nombreJson));
			
			for (int i = 0; i < 10; ++i) {
				for (int j = 0; j < 10; ++j) {
					if (root["Matriz"][i][j]["letra"] != NULL) {
						botones[i, j]->Text = toSystemString( root["Matriz"][i][j]["letra"].asString());
						if (root["Matriz"][i][j]["letra"].asString() == "O") {
							BinarioOrdenado* a = new BinarioOrdenado();
							a->fila = root["Matriz"][i][j]["columna"].asInt();
							a->columna = root["Matriz"][i][j]["fila"].asInt();
							a->cantidadFrutosA = root["Matriz"][i][j]["cantidadFrutos"].asInt();
							a->montoTotal = root["Matriz"][i][j]["montoTotal"].asDouble();
							a->cantidadFrutosVendidos = root["Matriz"][i][j]["frutosVendidos"].asInt();
							a->cantidadFrutosPerdidos = root["Matriz"][i][j]["frutosPerdidos"].asInt();
							arbolesBinarios[i][j] = a;
							BTemp = a;
							System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThread);
							System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
							numHilos++;
							hilos[numHilos - 1] = thread;
							thread->Start();
							arregloBinario.push_back(a);

							
						}
						if (root["Matriz"][i][j]["letra"].asString() == "H") {
							Heap* a = new Heap(30);
							a->fila = root["Matriz"][i][j]["columna"].asInt();
							a->columna = root["Matriz"][i][j]["fila"].asInt();
							a->cantidadFrutosA = root["Matriz"][i][j]["cantidadFrutos"].asInt();
							a->montoTotal = root["Matriz"][i][j]["montoTotal"].asDouble();
							a->cantidadFrutosVendidos = root["Matriz"][i][j]["frutosVendidos"].asInt();
							a->cantidadFrutosPerdidos = root["Matriz"][i][j]["frutosPerdidos"].asInt();
							arbolesBinarios[i][j] = a;
							HTemp = a;
							System::Threading::ThreadStart^ threadStart = gcnew System::Threading::ThreadStart(this, &MyForm::GenerateFruitsThreadHeap);
							System::Threading::Thread^ thread = gcnew System::Threading::Thread(threadStart);
							numHilos++;
							hilos[numHilos - 1] = thread;
							thread->Start();
							arregloHeap.push_back(a);
						}
					}
					
				}
			}
			
			porcentOvejas = root["SettingPorcentOveja"].asInt();
			aparicionOvejas = root["SettingAparicionOveja"].asInt();
			tiempoAparicionOvejas = root["SettingTiempoOveja"].asInt();
			frutosOvejas = root["SettingfrutosOveja"].asInt();
			tiempoFrutosOvejas = root["SettingTiempoFrutosOveja"].asInt();

			porcentCuervos = root["SettingPorcentCuervos"].asInt();
			aparicionCuervos = root["SettingAparicionCuervos"].asInt();
			tiempoAparicionCuervos = root["SettingTiempoCuervos"].asInt();
			frutosCuervos = root["SettingfrutosCuervos"].asInt();
			tiempoFrutosCuervos = root["SettingTiempoFrutosCuervos"].asInt();

			porcentPlagas = root["SettingPorcentPlagas"].asInt();
			aparicionPlagas = root["SettingAparicionPlagas"].asInt();
			tiempoAparicionPlagas = root["SettingTiempoPlagas"].asInt();

			mercadoAparicion = root["SettingsMercadoAparicion"].asInt();
			mercadoApertura = root["SettingsMercadoApertura"].asInt();

			frutosBinario = root["FrutosBinario"].asInt();
			frutosHeap = root["FrutosHeap"].asInt();
			frutosAVL = root["FrutosAVL"].asInt();
			frutosSplay = root["FrutosSplay"].asInt();

			precioBinario = root["PrecioBinario"].asFloat();
			creceBinario = root["creceBinario"].asInt();
			cosechaB = root["cosechaB"].asInt();
			tiempoCosechaB = root["tiempoCosechaB"].asInt();

			precioHeap = root["PrecioHeap"].asFloat();
			creceH = root["creceH"].asInt();
			cosechaH = root["cosechaH"].asInt();
			tiempoCosechaH = root["tiempoCosechaH"].asInt();

			precioAVL = root["PrecioAVL"].asFloat();
			creceA = root["creceA"].asInt();
			cosechaA = root["cosechaA"].asInt();
			tiempoCosechaA = root["tiempoCosechaA"].asInt();

			precioSplay = root["PrecioSplay"].asFloat();
			creceS = root["creceS"].asInt();
			cosechaS = root["cosechaH"].asInt();
			tiempoCosechaS = root["tiempoCosechaS"].asInt();

			precioEspanta = root["PrecioEspanta"].asFloat();

			espantapajarosDispo = root["EspantapajarosDispo"].asInt();

			dinero = root["Dinero"].asFloat();

			int a = root["ColaBinario"].asInt();
			int b = root["ColaEspanta"].asInt();
			int c = root["ColaHEAP"].asInt();
			int d = root["ColaAVL"].asInt();
			int e = root["ColaSplay"].asInt();

			while (a != 0) {
				BinarioOrdenado* a = new BinarioOrdenado();
				colaBinarioOrdenado.push(a);
				a--;
			}
			while (b != 0) {
				Espantapajaros* a = new Espantapajaros();
				colaEspantapajaro.push(a);
				b--;
			}
			while (c != 0) {
				Heap* a = new Heap(10);
				colaHeap.push(a);
				c--;
			}
			while (d != 0) {
				avl_tree* a = new avl_tree();
				colaAVL.push(a);
				d--;
			}
			while (e != 0) {
				SplayTree* a = new SplayTree();
				colaSplay.push(a);
				e--;
			}

			MessageBox::Show("cargado");
			isRunning = true;
			this->DibujarMatriz();
			archivo.close();
		}
		else {
			MessageBox::Show("Error al cargar el JSON.");
		}
	}
	else {
		MessageBox::Show("No existe una partida guardada con ese nombre.");
	}
}
bool CompararPorDineroDescendente(const Jugador& jugador1, const Jugador& jugador2) {
	return jugador1.dineroJugador > jugador2.dineroJugador;
}
	
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		for (const auto& entry : std::filesystem::directory_iterator(directoryPath)) {
			if (entry.path().extension() == ".json") {  // Verifica la extensión del archivo
				std::string filePath = entry.path().string();

				// Lee el archivo JSON
				std::ifstream file(filePath);
				Json::Value root;
				file >> root;

				// Accede a los datos dentro del archivo JSON
				std::string nombre = root["NombrePartida"].asString();
				float dinerito = root["Dinero"].asFloat();
				Jugador* a = new Jugador(dinerito, nombre);
				ranking->insertar(a);
			}
		}
		ordenarLista();
		NodoJugador* tmp = ranking->primerNodo;
		if (tmp != NULL) {
			Nombre1 = tmp->jugador->nombreJugador;
			dinero1 = tmp->jugador->dineroJugador;
			MessageBox::Show(toSystemString(Nombre1));
			if (tmp->siguiente != NULL) {
				tmp = tmp->siguiente;
			}
			if (Nombre1 != tmp->jugador->nombreJugador) {
				if (tmp != NULL) {
					Nombre2 = tmp->jugador->nombreJugador;
					dinero2 = tmp->jugador->dineroJugador;
					MessageBox::Show(toSystemString(Nombre2));
					if (tmp->siguiente != NULL) {
						tmp = tmp->siguiente;
					}
					if (Nombre2 != tmp->jugador->nombreJugador) {
						if (tmp != NULL) {
							Nombre3 = tmp->jugador->nombreJugador;
							dinero3 = tmp->jugador->dineroJugador;
							MessageBox::Show(toSystemString(Nombre3));
							if (tmp->siguiente != NULL) {
								tmp = tmp->siguiente;
							}
							if (Nombre3 != tmp->jugador->nombreJugador) {
								if (tmp != NULL) {
									Nombre4 = tmp->jugador->nombreJugador;
									dinero4 = tmp->jugador->dineroJugador;
									MessageBox::Show(toSystemString(Nombre4));
									if (tmp->siguiente != NULL) {
										tmp = tmp->siguiente;
									}
									if (Nombre4 != tmp->jugador->nombreJugador) {
										if (tmp != NULL) {
											Nombre5 = tmp->jugador->nombreJugador;
											dinero5 = tmp->jugador->dineroJugador;
											MessageBox::Show(toSystemString(Nombre5));
											if (tmp->siguiente != NULL) {
												tmp = tmp->siguiente;
											}
											if (Nombre5 != tmp->jugador->nombreJugador) {
												if (tmp != NULL) {
													Nombre6 = tmp->jugador->nombreJugador;
													dinero6 = tmp->jugador->dineroJugador;
													if (tmp->siguiente != NULL) {
														tmp = tmp->siguiente;
													}
													if (Nombre6 != tmp->jugador->nombreJugador) {
														if (tmp != NULL) {
															Nombre7 = tmp->jugador->nombreJugador;
															dinero7 = tmp->jugador->dineroJugador;
															if (tmp->siguiente != NULL) {
																tmp = tmp->siguiente;
															}
															if (Nombre7 != tmp->jugador->nombreJugador) {
																if (tmp != NULL) {
																	Nombre8 = tmp->jugador->nombreJugador;
																	dinero8 = tmp->jugador->dineroJugador;
																	if (tmp->siguiente != NULL) {
																		tmp = tmp->siguiente;
																	}
																	if (Nombre8 != tmp->jugador->nombreJugador) {
																		if (tmp != NULL) {
																			Nombre9 = tmp->jugador->nombreJugador;
																			dinero9 = tmp->jugador->dineroJugador;
																			if (tmp->siguiente != NULL) {
																				tmp = tmp->siguiente;
																			}
																			if (Nombre9 != tmp->jugador->nombreJugador) {
																				if (tmp != NULL) {
																					Nombre10 = tmp->jugador->nombreJugador;
																					dinero10 = tmp->jugador->dineroJugador;
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		CoolFarm::Puntajes^ puntajes = gcnew CoolFarm::Puntajes();
		puntajes->Show();
	}
		
};
}

