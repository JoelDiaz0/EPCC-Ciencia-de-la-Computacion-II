//Elipse.h

#include <iostream>
#include "Forma.h"
using namespace std;

class Elipse : public Forma
{
protected:
    float radioMayor;
    float radioMenor;
    
public:
    Elipse();
    Elipse(string,int,int,float,float);
    ~Elipse();
    void imprimir();
    float area();
};