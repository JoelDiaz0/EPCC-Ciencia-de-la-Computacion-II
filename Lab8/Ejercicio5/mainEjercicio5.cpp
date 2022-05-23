/*5. Realice un programa que defina varias formas diferentes, cree un vector de
punteros de la clase Forma que apunten a los objetos creados. El programa debe
realizar un bucle que recorra todas las formas, las ponga todas del mismo color y
las mueva a una determinada posición.*/

//mainEjercicio5.cpp

#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main()
{
    Forma *fs[6];
    Cuadrado c1("Rojo",0,1,10), c2("verde",0,0,5), c3("Negro",2,2,12);
    Rectangulo r1("Negro",1,4,6,9), r2("Rojo",3,4,5,10), r3("Verde",1,1,2,4);

    fs[0] = &c1;
    fs[1] = &c2;
    fs[2] = &c3;
    fs[3] = &r1;
    fs[4] = &r2;
    fs[5] = &r3;

    for (int i = 1; i < 6; i++)
    {
        fs[i]->cambiarColor(c1.getColor()); 
        fs[i]->mover(0,1);
    }

    for (int i = 0; i < 6; i++)
    {
        fs[i]->imprimir();
    } 

    return 0;
}