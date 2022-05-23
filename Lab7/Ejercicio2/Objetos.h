#include <iostream>
#include "Material.h"
using namespace std;

class Objetos : public Material
{
private:
    string obj; 
public:
    Objetos();
    Objetos(string,string,int,int,int);
    ~Objetos();
    void mostrar();
};