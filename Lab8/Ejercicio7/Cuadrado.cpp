//Cuadrado.cpp

#include <iostream>
#include "Cuadrado.h"
using namespace std;

Cuadrado::Cuadrado() : Rectangulo()
{
    setForma("Cuadrado");
}
Cuadrado::Cuadrado(string color,int x, int y, float lado) : Rectangulo(color,x,y,lado,lado)
{
    setForma("Cuadrado");
}
void Cuadrado::imprimir()
{
    cout<<"FORMA: "<<nombre<<" COLOR: "<<color<<" Coordenada: ";
    coordenada.mostrar();
    cout<<"Escala: "<<scale<<endl<<"Lado: "<<ladoMenor<<endl;
}

Cuadrado::~Cuadrado()
{
}
