#pragma once

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
// Settings Plagas
int porcentPlagas;
int aparicionPlagas;
int tiempoAparicionPlagas;
// Settings Mercado
int mercadoAparicion;
int mercadoApertura;
// Frutos por Arbol
int frutosBinario = 7;
int frutosHeap = 74;
int frutosAVL = 2;
int frutosSplay = 17;
// Dinero Jugador
float dinero = 0;




// Estructuras Oveja

struct Oveja {

    // Parámetros
    int fila;
    int columna;
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Oveja(int infila, int incolumna) {
        fila = infila;
        columna = incolumna;
        cantidad_frutos = frutosOvejas;
        frutos_por_segundo = tiempoFrutosOvejas;
    }

};

struct NodoOveja {

    // Parámetros
    Oveja* oveja;
    NodoOveja* siguiente;

    // Constructor
    NodoOveja(Oveja* inOveja) {
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


    void actParametrosOvejas() {
        NodoOveja* tmp = primerNodo;
        while (tmp != NULL) {
            tmp->oveja->cantidad_frutos = frutosCuervos;
            tmp->oveja->frutos_por_segundo = tiempoFrutosCuervos;
            tmp = tmp->siguiente;
        }
        return;
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
            //Oveja* borrego = new Oveja();
            //listaOvejas->insertar(borrego);
            cont++;
        }
        return;
    }
}



// Estructuras Cuervo

struct Cuervo {

    // Parámetros
    int fila;
    int columna;
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Cuervo(int infila, int incolumna) {
        fila = infila;
        columna = incolumna;
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
    void actParametrosCuervos() {
        NodoCuervo* tmp = primerNodo;
        while (tmp != NULL) {
            tmp->cuervo->cantidad_frutos = frutosCuervos;
            tmp->cuervo->frutos_por_segundo = tiempoFrutosCuervos;
            tmp = tmp->siguiente;
        }
        return;
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
            //Cuervo* pollito = new Cuervo();
            //listaCuervos->insertar(pollito);
            cont++;
        }
        return;
    }
}



// Estructuras Plaga

struct Plaga {

    // Parámetros
    int fila;
    int columna;

    // Constructor
    Plaga(int infila, int incolumna) {
        fila = infila;
        columna = incolumna;
    }

};

struct NodoPlaga {

    // Parámetros
    Plaga* plaga;
    NodoPlaga* siguiente;

    // Constructor
    NodoPlaga(Plaga* inPlaga) {
        plaga = inPlaga;
        siguiente = NULL;
    }

};

struct ListaSimplePlagas {

    // Parámetros
    NodoPlaga* primerNodo, * ultimoNodo;

    // Constructor
    ListaSimplePlagas() {
        primerNodo = ultimoNodo = NULL;
    }

    // Método para generar una oveja
    void insertar(Plaga* plaga) {

        if (primerNodo == NULL) {
            ultimoNodo = primerNodo = new NodoPlaga(plaga);
        }

        else {
            NodoPlaga* nuevo = new NodoPlaga(plaga);
            nuevo->siguiente = primerNodo;
            primerNodo = nuevo;
        }
    }
};

// Lista Global Plagas
ListaSimplePlagas* listaPlagas = new ListaSimplePlagas();

// Método para generar una plaga
void generarPlaga() {
    int cont = 0; // contador para generar los cuervos que se solicitan en settings
    int aleatorio = rand() % 100 + 1; // Generar un número aleatorio entre 1 y 100
    if (aleatorio <= porcentPlagas) {
        while (cont <= aparicionPlagas) {
            //Plaga* gusano = new Plaga();
            //listaPlagas->insertar(gusano);
            cont++;
        }
        return;
    }
}

struct Granjero {

    // Parámetros
    int fila;
    int columna;
    int cantidad_frutos;
    int frutos_por_segundo;

    // Constructor
    Granjero() {
        fila = 5;
        columna = 5;
        cantidad_frutos = frutosCuervos;
        frutos_por_segundo = tiempoFrutosCuervos;
    }


};

struct Mercado {

    // Parámetros
    float precioArbBinario;
    float precioArbHeap;
    float precioArbAVL;
    float precioArbSplay;
    float precioEspantapajaros;

    // Constructor
    Mercado() {
        precioArbBinario = 100.0;
        precioArbHeap = 130.0;
        precioArbAVL = 350.0;
        precioArbSplay = 600.0;
        precioEspantapajaros = 200.0;
    }

    // Métodos
    float obtenerPrecioFrutosBinario(int numeroFrutos) {
        float valorTotal = 0;
        while (numeroFrutos > 0) {
            int precio = 1 + rand() % 5000;
            valorTotal += precio / 1000.0;
            numeroFrutos--;
        }
        return valorTotal;
    }

    float obtenerPrecioFrutosHeap(int numeroFrutos) {
        float valorTotal = 0;
        while (numeroFrutos > 0) {
            int precio = 1 + rand() % 5000;
            valorTotal += precio / 1000.0;
            numeroFrutos--;
        }
        return valorTotal;
    }

    float obtenerPrecioFrutosAVL(int numeroFrutos){
        float valorTotal = 0;
        while (numeroFrutos > 0) {
            int precio = 1 + rand() % 20000;
            valorTotal =  valorTotal + precio / 1000.0;
            numeroFrutos--;
        }
        return valorTotal;
    }

    float obtenerPrecioFrutosSplay(int numeroFrutos) {
        float valorTotal = 0;
        while (numeroFrutos > 0) {
            int precio = 1 + rand() % 50000;
            valorTotal += precio / 1000.0;
            numeroFrutos--;
        }
        return valorTotal;
    }

};

Mercado* mercado = new Mercado();


