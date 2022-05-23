//1. Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
//segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
//poder asignar los datos de edad y nombre de los estudiantes.

//mainEjercicio1.cpp

#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    Alumno p2("Berly",19);
    p2.mostrar();
    p2.setNombre("Andre");
    p2.setEdad(30);
    p2.mostrar();

    return 0;
}