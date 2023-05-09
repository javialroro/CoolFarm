#pragma once

namespace CoolFarm {

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
	private: System::Windows::Forms::Label^ porcentajeOvejas;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
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
	private: System::Windows::Forms::Button^ button1;

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
			this->porcentajeOvejas = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			// porcentajeOvejas
			// 
			this->porcentajeOvejas->AutoSize = true;
			this->porcentajeOvejas->Location = System::Drawing::Point(109, 84);
			this->porcentajeOvejas->Name = L"porcentajeOvejas";
			this->porcentajeOvejas->Size = System::Drawing::Size(121, 25);
			this->porcentajeOvejas->TabIndex = 2;
			this->porcentajeOvejas->Text = L"Porcentaje:";
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 31);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(402, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 31);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(629, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 31);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(402, 227);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 31);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(629, 227);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 31);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(402, 387);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 31);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(402, 465);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 31);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(629, 465);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(75, 31);
			this->textBox8->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(402, 539);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 31);
			this->textBox9->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(629, 542);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 31);
			this->textBox10->TabIndex = 17;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(760, 606);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 43);
			this->button1->TabIndex = 28;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(933, 673);
			this->Controls->Add(this->button1);
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
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->porcentajeOvejas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
