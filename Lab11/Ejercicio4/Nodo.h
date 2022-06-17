//Nodo.h

#pragma once
#include <iostream>

class Nodo
{
public:
	friend class Pila;
	Nodo(int valor);
	~Nodo();
private:
	Nodo* sig;
	int valor{};
};


