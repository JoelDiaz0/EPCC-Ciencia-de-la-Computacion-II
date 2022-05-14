/*2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.*/

#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    try
    {
        Alumno alum("20693121","Berly Joel Diaz Castro",20,20,20);
        alum.mostrar();
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}
