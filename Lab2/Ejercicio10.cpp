//10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla 
//una a una las letras de la palabra introducida empezando por la última.

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string palabra;
    int tiempo=0;
    cout<<"Ingrese una palabra cualquiera: "; cin>>palabra;

    for (int i=palabra.length()-1; i>-1; i--)
    {
        cout<<palabra[i];
    }
    
    return 0;
}
