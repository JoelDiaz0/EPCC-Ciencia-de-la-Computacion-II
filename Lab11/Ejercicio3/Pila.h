//Pila.h

#pragma once
#include <iostream>
#include "Nodo.h"

class Pila
{
public:
	Pila();
	~Pila();
	void insertar_elem(int valor);
	void eliminar_elem();
	bool buscar_elem(int valor);
	bool vacio();
	int tam_Pila();
	int retornarPrimerValor();
	const void mostrar();
private:
	Nodo* head;
};

