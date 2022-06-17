//Cola.h

#pragma once
#include <iostream>
#include "Nodo.h"

class Cola
{
public:
	Cola();
	~Cola();
	void insertar_elemento(int dato);
	void eliminar_elemento();
	bool vacio();
	int tam_cola();
	const void mostrar();
private:
	Nodo* head;
	Nodo* cola;
};


