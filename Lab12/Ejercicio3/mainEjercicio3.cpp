/*3. Implemente un algoritmo para buscar elementos de la Cola.*/

//mainEjercicio3.cpp

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

	if (c1->buscar_elemento(14))
		std::cout << "Se encontro el elemento\n";
	else
		std::cout << "No se encontro el elemento\n";

	if (c1->buscar_elemento(31))
		std::cout << "Se encontro el elemento\n";
	else
		std::cout << "No se encontro el elemento\n";

	delete c1;
	return 0;
}


