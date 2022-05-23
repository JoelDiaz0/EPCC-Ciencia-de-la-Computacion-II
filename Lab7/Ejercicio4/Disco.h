//Disco.h

#include <iostream>
#include "Multimedia.h"
using namespace std;

class Disco : public Multimedia
{
private:
    string tipo;
public:
    Disco();
    Disco(string,int);
    ~Disco();
    void mostrar();
};