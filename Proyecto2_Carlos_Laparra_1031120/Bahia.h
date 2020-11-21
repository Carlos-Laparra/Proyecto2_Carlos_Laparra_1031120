#pragma once
#include"Nodo.h"
#include"Filas_Columnas.h"
template<typename T>
class Bahia
{
public:
	int tipoP;
	int pesoU;
	int cantP;
	int posicion;
	T fila;
	T columna;
	Bahia* arriba;
	Bahia* abajo;
	Bahia* izquierda;
	Bahia* derecha;
	
	
	Bahia() {
		tipoP = 0; pesoU = 0; cantP = 0; fila = nullptr; columna = nullptr; 
		abajo = nullptr; arriba nullptr; izquierda = nullptr; derecha = nullptr;
	}
	~Bahia(){}
};

