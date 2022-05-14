//3. Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
//insertar y eliminar un elemento. En la función insertar se debe asegurar que los
//números insertados estén en orden creciente. Simule el proceso con 10000 números
//aleatorios sin que el programa falle.

#include <iostream>
#include <time.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *sig;
};

void mostrar_lista(Nodo *);
void insertar_elemento(Nodo *&,int);
void eliminar_elemento(Nodo *&, int);
int generar_random();

int main()
{
    srand(time(NULL));

    Nodo *Lista=NULL;
    int num, contar=0;

    for (int i=0; i<10000; i++)
    {
        num=generar_random();
        insertar_elemento(Lista,num);

        if (num == 5)
          contar++;
    }

    for (int i=0; i<contar; i++)
    {
        eliminar_elemento(Lista,5);
    }

    mostrar_lista(Lista);
    cout<<"\nSe elimino todos los numeros 5\n";
    return 0;
}


void insertar_elemento(Nodo *&lista, int dato)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=dato;

    Nodo *aux1=lista;
    Nodo *aux2;

    while ((aux1!=NULL) && (aux1->dato<dato))
    {
        aux2=aux1;
        aux1=aux1->sig;
    }

    if (lista == aux1)
        lista=nuevo_nodo;
    else
        aux2->sig=nuevo_nodo;

    nuevo_nodo->sig=aux1;
}

void eliminar_elemento(Nodo *&lista, int num)
{
    if (lista!=NULL)
    {
        Nodo *aux1, *anterior;
        aux1 = lista;
        anterior = NULL;
        while (aux1!=NULL && aux1->dato!=num)
        {
            anterior=aux1;
            aux1=aux1->sig;
        }
        if (aux1 == NULL)
        {
            cout<<"No se encontro el numero\n";
        }
        else if (anterior==NULL)
        {
            lista=lista->sig;
            delete aux1;
        }
        else
        {
            anterior->sig = aux1->sig;
            delete aux1;
        }
    }
}
void mostrar_lista(Nodo *lista)
{
    Nodo *aux;
    aux = lista;

    while (aux != NULL)
    {
        cout<<aux->dato<<" ";
        aux=aux->sig;
    }
}

int generar_random()
{
    return 1+rand()%1001-1;
}
