//Nodo.h

#pragma once
#include <iostream>

class Nodo
{
public:
	friend class Lista;
	Nodo(int valor);
	~Nodo();
private:
	Nodo* sig;
	int valor;
};



