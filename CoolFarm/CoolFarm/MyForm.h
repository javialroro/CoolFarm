#pragma once

#include "Settings.h"
#include <iostream>
#include <fstream>
#include <functional>
#include <json\json.h>
#include <string>
#include <locale>
#include <msclr/marshal_cppstd.h>


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
			this->buttonNuevaPartida->Location = System::Drawing::Point(733, 29);
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
			this->buttonCargarPartida->Location = System::Drawing::Point(733, 96);
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
			this->buttonPausarPartida->Location = System::Drawing::Point(733, 161);
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
			this->buttonGuardarPartida->Location = System::Drawing::Point(733, 226);
			this->buttonGuardarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonGuardarPartida->Name = L"buttonGuardarPartida";
			this->buttonGuardarPartida->Size = System::Drawing::Size(182, 49);
			this->buttonGuardarPartida->TabIndex = 14;
			this->buttonGuardarPartida->Text = L"GUARDAR PARTIDA";
			this->buttonGuardarPartida->UseVisualStyleBackColor = false;
			this->buttonGuardarPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonGuardarPartida_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(962, 498);
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
			this->label1->Text = "Boton " + (fila + 1) + ", " + (columna + 1);

			// Aquí puedes acceder a la matriz de árboles binarios
			// usando las coordenadas fila y columna.
			// Por ejemplo:
		}


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			CoolFarm::Settings^ settings = gcnew CoolFarm::Settings();
			settings->Show();
		}

		void DibujarMatriz() {
			for (int i = 0; i < FILAS; i++) {
				for (int j = 0; j < COLUMNAS; j++) {

					if (botones[i, j]->Text == "E") {
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
		void CambiarTextoLabel() {
			this->label1->Text = "winchis";
		}

		/*void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e) {
			// Llamar al método para cambiar el texto del Label
			CambiarTextoLabel();
		}*/

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

			arbolesBinarios[granjero->columna][granjero->fila] = arbol;
			botones[granjero->columna, granjero->fila]->Text = letra;
			arbol->columna = granjero->columna;
			arbol->fila = granjero->fila;

		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colaHeap.empty()) {
			MessageBox::Show("No hay arboles de este tipo");
		}
		else if (arbolesBinarios[granjero->columna][granjero->fila] != NULL) {
			MessageBox::Show("Ya hay un elemento en esta posicion");
			return;
		}
		else{
			arbol * a = colaHeap.front();
			plantar(a, "H");
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
		arbol * a = colaAVL.front();
		plantar(a, "A");
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
		arbol * a = colaSplay.front();
		plantar(a, "S");
		colaSplay.pop();
	}
}	
	   BinarioOrdenado*  BTemp= new BinarioOrdenado();

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
		plantar(a, "O");
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
	   void generateFruits(BinarioOrdenado * arbol) {
			   String^ columna = System::Convert::ToString(arbol->columna);
			   String^ fila = System::Convert::ToString(arbol->fila);
			   label1->Text = columna + " " + fila;

			   // Esperar 5 segundos
			   std::this_thread::sleep_for(std::chrono::seconds(5));

			   // Poner el label en blanco
			   label1->Text = "";

			   // Esperar 5 segundos antes de la próxima actualización
			   std::this_thread::sleep_for(std::chrono::seconds(5));



			   //std::this_thread::sleep_for(std::chrono::seconds(5));

			   // Espera 5 segundos

			   // Código para generar frutos y agregarlos al árbol Binario
			   // ...
			   //int random = rand() % 100 + 1;
			   //Node* nodo = new Node(random);
			   //arbol->insertNode(nodo, random);

	   }



private: System::Void buttonPausarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isRunning) {
		isRunning = false;
		MessageBox::Show("Partida Pausada");
	}
	else {
		isRunning = true;
		MessageBox::Show("Partida Despausada");
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
	contNombrePar++;
	nombrePartida = contNombrePar;
	isRunning = true;
	if (isRunning) {
		MessageBox::Show("Comenzando Partida " + this->toSystemString(to_string(nombrePartida)));
	}
	
}

	   void MarshalString(String^ s, string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

private: System::Void buttonGuardarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nombrePartida == 0) {
		MessageBox::Show("Debe iniciar una partida antes de guardar.");
	}
	else {
		guardarDatosJuego(to_wstring(nombrePartida));
	}
}
	Json::Value guardarMatriz() {
		Json::Value matrizJson(Json::arrayValue);

		for (int i = 0; i < 10; ++i) {
			Json::Value filaJson(Json::arrayValue);

			for (int j = 0; j < 10; ++j) {
				const arbol* arbolActual = arbolesBinarios[i][j];
				if (arbolActual != nullptr) {
					Json::Value arbolJson;
					arbolJson["fila"] = arbolActual->fila;
					arbolJson["columna"] = arbolActual->columna;
					if (botones[i, j]->Text != "") {
						string gg = msclr::interop::marshal_as<std::string>(botones[i, j]->Text);
						arbolJson["letra"] = gg;
					}
					arbolJson["ejecutando"] = arbolActual->ejecutando;

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

	void guardarDatosJuego(const std::wstring& nombreArchivo) {
		Json::Value datosJuego;

		datosJuego["NombrePartida"] = nombrePartida;
		datosJuego["Matriz"] = guardarMatriz();

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
		datosJuego["PrecioHeap"] = precioHeap;
		datosJuego["PrecioAVL"] = precioAVL;
		datosJuego["PrecioSplay"] = precioSplay;
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

private: System::Void buttonCargarPartida_Click(System::Object^ sender, System::EventArgs^ e) {
	CoolFarm::BuscarPartida^ buscar = gcnew CoolFarm::BuscarPartida();
	buscar->Show();
}
};
}

