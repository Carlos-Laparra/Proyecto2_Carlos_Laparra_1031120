#pragma once
#include "Nodo.h"
#include"Bahia.h"
template <typename T>
class MatrizBahias
{		
	int cont;
	int filas;
	Bahia* ba;
	int columnas;	

	MatrizBahias() { fin = nullptr; inicio = nullptr; cont = 0; filas = 0; columnas = 0; ba = nullptr; }
	~MatrizBahias() {}

	void InsertarNueva(Bahia* bahia) {
		Nodo<T>* nuevaBahia = new Nodo();
		nuevaBahia->value = bahia;
		nuevaBahia->ant = bahia;
		nuevaBahia->sig = bahia;
		nuevaBahia->der = bahia;
		nuevaBahia->izq = bahia;
		filas++;
		columnas++;
		cont++;
	}
	void CrearBahia(Bahia* bahia, int id) {//0=fila - 1=columna - 2=bahiacompleta
		if (cont == 0) {
			InsertarNueva(bahia);
		}
		else if (id == 0) {
			AgregarFila(bahia);
		}
		else if (id == 1) {
			AgregarColumna(bahia);
		}
		else if (id == 2) {
 
		}
	}

	void AgregarFila(Bahia* bahia) {
		Nodo<T>* nuevaFila = new Nodo();
		nuevaFila->value = bahia;
		Nodo<T>* temp = new Nodo<T> * ();
		Nodo<T>* nextTemp = new Nodo<T> * ();
		while (nuevaFila->der != nullptr) {			

		}
	}

	void AgregarColumna(Bahia* bahia) {

	}

};

