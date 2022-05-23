//Ave.h

#include <iostream>
using namespace std;

class Ave
{
protected:
    string color;
    bool volar;
    const string colores[5] = {"BLANCO","NEGRO","MARRON","CREMA","BICOLOR"};
public:
    Ave();
    Ave(string,bool);
    ~Ave();
    void picotear();
    void puedeVolar();
    void plumaje();
    void comer();
};