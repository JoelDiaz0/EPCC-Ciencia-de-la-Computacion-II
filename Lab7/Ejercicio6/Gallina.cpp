#include <iostream>
#include "Gallina.h"
using namespace std;

Gallina::Gallina() : Ave("BLANCO",false)
{
}

Gallina::Gallina(string color) : Ave(color,false)
{
}

Gallina::~Gallina()
{
}

void Gallina::cacarear()
{
    cout<<"Puede cacarear"<<endl;
}