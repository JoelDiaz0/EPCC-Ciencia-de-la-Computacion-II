
//4. Defina una clase Circulo derivada de la clase Elipse.

#include <iostream>
#include "Circulo.h"

using namespace std;

int main()
{
    Elipse *f1;
    Circulo r1("Azul",1,2,10);
    f1 = &r1;
    f1->imprimir();
    cout<<"AREA: "<<r1.area();  
    return 0;
}