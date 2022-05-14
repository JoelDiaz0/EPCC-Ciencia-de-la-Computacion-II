//9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.

#include <iostream>
using namespace std;

int main()
{
    int num,suma=0,n=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese 10 numeros cualquiera ("<<i+1<<"): "; cin>>num;
        if (num<=0)            
          suma+=num; 
        if (num>0)
          n++;
    }
    cout<<"La suma de los numeros negativos ingresados es: "<<suma<<endl;
    cout<<"Ingreso "<<n<<" numeros positivos\n";    
    return 0;
}

