/*2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.*/

//mainEjercicio2.cpp

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

	c1->eliminar_elemento();
	c1->eliminar_elemento();
	c1->mostrar();

	delete c1;
	return 0;
}


