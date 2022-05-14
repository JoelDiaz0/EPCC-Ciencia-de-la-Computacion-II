//5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las siguientes opciones:

//a. Introducir un valor x entero comprendido entre 0 y 100.
//b. Validar que sea un valor par.
//c. Sumar todos los números impares desde el 0 hasta el valor de x.


#include <iostream>
using namespace std;

bool comprobar_rango(int);
bool num_par(int);
int suma_impar(int);

int main()
{
    int num;

    do
    {
        cout<<"Ingrese un numero par entre 0 y 100: "; cin>>num;
        if (comprobar_rango(num)==false)
          cout<<"Numero fuera del rango\n";
        if (num_par(num)==false)
          cout<<"Numero no par!!\n";
    } while (comprobar_rango(num)==false||num_par(num)==false);

    cout<<"La suma de los numeros impares entre 0 y "<<num<<" es: "<<suma_impar(num)<<endl;
    return 0;
}

bool comprobar_rango(int n)
{
    if (n>100||n<0)
       return false;
    return true;
}

bool num_par(int n)
{
    if (n%2==0)
      return true;
    return false;
}

int suma_impar(int n)
{
    int suma=0;
    for (int i=0; i<n; i++)
    {
        if (num_par(i)==false)
           suma+=i;
    }
    return suma;
}

