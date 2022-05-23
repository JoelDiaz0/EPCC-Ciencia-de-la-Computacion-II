#include <iostream>
#include "Punto.h"

using namespace std;

Punto::Punto()
{
    x = 0;
    y = 0;
}
Punto::Punto(int x, int y)
{
    this -> x = x;
    this -> y = y;
}
Punto::~Punto()
{
}
void Punto::mostrar()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

void Punto::setCoordenada(int x,int y)
{
    this -> x = x;
    this -> y = y;
}