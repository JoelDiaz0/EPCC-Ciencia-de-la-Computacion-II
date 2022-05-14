//3. Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
//y muestre por pantalla el nombre y la edad de la persona.

#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    try
    {
        Persona p1("Berly",29,10,2002,13,05,2022);
        p1.mostrar();
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}