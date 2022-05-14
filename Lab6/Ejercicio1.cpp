//1. Implemente un programa con clases que calcule el área de un rectángulo y perímetro.

#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main()
{
    Rectangulo rec(10.7);

    cout<<rec.area()<<endl;
    cout<<rec.perimetro()<<endl;

    rec.setLado(20);

    cout<<rec.area()<<endl;
    cout<<rec.perimetro()<<endl;

    return 0;
}
