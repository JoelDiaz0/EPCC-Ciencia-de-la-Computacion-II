/*4. Escribir un programa que de la solucion al problema de las Torres de Hanoi para
N discos, utilizando pilas, las cuales representen cada uno de los postes:*/

//mainEjercicio4.cpp

#include <iostream>
#include "TorreHanoi.h"

int main()
{
    TorreHanoi* t1 = new TorreHanoi;

    t1->iniciar();

    cout << "Numero de movimientos: " << t1->retornarMovimientos() << endl;


    //t1->numero_de_discos(5);
    //t1->iniciar();

    //cout << "Numero de movimientos: " << t1->retornarMovimientos() << endl;

    delete t1;
    return 0;
}