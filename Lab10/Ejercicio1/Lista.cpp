//Lista.cpp

#include "Lista.h"

Lista::Lista()
{
	head = NULL;
}

Lista::~Lista()
{
	Nodo* aux = head;
	Nodo* borrar;

	while (aux != NULL)
	{
		borrar = aux;
		aux = aux->sig;
		delete borrar;
	}
	head = NULL;
}

void Lista::insertar_elemento(int num)
{
	Nodo* nuevo_nodo = new Nodo(num);
	Nodo* aux1 = head;

	if (head == NULL)
		head = nuevo_nodo;
	else
	{
		while (aux1->sig != NULL)
			aux1 = aux1->sig;
		aux1->sig = nuevo_nodo;
	}
}

const void Lista::mostrar()
{
	Nodo* aux = head;

	while (aux != NULL)
	{
		std::cout << aux->valor;
		if (aux->sig != NULL)
			std::cout << "->";
		aux = aux->sig;
	}
	std::cout << "\n";
}
