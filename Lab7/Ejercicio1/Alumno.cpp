//Alumno.cpp

#include <iostream> 
#include "Alumno.h" 
using namespace std;

Alumno::Alumno() : Persona()
{ 
}

Alumno::Alumno(string nombre,int edad) : Persona(nombre,edad)
{ 
}

Alumno::~Alumno()
{
}

void Alumno::setNombre(string nombre)
{
    this->nombre=nombre;
}

void Alumno::setEdad(int edad)
{
  if (edad < 0)
    throw logic_error("La edad es un numero positivo");
  else
    this -> edad = edad;
}

void Alumno::mostrar()
{
    cout<<nombre<<" "<<edad<<endl;
}