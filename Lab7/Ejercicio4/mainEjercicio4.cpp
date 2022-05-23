/*4. Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y métodos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.*/

#include <iostream>
#include "Disco.h"
using namespace std;

int main()
{
    Disco dis1("dvd",23);
    dis1.mostrar();

    Disco dis2("galleta",133);
    dis2.mostrar();

    return 0;
}