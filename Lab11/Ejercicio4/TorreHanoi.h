//TorreHanoi.h

#pragma once
#include <iostream>
#include "Pila.h"
using std::cout;
using std::endl;

class TorreHanoi
{
public:
    TorreHanoi();
    ~TorreHanoi();
    void numero_de_discos(int discos);
    void iniciar();
    int retornarMovimientos();
    const void mostrar();
private:
    void mover(int aux_discos, Pila& a, Pila& b, Pila& c);
    ;
private:
    Pila A, B, C;
    int discos{};
    int movimientos{};
};
