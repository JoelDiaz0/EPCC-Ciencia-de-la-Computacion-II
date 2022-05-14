//1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
//usando solo punteros a enteros.

#include <iostream>
using namespace std;

void intercambiar(int *,int *);

int main()
{
    int *n1Ptr, *n2Ptr, num1, num2;

    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;
    n1Ptr=&num1;
    n2Ptr=&num2;
    cout<<"Numero 1: "<<num1<<endl;
    cout<<"Numero 2: "<<num2<<endl;
    intercambiar(n1Ptr,n2Ptr);
    cout<<"\n***INTERCAMBIANDO NUMEROS***\n\n";
    cout<<"Numero 1: "<<num1<<endl;
    cout<<"Numero 2: "<<num2<<endl;

    return 0;
}

void intercambiar(int *n1,int *n2)
{
    int aux;
    aux=*n1;
    *n1=*n2;
    *n2=aux;
}
