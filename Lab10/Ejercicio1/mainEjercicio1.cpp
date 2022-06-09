/*1. Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado.Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último elemento.*/

//mainEjercicio1.cpp

#include <iostream>
#include "Lista.h"

int main()
{
	Lista* mylist = new Lista();

	mylist->insertar_elemento(20);
	mylist->insertar_elemento(10);
	mylist->insertar_elemento(15);
	mylist->insertar_elemento(17);

	mylist->mostrar();

	delete mylist;
	return 0;
}


