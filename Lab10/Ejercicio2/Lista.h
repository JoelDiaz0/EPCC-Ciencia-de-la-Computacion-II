//Lista.h

#pragma once
#include <iostream>
#include "Nodo.h"

class Lista
{
public:
	Lista();
	~Lista();
	void insertar_elem_final(int valor);
	void insertar_elem_inicio(int valor);
	const void mostrar();
public:
	Nodo* head;
private:
};




