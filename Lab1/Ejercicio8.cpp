//8. Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.

#include <iostream>
using namespace std;

int main()
{
    int n; 
    float num, suma=0;
    cout<<"Ingrese la cantidad de numeros que desee: "; cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese un numero ("<<i+1<<"): "; cin>>num;
        suma+=num/n;
    }

    cout<<"La media es: "<<suma<<endl;
    
    return 0;
}
