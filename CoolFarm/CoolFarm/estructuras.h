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
    void insertar(Oveja*);
};

// Lista Global Ovejas
ListaSimpleOvejas* listaOvejas = new ListaSimpleOvejas();

// Método para generar una oveja
void generarOveja();


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
    void insertar(Cuervo*);
};

// Lista Global Ovejas
ListaSimpleCuervos* listaCuervos = new ListaSimpleCuervos();

// Método para generar un cuervo
void generarCuervo();


