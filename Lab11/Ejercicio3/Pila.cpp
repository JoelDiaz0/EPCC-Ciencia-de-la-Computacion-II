//Pila.cpp

#include "Nodo.h"
#include "Pila.h"

Pila::Pila()
{
	head = NULL;
}

Pila::~Pila()
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

void Pila::insertar_elem(int num)
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

void Pila::eliminar_elem()
{
	if (vacio())
	{
		std::cerr << "Pila Vacia!\n";
		exit(1);
	}
	else
	{
		Nodo* aux1 = head;
		Nodo* aux2 = aux1->sig;

		while (aux1 != NULL)
		{
			if (aux1 == head)
				head = head->sig;
			else
				aux2->sig = aux1->sig;
			delete aux1;
			break;
		}
	}
}

bool Pila::buscar_elem(int valor)
{
	Nodo* aux = head;

	while (aux != NULL)
	{
		if (aux->valor == valor)
			return true;
		aux = aux->sig;
	}
	return false;
}

int Pila::retornarPrimerValor()
{
	if (vacio())
	{
		std::cerr << "Pila Vacia!\n";
		exit(1);
	}
	else
	{
		return head->valor;
	}
}

const void Pila::mostrar()
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

bool Pila::vacio()
{
	if (head == NULL)
		return true;
	return false;
}

int Pila::tam_Pila()
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