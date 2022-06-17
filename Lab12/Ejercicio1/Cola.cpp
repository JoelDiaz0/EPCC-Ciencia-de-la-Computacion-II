//Cola.cpp

#include "Cola.h"

Cola::Cola()
{
    head = NULL;
    cola = NULL;
}

Cola::~Cola()
{
}

void Cola::insertar_elemento(int dato)
{
    Nodo* nuevo_nodo = new Nodo(dato);
    
    if (head == NULL && cola == NULL)
    {
        head = nuevo_nodo;
        cola = head;
    }

    else
    {
        Nodo* aux = head;

        while (aux->sig != NULL)
            aux = aux->sig;
        aux->sig = nuevo_nodo;
        cola = aux->sig;
    }
}

const void Cola::mostrar()
{
    Nodo* aux = head;

    while (aux != NULL)
    {
        std::cout << aux->valor;
        if (aux->sig != NULL)
            std::cout << "->";
        aux = aux->sig;
    }
    std::cout << "\n";
}

bool Cola::vacio()
{
    if (head == NULL && cola == NULL)
        return true;
    return false;
}

int Cola::tam_cola()
{
    Nodo* aux1 = head;
    int tam = 0;
    while (aux1 != NULL)
    {
        tam++;
        aux1 = aux1->sig;
    }
    return tam;
}