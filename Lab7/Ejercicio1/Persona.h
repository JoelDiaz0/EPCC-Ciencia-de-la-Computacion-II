//Persona.h

#include <iostream>
using namespace std;

class Persona
{
protected:
  int edad;
  string nombre;
public:
  Persona();
  Persona(string,int);
  ~Persona();
};