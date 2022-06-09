/*5. Desarrolle una función que permita eliminar el primer elemento de una lista sin perder
referencia de los demás elementos que ya se encuentran almacenados en la estructura
.(Evite copiar los elementos en una nueva lista para completar la eliminación de los
elementos)*/

//mainEjercicio5.cpp

#include <iostream>
#include "Lista.h"

int main()
{
	try
	{
		Lista* mylist = new Lista();
		Lista* mylist2 = new Lista();

		mylist->insertar_elem_inicio(20);
		mylist->insertar_elem_inicio(10);
		mylist->insertar_elem_inicio(15);
		mylist->insertar_elem_inicio(17);
		mylist->insertar_elem_final(50);

		mylist->insertar_elem_libre(13, 2);
		mylist->insertar_elem_libre(16, 5);

		mylist->mostrar();

		mylist->eliminar_primer_elem();
		mylist->mostrar();

		std::cout << "\n***Eliminando el primer elemento de una lista vacia***\n";
		mylist2->eliminar_primer_elem();
		mylist2->mostrar();

		delete mylist, mylist2;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}


