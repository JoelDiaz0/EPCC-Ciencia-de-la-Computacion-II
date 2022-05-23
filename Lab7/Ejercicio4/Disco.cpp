#include <iostream>
#include "Disco.h"
using namespace std;

Disco::Disco() : Multimedia()
{
    tipo = "VACIO";
}

Disco::Disco(string tipo,int id1) : Multimedia(id1)
{
    for (int i = 0; i < tipo.length(); i++)
        tipo[i] = towupper(tipo[i]);
    if (tipo == "BLUERAY" || tipo == "DVD")
       this->tipo=tipo;
    else
      throw logic_error("Solo hay discos del tipo BLUERAY y DVD");
}

Disco::~Disco()
{
}

void Disco::mostrar()
{
    cout<<"ID: "<<id<<" Tipo de disco "<<tipo<<endl;
}

