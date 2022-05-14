//5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la media de los números leídos

#include <iostream>
using namespace std;

int main()
{
    int n, num, menor=999999, mayor=0,suma=0;

    cout<<"Ingrese la cantidad de numeros que desee: "; cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"Ingrese un numero ("<<i+1<<"): "; cin>>num;
        if (menor>num)
          menor=num;
        if (mayor<num)
          mayor=num;
        suma+=num/n;
    }
    cout<<"La media de los numeros es: "<<suma<<endl;
    cout<<"El mayor numero ingresado es: "<<mayor<<endl;
    cout<<"El menor numero ingresado es: "<<menor<<endl;

    return 0;
}
