/*8. Desarrolle un programa que, dado un conjunto de formas, calcule cuál tiene el
área máxima e imprima la información de dicha forma.*/

//mainEjercicio8.cpp

#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main()
{
    int mayor = 0, pos = 0;
    Forma *fs[6];
    Cuadrado c1("Rojo",0,1,10), c2("verde",0,0,5), c3("Negro",2,2,12);
    Rectangulo r1("Negro",1,4,6,9), r2("Rojo",3,4,5,10), r3("Verde",1,1,2,4);

    fs[0] = &c1;
    fs[1] = &c2;
    fs[2] = &c3;
    fs[3] = &r1;
    fs[4] = &r2;
    fs[5] = &r3;

    mayor = fs[0]->area();

    for (int i = 1; i < 6; i++)
    {
        if (mayor < fs[i]->area())
        {
            mayor = fs[i]->area();
            pos = i;
        }
    }

    cout<<"La forma con mayor area tiene: "<<fs[pos]->area()<<endl;
    fs[pos]->imprimir();
    return 0;
}