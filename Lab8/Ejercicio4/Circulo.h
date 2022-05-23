//Circulo.h

#include <iostream>
#include "Elipse.h"
using namespace std;

class Circulo : public Elipse
{
public:
    Circulo();
    Circulo(string,int,int,float);
    ~Circulo();
    void imprimir();
};
