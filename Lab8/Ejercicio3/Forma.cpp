//Forma.cpp

#include <iostream>
#include "Forma.h"
using namespace std;

Forma::Forma()
{
    color = "BLANCO";
    nombre = "";
}

Forma::Forma(string color,int x,int y,string nombre)
{
    if (compruevaColor(color))
       this -> color = color;
    else 
      throw logic_error("Solo hay disponibles 6 colores: ROJO, BLANCO, AZUL, AMARILLO, VERDE, NEGRO");

    this -> nombre = nombre;
    coordenada.setCoordenada(x,y);
}

Forma::~Forma()
{
}

void Forma::setForma(string nombre)
{
    this -> nombre = nombre;
}

bool Forma::compruevaColor(string &color)
{
    for (int i = 0; i < color.length(); i++)
        color[i] = towupper(color[i]);
    
    for (int i = 0; i < 6; i++)
    {
        if (color == colores[i])
        {
            return true;
        }
    }
    return false;
}

void Forma::cambiarColor(string color)
{
    if (compruevaColor(color))
       this -> color = color;
    else 
      throw logic_error("Solo hay disponibles 6 colores: ROJO, BLANCO, AZUL, AMARILLO, VERDE, NEGRO");
}

string Forma::getColor()
{
    return color;
}

void Forma::mover(float x,float y)
{
    coordenada.setCoordenada(x,y);
}
void Forma::imprimir()
{
    cout<<"FORMA: "<<nombre<<"COLOR: "<<color<<"Coordenada: ";
    coordenada.mostrar();
}
