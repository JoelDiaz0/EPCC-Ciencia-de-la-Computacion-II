/*3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.*/

//mainEjercicio3.cpp

#include <iostream>
#include "Correo.h"
using namespace std;

int main()
{
    Correo<char,string> c1('b',"diaz"), c2('f',"jimenez"), c3('c',"rojas"), c4('a',"villanueva"), c5('l',"quispe");
    c1.mostrar();
    c2.mostrar();
    c3.mostrar();
    c4.mostrar();
    c5.mostrar();

    return 0;
}