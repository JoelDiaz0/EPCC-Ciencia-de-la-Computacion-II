
//Nodo.h

#pragma once
#include <iostream>

class Nodo
{
public:
	friend class Cola;
	Nodo(int valor);
	~Nodo();
private:
	Nodo* sig;
	int valor;
};
