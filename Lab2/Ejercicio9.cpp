//9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo 
//rectángulo como el de más abajo, de altura el número introducido.

#include <iostream>
using namespace std;

int main()
{
    int altura;

    cout<<"Ingrese la altura del triangulo: "; cin>>altura; 

    for (int i = 0; i < altura; i++) 
    { 
       for (int j = 0; j < altura; j++)  
       {
           if(i>=j)                   
           {
            cout<<"*";
           }
       }
       cout<<endl; 
    }
    cout<<endl;
    return 0;
}

