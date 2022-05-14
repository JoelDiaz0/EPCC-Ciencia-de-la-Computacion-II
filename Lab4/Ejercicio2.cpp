//2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
//pregunte al usuario que ingrese un número a buscar, implementar una función que
//busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
//contrario, retornar falso.

#include <iostream>
using namespace std;

bool buscar(int [],int);
void mostrar(int []);

int main()
{
    int array[8], num;
    int n;

    for (int i=0; i<8; i++)
    {
        cout<<"Ingrese 8 numeros al arreglo ("<<i+1<<"): "; cin>>num;
        array[i]=num;
    }

    cout<<"Ingrese un numero para buscarlo en el vector: "; cin>>n;

    mostrar(array);
    
    if (buscar(array,n))
      cout<<"Se encontro el numero en el arreglo\n";
    else
      cout<<"No se encontro el numero en el arreglo\n";

    return 0;
}

bool buscar(int a[],int num)
{
    //int tam=(sizeof(a)/sizeof(a[0]));

    for (int i=0; i<8; i++)
    {
        if (num==a[i])
         return true;
    }
    return false;
}

void mostrar(int a[])
{
    //int tam=(sizeof(a)/sizeof(a[0]));

    for (int i=0; i<8; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
}

