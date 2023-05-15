#pragma once

#include <iostream>
#include "Mercadoh.h"

namespace CoolFarm {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelPorcentaje;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Oveporciento;
	private: System::Windows::Forms::TextBox^ oveAparicion;
	private: System::Windows::Forms::TextBox^ oveMin;
	private: System::Windows::Forms::TextBox^ oveFrutos;
	private: System::Windows::Forms::TextBox^ oveSeg;
	private: System::Windows::Forms::TextBox^ cuervPorciento;
	private: System::Windows::Forms::TextBox^ cuervAparicion;
	private: System::Windows::Forms::TextBox^ cuervMin;
	private: System::Windows::Forms::TextBox^ cuervFrutos;
	private: System::Windows::Forms::TextBox^ cuervSeg;










	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ plagMin;

	private: System::Windows::Forms::TextBox^ plagAparicion;

	private: System::Windows::Forms::TextBox^ plagPorcentaje;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ guardarComponentes_button;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ mercAparicion;
	private: System::Windows::Forms::TextBox^ mercAbierto;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelPorcentaje = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Oveporciento = (gcnew System::Windows::Forms::TextBox());
			this->oveAparicion = (gcnew System::Windows::Forms::TextBox());
			this->oveMin = (gcnew System::Windows::Forms::TextBox());
			this->oveFrutos = (gcnew System::Windows::Forms::TextBox());
			this->oveSeg = (gcnew System::Windows::Forms::TextBox());
			this->cuervPorciento = (gcnew System::Windows::Forms::TextBox());
			this->cuervAparicion = (gcnew System::Windows::Forms::TextBox());
			this->cuervMin = (gcnew System::Windows::Forms::TextBox());
			this->cuervFrutos = (gcnew System::Windows::Forms::TextBox());
			this->cuervSeg = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->plagMin = (gcnew System::Windows::Forms::TextBox());
			this->plagAparicion = (gcnew System::Windows::Forms::TextBox());
			this->plagPorcentaje = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->guardarComponentes_button = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->mercAparicion = (gcnew System::Windows::Forms::TextBox());
			this->mercAbierto = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OVEJAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 330);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CUERVOS";
			// 
			// labelPorcentaje
			// 
			this->labelPorcentaje->AutoSize = true;
			this->labelPorcentaje->Location = System::Drawing::Point(109, 84);
			this->labelPorcentaje->Name = L"labelPorcentaje";
			this->labelPorcentaje->Size = System::Drawing::Size(121, 25);
			this->labelPorcentaje->TabIndex = 2;
			this->labelPorcentaje->Text = L"Porcentaje:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(109, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tiempo de Aparición:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(109, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Frutos por comer:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 542);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Frutos por comer:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(109, 465);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(221, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tiempo de Aparición: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(109, 393);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Porcentaje:";
			// 
			// Oveporciento
			// 
			this->Oveporciento->Location = System::Drawing::Point(402, 78);
			this->Oveporciento->Name = L"Oveporciento";
			this->Oveporciento->Size = System::Drawing::Size(76, 31);
			this->Oveporciento->TabIndex = 8;
			// 
			// oveAparicion
			// 
			this->oveAparicion->Location = System::Drawing::Point(402, 150);
			this->oveAparicion->Name = L"oveAparicion";
			this->oveAparicion->Size = System::Drawing::Size(76, 31);
			this->oveAparicion->TabIndex = 9;
			// 
			// oveMin
			// 
			this->oveMin->Location = System::Drawing::Point(629, 150);
			this->oveMin->Name = L"oveMin";
			this->oveMin->Size = System::Drawing::Size(75, 31);
			this->oveMin->TabIndex = 10;
			// 
			// oveFrutos
			// 
			this->oveFrutos->Location = System::Drawing::Point(402, 227);
			this->oveFrutos->Name = L"oveFrutos";
			this->oveFrutos->Size = System::Drawing::Size(76, 31);
			this->oveFrutos->TabIndex = 11;
			// 
			// oveSeg
			// 
			this->oveSeg->Location = System::Drawing::Point(629, 227);
			this->oveSeg->Name = L"oveSeg";
			this->oveSeg->Size = System::Drawing::Size(75, 31);
			this->oveSeg->TabIndex = 12;
			// 
			// cuervPorciento
			// 
			this->cuervPorciento->Location = System::Drawing::Point(402, 387);
			this->cuervPorciento->Name = L"cuervPorciento";
			this->cuervPorciento->Size = System::Drawing::Size(76, 31);
			this->cuervPorciento->TabIndex = 13;
			// 
			// cuervAparicion
			// 
			this->cuervAparicion->Location = System::Drawing::Point(402, 465);
			this->cuervAparicion->Name = L"cuervAparicion";
			this->cuervAparicion->Size = System::Drawing::Size(76, 31);
			this->cuervAparicion->TabIndex = 14;
			// 
			// cuervMin
			// 
			this->cuervMin->Location = System::Drawing::Point(629, 465);
			this->cuervMin->Name = L"cuervMin";
			this->cuervMin->Size = System::Drawing::Size(75, 31);
			this->cuervMin->TabIndex = 15;
			// 
			// cuervFrutos
			// 
			this->cuervFrutos->Location = System::Drawing::Point(402, 539);
			this->cuervFrutos->Name = L"cuervFrutos";
			this->cuervFrutos->Size = System::Drawing::Size(76, 31);
			this->cuervFrutos->TabIndex = 16;
			// 
			// cuervSeg
			// 
			this->cuervSeg->Location = System::Drawing::Point(629, 542);
			this->cuervSeg->Name = L"cuervSeg";
			this->cuervSeg->Size = System::Drawing::Size(75, 31);
			this->cuervSeg->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(484, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 25);
			this->label3->TabIndex = 18;
			this->label3->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(484, 390);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(484, 153);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"ovejas cada";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(484, 468);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"cuervos cada";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(484, 233);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"frutos cada";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(484, 542);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 25);
			this->label13->TabIndex = 23;
			this->label13->Text = L"frutos cada";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(710, 153);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 25);
			this->label14->TabIndex = 24;
			this->label14->Text = L"min.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(710, 468);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 25);
			this->label15->TabIndex = 25;
			this->label15->Text = L"min.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(710, 233);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 25);
			this->label16->TabIndex = 26;
			this->label16->Text = L"seg.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(710, 545);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 25);
			this->label17->TabIndex = 27;
			this->label17->Text = L"seg.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1493, 160);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 25);
			this->label18->TabIndex = 36;
			this->label18->Text = L"min.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1267, 160);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(129, 25);
			this->label19->TabIndex = 35;
			this->label19->Text = L"plagas cada";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1267, 88);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 25);
			this->label20->TabIndex = 34;
			this->label20->Text = L"%";
			// 
			// plagMin
			// 
			this->plagMin->Location = System::Drawing::Point(1412, 157);
			this->plagMin->Name = L"plagMin";
			this->plagMin->Size = System::Drawing::Size(75, 31);
			this->plagMin->TabIndex = 33;
			// 
			// plagAparicion
			// 
			this->plagAparicion->Location = System::Drawing::Point(1185, 157);
			this->plagAparicion->Name = L"plagAparicion";
			this->plagAparicion->Size = System::Drawing::Size(76, 31);
			this->plagAparicion->TabIndex = 32;
			// 
			// plagPorcentaje
			// 
			this->plagPorcentaje->Location = System::Drawing::Point(1185, 85);
			this->plagPorcentaje->Name = L"plagPorcentaje";
			this->plagPorcentaje->Size = System::Drawing::Size(76, 31);
			this->plagPorcentaje->TabIndex = 31;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(892, 163);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(215, 25);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Tiempo de Aparición:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(892, 91);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(121, 25);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Porcentaje:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(807, 34);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(96, 25);
			this->label23->TabIndex = 28;
			this->label23->Text = L"PLAGAS";
			// 
			// guardarComponentes_button
			// 
			this->guardarComponentes_button->BackColor = System::Drawing::Color::DarkGray;
			this->guardarComponentes_button->Location = System::Drawing::Point(1395, 545);
			this->guardarComponentes_button->Name = L"guardarComponentes_button";
			this->guardarComponentes_button->Size = System::Drawing::Size(150, 43);
			this->guardarComponentes_button->TabIndex = 37;
			this->guardarComponentes_button->Text = L"GUARDAR";
			this->guardarComponentes_button->UseVisualStyleBackColor = false;
			this->guardarComponentes_button->Click += gcnew System::EventHandler(this, &Settings::guardarComponentes_button_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(807, 330);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(119, 25);
			this->label24->TabIndex = 38;
			this->label24->Text = L"MERCADO";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(892, 387);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(215, 25);
			this->label25->TabIndex = 39;
			this->label25->Text = L"Tiempo de Aparición:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(892, 471);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(165, 25);
			this->label26->TabIndex = 40;
			this->label26->Text = L"Abierto durante:";
			// 
			// mercAparicion
			// 
			this->mercAparicion->Location = System::Drawing::Point(1185, 384);
			this->mercAparicion->Name = L"mercAparicion";
			this->mercAparicion->Size = System::Drawing::Size(76, 31);
			this->mercAparicion->TabIndex = 41;
			// 
			// mercAbierto
			// 
			this->mercAbierto->Location = System::Drawing::Point(1185, 471);
			this->mercAbierto->Name = L"mercAbierto";
			this->mercAbierto->Size = System::Drawing::Size(76, 31);
			this->mercAbierto->TabIndex = 42;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(1286, 387);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(53, 25);
			this->label27->TabIndex = 43;
			this->label27->Text = L"seg.";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1286, 477);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 25);
			this->label28->TabIndex = 44;
			this->label28->Text = L"seg.";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1580, 610);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->mercAbierto);
			this->Controls->Add(this->mercAparicion);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->guardarComponentes_button);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->plagMin);
			this->Controls->Add(this->plagAparicion);
			this->Controls->Add(this->plagPorcentaje);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cuervSeg);
			this->Controls->Add(this->cuervFrutos);
			this->Controls->Add(this->cuervMin);
			this->Controls->Add(this->cuervAparicion);
			this->Controls->Add(this->cuervPorciento);
			this->Controls->Add(this->oveSeg);
			this->Controls->Add(this->oveFrutos);
			this->Controls->Add(this->oveMin);
			this->Controls->Add(this->oveAparicion);
			this->Controls->Add(this->Oveporciento);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelPorcentaje);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void guardarComponentes_button_Click(System::Object^ sender, System::EventArgs^ e) {

			porcentOvejas = Int32::Parse(this->Oveporciento->Text);
			aparicionOvejas = Int32::Parse(this->oveAparicion->Text);
			tiempoAparicionOvejas = Int32::Parse(this->oveMin->Text);
			frutosOvejas = Int32::Parse(this->oveFrutos->Text);
			tiempoFrutosOvejas = Int32::Parse(this->oveSeg->Text);

			porcentCuervos = Int32::Parse(this->cuervPorciento->Text);
			aparicionCuervos = Int32::Parse(this->cuervAparicion->Text);
			tiempoAparicionCuervos = Int32::Parse(this->cuervMin->Text);
			frutosCuervos = Int32::Parse(this->cuervFrutos->Text);
			tiempoFrutosCuervos = Int32::Parse(this->cuervSeg->Text);

			porcentPlagas = Int32::Parse(this->plagPorcentaje->Text);
			aparicionPlagas = Int32::Parse(this->plagAparicion->Text);
			tiempoAparicionPlagas = Int32::Parse(this->plagMin->Text);

			mercadoAparicion = Int32::Parse(this->mercAparicion->Text);
			mercadoApertura = Int32::Parse(this->mercAbierto->Text);
		}
	
	};
}