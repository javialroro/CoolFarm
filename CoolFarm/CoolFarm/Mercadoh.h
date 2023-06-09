#pragma once


#include "Puntajes.h"

namespace CoolFarm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mercadoh
	/// </summary>
	public ref class Mercadoh : public System::Windows::Forms::Form
	{
	public:
		
		Mercadoh(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Mercadoh()
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
	private: System::Windows::Forms::Label^ labelDinero;
	private: System::Windows::Forms::Label^ cantidadSp;
	private: System::Windows::Forms::Label^ cantidadAvl;
	private: System::Windows::Forms::Label^ CantidadHe;
	private: System::Windows::Forms::Label^ cantidadBi;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ venderTodoButt;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ labelPrecioBi;
	private: System::Windows::Forms::Label^ labelPrecioHe;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ labelPrecioAVL;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ labelPrecioSp;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ labelPrecioEspanta;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ buttonComprarBi;
	private: System::Windows::Forms::Button^ buttonComprarHe;
	private: System::Windows::Forms::Button^ buttonComprarAVL;
	private: System::Windows::Forms::Button^ buttonComprarSp;
	private: System::Windows::Forms::Button^ buttonComprarEspan;
	private: System::Windows::Forms::TextBox^ textBoxBi;
	private: System::Windows::Forms::TextBox^ textBoxHe;
	private: System::Windows::Forms::TextBox^ textBoxAVL;
	private: System::Windows::Forms::TextBox^ textBoxSp;
	private: System::Windows::Forms::Button^ venderBi;
	private: System::Windows::Forms::Button^ venderHe;
	private: System::Windows::Forms::Button^ venderAVL;
	private: System::Windows::Forms::Button^ venderSp;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelDinero = (gcnew System::Windows::Forms::Label());
			this->cantidadSp = (gcnew System::Windows::Forms::Label());
			this->cantidadAvl = (gcnew System::Windows::Forms::Label());
			this->CantidadHe = (gcnew System::Windows::Forms::Label());
			this->cantidadBi = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->venderTodoButt = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelPrecioBi = (gcnew System::Windows::Forms::Label());
			this->labelPrecioHe = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelPrecioAVL = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->labelPrecioSp = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->labelPrecioEspanta = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->buttonComprarBi = (gcnew System::Windows::Forms::Button());
			this->buttonComprarHe = (gcnew System::Windows::Forms::Button());
			this->buttonComprarAVL = (gcnew System::Windows::Forms::Button());
			this->buttonComprarSp = (gcnew System::Windows::Forms::Button());
			this->buttonComprarEspan = (gcnew System::Windows::Forms::Button());
			this->textBoxBi = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAVL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSp = (gcnew System::Windows::Forms::TextBox());
			this->venderBi = (gcnew System::Windows::Forms::Button());
			this->venderHe = (gcnew System::Windows::Forms::Button());
			this->venderAVL = (gcnew System::Windows::Forms::Button());
			this->venderSp = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(27, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FRUTOS DISPONIBLES:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(729, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DINERO: $";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(75, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(244, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cantidad Frutos Binario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(75, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad Frutos HEAP:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(75, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(217, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cantidad Frutos AVL:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(75, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cantidad Frutos Splay:";
			// 
			// labelDinero
			// 
			this->labelDinero->AutoSize = true;
			this->labelDinero->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelDinero->Location = System::Drawing::Point(850, 34);
			this->labelDinero->Name = L"labelDinero";
			this->labelDinero->Size = System::Drawing::Size(0, 25);
			this->labelDinero->TabIndex = 6;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));
			// 
			// cantidadSp
			// 
			this->cantidadSp->AutoSize = true;
			this->cantidadSp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cantidadSp->Location = System::Drawing::Point(326, 223);
			this->cantidadSp->Name = L"cantidadSp";
			this->cantidadSp->Size = System::Drawing::Size(0, 25);
			this->cantidadSp->TabIndex = 10;
			this->cantidadSp->Text = this->toSystemString(to_string(frutosSplay));
			// 
			// cantidadAvl
			// 
			this->cantidadAvl->AutoSize = true;
			this->cantidadAvl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cantidadAvl->Location = System::Drawing::Point(326, 186);
			this->cantidadAvl->Name = L"cantidadAvl";
			this->cantidadAvl->Size = System::Drawing::Size(0, 25);
			this->cantidadAvl->TabIndex = 9;
			this->cantidadAvl->Text = this->toSystemString(to_string(frutosAVL));
			// 
			// CantidadHe
			// 
			this->CantidadHe->AutoSize = true;
			this->CantidadHe->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CantidadHe->Location = System::Drawing::Point(326, 148);
			this->CantidadHe->Name = L"CantidadHe";
			this->CantidadHe->Size = System::Drawing::Size(0, 25);
			this->CantidadHe->TabIndex = 8;
			this->CantidadHe->Text = this->toSystemString(to_string(frutosHeap));
			// 
			// cantidadBi
			// 
			this->cantidadBi->AutoSize = true;
			this->cantidadBi->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cantidadBi->Location = System::Drawing::Point(326, 109);
			this->cantidadBi->Name = L"cantidadBi";
			this->cantidadBi->Size = System::Drawing::Size(0, 25);
			this->cantidadBi->TabIndex = 7;
			this->cantidadBi->Text = this->toSystemString(to_string(frutosBinario));
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(796, 519);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(231, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Cantidad Frutos Splay:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(796, 481);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(217, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Cantidad Frutos AVL:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(796, 444);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(234, 25);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Cantidad Frutos HEAP:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(796, 405);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(244, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Cantidad Frutos Binario:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(26, 327);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 25);
			this->label11->TabIndex = 15;
			this->label11->Text = L"VENDER TODO";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(728, 325);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(262, 25);
			this->label12->TabIndex = 16;
			this->label12->Text = L"VENDER POR CANTIDAD";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(18, 594);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 25);
			this->label13->TabIndex = 17;
			this->label13->Text = L"COMPRAR";
			// 
			// venderTodoButt
			// 
			this->venderTodoButt->Location = System::Drawing::Point(81, 408);
			this->venderTodoButt->Name = L"venderTodoButt";
			this->venderTodoButt->Size = System::Drawing::Size(381, 59);
			this->venderTodoButt->TabIndex = 18;
			this->venderTodoButt->Text = L"Vender todos los frutos";
			this->venderTodoButt->UseVisualStyleBackColor = true;
			this->venderTodoButt->Click += gcnew System::EventHandler(this, &Mercadoh::venderTodoButt_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(82, 656);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(135, 25);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Arbol Binario";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(98, 691);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 25);
			this->label15->TabIndex = 20;
			this->label15->Text = L"$";
			// 
			// labelPrecioBi
			// 
			this->labelPrecioBi->AutoSize = true;
			this->labelPrecioBi->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPrecioBi->Location = System::Drawing::Point(128, 691);
			this->labelPrecioBi->Name = L"labelPrecioBi";
			this->labelPrecioBi->Size = System::Drawing::Size(0, 25);
			this->labelPrecioBi->TabIndex = 21;
			this->labelPrecioBi->Text = this->toSystemString(to_string(precioBinario));
			// 
			// labelPrecioHe
			// 
			this->labelPrecioHe->AutoSize = true;
			this->labelPrecioHe->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPrecioHe->Location = System::Drawing::Point(394, 691);
			this->labelPrecioHe->Name = L"labelPrecioHe";
			this->labelPrecioHe->Size = System::Drawing::Size(0, 25);
			this->labelPrecioHe->TabIndex = 24;
			this->labelPrecioHe->Text = this->toSystemString(to_string(precioHeap));
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(364, 691);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 25);
			this->label17->TabIndex = 23;
			this->label17->Text = L"$";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(350, 656);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(119, 25);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Arbol Heap";
			// 
			// labelPrecioAVL
			// 
			this->labelPrecioAVL->AutoSize = true;
			this->labelPrecioAVL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPrecioAVL->Location = System::Drawing::Point(648, 691);
			this->labelPrecioAVL->Name = L"labelPrecioAVL";
			this->labelPrecioAVL->Size = System::Drawing::Size(0, 25);
			this->labelPrecioAVL->TabIndex = 27;
			this->labelPrecioAVL->Text = this->toSystemString(to_string(precioAVL));
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(618, 691);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 25);
			this->label20->TabIndex = 26;
			this->label20->Text = L"$";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(603, 656);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(108, 25);
			this->label21->TabIndex = 25;
			this->label21->Text = L"Arbol AVL";
			// 
			// labelPrecioSp
			// 
			this->labelPrecioSp->AutoSize = true;
			this->labelPrecioSp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPrecioSp->Location = System::Drawing::Point(888, 691);
			this->labelPrecioSp->Name = L"labelPrecioSp";
			this->labelPrecioSp->Size = System::Drawing::Size(0, 25);
			this->labelPrecioSp->TabIndex = 30;
			this->labelPrecioSp->Text = this->toSystemString(to_string(precioSplay));
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(858, 691);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(24, 25);
			this->label23->TabIndex = 29;
			this->label23->Text = L"$";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(843, 656);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(122, 25);
			this->label24->TabIndex = 28;
			this->label24->Text = L"Arbol Splay";
			// 
			// labelPrecioEspanta
			// 
			this->labelPrecioEspanta->AutoSize = true;
			this->labelPrecioEspanta->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPrecioEspanta->Location = System::Drawing::Point(1136, 691);
			this->labelPrecioEspanta->Name = L"labelPrecioEspanta";
			this->labelPrecioEspanta->Size = System::Drawing::Size(0, 25);
			this->labelPrecioEspanta->TabIndex = 33;
			this->labelPrecioEspanta->Text = this->toSystemString(to_string(precioEspanta));
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(1106, 691);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(24, 25);
			this->label26->TabIndex = 32;
			this->label26->Text = L"$";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(1090, 656);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(162, 25);
			this->label27->TabIndex = 31;
			this->label27->Text = L"Espantapajaros";
			// 
			// buttonComprarBi
			// 
			this->buttonComprarBi->Location = System::Drawing::Point(88, 744);
			this->buttonComprarBi->Name = L"buttonComprarBi";
			this->buttonComprarBi->Size = System::Drawing::Size(116, 44);
			this->buttonComprarBi->TabIndex = 34;
			this->buttonComprarBi->Text = L"comprar";
			this->buttonComprarBi->UseVisualStyleBackColor = true;
			this->buttonComprarBi->Click += gcnew System::EventHandler(this, &Mercadoh::buttonComprarBi_Click);
			// 
			// buttonComprarHe
			// 
			this->buttonComprarHe->Location = System::Drawing::Point(354, 744);
			this->buttonComprarHe->Name = L"buttonComprarHe";
			this->buttonComprarHe->Size = System::Drawing::Size(116, 44);
			this->buttonComprarHe->TabIndex = 35;
			this->buttonComprarHe->Text = L"comprar";
			this->buttonComprarHe->UseVisualStyleBackColor = true;
			this->buttonComprarHe->Click += gcnew System::EventHandler(this, &Mercadoh::buttonComprarHe_Click);
			// 
			// buttonComprarAVL
			// 
			this->buttonComprarAVL->Location = System::Drawing::Point(596, 744);
			this->buttonComprarAVL->Name = L"buttonComprarAVL";
			this->buttonComprarAVL->Size = System::Drawing::Size(116, 44);
			this->buttonComprarAVL->TabIndex = 36;
			this->buttonComprarAVL->Text = L"comprar";
			this->buttonComprarAVL->UseVisualStyleBackColor = true;
			this->buttonComprarAVL->Click += gcnew System::EventHandler(this, &Mercadoh::buttonComprarAVL_Click);
			// 
			// buttonComprarSp
			// 
			this->buttonComprarSp->Location = System::Drawing::Point(848, 744);
			this->buttonComprarSp->Name = L"buttonComprarSp";
			this->buttonComprarSp->Size = System::Drawing::Size(116, 44);
			this->buttonComprarSp->TabIndex = 37;
			this->buttonComprarSp->Text = L"comprar";
			this->buttonComprarSp->UseVisualStyleBackColor = true;
			this->buttonComprarSp->Click += gcnew System::EventHandler(this, &Mercadoh::buttonComprarSp_Click);
			// 
			// buttonComprarEspan
			// 
			this->buttonComprarEspan->Location = System::Drawing::Point(1119, 744);
			this->buttonComprarEspan->Name = L"buttonComprarEspan";
			this->buttonComprarEspan->Size = System::Drawing::Size(116, 44);
			this->buttonComprarEspan->TabIndex = 38;
			this->buttonComprarEspan->Text = L"comprar";
			this->buttonComprarEspan->UseVisualStyleBackColor = true;
			this->buttonComprarEspan->Click += gcnew System::EventHandler(this, &Mercadoh::buttonComprarEspan_Click_1);
			// 
			// textBoxBi
			// 
			this->textBoxBi->Location = System::Drawing::Point(1070, 402);
			this->textBoxBi->Name = L"textBoxBi";
			this->textBoxBi->Size = System::Drawing::Size(92, 31);
			this->textBoxBi->TabIndex = 39;
			// 
			// textBoxHe
			// 
			this->textBoxHe->Location = System::Drawing::Point(1070, 441);
			this->textBoxHe->Name = L"textBoxHe";
			this->textBoxHe->Size = System::Drawing::Size(92, 31);
			this->textBoxHe->TabIndex = 40;
			// 
			// textBoxAVL
			// 
			this->textBoxAVL->Location = System::Drawing::Point(1070, 478);
			this->textBoxAVL->Name = L"textBoxAVL";
			this->textBoxAVL->Size = System::Drawing::Size(92, 31);
			this->textBoxAVL->TabIndex = 41;
			// 
			// textBoxSp
			// 
			this->textBoxSp->Location = System::Drawing::Point(1070, 516);
			this->textBoxSp->Name = L"textBoxSp";
			this->textBoxSp->Size = System::Drawing::Size(92, 31);
			this->textBoxSp->TabIndex = 42;
			// 
			// venderBi
			// 
			this->venderBi->Location = System::Drawing::Point(1191, 397);
			this->venderBi->Name = L"venderBi";
			this->venderBi->Size = System::Drawing::Size(129, 40);
			this->venderBi->TabIndex = 43;
			this->venderBi->Text = L"vender";
			this->venderBi->UseVisualStyleBackColor = true;
			this->venderBi->Click += gcnew System::EventHandler(this, &Mercadoh::venderBi_Click);
			// 
			// venderHe
			// 
			this->venderHe->Location = System::Drawing::Point(1191, 435);
			this->venderHe->Name = L"venderHe";
			this->venderHe->Size = System::Drawing::Size(129, 42);
			this->venderHe->TabIndex = 44;
			this->venderHe->Text = L"vender";
			this->venderHe->UseVisualStyleBackColor = true;
			this->venderHe->Click += gcnew System::EventHandler(this, &Mercadoh::venderHe_Click);
			// 
			// venderAVL
			// 
			this->venderAVL->Location = System::Drawing::Point(1191, 472);
			this->venderAVL->Name = L"venderAVL";
			this->venderAVL->Size = System::Drawing::Size(129, 42);
			this->venderAVL->TabIndex = 45;
			this->venderAVL->Text = L"vender";
			this->venderAVL->UseVisualStyleBackColor = true;
			this->venderAVL->Click += gcnew System::EventHandler(this, &Mercadoh::venderAVL_Click);
			// 
			// venderSp
			// 
			this->venderSp->Location = System::Drawing::Point(1191, 510);
			this->venderSp->Name = L"venderSp";
			this->venderSp->Size = System::Drawing::Size(129, 43);
			this->venderSp->TabIndex = 46;
			this->venderSp->Text = L"vender";
			this->venderSp->UseVisualStyleBackColor = true;
			this->venderSp->Click += gcnew System::EventHandler(this, &Mercadoh::venderSp_Click);
			// 
			// Mercadoh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumPurple;
			this->ClientSize = System::Drawing::Size(1360, 838);
			this->Controls->Add(this->venderSp);
			this->Controls->Add(this->venderAVL);
			this->Controls->Add(this->venderHe);
			this->Controls->Add(this->venderBi);
			this->Controls->Add(this->textBoxSp);
			this->Controls->Add(this->textBoxAVL);
			this->Controls->Add(this->textBoxHe);
			this->Controls->Add(this->textBoxBi);
			this->Controls->Add(this->buttonComprarEspan);
			this->Controls->Add(this->buttonComprarSp);
			this->Controls->Add(this->buttonComprarAVL);
			this->Controls->Add(this->buttonComprarHe);
			this->Controls->Add(this->buttonComprarBi);
			this->Controls->Add(this->labelPrecioEspanta);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->labelPrecioSp);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->labelPrecioAVL);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->labelPrecioHe);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->labelPrecioBi);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->venderTodoButt);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->cantidadSp);
			this->Controls->Add(this->cantidadAvl);
			this->Controls->Add(this->CantidadHe);
			this->Controls->Add(this->cantidadBi);
			this->Controls->Add(this->labelDinero);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Mercadoh";
			this->Text = L"Mercadoh";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:  static String^ toSystemString(string str) {
		return gcnew String(str.c_str());
	}
	private: System::Void venderTodoButt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (frutosBinario > 0) {

			for (size_t i = 0; i < arregloBinario.size(); i++) {
				dinero += arregloBinario[i]->montoTotal;
				arregloBinario[i]->deleteAllFruits();
				labelDinero->Text = toSystemString(to_string(dinero));
			}
			frutosBinario = 0;
		}
		if (frutosHeap > 0) {
			for (size_t i = 0; i < arregloHeap.size(); i++) {
				dinero += arregloHeap[i]->montoTotal;
				arregloHeap[i]->deleteAllFruits();
				labelDinero->Text = toSystemString(to_string(dinero));
			}
		}
		if (frutosAVL > 0)
			for (size_t i = 0; i < arregloAVL.size(); i++) {
				dinero += arregloAVL[i]->montoTotal;
				arregloAVL[i]->deleteAllFruits();
				labelDinero->Text = toSystemString(to_string(dinero));
			}
		if (frutosSplay > 0) {
			for (size_t i = 0; i < arregloSplay.size(); i++) {
				dinero += arregloSplay[i]->montoTotal;
				arregloSplay[i]->deleteAllFruits();
				labelDinero->Text = toSystemString(to_string(dinero));
			}
		}

		this->cantidadBi->Text = this->toSystemString(to_string(frutosBinario));
		this->CantidadHe->Text = this->toSystemString(to_string(frutosHeap));
		this->cantidadAvl->Text = this->toSystemString(to_string(frutosAVL));
		this->cantidadSp->Text = this->toSystemString(to_string(frutosSplay));
		this->labelDinero->Text = this->toSystemString(to_string(dinero));;
	}
	private: System::Void buttonComprarBi_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dinero >= mercado->precioArbBinario) {
			dinero -= mercado->precioArbBinario;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));
			BinarioOrdenado* a = new BinarioOrdenado();
			colaBinarioOrdenado.push(a);
		}
		else {
			noDinero();
		}
	};
	private: System::Void buttonComprarHe_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dinero >= mercado->precioArbHeap) {
			Heap* a = new Heap(30);
			colaHeap.push(a);
			dinero -= mercado->precioArbHeap;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));

		}
		else {
			noDinero();
		}
	};
	private: System::Void buttonComprarAVL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dinero >= mercado->precioArbAVL) {
			dinero -= mercado->precioArbAVL;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));
			avl_tree* a = new avl_tree();
			colaAVL.push(a);
		}
		else {
			noDinero();
		}
	};
	private: System::Void buttonComprarSp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dinero >= mercado->precioArbSplay) {
			dinero -= mercado->precioArbSplay;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));
			SplayTree* a = new SplayTree();
			colaSplay.push(a);
		}
		else {
			noDinero();
		}
	};


		   void noEspanta() {
			   MessageBox::Show("No puedes comprar m�s de dos espantapajaros");
		   }
		   void noDinero() {
			   MessageBox::Show("No tienes suficiente dinero");
		   }
		   void noFrutas() {
			   MessageBox::Show("No tienes suficiente frutas");
		   }

	private: System::Void venderBi_Click(System::Object^ sender, System::EventArgs^ e) {
		int cajita = Int32::Parse(this->textBoxBi->Text);
		int contador = 0;
		if (frutosBinario >= cajita) {

			for (size_t i = 0; i < arregloBinario.size(); i++) {
				while (arregloBinario[i]->cantidadFrutosA !=0 && contador!= cajita) {
					arregloBinario[i]->deleteFruits(1,"v");
					contador++;
				}
				labelDinero->Text = toSystemString(to_string(dinero));
				cantidadBi->Text = this->toSystemString(to_string(frutosBinario));
			}
			
			
		}
		else {
			noFrutas();
		}
	}
	private: System::Void venderHe_Click(System::Object^ sender, System::EventArgs^ e) {
		int cajita = Int32::Parse(this->textBoxHe->Text);
		int contador = 0;
		if (frutosHeap >= cajita) {
			for (size_t i = 0; i < arregloHeap.size(); i++) {
				while (arregloHeap[i]->cantidadFrutosA != 0 && contador != cajita) {
					arregloHeap[i]->deleteFruits(1,"v");
					contador++;
				}
				labelDinero->Text = toSystemString(to_string(dinero));
				CantidadHe->Text = this->toSystemString(to_string(frutosHeap));
			}
		}
		else {
			noFrutas();
		}
	}
	private: System::Void venderAVL_Click(System::Object^ sender, System::EventArgs^ e) {
		int cajita = Int32::Parse(this->textBoxAVL->Text);
		int contador = 0;
		if (frutosAVL >= cajita) {
			for (size_t i = 0; i < arregloAVL.size(); i++) {
				while (arregloAVL[i]->cantidadFrutosA != 0 && contador != cajita) {
					arregloAVL[i]->deleteFruits(1,"v");
					contador++;
				}
				labelDinero->Text = toSystemString(to_string(dinero));
				cantidadAvl->Text = this->toSystemString(to_string(frutosAVL));
			}
		}
		else {
			noFrutas();
		}
	}
	private: System::Void venderSp_Click(System::Object^ sender, System::EventArgs^ e) {
		int cajita = Int32::Parse(this->textBoxSp->Text);
		int contador = 0;
		if (frutosSplay >= cajita) {
			for (size_t i = 0; i < arregloSplay.size(); i++) {
				while (arregloSplay[i]->cantidadFrutosA != 0 && contador != cajita) {
					arregloSplay[i]->deleteFruits(1,"v");
					contador++;
				}
				labelDinero->Text = toSystemString(to_string(dinero));
				cantidadSp->Text = this->toSystemString(to_string(frutosSplay));
			}
		}
		else {
			noFrutas();
		}
	}
	private: System::Void buttonComprarEspan_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (espantapajarosDispo > 0) {
			dinero -= mercado->precioEspantapajaros;
			this->labelDinero->Text = this->toSystemString(to_string(dinero));
			Espantapajaros* a = new Espantapajaros();
			colaEspantapajaro.push(a);
			espantapajarosDispo -= 1;
		}
		else {
			noEspanta();
		}
	}
	};
};