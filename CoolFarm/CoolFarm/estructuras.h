#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int arbolesBinarios[10][10];

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
    void insertar(Oveja*);
};

// Lista Global Ovejas
ListaSimpleOvejas* listaOvejas = new ListaSimpleOvejas();

// M�todo para generar una oveja
void generarOveja();


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
    void insertar(Cuervo*);
};

// Lista Global Ovejas
ListaSimpleCuervos* listaCuervos = new ListaSimpleCuervos();

// M�todo para generar un cuervo
void generarCuervo();


