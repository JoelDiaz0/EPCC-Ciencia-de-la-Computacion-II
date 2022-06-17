/*3. Implemente un algoritmo para buscar elementos de la Pila.*/

//mainEjercicio3.cpp

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

    if (p1->buscar_elem(12))
        std::cout << "Se encontro el elemento\n";
    else
        std::cout << "No se encontro el elemento\n";

    if (p1->buscar_elem(30))
        std::cout << "Se encontro el elemento\n";
    else
        std::cout << "No se encontro el elemento\n";

    delete p1;
    return 0;
}