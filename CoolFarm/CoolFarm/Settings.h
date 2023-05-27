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
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBoxCosechaB;
	private: System::Windows::Forms::TextBox^ textBoxCrecimientoB;
	private: System::Windows::Forms::TextBox^ textBoxCostoB;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ labelCreceB;
	private: System::Windows::Forms::Label^ labelCostoB;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBoxCosSegB;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBoxCosSegHeap;

	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBoxCosechaHeap;

	private: System::Windows::Forms::TextBox^ textBoxCrecimientoHeap;

	private: System::Windows::Forms::TextBox^ textBoxCostoHeap;

	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBoxCosSegS;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::TextBox^ textBoxCosechaS;
	private: System::Windows::Forms::TextBox^ textBoxCrecimientoS;

	private: System::Windows::Forms::TextBox^ textBoxCostoS;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::TextBox^ textBoxCosSegA;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::TextBox^ textBoxCosechaA;
	private: System::Windows::Forms::TextBox^ textBoxCrecimientoA;
	private: System::Windows::Forms::TextBox^ textBoxCostoA;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;


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
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosechaB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCrecimientoB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostoB = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->labelCreceB = (gcnew System::Windows::Forms::Label());
			this->labelCostoB = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosSegB = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosSegHeap = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosechaHeap = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCrecimientoHeap = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostoHeap = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosSegS = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosechaS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCrecimientoS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostoS = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosSegA = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBoxCosechaA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCrecimientoA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostoA = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(16, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OVEJAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(16, 211);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CUERVOS";
			// 
			// labelPorcentaje
			// 
			this->labelPorcentaje->AutoSize = true;
			this->labelPorcentaje->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPorcentaje->Location = System::Drawing::Point(73, 54);
			this->labelPorcentaje->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPorcentaje->Name = L"labelPorcentaje";
			this->labelPorcentaje->Size = System::Drawing::Size(75, 16);
			this->labelPorcentaje->TabIndex = 2;
			this->labelPorcentaje->Text = L"Porcentaje:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(73, 100);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tiempo de Aparición:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(73, 149);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Frutos por comer:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(73, 347);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Frutos por comer:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(73, 298);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tiempo de Aparición: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(73, 252);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 16);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Porcentaje:";
			// 
			// Oveporciento
			// 
			this->Oveporciento->Location = System::Drawing::Point(268, 50);
			this->Oveporciento->Margin = System::Windows::Forms::Padding(2);
			this->Oveporciento->Name = L"Oveporciento";
			this->Oveporciento->Size = System::Drawing::Size(52, 22);
			this->Oveporciento->TabIndex = 8;
			// 
			// oveAparicion
			// 
			this->oveAparicion->Location = System::Drawing::Point(268, 96);
			this->oveAparicion->Margin = System::Windows::Forms::Padding(2);
			this->oveAparicion->Name = L"oveAparicion";
			this->oveAparicion->Size = System::Drawing::Size(52, 22);
			this->oveAparicion->TabIndex = 9;
			// 
			// oveMin
			// 
			this->oveMin->Location = System::Drawing::Point(419, 96);
			this->oveMin->Margin = System::Windows::Forms::Padding(2);
			this->oveMin->Name = L"oveMin";
			this->oveMin->Size = System::Drawing::Size(51, 22);
			this->oveMin->TabIndex = 10;
			// 
			// oveFrutos
			// 
			this->oveFrutos->Location = System::Drawing::Point(268, 145);
			this->oveFrutos->Margin = System::Windows::Forms::Padding(2);
			this->oveFrutos->Name = L"oveFrutos";
			this->oveFrutos->Size = System::Drawing::Size(52, 22);
			this->oveFrutos->TabIndex = 11;
			// 
			// oveSeg
			// 
			this->oveSeg->Location = System::Drawing::Point(419, 145);
			this->oveSeg->Margin = System::Windows::Forms::Padding(2);
			this->oveSeg->Name = L"oveSeg";
			this->oveSeg->Size = System::Drawing::Size(51, 22);
			this->oveSeg->TabIndex = 12;
			// 
			// cuervPorciento
			// 
			this->cuervPorciento->Location = System::Drawing::Point(268, 248);
			this->cuervPorciento->Margin = System::Windows::Forms::Padding(2);
			this->cuervPorciento->Name = L"cuervPorciento";
			this->cuervPorciento->Size = System::Drawing::Size(52, 22);
			this->cuervPorciento->TabIndex = 13;
			// 
			// cuervAparicion
			// 
			this->cuervAparicion->Location = System::Drawing::Point(268, 298);
			this->cuervAparicion->Margin = System::Windows::Forms::Padding(2);
			this->cuervAparicion->Name = L"cuervAparicion";
			this->cuervAparicion->Size = System::Drawing::Size(52, 22);
			this->cuervAparicion->TabIndex = 14;
			// 
			// cuervMin
			// 
			this->cuervMin->Location = System::Drawing::Point(419, 298);
			this->cuervMin->Margin = System::Windows::Forms::Padding(2);
			this->cuervMin->Name = L"cuervMin";
			this->cuervMin->Size = System::Drawing::Size(51, 22);
			this->cuervMin->TabIndex = 15;
			// 
			// cuervFrutos
			// 
			this->cuervFrutos->Location = System::Drawing::Point(268, 345);
			this->cuervFrutos->Margin = System::Windows::Forms::Padding(2);
			this->cuervFrutos->Name = L"cuervFrutos";
			this->cuervFrutos->Size = System::Drawing::Size(52, 22);
			this->cuervFrutos->TabIndex = 16;
			// 
			// cuervSeg
			// 
			this->cuervSeg->Location = System::Drawing::Point(419, 347);
			this->cuervSeg->Margin = System::Windows::Forms::Padding(2);
			this->cuervSeg->Name = L"cuervSeg";
			this->cuervSeg->Size = System::Drawing::Size(51, 22);
			this->cuervSeg->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(323, 52);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(323, 250);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 16);
			this->label9->TabIndex = 19;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(323, 98);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"ovejas cada";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(323, 300);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"cuervos cada";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(323, 149);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 16);
			this->label12->TabIndex = 22;
			this->label12->Text = L"frutos cada";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(323, 347);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 16);
			this->label13->TabIndex = 23;
			this->label13->Text = L"frutos cada";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(473, 98);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 24;
			this->label14->Text = L"seg.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(473, 300);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 16);
			this->label15->TabIndex = 25;
			this->label15->Text = L"seg.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(473, 149);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 16);
			this->label16->TabIndex = 26;
			this->label16->Text = L"seg.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(473, 349);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 16);
			this->label17->TabIndex = 27;
			this->label17->Text = L"seg.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(995, 102);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 36;
			this->label18->Text = L"seg.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(845, 102);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 16);
			this->label19->TabIndex = 35;
			this->label19->Text = L"plagas cada";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(845, 56);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 16);
			this->label20->TabIndex = 34;
			this->label20->Text = L"%";
			// 
			// plagMin
			// 
			this->plagMin->Location = System::Drawing::Point(941, 100);
			this->plagMin->Margin = System::Windows::Forms::Padding(2);
			this->plagMin->Name = L"plagMin";
			this->plagMin->Size = System::Drawing::Size(51, 22);
			this->plagMin->TabIndex = 33;
			// 
			// plagAparicion
			// 
			this->plagAparicion->Location = System::Drawing::Point(790, 100);
			this->plagAparicion->Margin = System::Windows::Forms::Padding(2);
			this->plagAparicion->Name = L"plagAparicion";
			this->plagAparicion->Size = System::Drawing::Size(52, 22);
			this->plagAparicion->TabIndex = 32;
			// 
			// plagPorcentaje
			// 
			this->plagPorcentaje->Location = System::Drawing::Point(790, 54);
			this->plagPorcentaje->Margin = System::Windows::Forms::Padding(2);
			this->plagPorcentaje->Name = L"plagPorcentaje";
			this->plagPorcentaje->Size = System::Drawing::Size(52, 22);
			this->plagPorcentaje->TabIndex = 31;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(595, 104);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(136, 16);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Tiempo de Aparición:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(595, 58);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(75, 16);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Porcentaje:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(538, 22);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 16);
			this->label23->TabIndex = 28;
			this->label23->Text = L"PLAGAS";
			// 
			// guardarComponentes_button
			// 
			this->guardarComponentes_button->BackColor = System::Drawing::Color::DarkGray;
			this->guardarComponentes_button->Location = System::Drawing::Point(972, 796);
			this->guardarComponentes_button->Margin = System::Windows::Forms::Padding(2);
			this->guardarComponentes_button->Name = L"guardarComponentes_button";
			this->guardarComponentes_button->Size = System::Drawing::Size(100, 28);
			this->guardarComponentes_button->TabIndex = 37;
			this->guardarComponentes_button->Text = L"GUARDAR";
			this->guardarComponentes_button->UseVisualStyleBackColor = false;
			this->guardarComponentes_button->Click += gcnew System::EventHandler(this, &Settings::guardarComponentes_button_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(538, 211);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(75, 16);
			this->label24->TabIndex = 38;
			this->label24->Text = L"MERCADO";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label25->Location = System::Drawing::Point(595, 248);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(136, 16);
			this->label25->TabIndex = 39;
			this->label25->Text = L"Tiempo de Aparición:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(595, 301);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(101, 16);
			this->label26->TabIndex = 40;
			this->label26->Text = L"Abierto durante:";
			// 
			// mercAparicion
			// 
			this->mercAparicion->Location = System::Drawing::Point(790, 246);
			this->mercAparicion->Margin = System::Windows::Forms::Padding(2);
			this->mercAparicion->Name = L"mercAparicion";
			this->mercAparicion->Size = System::Drawing::Size(52, 22);
			this->mercAparicion->TabIndex = 41;
			// 
			// mercAbierto
			// 
			this->mercAbierto->Location = System::Drawing::Point(790, 301);
			this->mercAbierto->Margin = System::Windows::Forms::Padding(2);
			this->mercAbierto->Name = L"mercAbierto";
			this->mercAbierto->Size = System::Drawing::Size(52, 22);
			this->mercAbierto->TabIndex = 42;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(857, 248);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(33, 16);
			this->label27->TabIndex = 43;
			this->label27->Text = L"seg.";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(857, 305);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(33, 16);
			this->label28->TabIndex = 44;
			this->label28->Text = L"seg.";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(325, 560);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(73, 16);
			this->label29->TabIndex = 53;
			this->label29->Text = L"frutos cada";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(325, 513);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(67, 16);
			this->label30->TabIndex = 52;
			this->label30->Text = L"segundos";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->Location = System::Drawing::Point(325, 463);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(14, 16);
			this->label31->TabIndex = 51;
			this->label31->Text = L"$";
			// 
			// textBoxCosechaB
			// 
			this->textBoxCosechaB->Location = System::Drawing::Point(270, 558);
			this->textBoxCosechaB->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosechaB->Name = L"textBoxCosechaB";
			this->textBoxCosechaB->Size = System::Drawing::Size(52, 22);
			this->textBoxCosechaB->TabIndex = 50;
			// 
			// textBoxCrecimientoB
			// 
			this->textBoxCrecimientoB->Location = System::Drawing::Point(270, 511);
			this->textBoxCrecimientoB->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCrecimientoB->Name = L"textBoxCrecimientoB";
			this->textBoxCrecimientoB->Size = System::Drawing::Size(52, 22);
			this->textBoxCrecimientoB->TabIndex = 49;
			// 
			// textBoxCostoB
			// 
			this->textBoxCostoB->Location = System::Drawing::Point(270, 461);
			this->textBoxCostoB->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCostoB->Name = L"textBoxCostoB";
			this->textBoxCostoB->Size = System::Drawing::Size(52, 22);
			this->textBoxCostoB->TabIndex = 48;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label32->Location = System::Drawing::Point(75, 560);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(64, 16);
			this->label32->TabIndex = 47;
			this->label32->Text = L"Cosecha:";
			// 
			// labelCreceB
			// 
			this->labelCreceB->AutoSize = true;
			this->labelCreceB->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelCreceB->Location = System::Drawing::Point(75, 511);
			this->labelCreceB->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCreceB->Name = L"labelCreceB";
			this->labelCreceB->Size = System::Drawing::Size(153, 16);
			this->labelCreceB->TabIndex = 46;
			this->labelCreceB->Text = L"Tiempo de Crecimiento: ";
			// 
			// labelCostoB
			// 
			this->labelCostoB->AutoSize = true;
			this->labelCostoB->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelCostoB->Location = System::Drawing::Point(75, 465);
			this->labelCostoB->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCostoB->Name = L"labelCostoB";
			this->labelCostoB->Size = System::Drawing::Size(45, 16);
			this->labelCostoB->TabIndex = 45;
			this->labelCostoB->Text = L"Costo:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label33->Location = System::Drawing::Point(475, 562);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(33, 16);
			this->label33->TabIndex = 55;
			this->label33->Text = L"seg.";
			// 
			// textBoxCosSegB
			// 
			this->textBoxCosSegB->Location = System::Drawing::Point(421, 560);
			this->textBoxCosSegB->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosSegB->Name = L"textBoxCosSegB";
			this->textBoxCosSegB->Size = System::Drawing::Size(51, 22);
			this->textBoxCosSegB->TabIndex = 54;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label34->Location = System::Drawing::Point(18, 438);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(142, 16);
			this->label34->TabIndex = 56;
			this->label34->Text = L"BINARIO ORDENADO";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Location = System::Drawing::Point(569, 438);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(44, 16);
			this->label35->TabIndex = 68;
			this->label35->Text = L"HEAP";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label36->Location = System::Drawing::Point(1026, 562);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(33, 16);
			this->label36->TabIndex = 67;
			this->label36->Text = L"seg.";
			// 
			// textBoxCosSegHeap
			// 
			this->textBoxCosSegHeap->Location = System::Drawing::Point(972, 560);
			this->textBoxCosSegHeap->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosSegHeap->Name = L"textBoxCosSegHeap";
			this->textBoxCosSegHeap->Size = System::Drawing::Size(51, 22);
			this->textBoxCosSegHeap->TabIndex = 66;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label37->Location = System::Drawing::Point(876, 560);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(73, 16);
			this->label37->TabIndex = 65;
			this->label37->Text = L"frutos cada";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label38->Location = System::Drawing::Point(876, 513);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(67, 16);
			this->label38->TabIndex = 64;
			this->label38->Text = L"segundos";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label39->Location = System::Drawing::Point(876, 463);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(14, 16);
			this->label39->TabIndex = 63;
			this->label39->Text = L"$";
			// 
			// textBoxCosechaHeap
			// 
			this->textBoxCosechaHeap->Location = System::Drawing::Point(821, 558);
			this->textBoxCosechaHeap->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosechaHeap->Name = L"textBoxCosechaHeap";
			this->textBoxCosechaHeap->Size = System::Drawing::Size(52, 22);
			this->textBoxCosechaHeap->TabIndex = 62;
			// 
			// textBoxCrecimientoHeap
			// 
			this->textBoxCrecimientoHeap->Location = System::Drawing::Point(821, 511);
			this->textBoxCrecimientoHeap->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCrecimientoHeap->Name = L"textBoxCrecimientoHeap";
			this->textBoxCrecimientoHeap->Size = System::Drawing::Size(52, 22);
			this->textBoxCrecimientoHeap->TabIndex = 61;
			// 
			// textBoxCostoHeap
			// 
			this->textBoxCostoHeap->Location = System::Drawing::Point(821, 461);
			this->textBoxCostoHeap->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCostoHeap->Name = L"textBoxCostoHeap";
			this->textBoxCostoHeap->Size = System::Drawing::Size(52, 22);
			this->textBoxCostoHeap->TabIndex = 60;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label40->Location = System::Drawing::Point(626, 560);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(64, 16);
			this->label40->TabIndex = 59;
			this->label40->Text = L"Cosecha:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label41->Location = System::Drawing::Point(626, 511);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(153, 16);
			this->label41->TabIndex = 58;
			this->label41->Text = L"Tiempo de Crecimiento: ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label42->Location = System::Drawing::Point(626, 465);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(45, 16);
			this->label42->TabIndex = 57;
			this->label42->Text = L"Costo:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label43->Location = System::Drawing::Point(523, 396);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(70, 16);
			this->label43->TabIndex = 69;
			this->label43->Text = L"ARBOLES";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label44->Location = System::Drawing::Point(569, 623);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(50, 16);
			this->label44->TabIndex = 93;
			this->label44->Text = L"SPLAY";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label45->Location = System::Drawing::Point(1026, 747);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(33, 16);
			this->label45->TabIndex = 92;
			this->label45->Text = L"seg.";
			// 
			// textBoxCosSegS
			// 
			this->textBoxCosSegS->Location = System::Drawing::Point(972, 745);
			this->textBoxCosSegS->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosSegS->Name = L"textBoxCosSegS";
			this->textBoxCosSegS->Size = System::Drawing::Size(51, 22);
			this->textBoxCosSegS->TabIndex = 91;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label46->Location = System::Drawing::Point(876, 745);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(73, 16);
			this->label46->TabIndex = 90;
			this->label46->Text = L"frutos cada";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label47->Location = System::Drawing::Point(876, 698);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(67, 16);
			this->label47->TabIndex = 89;
			this->label47->Text = L"segundos";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label48->Location = System::Drawing::Point(876, 648);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(14, 16);
			this->label48->TabIndex = 88;
			this->label48->Text = L"$";
			// 
			// textBoxCosechaS
			// 
			this->textBoxCosechaS->Location = System::Drawing::Point(821, 743);
			this->textBoxCosechaS->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosechaS->Name = L"textBoxCosechaS";
			this->textBoxCosechaS->Size = System::Drawing::Size(52, 22);
			this->textBoxCosechaS->TabIndex = 87;
			// 
			// textBoxCrecimientoS
			// 
			this->textBoxCrecimientoS->Location = System::Drawing::Point(821, 696);
			this->textBoxCrecimientoS->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCrecimientoS->Name = L"textBoxCrecimientoS";
			this->textBoxCrecimientoS->Size = System::Drawing::Size(52, 22);
			this->textBoxCrecimientoS->TabIndex = 86;
			// 
			// textBoxCostoS
			// 
			this->textBoxCostoS->Location = System::Drawing::Point(821, 646);
			this->textBoxCostoS->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCostoS->Name = L"textBoxCostoS";
			this->textBoxCostoS->Size = System::Drawing::Size(52, 22);
			this->textBoxCostoS->TabIndex = 85;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label49->Location = System::Drawing::Point(626, 745);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(64, 16);
			this->label49->TabIndex = 84;
			this->label49->Text = L"Cosecha:";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label50->Location = System::Drawing::Point(626, 696);
			this->label50->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(153, 16);
			this->label50->TabIndex = 83;
			this->label50->Text = L"Tiempo de Crecimiento: ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label51->Location = System::Drawing::Point(626, 650);
			this->label51->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(45, 16);
			this->label51->TabIndex = 82;
			this->label51->Text = L"Costo:";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label52->Location = System::Drawing::Point(18, 623);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(32, 16);
			this->label52->TabIndex = 81;
			this->label52->Text = L"AVL";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label53->Location = System::Drawing::Point(475, 747);
			this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(33, 16);
			this->label53->TabIndex = 80;
			this->label53->Text = L"seg.";
			// 
			// textBoxCosSegA
			// 
			this->textBoxCosSegA->Location = System::Drawing::Point(421, 745);
			this->textBoxCosSegA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosSegA->Name = L"textBoxCosSegA";
			this->textBoxCosSegA->Size = System::Drawing::Size(51, 22);
			this->textBoxCosSegA->TabIndex = 79;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label54->Location = System::Drawing::Point(325, 745);
			this->label54->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(73, 16);
			this->label54->TabIndex = 78;
			this->label54->Text = L"frutos cada";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label55->Location = System::Drawing::Point(325, 698);
			this->label55->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(67, 16);
			this->label55->TabIndex = 77;
			this->label55->Text = L"segundos";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label56->Location = System::Drawing::Point(325, 648);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(14, 16);
			this->label56->TabIndex = 76;
			this->label56->Text = L"$";
			// 
			// textBoxCosechaA
			// 
			this->textBoxCosechaA->Location = System::Drawing::Point(270, 743);
			this->textBoxCosechaA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCosechaA->Name = L"textBoxCosechaA";
			this->textBoxCosechaA->Size = System::Drawing::Size(52, 22);
			this->textBoxCosechaA->TabIndex = 75;
			// 
			// textBoxCrecimientoA
			// 
			this->textBoxCrecimientoA->Location = System::Drawing::Point(270, 696);
			this->textBoxCrecimientoA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCrecimientoA->Name = L"textBoxCrecimientoA";
			this->textBoxCrecimientoA->Size = System::Drawing::Size(52, 22);
			this->textBoxCrecimientoA->TabIndex = 74;
			// 
			// textBoxCostoA
			// 
			this->textBoxCostoA->Location = System::Drawing::Point(270, 646);
			this->textBoxCostoA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCostoA->Name = L"textBoxCostoA";
			this->textBoxCostoA->Size = System::Drawing::Size(52, 22);
			this->textBoxCostoA->TabIndex = 73;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label57->Location = System::Drawing::Point(75, 745);
			this->label57->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(64, 16);
			this->label57->TabIndex = 72;
			this->label57->Text = L"Cosecha:";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label58->Location = System::Drawing::Point(75, 696);
			this->label58->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(153, 16);
			this->label58->TabIndex = 71;
			this->label58->Text = L"Tiempo de Crecimiento: ";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label59->Location = System::Drawing::Point(75, 650);
			this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(45, 16);
			this->label59->TabIndex = 70;
			this->label59->Text = L"Costo:";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(1106, 846);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->textBoxCosSegS);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->textBoxCosechaS);
			this->Controls->Add(this->textBoxCrecimientoS);
			this->Controls->Add(this->textBoxCostoS);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->textBoxCosSegA);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->textBoxCosechaA);
			this->Controls->Add(this->textBoxCrecimientoA);
			this->Controls->Add(this->textBoxCostoA);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->textBoxCosSegHeap);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->textBoxCosechaHeap);
			this->Controls->Add(this->textBoxCrecimientoHeap);
			this->Controls->Add(this->textBoxCostoHeap);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->textBoxCosSegB);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBoxCosechaB);
			this->Controls->Add(this->textBoxCrecimientoB);
			this->Controls->Add(this->textBoxCostoB);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->labelCreceB);
			this->Controls->Add(this->labelCostoB);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void guardarComponentes_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Oveporciento->Text != "") {
			porcentOvejas = Int32::Parse(this->Oveporciento->Text);
		}
		if (this->oveAparicion->Text != "") {
			aparicionOvejas = Int32::Parse(this->oveAparicion->Text);
		}
		if (this->oveMin->Text != "") {
			tiempoAparicionOvejas = Int32::Parse(this->oveMin->Text);
		}
		if (this->oveFrutos->Text != "") {
			frutosOvejas = Int32::Parse(this->oveFrutos->Text);
		}
		if (this->oveSeg->Text != "") {
			tiempoFrutosOvejas = Int32::Parse(this->oveSeg->Text);
		}

		if (this->cuervPorciento->Text != "") {
			porcentCuervos = Int32::Parse(this->cuervPorciento->Text);
		}
		if (this->cuervAparicion->Text != "") {
			aparicionCuervos = Int32::Parse(this->cuervAparicion->Text);
		}
		if (this->cuervMin->Text != "") {
			tiempoAparicionCuervos = Int32::Parse(this->cuervMin->Text);
		}
		if (this->cuervFrutos->Text != "") {
			frutosCuervos = Int32::Parse(this->cuervFrutos->Text);
		}
		if (this->cuervSeg->Text != "") {
			tiempoFrutosCuervos = Int32::Parse(this->cuervSeg->Text);
		}

		if (this->plagPorcentaje->Text != "") {
			porcentPlagas = Int32::Parse(this->plagPorcentaje->Text);
		}
		if (this->plagAparicion->Text != "") {
			aparicionPlagas = Int32::Parse(this->plagAparicion->Text);
		}
		if (this->plagMin->Text != "") {
			tiempoAparicionPlagas = Int32::Parse(this->plagMin->Text);
		}

		if (this->mercAparicion->Text != "") {
			mercadoAparicion = Int32::Parse(this->mercAparicion->Text);
		}
		if (this->mercAbierto->Text != "") {
			mercadoApertura = Int32::Parse(this->mercAbierto->Text);
		}

		if (this->textBoxCostoB->Text != "") {
			precioBinario = Int32::Parse(this->textBoxCostoB->Text);
		}
		if (this->textBoxCrecimientoB->Text != "") {
			creceBinario = Int32::Parse(this->textBoxCrecimientoB->Text);
		}
		if (this->textBoxCosechaB->Text != "") {
			cosechaB = Int32::Parse(this->textBoxCosechaB->Text);
		}
		if (this->textBoxCosSegB->Text != "") {
			tiempoCosechaB = Int32::Parse(this->textBoxCosSegB->Text);
		}


		if (this->textBoxCostoHeap->Text != "") {
			precioHeap = Int32::Parse(this->textBoxCostoHeap->Text);
		}
		if (this->textBoxCrecimientoHeap->Text != "") {
			creceH = Int32::Parse(this->textBoxCrecimientoHeap->Text);
		}
		if (this->textBoxCosechaHeap->Text != "") {
			cosechaH = Int32::Parse(this->textBoxCosechaHeap->Text);
		}
		if (this->textBoxCosSegHeap->Text != "") {
			tiempoCosechaH = Int32::Parse(this->textBoxCosSegHeap->Text);
		}


		if (this->textBoxCostoA->Text != "") {
			precioAVL = Int32::Parse(this->textBoxCostoA->Text);
		}
		if (this->textBoxCrecimientoA->Text != "") {
			creceA = Int32::Parse(this->textBoxCrecimientoA->Text);
		}
		if (this->textBoxCosechaA->Text != "") {
			cosechaA = Int32::Parse(this->textBoxCosechaA->Text);
		}
		if (this->textBoxCosSegA->Text != "") {
			tiempoCosechaA = Int32::Parse(this->textBoxCosSegA->Text);
		}


		if (this->textBoxCostoS->Text != "") {
			precioSplay = Int32::Parse(this->textBoxCostoS->Text);
		}
		if (this->textBoxCrecimientoS->Text != "") {
			creceS = Int32::Parse(this->textBoxCrecimientoS->Text);
		}
		if (this->textBoxCosechaS->Text != "") {
			cosechaS = Int32::Parse(this->textBoxCosechaS->Text);
		}
		if (this->textBoxCosSegS->Text != "") {
			tiempoCosechaS = Int32::Parse(this->textBoxCosSegS->Text);
		}
		if (this->mercAbierto->Text != "") {
			mercadoApertura = Int32::Parse(this->mercAbierto->Text);
		}
		if (this->mercAparicion->Text != "") {
			mercadoAparicion = Int32::Parse(this->mercAparicion->Text);
		}
		MessageBox::Show("Datos guardados correctamente.");
	}



	};
}