#pragma once

#include "Settings.h"
#include <iostream>
#include <fstream>
#include <functional>


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
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				51)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(389, 39);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(501, 500);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(256, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"DEBUG";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Location = System::Drawing::Point(14, 20);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SETTINGS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// abrirMercadoButt
			// 
			this->abrirMercadoButt->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->abrirMercadoButt->Location = System::Drawing::Point(14, 64);
			this->abrirMercadoButt->Margin = System::Windows::Forms::Padding(2);
			this->abrirMercadoButt->Name = L"abrirMercadoButt";
			this->abrirMercadoButt->Size = System::Drawing::Size(99, 32);
			this->abrirMercadoButt->TabIndex = 5;
			this->abrirMercadoButt->Text = L"MERCADO";
			this->abrirMercadoButt->UseVisualStyleBackColor = false;
			this->abrirMercadoButt->Click += gcnew System::EventHandler(this, &MyForm::abrirMercadoButt_Click);
			// 
			// botonPlantarHeap
			// 
			this->botonPlantarHeap->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarHeap->Location = System::Drawing::Point(14, 291);
			this->botonPlantarHeap->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarHeap->Name = L"botonPlantarHeap";
			this->botonPlantarHeap->Size = System::Drawing::Size(148, 32);
			this->botonPlantarHeap->TabIndex = 6;
			this->botonPlantarHeap->Text = L"PLANTAR HEAP";
			this->botonPlantarHeap->UseVisualStyleBackColor = false;
			this->botonPlantarHeap->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// botonPlantarAVL
			// 
			this->botonPlantarAVL->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarAVL->Location = System::Drawing::Point(14, 341);
			this->botonPlantarAVL->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarAVL->Name = L"botonPlantarAVL";
			this->botonPlantarAVL->Size = System::Drawing::Size(148, 32);
			this->botonPlantarAVL->TabIndex = 7;
			this->botonPlantarAVL->Text = L"PLANTAR AVL";
			this->botonPlantarAVL->UseVisualStyleBackColor = false;
			this->botonPlantarAVL->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarAVL_Click);
			// 
			// botonPlantarSplay
			// 
			this->botonPlantarSplay->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarSplay->Location = System::Drawing::Point(14, 389);
			this->botonPlantarSplay->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarSplay->Name = L"botonPlantarSplay";
			this->botonPlantarSplay->Size = System::Drawing::Size(148, 32);
			this->botonPlantarSplay->TabIndex = 8;
			this->botonPlantarSplay->Text = L"PLANTAR SPLAY";
			this->botonPlantarSplay->UseVisualStyleBackColor = false;
			this->botonPlantarSplay->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarSplay_Click);
			// 
			// botonPlantarOrdenado
			// 
			this->botonPlantarOrdenado->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarOrdenado->Location = System::Drawing::Point(14, 435);
			this->botonPlantarOrdenado->Margin = System::Windows::Forms::Padding(2);
			this->botonPlantarOrdenado->Name = L"botonPlantarOrdenado";
			this->botonPlantarOrdenado->Size = System::Drawing::Size(148, 43);
			this->botonPlantarOrdenado->TabIndex = 9;
			this->botonPlantarOrdenado->Text = L"PLANTAR B ORDENADO";
			this->botonPlantarOrdenado->UseVisualStyleBackColor = false;
			this->botonPlantarOrdenado->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarOrdenado_Click);
			// 
			// buttonPonerEspanta
			// 
			this->buttonPonerEspanta->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPonerEspanta->Location = System::Drawing::Point(14, 493);
			this->buttonPonerEspanta->Margin = System::Windows::Forms::Padding(2);
			this->buttonPonerEspanta->Name = L"buttonPonerEspanta";
			this->buttonPonerEspanta->Size = System::Drawing::Size(148, 46);
			this->buttonPonerEspanta->TabIndex = 10;
			this->buttonPonerEspanta->Text = L"COLOCAR ESPANTAPAJAROS";
			this->buttonPonerEspanta->UseVisualStyleBackColor = false;
			this->buttonPonerEspanta->Click += gcnew System::EventHandler(this, &MyForm::buttonPonerEspanta_Click);
			// 
			// buttonNuevaPartida
			// 
			this->buttonNuevaPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonNuevaPartida->Location = System::Drawing::Point(977, 36);
			this->buttonNuevaPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonNuevaPartida->Name = L"buttonNuevaPartida";
			this->buttonNuevaPartida->Size = System::Drawing::Size(243, 60);
			this->buttonNuevaPartida->TabIndex = 11;
			this->buttonNuevaPartida->Text = L"NUEVA PARTIDA";
			this->buttonNuevaPartida->UseVisualStyleBackColor = false;
			// 
			// buttonCargarPartida
			// 
			this->buttonCargarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonCargarPartida->Location = System::Drawing::Point(977, 118);
			this->buttonCargarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonCargarPartida->Name = L"buttonCargarPartida";
			this->buttonCargarPartida->Size = System::Drawing::Size(243, 60);
			this->buttonCargarPartida->TabIndex = 12;
			this->buttonCargarPartida->Text = L"CARGAR PARTIDA";
			this->buttonCargarPartida->UseVisualStyleBackColor = false;
			// 
			// buttonPausarPartida
			// 
			this->buttonPausarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPausarPartida->Location = System::Drawing::Point(977, 198);
			this->buttonPausarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonPausarPartida->Name = L"buttonPausarPartida";
			this->buttonPausarPartida->Size = System::Drawing::Size(243, 60);
			this->buttonPausarPartida->TabIndex = 13;
			this->buttonPausarPartida->Text = L"PAUSAR PARTIDA";
			this->buttonPausarPartida->UseVisualStyleBackColor = false;
			this->buttonPausarPartida->Click += gcnew System::EventHandler(this, &MyForm::buttonPausarPartida_Click);
			// 
			// buttonGuardarPartida
			// 
			this->buttonGuardarPartida->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonGuardarPartida->Location = System::Drawing::Point(977, 278);
			this->buttonGuardarPartida->Margin = System::Windows::Forms::Padding(2);
			this->buttonGuardarPartida->Name = L"buttonGuardarPartida";
			this->buttonGuardarPartida->Size = System::Drawing::Size(243, 60);
			this->buttonGuardarPartida->TabIndex = 14;
			this->buttonGuardarPartida->Text = L"GUARDAR PARTIDA";
			this->buttonGuardarPartida->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(1283, 613);
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
		bool isRunning=true;
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
	}
	else {
		isRunning = true;
	}
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	for (int i = 0; i < numHilos; i++) {
		hilos[i]->Abort();
	}
}
};
}

