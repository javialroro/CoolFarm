#pragma once

#include "Settings.h"
#include <iostream>


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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(414, 42);
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
			this->label1->Location = System::Drawing::Point(939, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"   ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::NavajoWhite;
			this->button1->Location = System::Drawing::Point(14, 20);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SETTINGS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(1003, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DINERO:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(1088, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1283, 613);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->KeyPreview = true;
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
			arbolesBinarios[fila][columna]=10;
		}


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			CoolFarm::Settings^ settings = gcnew CoolFarm::Settings();
			settings->Show();
		}

		void DibujarMatriz() {
			for (int i = 0; i < FILAS; i++) {
				for (int j = 0; j < COLUMNAS; j++) {
					if (i == granjero->columna && j == granjero->fila) {
						botones[i, j]->Text = "O";
						botones[i, j]->BackColor = Color::Red;
					}
					else {
						botones[i, j]->Text = "-";
						botones[i, j]->BackColor = Color::YellowGreen;
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
				label1->Text = "arriba";
				break;
			case Keys::S:
				MoverObjeto(granjero->fila, granjero->columna + 1);
				label1->Text="abajo";
				break;
			case Keys::A:
				MoverObjeto(granjero->fila - 1, granjero->columna);
				label1->Text = "izquierda";
				break;
			case Keys::D:
				MoverObjeto(granjero->fila + 1, granjero->columna);
				label1->Text = "derecha";
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

};
}
