//Persona.cpp 
#include <iostream>
#include "Persona.h" 
using namespace std;

Persona::Persona()
{
  nombre = "Vacio";
  edad = 0;
}

Persona::Persona(string nombre, int edad)
{
  if (edad < 0)
    throw logic_error("La edad es un numero positivo");
  else
    this -> edad = edad;
    this->nombre = nombre;
}

Persona::~Persona()
{
}



