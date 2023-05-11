#pragma once
//#include "Settings.h"
//hola buenas
int x = 0;
#include <iostream>
#include <string>
#include <cstdlib>
int arbolesBinarios[10][10];

using namespace std;
// Settings Ovejas
int porcentOvejas;
int aparicionOvejas;
int tiempoAparicionOvejas;
int frutosOvejas;
int tiempoFrutosOvejas;
// Settings Cuervos
int porcentCuervos;
int aparicionCuervos;
int tiempoAparicionCuervos;
int frutosCuervos;
int tiempoFrutosCuervos;




// Estructuras Oveja

struct Oveja {

    // Par�metros
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Oveja() {
        cantidad_frutos = frutosOvejas;
        frutos_por_segundo = tiempoFrutosOvejas;
    }

    // M�todo para generar una oveja

};

struct NodoOveja {

    // Par�metros
    Oveja* oveja;
    NodoOveja* siguiente;

    // Constructor
    NodoOveja (Oveja* inOveja) {
        oveja = inOveja;
        siguiente = NULL;
    }

};

struct ListaSimpleOvejas {

    // Par�metros
    NodoOveja* primerNodo, * ultimoNodo;

    // Constructor
    ListaSimpleOvejas() {
        primerNodo = ultimoNodo = NULL;
    }

    // M�todo para generar una oveja
    void insertar(Oveja* oveja) {

        if (primerNodo == NULL) {
            ultimoNodo = primerNodo = new NodoOveja(oveja);
        }

        else {
            NodoOveja* nuevo = new NodoOveja(oveja);
            nuevo->siguiente = primerNodo;
            primerNodo = nuevo;
        }
    }
};

// Lista Global Ovejas
ListaSimpleOvejas* listaOvejas = new ListaSimpleOvejas();

// M�todo para generar una oveja
void generarOveja() {
    int cont = 0; // contador para generar las ovejas que se solicitan en settings
    int aleatorio = rand() % 100 + 1; // Generar un n�mero aleatorio entre 1 y 100
    if (aleatorio <= porcentOvejas) {
        while (cont <= aparicionOvejas) {
            Oveja* borrego = new Oveja();
            listaOvejas->insertar(borrego);
            cont++;
        }
        return;
    }
}


// Estructuras Cuervo

struct Cuervo {

    // Par�metros
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Cuervo() {
        cantidad_frutos = frutosCuervos;
        frutos_por_segundo = tiempoFrutosCuervos;
    }


};

struct NodoCuervo {

    // Par�metros
    Cuervo* cuervo;
    NodoCuervo* siguiente;

    // Constructor
    NodoCuervo(Cuervo* inCuervo) {
        cuervo = inCuervo;
        siguiente = NULL;
    }

};

struct ListaSimpleCuervos {

    // Par�metros
    NodoCuervo* primerNodo, * ultimoNodo;

    // Constructor
    ListaSimpleCuervos() {
        primerNodo = ultimoNodo = NULL;
    }

    // M�todo para generar una oveja
    void insertar(Cuervo* cuervo) {

        if (primerNodo == NULL) {
            ultimoNodo = primerNodo = new NodoCuervo(cuervo);
        }

        else {
            NodoCuervo* nuevo = new NodoCuervo(cuervo);
            nuevo->siguiente = primerNodo;
            primerNodo = nuevo;
        }
    }
};

// Lista Global Ovejas
ListaSimpleCuervos* listaCuervos = new ListaSimpleCuervos();

// M�todo para generar un cuervo
void generarCuervo() {
    int cont = 0; // contador para generar los cuervos que se solicitan en settings
    int aleatorio = rand() % 100 + 1; // Generar un n�mero aleatorio entre 1 y 100
    if (aleatorio <= porcentCuervos) {
        while (cont <= aparicionCuervos) {
            Cuervo* pollito = new Cuervo();
            listaCuervos->insertar(pollito);
            cont++;
        }
        return;
    }
}



