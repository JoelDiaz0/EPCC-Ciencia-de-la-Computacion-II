/*2.-Con la implementación de la lista enlazada anterior, desarrolle una función que
permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
modificar el comportamiento del puntero que tiene referencia al primer elemento para
que sea redireccionado al nuevo elemento por ingresar.*/

//mainEjercicio2.cpp

#include <iostream>
#include "Lista.h"

int main()
{
	Lista* mylist = new Lista();

	mylist->insertar_elem_inicio(20);
	mylist->insertar_elem_inicio(10);
	mylist->insertar_elem_inicio(15);

	mylist->insertar_elem_final(50);

	mylist->insertar_elem_inicio(17);

	mylist->mostrar();

	delete mylist;
	return 0;
}


