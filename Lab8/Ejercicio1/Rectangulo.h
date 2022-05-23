//Rectangulo.h

#include <iostream>
#include "Forma.h"
using namespace std;

class Rectangulo : public Forma
{
protected:
    float ladoMenor;
    float ladoMayor;
    float scale = 1;
public:
    Rectangulo();
    Rectangulo(string,int,int,float,float);
    ~Rectangulo();
    void imprimir();
    float area();
    float perimetro();
    void Escala(float);
};
