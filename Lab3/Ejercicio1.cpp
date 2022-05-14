//1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
//calcule la potencia de un número (ambos números ingresados por teclado).

#include <iostream>
using namespace std;

int potencia (int,int);

int main()
{
    int num, poten;
    cout<<"Ingrese un numero: "; cin>>num;
    cout<<"Ingrese el valor de para su potencia: "; cin>>poten;

    cout<<"La potencia de "<<num<<" por "<<poten<<" es "<<potencia(num,poten)<<endl;

    return 0;
}

int potencia (int num1,int num2)
{
    int aux=num1;
    for (int i = 1; i<num2; i++)
    {
        num1=num1*aux;
    }
    return num1;
}
