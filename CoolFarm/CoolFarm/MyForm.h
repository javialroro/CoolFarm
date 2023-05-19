#pragma once

#include "Settings.h"
#include <iostream>
#include <fstream>


namespace CoolFarm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const int FILAS = 10;
	const int COLUMNAS = 10;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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

	protected:

	private:
		cli::array<System::Windows::Forms::Button^, 2>^ botones;  // Matriz de botones


	private: System::Windows::Forms::Button^ abrirMercadoButt;
	private: System::Windows::Forms::Button^ botonPlantarHeap;
	private: System::Windows::Forms::Button^ botonPlantarAVL;
	private: System::Windows::Forms::Button^ botonPlantarSplay;
	private: System::Windows::Forms::Button^ botonPlantarOrdenado;
	private: System::Windows::Forms::Button^ buttonPonerEspanta;






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
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::YellowGreen;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				77)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(584, 61);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 78)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(752, 781);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1408, 100);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"   ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Location = System::Drawing::Point(21, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SETTINGS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// abrirMercadoButt
			// 
			this->abrirMercadoButt->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->abrirMercadoButt->Location = System::Drawing::Point(21, 100);
			this->abrirMercadoButt->Name = L"abrirMercadoButt";
			this->abrirMercadoButt->Size = System::Drawing::Size(148, 50);
			this->abrirMercadoButt->TabIndex = 5;
			this->abrirMercadoButt->Text = L"MERCADO";
			this->abrirMercadoButt->UseVisualStyleBackColor = false;
			this->abrirMercadoButt->Click += gcnew System::EventHandler(this, &MyForm::abrirMercadoButt_Click);
			// 
			// botonPlantarHeap
			// 
			this->botonPlantarHeap->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarHeap->Location = System::Drawing::Point(21, 455);
			this->botonPlantarHeap->Name = L"botonPlantarHeap";
			this->botonPlantarHeap->Size = System::Drawing::Size(222, 50);
			this->botonPlantarHeap->TabIndex = 6;
			this->botonPlantarHeap->Text = L"PLANTAR HEAP";
			this->botonPlantarHeap->UseVisualStyleBackColor = false;
			this->botonPlantarHeap->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// botonPlantarAVL
			// 
			this->botonPlantarAVL->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarAVL->Location = System::Drawing::Point(21, 533);
			this->botonPlantarAVL->Name = L"botonPlantarAVL";
			this->botonPlantarAVL->Size = System::Drawing::Size(222, 50);
			this->botonPlantarAVL->TabIndex = 7;
			this->botonPlantarAVL->Text = L"PLANTAR AVL";
			this->botonPlantarAVL->UseVisualStyleBackColor = false;
			this->botonPlantarAVL->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarAVL_Click);
			// 
			// botonPlantarSplay
			// 
			this->botonPlantarSplay->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarSplay->Location = System::Drawing::Point(21, 608);
			this->botonPlantarSplay->Name = L"botonPlantarSplay";
			this->botonPlantarSplay->Size = System::Drawing::Size(222, 50);
			this->botonPlantarSplay->TabIndex = 8;
			this->botonPlantarSplay->Text = L"PLANTAR SPLAY";
			this->botonPlantarSplay->UseVisualStyleBackColor = false;
			this->botonPlantarSplay->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarSplay_Click);
			// 
			// botonPlantarOrdenado
			// 
			this->botonPlantarOrdenado->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->botonPlantarOrdenado->Location = System::Drawing::Point(21, 680);
			this->botonPlantarOrdenado->Name = L"botonPlantarOrdenado";
			this->botonPlantarOrdenado->Size = System::Drawing::Size(222, 67);
			this->botonPlantarOrdenado->TabIndex = 9;
			this->botonPlantarOrdenado->Text = L"PLANTAR B ORDENADO";
			this->botonPlantarOrdenado->UseVisualStyleBackColor = false;
			this->botonPlantarOrdenado->Click += gcnew System::EventHandler(this, &MyForm::botonPlantarOrdenado_Click);
			// 
			// buttonPonerEspanta
			// 
			this->buttonPonerEspanta->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->buttonPonerEspanta->Location = System::Drawing::Point(21, 770);
			this->buttonPonerEspanta->Name = L"buttonPonerEspanta";
			this->buttonPonerEspanta->Size = System::Drawing::Size(222, 72);
			this->buttonPonerEspanta->TabIndex = 10;
			this->buttonPonerEspanta->Text = L"COLOCAR ESPANTAPAJAROS";
			this->buttonPonerEspanta->UseVisualStyleBackColor = false;
			this->buttonPonerEspanta->Click += gcnew System::EventHandler(this, &MyForm::buttonPonerEspanta_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(1924, 958);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//Heap* heap = new Heap(2);
			//colaHeap.push(heap);

			//avl_tree* avl = new avl_tree();
			//colaAVL.push(avl);

			//SplayTree* splay = new SplayTree();
			//colaSplay.push(splay);

			//BinarioOrdenado* binario = new BinarioOrdenado();
			//colaBinarioOrdenado.push(binario);

			botones = gcnew cli::array<System::Windows::Forms::Button^, 2>(FILAS, COLUMNAS);
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
		arbol * a = colaBinarioOrdenado.front();
		plantar(a, "O");
		colaBinarioOrdenado.pop();
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

};
}
