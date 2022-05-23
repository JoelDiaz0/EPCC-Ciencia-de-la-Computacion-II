//Cuadrado.h

#include <iostream>
#include "Rectangulo.h"
using namespace std;

class Cuadrado : public Rectangulo
{
public:
    Cuadrado();
    Cuadrado(string,int,int,float);
    ~Cuadrado();
    void imprimir();
};