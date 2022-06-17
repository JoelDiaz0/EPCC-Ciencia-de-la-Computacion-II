/*1. Defina una Cola que permita insertar elementos utilizando clases.*/

//mainEjercicio1.cpp

#include <iostream>
#include "Cola.h"

int main()
{
	Cola* c1 = new Cola();

	c1->insertar_elemento(7);
	c1->insertar_elemento(17);
	c1->insertar_elemento(14);
	c1->insertar_elemento(21);
	c1->mostrar();

	delete c1;
	return 0;
}


