#include <iostream>
#include "Concesionario.h"
#include "Buggy.h"
#include "Lamborghini.h"
#include "Camion.h"

using std::cout;
using std::endl;


int main()
{
    Concesionario* consecionario = new Concesionario; //Director

    CocheBuilder* coche1 = new Lamborghini;
    CocheBuilder* coche2 = new Camion;
    CocheBuilder* coche3 = new Buggy;

    consecionario->setBuilder(coche1);
    consecionario->construirCoche();
    consecionario->mostrarCoche();

    cout << endl << endl;


    consecionario->setBuilder(coche2);
    consecionario->construirCoche();
    consecionario->mostrarCoche();

    cout << endl << endl;

    consecionario->setBuilder(coche3);
    consecionario->construirCoche();
    consecionario->mostrarCoche();

    delete consecionario, coche1, coche2, coche3;
    return 0;
}