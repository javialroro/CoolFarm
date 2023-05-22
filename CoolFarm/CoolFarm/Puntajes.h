#pragma once
#include "estructuras.h"

namespace CoolFarm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Puntajes
	/// </summary>
	public ref class Puntajes : public System::Windows::Forms::Form
	{
	public:
		Puntajes(void)
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
		~Puntajes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
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
	private: System::Windows::Forms::Label^ label21;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RANKING DE PUNTAJES";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Lavender;
			this->label2->Location = System::Drawing::Point(44, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = toSystemString(Nombre1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lavender;
			this->label3->Location = System::Drawing::Point(44, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = toSystemString(Nombre2);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Lavender;
			this->label4->Location = System::Drawing::Point(44, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = toSystemString(Nombre3);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Lavender;
			this->label5->Location = System::Drawing::Point(44, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = toSystemString(Nombre4);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lavender;
			this->label6->Location = System::Drawing::Point(44, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = toSystemString(Nombre5);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lavender;
			this->label7->Location = System::Drawing::Point(44, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = toSystemString(Nombre6);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Lavender;
			this->label8->Location = System::Drawing::Point(44, 266);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = toSystemString(Nombre7);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Lavender;
			this->label9->Location = System::Drawing::Point(44, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = toSystemString(Nombre8);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Lavender;
			this->label10->Location = System::Drawing::Point(44, 336);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = toSystemString(Nombre9);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Lavender;
			this->label11->Location = System::Drawing::Point(44, 369);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = toSystemString(Nombre10);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Lavender;
			this->label12->Location = System::Drawing::Point(250, 369);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 20;
			if (dinero10 != 0.0)
			this->label12->Text = toSystemString(to_string(dinero10));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Lavender;
			this->label13->Location = System::Drawing::Point(250, 336);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 19;
			if (dinero9 != 0.0)
			this->label13->Text = toSystemString(to_string(dinero9));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Lavender;
			this->label14->Location = System::Drawing::Point(250, 302);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 13);
			this->label14->TabIndex = 18;
			if (dinero8 != 0.0)
			this->label14->Text = toSystemString(to_string(dinero8));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Lavender;
			this->label15->Location = System::Drawing::Point(250, 266);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 13);
			this->label15->TabIndex = 17;
			if (dinero7 != 0.0)
			this->label15->Text = toSystemString(to_string(dinero7));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Lavender;
			this->label16->Location = System::Drawing::Point(250, 234);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 16;
			if (dinero6 != 0.0)
			this->label16->Text = toSystemString(to_string(dinero6));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Lavender;
			this->label17->Location = System::Drawing::Point(250, 200);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 13);
			this->label17->TabIndex = 15;
			if (dinero5 != 0.0)
				this->label17->Text = toSystemString(to_string(dinero5));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Lavender;
			this->label18->Location = System::Drawing::Point(250, 164);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 13);
			this->label18->TabIndex = 14;
			if (dinero4 != 0.0)
			this->label18->Text = toSystemString(to_string(dinero4));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Lavender;
			this->label19->Location = System::Drawing::Point(250, 131);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 13);
			this->label19->TabIndex = 13;
			if (dinero3 != 0.0)
			this->label19->Text = toSystemString(to_string(dinero3));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Lavender;
			this->label20->Location = System::Drawing::Point(250, 97);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 13);
			this->label20->TabIndex = 12;
			if (dinero2 != 0.0)
			this->label20->Text = toSystemString(to_string(dinero2));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Lavender;
			this->label21->Location = System::Drawing::Point(250, 61);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 13);
			this->label21->TabIndex = 11;
			if (dinero1 != 0.0)
			this->label21->Text = toSystemString(to_string(dinero1));
			else {
				this->label19->Text = L"sin ocupar";
			}
			// 
			// Puntajes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(502, 413);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Puntajes";
			this->Text = L"Puntajes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:  static String^ toSystemString(string str) {
			return gcnew String(str.c_str());
		}
	};
}
