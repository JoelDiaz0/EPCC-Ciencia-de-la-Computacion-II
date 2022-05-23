#include <iostream>
#include "Material.h"
using namespace std;

Material::Material() : Color()
{

}

Material::Material(string tipo,int R,int G,int B) : Color(R,G,B)
{
    for (int i=0; i<tipo.length(); i++)
        tipo[i] = towupper(tipo[i]);

    bool c = false;
    for (int i = 0; i < 4; i++)
    {
        if (tipo == T[i])
        {
           this->tipo=tipo;
           c = true;
           break;
        }         
    }
    if (c == false)
      throw logic_error("Material Invalido");
}


Material::~Material()
{
}
