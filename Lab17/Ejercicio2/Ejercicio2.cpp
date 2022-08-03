/*2. Definir una clase utilizando plantillas que permita almacenar datos en un arbol
binario. Por el momento solo se insertaran elementos en la estructura. Simule el
proceso de almacenar 100 datos y verifique que la estructura no tenga problemas.*/

#include <iostream>
#include <random>
#include "ArbolBinario.h"
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<>rand_digits(0,200);

int main()
{
    ArbolBinario<int> *arbol = new ArbolBinario<int>();

    for (int i = 0; i < 100; i++)
    {
        arbol->insertar(rand_digits(gen));
    }
    
    cout<<"Impresion en preorden: ";
    arbol->imprimirPre();
    delete arbol;
    return 0;
}