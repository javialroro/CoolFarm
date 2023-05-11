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

    // Parámetros
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Oveja() {
        cantidad_frutos = frutosOvejas;
        frutos_por_segundo = tiempoFrutosOvejas;
    }

    // Método para generar una oveja

};

struct NodoOveja {

    // Parámetros
    Oveja* oveja;
    NodoOveja* siguiente;

    // Constructor
    NodoOveja (Oveja* inOveja) {
        oveja = inOveja;
        siguiente = NULL;
    }

};

struct ListaSimpleOvejas {

    // Parámetros
    NodoOveja* primerNodo, * ultimoNodo;

    // Constructor
    ListaSimpleOvejas() {
        primerNodo = ultimoNodo = NULL;
    }

    // Método para generar una oveja
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

// Método para generar una oveja
void generarOveja() {
    int cont = 0; // contador para generar las ovejas que se solicitan en settings
    int aleatorio = rand() % 100 + 1; // Generar un número aleatorio entre 1 y 100
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

    // Parámetros
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Cuervo() {
        cantidad_frutos = frutosCuervos;
        frutos_por_segundo = tiempoFrutosCuervos;
    }


};

struct NodoCuervo {

    // Parámetros
    Cuervo* cuervo;
    NodoCuervo* siguiente;

    // Constructor
    NodoCuervo(Cuervo* inCuervo) {
        cuervo = inCuervo;
        siguiente = NULL;
    }

};

struct ListaSimpleCuervos {

    // Parámetros
    NodoCuervo* primerNodo, * ultimoNodo;

    // Constructor
    ListaSimpleCuervos() {
        primerNodo = ultimoNodo = NULL;
    }

    // Método para generar una oveja
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

// Método para generar un cuervo
void generarCuervo() {
    int cont = 0; // contador para generar los cuervos que se solicitan en settings
    int aleatorio = rand() % 100 + 1; // Generar un número aleatorio entre 1 y 100
    if (aleatorio <= porcentCuervos) {
        while (cont <= aparicionCuervos) {
            Cuervo* pollito = new Cuervo();
            listaCuervos->insertar(pollito);
            cont++;
        }
        return;
    }
}



