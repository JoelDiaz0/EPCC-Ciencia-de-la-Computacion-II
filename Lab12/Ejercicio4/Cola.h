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
	int get_primer_elemento();
	bool buscar_elemento(int dato);
	bool vacio();
	int tam_cola();
	const void mostrar();
private:
	Nodo* head;
	Nodo* cola;
};


