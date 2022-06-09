/*6. Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
de cualquier posición sin perder referencia de los demás elementos.*/

//mainEjercicio6.cpp

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

		mylist->insertar_elem_libre(13, 2);
		mylist->insertar_elem_libre(16, 5);

		mylist->mostrar();

		std::cout << "***Se elimina el elemento de la posicion 3, contando desde el 0***\n";
		mylist->eliminar_libre(3);
		mylist->mostrar();

		delete mylist;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}


