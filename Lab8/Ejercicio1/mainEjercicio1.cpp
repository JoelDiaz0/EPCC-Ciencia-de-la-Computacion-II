#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    Forma *f1;
    Rectangulo r1("ROjo",1,2,5,10);
    f1 = &r1;
    f1->imprimir();
    
    cout<<"PERIMETRO: "<<r1.perimetro()<<endl;
    cout<<"AREA: "<<r1.area()<<endl;
    r1.cambiarColor("Negro");
    r1.Escala(2);
    r1.mover(0,0);
    f1->imprimir();
    cout<<"PERIMETRO 2: "<<r1.perimetro()<<endl;
    cout<<"AREA 2: "<<r1.area()<<endl;


    return 0;
}