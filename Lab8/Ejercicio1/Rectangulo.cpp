//Rectangulo.cpp

#include <iostream>
#include "Rectangulo.h"
using namespace std;

Rectangulo::Rectangulo() : Forma("BLANCO",0,0,"Rectangulo")
{
    ladoMenor = 0;
    ladoMayor = 0;
}

Rectangulo::Rectangulo(string color, int x, int y,float ladoMenor,float ladoMayor) : Forma(color,x,y,"Rectangulo")
{
    this -> ladoMenor = ladoMenor;
    this -> ladoMayor = ladoMayor;
}

Rectangulo::~Rectangulo()
{
}

float Rectangulo::area()
{
    return ladoMayor*ladoMenor;
}

float Rectangulo::perimetro()
{
    return 2*ladoMayor+2*ladoMenor;
}

void Rectangulo::Escala(float scale)
{
    if (scale < 0)
       throw logic_error("La valor de la escala debe ser un valor positivo");
    else
      this -> scale = scale;
    ladoMayor = ladoMayor*scale;
    ladoMenor = ladoMenor*scale;
}

void Rectangulo::imprimir()
{
    cout<<"FORMA: "<<nombre<<" COLOR: "<<color<<" Coordenada: ";
    coordenada.mostrar();
    cout<<"Escala: "<<scale<<endl<<"Lado Mayor: "<<ladoMayor<<endl<<"Lado Menor: "<<ladoMenor<<endl;
}



