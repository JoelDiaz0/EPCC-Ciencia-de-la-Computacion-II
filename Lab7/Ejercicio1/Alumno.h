//Alumno.h

#include <iostream>
#include "Persona.h"
using namespace std;

class Alumno : public Persona
{
    public:
    Alumno();
    Alumno(string,int);
    ~Alumno();
    void setNombre(string);
    void setEdad(int);
    void mostrar();
};