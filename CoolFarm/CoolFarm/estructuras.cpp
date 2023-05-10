#include "estructuras.h"

/* INSERTAR LISTA OVEJAS */
void ListaSimpleOvejas::insertar(Oveja* oveja) {

    if (primerNodo == NULL){
        ultimoNodo = primerNodo = new NodoOveja (oveja);
    }

    else{
        NodoOveja* nuevo = new NodoOveja(oveja);
        nuevo->siguiente = primerNodo;
        primerNodo = nuevo;
    }
}

/* INSERTAR LISTA CUERVOS */
void ListaSimpleCuervos::insertar(Cuervo* cuervo) {

    if (primerNodo == NULL) {
        ultimoNodo = primerNodo = new NodoCuervo(cuervo);
    }

    else {
        NodoCuervo* nuevo = new NodoCuervo(cuervo);
        nuevo->siguiente = primerNodo;
        primerNodo = nuevo;
    }
}

/* GENERAR OVEJAS */
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

/* GENERAR CUERVOS */
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
