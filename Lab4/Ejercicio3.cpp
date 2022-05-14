//3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
//debe mostrar la suma de todos los números que estén en una fila par.

#include <iostream>
using namespace std;

int main()
{
    int M[5][3], suma=0;

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<"Ingrese un numero a la matriz ["<<i<<"]"<<"["<<j<<"]: "; cin>>M[i][j];
       }     
    }

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           if (i%2==0)
            suma+=M[i][j];        
       }     
    }

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<M[i][j]<<" ";
       }
       cout<<endl;     
    }

    cout<<"La suma de las filas pares es: "<<suma<<endl;
    
    return 0;
}
