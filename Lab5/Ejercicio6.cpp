/*6. Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.*/

#include <iostream>
using namespace std;

int suma(int,int);
int resta(int,int);
int producto(int,int);
int division(int,int);

int main()
{
    int (*f[4])(int,int)={suma,resta,producto,division};
    int num1, num2, opc;

    cout<<"Ingrese un primer numero: "; cin>>num1;
    cout<<"Ingrese un segundo numnero: "; cin>>num2;

    cout<<"MENU\n";
    cout<<"0. Ingresar otros valores\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n-1. Salir\n";
    while (opc!=-1)
    {
     cout<<"Ingrese una opcion o termine con -1: ";cin>>opc;
        switch(opc)
      {
        case 0:
        cout<<"Ingrese un primer numero\n"; cin>>num1;
        cout<<"Ingrese un segundo numnero\n"; cin>>num2;
        break;
        case 1:
        cout<<"La suma es "<<(*f[0])(num1,num2)<<endl;
        break;
        case 2:
        cout<<"La resta es "<<(*f[1])(num1,num2)<<endl;
        break;
        case 3:
        cout<<"El producto es "<<(*f[2])(num1,num2)<<endl;
        break;
        case 4:
        cout<<"La division es "<<(*f[3])(num1,num2)<<endl;
        case -1:
        break;
        default:
        cout<<"Ingrese una opcion correcta!\n";
      }
    }
    return 0;
}

int suma(int a,int b)
{
    return a+b;
}
int resta(int a,int b)
{
    return a-b;
}
int producto(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return (a/b);
}



