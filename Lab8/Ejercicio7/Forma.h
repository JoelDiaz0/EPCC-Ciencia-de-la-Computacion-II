//Forma.h

#include <iostream>
#include "Punto.h"
using namespace std;

class Forma
{
protected:
    string color;
    Punto coordenada;
    string nombre;
    const string colores[6] = {"ROJO","BLANCO","AZUL","AMARILLO","VERDE","NEGRO"};
    void setForma(string);
    bool compruevaColor(string &);
public:
    Forma();
    Forma(string,int,int,string);
    ~Forma();
    virtual void imprimir();
    virtual float area();
    virtual float perimetro();
    void cambiarColor(string);
    string getColor();
    void mover(float,float);
};