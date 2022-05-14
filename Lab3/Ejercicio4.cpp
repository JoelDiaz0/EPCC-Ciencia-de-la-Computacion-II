//4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de números primos
//ubicados entre 1 hasta un numero x (x es ingresado por teclado).

#include <iostream>
using namespace std;

bool esprimo(int);
void imprimeprimos(int);

int main()
{
    int num;
    do
    {
        cout<<"Ingrese rango maximo de numeros primos que quiere: "; cin>>num;
        if (num<1)
          cout<<"Debe ser positivo!\n";
    } while (num<1);
    
    imprimeprimos(num);

    return 0;
}

bool esprimo(int n)
{
    int c=0;
    for (int i=1; i<n+1; i++)
    {
        if (n%i==0)
            c++;       
    }
    if (c==2)
      return true;
    return false;
    
}

void imprimeprimos(int x)
{
    for (int i=1; i<x+1; i++)
    {
        if (esprimo(i))
           cout<<i<<"-";
    }
}


