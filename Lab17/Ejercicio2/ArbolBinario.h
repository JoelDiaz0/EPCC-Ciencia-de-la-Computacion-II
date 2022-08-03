#include <iostream>
#include "Nodo.h"
using namespace std;

template<typename T>
class ArbolBinario {
public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    void imprimirPre();
private:
    Nodo<T> *raiz;
    void borrar(Nodo<T> *aux);
    void imprimirPre(Nodo<T> *aux);
};

