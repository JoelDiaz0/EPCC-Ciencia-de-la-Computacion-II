/*2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.*/

//mainEjercicio2.cpp

#include <iostream>
#include "Pila.h"

int main()
{
    Pila* p1 = new Pila();

    p1->insertar_elem(12);
    p1->insertar_elem(6);
    p1->insertar_elem(17);
    p1->insertar_elem(21);
    p1->mostrar();

    p1->eliminar_elem();
    p1->eliminar_elem();
    p1->mostrar();

    delete p1;
    return 0;
}