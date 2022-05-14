//4. Implementar un programa que rellene un array con los números primos
//comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

#include <iostream>
using namespace std;

bool esprimo(int);

int main()
{
    int tam=0, c=0;

    for (int i=1; i<101; i++)
    {
        if (esprimo(i))
          tam++;
    }

    int A[tam];

    for (int i=1; i<101; i++)
    {
        if (esprimo(i))
        {
          A[c]=i;
          c++;
        }
    }

    for (int i=tam-1; i>-1; i--)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}

bool esprimo(int num)
{
    int count=0;
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count==2)
       return true;
    return false;
}
