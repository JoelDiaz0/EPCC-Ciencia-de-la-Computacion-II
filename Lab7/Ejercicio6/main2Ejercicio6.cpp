/*6. Escribe un programa que implemente la siguiente jerarquía de clases, Debe
implementar aquellos atributos y métodos necesarios para que se pueda ejecutar el
siguiente programa:*/

#include <iostream>
#include "Pato.h"
using namespace std;

int main()
{
    Pato g1("crema");
    g1.picotear();
    g1.puedeVolar();
    g1.plumaje();

    Pato g2("Verde");
    g2.puedeVolar();
    g2.plumaje();
    
    return 0;
}