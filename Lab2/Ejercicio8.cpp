//8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado.

#include <iostream>
using namespace std;

int main()
{
    int num, n;
    cout<<"Ingrese el numero del que quiere generar su tabla de multiplicar: "; cin>>num;
    cout<<"Hasta que numero quiere multiplicarlo?: "; cin>>n;

    cout<<"***TABLA DE MULTIPLICAR DEL NUMERO "<<num<<"***"<<endl;
    for (int i=1; i<n+1; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    
    return 0;
}

