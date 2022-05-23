#include <iostream>
#include "Objetos.h"
using namespace std;

Objetos::Objetos() : Material()
{
    obj = "vacio";
}

Objetos::Objetos(string obj,string mate,int R,int G,int B) : Material(mate,R,G,B)
{
    this->obj=obj;
}

Objetos::~Objetos()
{
}

void Objetos::mostrar()
{
    cout<<obj<<" de color "<<"rgb("<<R<<","<<G<<","<<B<< ") de material "<<tipo;
}