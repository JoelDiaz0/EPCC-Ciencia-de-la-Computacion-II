//Lista.h

#pragma once
#include <iostream>
#include "Nodo.h"

class Lista
{
public:
	Lista();
	~Lista();
	void insertar_elemento(int valor);
	const void mostrar();
public:
	Nodo* head;
	int num_nodes;
private:
};


