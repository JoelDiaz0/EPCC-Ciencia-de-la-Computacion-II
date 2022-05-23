//Elipse.cpp

#include <iostream>
#include "Elipse.h"
using namespace std;

Elipse::Elipse() : Forma()
{
    radioMayor = 0;
    radioMenor = 0;
}

Elipse::Elipse(string color,int x,int y,float radioMenor,float radioMayor) : Forma(color,x,y,"Elipse")
{
    if (radioMayor < 0 || radioMenor < 0)
      throw logic_error("El radio debe ser positivo");
    this -> radioMayor = radioMayor;
    this -> radioMenor = radioMenor;
}

float Elipse::area()
{
    return 3.1416*radioMayor*radioMenor;
}

void Elipse::imprimir()
{
    cout<<"FORMA: "<<nombre<<" COLOR: "<<color<<" Coordenada: ";
    coordenada.mostrar();
    cout<<"Radio menor: "<<radioMenor<<" Radio Mayor: "<<radioMayor<<endl;
}

Elipse::~Elipse()
{
}
