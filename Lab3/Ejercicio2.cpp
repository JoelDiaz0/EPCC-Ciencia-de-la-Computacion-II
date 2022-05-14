//2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto.
//Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto 
//recibe el año leído por teclado, comprueba si es o no bisiesto.

#include <iostream>
using namespace std;

bool bisiesto(int);

int main()
{
    int year;

    cout<<"Ingrese un año cualquiera: "; cin>>year;

    if (bisiesto(year))
       cout<<"Es bisiesto\n";
    else
       cout<<"No es bisiesto\n";

    return 0;
}

bool bisiesto(int n)
{
    if (n%4==0||n%100==0||n%400==0)  
      return true;
    return false;
}
