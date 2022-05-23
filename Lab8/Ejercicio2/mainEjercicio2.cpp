/*2. Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda
definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse
es igual a π*(R*r).*/


//mainEjercicio2.cpp

#include <iostream>
#include "Elipse.h"

using namespace std;

int main()
{
    Forma *f1;
    Elipse e1("Verde",1,1,3,9);

    f1 = &e1;
    f1->imprimir();

    cout<<"AREA: "<<e1.area();
    
    return 0;
}