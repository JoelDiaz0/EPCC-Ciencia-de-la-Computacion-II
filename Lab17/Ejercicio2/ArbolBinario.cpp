#include "ArbolBinario.h"
template<typename T>
ArbolBinario<T>::ArbolBinario()
{
    raiz = NULL;
}

template<typename T>
ArbolBinario<T>::~ArbolBinario()
{
    borrar(raiz);
}

template<typename T>
void ArbolBinario<T>::borrar(Nodo<T> *aux)
{
    if (aux != NULL)
    {
        borrar(aux->izq);
        borrar(aux->der);
        delete aux;
    }
}

template<typename T>
void ArbolBinario<T>::insertar(int x)
{
    Nodo<T> *nuevo;
    nuevo = new Nodo<T>();
    nuevo->dato = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo<T> *anterior, *aux;
        anterior = NULL;
        aux = raiz;
        while (aux != NULL)
        {
            anterior = aux;
            if (x < aux->dato)
                aux = aux->izq;
            else
                aux = aux->der;
        }
        if (x < anterior->dato)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

template<typename T>
void ArbolBinario<T>::imprimirPre()
{
    imprimirPre(raiz);
    cout << "\n";
}

template<typename T>
void ArbolBinario<T>::imprimirPre(Nodo<T> *aux)
{
    if (aux != NULL)
    {
        cout << aux->dato << "-";
        imprimirPre(aux->izq);
        imprimirPre(aux->der);
    }
}