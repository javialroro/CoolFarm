#pragma once
#include <iostream>
#include <fstream>
#include <json/json.h>
#include "estructuras.h"

namespace CoolFarm {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	string folderPath = "C:\\Users\\lmaag\\OneDrive\\Escritorio\\C++\\Proyectos\\CoolFarm\\CoolFarm\\CoolFarm";



	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class BuscarPartida : public System::Windows::Forms::Form
	{
	public:
		BuscarPartida(void)
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
		~BuscarPartida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxNumPart;
	private: System::Windows::Forms::Button^ buttonCargar;

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
			this->textBoxNumPart = (gcnew System::Windows::Forms::TextBox());
			this->buttonCargar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INGRESE EL NÚMERO DE PARTIDA QUE DESEA CARGAR:";
			// 
			// textBoxNumPart
			// 
			this->textBoxNumPart->Location = System::Drawing::Point(15, 47);
			this->textBoxNumPart->Name = L"textBoxNumPart";
			this->textBoxNumPart->Size = System::Drawing::Size(69, 20);
			this->textBoxNumPart->TabIndex = 1;
			// 
			// buttonCargar
			// 
			this->buttonCargar->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonCargar->Location = System::Drawing::Point(254, 93);
			this->buttonCargar->Name = L"buttonCargar";
			this->buttonCargar->Size = System::Drawing::Size(64, 22);
			this->buttonCargar->TabIndex = 2;
			this->buttonCargar->Text = L"CARGAR";
			this->buttonCargar->UseVisualStyleBackColor = false;
			this->buttonCargar->Click += gcnew System::EventHandler(this, &BuscarPartida::buttonCargar_Click);
			// 
			// BuscarPartida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(335, 127);
			this->Controls->Add(this->buttonCargar);
			this->Controls->Add(this->textBoxNumPart);
			this->Controls->Add(this->label1);
			this->Name = L"BuscarPartida";
			this->Text = L"BuscarPartida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void buttonCargar_Click(System::Object^ sender, System::EventArgs^ e) {
			ifstream archivo(to_wstring(Int32::Parse(this->textBoxNumPart->Text)));
			if (archivo.is_open()) {
				Json::CharReaderBuilder builder;
				Json::Value root;
				JSONCPP_STRING errs;

				if (Json::parseFromStream(builder, archivo, &root, &errs)) {
					nombrePartida = root["NombrePartida"].asInt();
					//arbolesBinarios = root["Matriz"].asInt();
					porcentOvejas = root["SettingPorcentOveja"].asInt();
					aparicionOvejas = root["SettingAparicionOveja"].asInt();
					/*
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
					*/
					std::cout << "Partida cargada correctamente." << std::endl;
				}
				else {
					std::cout << "Error al analizar el archivo JSON: " << errs << std::endl;
				}
			}
			else {
				MessageBox::Show("No existe una partida guardada con ese número.");
			}
		}
	};
}
