//3. Defina una clase Cuadrado derivada de la clase Rectángulo.

//mainEjercicio3.cpp

#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main()
{
    Forma *f1;
    Cuadrado r1("ROjo",1,2,10);
    f1 = &r1;
    f1->imprimir();
    
    return 0;
}