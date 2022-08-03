/*1. Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas*/

#include <iostream>
#include "Calculadora.h"
using std::cout;
using std::endl;

int main()
{
    Calculadora<long,float>* calt = new Calculadora<long,float>();
    Calculadora<int,double>* calt_2 = new Calculadora<int,double>();

    calt->setValores(25000l,5.5f);
    cout <<"Suma: "<<calt->suma() << endl;
    cout <<"Producto: "<<calt->producto() << endl << endl;

    calt_2->setValores(100,15.4342);
    cout <<"Resta: "<<calt_2->resta() << endl;
    try
    {
        cout <<"Division: "<<calt_2->division() << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    
    delete calt, calt_2;
    return 0;
}