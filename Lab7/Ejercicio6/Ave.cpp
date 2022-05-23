#include <iostream>
#include "Ave.h"
using namespace std;

Ave::Ave()
{
    color = "BLANCO";
    volar = true;
}
Ave::Ave(string color,bool volar)
{
    bool comprueva = false;
    for (int i = 0; i < color.length(); i++)
        color[i] = towupper(color[i]);
    for (int i = 0; i < color.length(); i++)
    {
        if (color == colores[i])
        {
           this -> color = color;
           comprueva = true;
           break;
        }
    }
    if (comprueva == false)
      throw logic_error("Solo hay 5 colores disponibles: {BLANCO, NEGRO, MARRON, CREMA Y BICOLOR}");
    this -> volar = volar;
}
Ave::~Ave()
{
}
void Ave::picotear()
{
    cout<<"El ave picotea"<<endl;
}

void Ave::comer()
{
    cout<<"El ave come"<<endl;
}

void Ave::puedeVolar()
{
    if (volar == true)
       cout<<"Puede volar\n";
    else
       cout<<"No puede volar\n";
}

void Ave::plumaje()
{
    cout<<"Plumaje de color: "<<color<<endl;
}


