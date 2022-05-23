#include <iostream>
#include "Ganso.h"
using namespace std;

Ganso::Ganso() : Ave()
{
}

Ganso::Ganso(string color) : Ave(color,true)
{
}

Ganso::~Ganso()
{
}

void Ganso::nadar()
{
    cout<<"Puede Nadar"<<endl;
}