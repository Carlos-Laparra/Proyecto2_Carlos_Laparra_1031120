#pragma once
template <typename T>
class Nodo
{
	T value;
	Nodo<T>* sig;
	Nodo<T>* ant;
	Nodo<T>* der;
	Nodo<T>* izq;

	Nodo() { sig = nullptr; ant = nullptr; der = nullptr; izq = nullptr; }
	~Nodo() {}
};



