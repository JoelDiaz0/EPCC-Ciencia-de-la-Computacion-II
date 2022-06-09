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

void Lista::insertar_elem_final(int num)
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

void Lista::insertar_elem_inicio(int num)
{
	Nodo* nuevo_nodo = new Nodo(num);
	Nodo* aux1 = head;

	if (head == NULL)
		head = nuevo_nodo;
	else
	{
		nuevo_nodo->sig = head;
		head = nuevo_nodo;
		while (aux1)
			aux1 = aux1->sig;
	}
}

void Lista::insertar_elem_libre(int valor, int pos)
{
	if (pos > tam_lista() || pos < 0)
		throw std::logic_error("Posicion fuera del rango o negativo!");

	Nodo* nuevo_nodo = new Nodo(valor);
	Nodo* aux1;
	if (pos == 0)
	{
		nuevo_nodo->sig = head;
		head = nuevo_nodo;
	}
	else
	{
		aux1 = head;

		for (int i = 1; aux1 != NULL; i++)
		{
			if (i == pos)
			{
				nuevo_nodo->sig = aux1->sig;
				aux1->sig = nuevo_nodo;
				break;
			}
			aux1 = aux1->sig;
		}
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

int Lista::tam_lista()
{
	Nodo* aux1 = head;
	int tam = 0;
	while (aux1 != NULL)
	{
		tam++;
		aux1 = aux1->sig;
	}
	return tam;
}