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
	void insertar_elem_libre(int valor, int pos);
	void eliminar_ultimo_elem();
	void eliminar_primer_elem();
	bool vacio();
	int tam_lista();
	const void mostrar();
private:
	Nodo* head;
};



