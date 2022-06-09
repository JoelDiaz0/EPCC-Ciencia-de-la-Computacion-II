/*3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
en esa posición.*/

//mainEjercicio3.cpp

#include <iostream>
#include "Lista.h"

int main()
{
	try
	{
		Lista* mylist = new Lista();

		mylist->insertar_elem_inicio(20);
		mylist->insertar_elem_inicio(10);
		mylist->insertar_elem_inicio(15);
		mylist->insertar_elem_inicio(17);
		mylist->insertar_elem_final(50);

		std::cout << "***Ingresarndo los elementos 13 y 16 en la posicion 2 y 5***\n";
		mylist->insertar_elem_libre(13, 2);
		mylist->insertar_elem_libre(16, 5);

		mylist->mostrar();

		std::cout << "\n***Ingresando un valor fuera de rango***\n";
		mylist->insertar_elem_libre(115, 31);
		mylist->mostrar();

		delete mylist;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	return 0;
}


