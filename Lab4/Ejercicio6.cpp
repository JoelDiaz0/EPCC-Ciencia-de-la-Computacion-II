/*6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.*/

#include <iostream>
using namespace std;

int main()
{
    int M[3][3], suma=0, mayor=0;

    for (int i=0; i<3; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<"Ingrese un numero a la matriz ["<<i<<"]"<<"["<<j<<"]: "; cin>>M[i][j];
       }     
    }

    for (int i=0; i<3; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<M[i][j]<<" ";
       }
       cout<<endl;     
    }

    for (int i=0; i<3; i++)
    {
       suma=0;
       for (int j=0; j<3; j++)
       {
           suma+=M[i][j];
           if (mayor<suma)
              mayor=suma;
       }     
    }

    cout<<"La suma de la mayor fila es: "<<mayor<<endl;

    return 0;
}

