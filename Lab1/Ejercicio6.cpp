//6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado en binario.

#include <iostream>
using namespace std;

int main()
{
    int num;
    short binario[8];

    do
    {
        cout<<"Ingrese un numero entre 100 y 999: "; cin>>num;
        if (num<100||num>999)
           cout<<"El numero debe estar entre 100 y 999!!\n";

    } while (num<100||num>999);

    for (int i = 0; i < 8; i++)
    {
        binario[i]=num%2;
        num/=2;
    }

    cout<<"La conversion a binario es: ";

    for (int i = 7; i>=0; i--)
    {
        cout<<binario[i];  
    }

    return 0;
}
