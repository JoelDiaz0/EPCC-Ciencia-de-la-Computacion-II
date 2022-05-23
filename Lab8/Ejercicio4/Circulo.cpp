//Circulo.cpp

#include <iostream>
#include "Circulo.h"
using namespace std;

Circulo::Circulo() : Elipse()
{
    setForma("Circulo");
}

Circulo::Circulo(string color,int x,int y,float radio) : Elipse(color,x,y,radio,radio)
{
    setForma("Circulo");
}

Circulo::~Circulo()
{
}

void Circulo::imprimir()
{
    cout<<"FORMA: "<<nombre<<" COLOR: "<<color<<" Coordenada: ";
    coordenada.mostrar();
    cout<<"Radio: "<<radioMenor<<endl;
}

