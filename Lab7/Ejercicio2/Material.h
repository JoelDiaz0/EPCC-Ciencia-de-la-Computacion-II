#include <iostream>
#include "Color.h"
using namespace std;

class Material : public Color
{
protected:
    string tipo;
    const string T[4] = {"PLASTICO", "METAL", "VIDRIO", "MADERA"};
public:
    Material();
    Material(string,int,int,int);
    ~Material();
};