//Esta clase iba a servir para almacenar las partes laterales, la parte donde se iban a mostrar las filas y columnas como tal
#pragma once
using namespace System;
#include"Nodo.h"
template<typename T>
class Filas_Columnas
{	
	//Nodos para identificar limites
	//Para las columnas
	Nodo<T>* derecha;	
	//para las filas	
	Nodo<T>* abajo;		
	//contadores para la fila o columna
	int cantF;
	int canC;
	
	Filas_Columnas() { izquierda = nullptr; derecha = nullptr; arriba = nullptr; nuevaColumna = nullptr; nuevaFila = nullptr; canC = 0; cantF = 0; }
	~Filas_Columnas(){}
	//metodos 
	void crearFila(T nombre) {		
		Nodo<T>* nuevaFila = new Nodo<T>();
		nuevaFila->value = nombre;
		if (isEmpty()==true) {		
			derecha = nuevaFila;
		}
		else {
			nuevaFila->sig = derecha;
			derecha = nuevaFila;
		}
		cantF++;
	}		
	void crearColumna(T numero) {
		Nodo<T>* nuevaColumna = new Nodo<T>();
		nuevaColumna->value = numero;
		if (!isEmpty()) {
			abajo = nuevaColumna;
		}
		else {
			nuevaColumna->sig = abajo;
			abajo = nuevaColumna;
		}
	}

	bool isEmpty() {
		if (cantF == 0 || canC == 0) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
};

