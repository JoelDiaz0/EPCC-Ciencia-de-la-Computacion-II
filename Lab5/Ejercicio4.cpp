//4. Construya una lista enlazada que almacene tanto números como cadenas de texto
//utilizando punteros. Incluya una función de búsqueda de muestre un dato almacenado
//además del tipo de dato que se encuentra almacenado (int, float, char, ...)

#include <iostream>
#include <typeinfo>
using namespace std;

struct Nodo
{
    int entero;
    float decimal;
    char texto;
    Nodo *sig;
};

void insertar_elemento_int(Nodo *&,int);
void insertar_elemento_char(Nodo *&,char);
void insertar_elemento_float(Nodo *&,float);
void mostrar_elementos(Nodo *&);

bool busqueda_elemento(Nodo *,auto);
void detecta_tipo(Nodo *li,auto);

int main()
{
    Nodo *Lista=NULL;

    insertar_elemento_int(Lista,11);
    insertar_elemento_int(Lista,16);
    insertar_elemento_int(Lista,71);
    insertar_elemento_float(Lista,17.35);
    insertar_elemento_float(Lista,5.5);
    insertar_elemento_char(Lista,'a');
    insertar_elemento_char(Lista,'x');
    
    mostrar_elementos(Lista);

    detecta_tipo(Lista,'a');
    detecta_tipo(Lista,11);
    detecta_tipo(Lista,114);
    detecta_tipo(Lista,5.5);
    detecta_tipo(Lista,'x');
    detecta_tipo(Lista,'k');

    return 0;
}

void insertar_elemento_int(Nodo *&li,int num)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->entero=num;

    Nodo *aux1, *aux2;
    aux1=li;

    while (aux1 != NULL)
    {
        aux2=aux1;
        aux1=aux1->sig;
    }

    if (li == aux1)
      li=nuevo_nodo;
    else 
      aux2->sig=nuevo_nodo;
}

void insertar_elemento_char(Nodo *&li,char pal)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->texto=pal;

    Nodo *aux1, *aux2;
    aux1=li;

    while (aux1 != NULL)
    {
        aux2=aux1;
        aux1=aux1->sig;
    }
    if (li == aux1)
      li=nuevo_nodo;
    else 
      aux2->sig=nuevo_nodo;
}

void insertar_elemento_float(Nodo *&li,float deci)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->decimal=deci;

    Nodo *aux1, *aux2;
    aux1=li;

    while (aux1 != NULL)
    {
        aux2=aux1;
        aux1=aux1->sig;
    }
    if (li == aux1)
      li=nuevo_nodo;
    else 
      aux2->sig=nuevo_nodo;
}

void detecta_tipo(Nodo *li,auto i)
{
    string x;
    if (busqueda_elemento(li,i))
    {
        x = typeid(i).name();

        if (x == "i")
            cout<<"Se Encontro el dato y es un ENTERO\n";
        else if (x == "d" || x == "f")
            cout<<"Se Encontro el dato y es un FLOTANTE\n";
        else 
            cout<<"Se Encontro el dato y Es un CARACTER\n";     
    }
    else
    {
        cout<<"Varible no presente en la lista\n";
    }
}

bool busqueda_elemento(Nodo *li,auto i)
{
    Nodo *aux;
    aux = li;
    string x;

    while (aux != NULL)
    {
        x = typeid(i).name();

        if (x == "i")
        {
            if (i == aux->entero)
               return true;
        }
        else if (x == "c")
        {
            if (i == aux->texto)
               return true;
        }
        else if (x == "d" || x == "f")
        {
            if(i == aux->decimal)
               return true;
        }
        aux=aux->sig;
    }
    return false;
}

void mostrar_elementos(Nodo *&li)
{
    Nodo *aux;
    aux = li;

    while (aux != NULL)
    {
        if (aux->texto!=NULL)
            cout<<aux->texto<<"->";    
        if (aux->decimal!=NULL)
            cout<<aux->decimal<<"->"; 
        if (aux->entero!=NULL) 
            cout<<aux->entero<<"->";
        aux=aux->sig;
    }
    cout<<endl;
}
