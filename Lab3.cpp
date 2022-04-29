


//LABORATORIO 3 FUNCIONES



//1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
//calcule la potencia de un número (ambos números ingresados por teclado).


/*
#include <iostream>
using namespace std;

int potencia (int,int);

int main()
{
    int num, poten;
    cout<<"Ingrese un numero: "; cin>>num;
    cout<<"Ingrese el valor de para su potencia: "; cin>>poten;

    cout<<"La potencia de "<<num<<" por "<<poten<<" es "<<potencia(num,poten)<<endl;

    return 0;
}

int potencia (int num1,int num2)
{
    int aux=num1;
    for (int i = 1; i<num2; i++)
    {
        num1=num1*aux;
    }
    return num1;
}
*/


//2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto.
//Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto 
//recibe el año leído por teclado, comprueba si es o no bisiesto.

/*
#include <iostream>
using namespace std;

bool bisiesto(int);

int main()
{
    int year;

    cout<<"Ingrese un año cualquiera: "; cin>>year;

    if (bisiesto(year))
       cout<<"Es bisiesto\n";
    else
       cout<<"No es bisiesto\n";

    return 0;
}

bool bisiesto(int n)
{
    if (n%4==0||n%100==0||n%400==0)  
      return true;
    return false;
}
*/


//3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de una persona
//y por medio de una función calcule su edad en años, meses y días.


/*
#include <iostream>
using namespace std;


void leer_fecha(int &,int &,int &);
void edad(int,int,int,int,int,int);

int main()
{
    int year, mouth, day;
    int y2, m2, d2;
    
    cout<<"***Ingrese la fecha actual***\n";
    leer_fecha(year,mouth,day);
    cout<<"***Ingrese la fecha de su nacimiento***\n";
    leer_fecha(y2,m2,d2);
    edad(year,mouth,day,y2,m2,d2);

    return 0;
}

void leer_fecha(int &y,int &m,int &d)
{
    do
    {
        cout<<"Ingrese un año: "; cin>>y;
        if (y<1)
           cout<<"Ingrese un fecha correcta!!\n";
    } while (y<1);

    do
    {
        cout<<"Ingrese un mes: "; cin>>m;
        if (m>12||m<1)
           cout<<"Ingrese un mes correcto!!\n";
    } while (m>12||m<1);

    do
    {
        cout<<"Ingrese un dia: "; cin>>d;
        if (d>31||d<1)
           cout<<"Ingrese un dia correcto!!\n";
    } while (d>31||d<1);

}

void edad(int y1,int m1,int d1, int y2, int m2, int d2)
{
    cout<<"Su edad son "<<y1-y2<<" años "<<m1-m2<<" meses "<<d1-d2<<" dias\n";
}
*/



//4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de números primos
//ubicados entre 1 hasta un numero x (x es ingresado por teclado).


/*
#include <iostream>
using namespace std;

bool esprimo(int);
void imprimeprimos(int);

int main()
{
    int num;
    do
    {
        cout<<"Ingrese rango maximo de numeros primos que quiere: "; cin>>num;
        if (num<1)
          cout<<"Debe ser positivo!\n";
    } while (num<1);
    
    imprimeprimos(num);

    return 0;
}

bool esprimo(int n)
{
    int c=0;
    for (int i=1; i<n+1; i++)
    {
        if (n%i==0)
            c++;       
    }
    if (c==2)
      return true;
    return false;
    
}

void imprimeprimos(int x)
{
    for (int i=1; i<x+1; i++)
    {
        if (esprimo(i))
           cout<<i<<"-";
    }
}
*/



//5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las siguientes opciones:

//a. Introducir un valor x entero comprendido entre 0 y 100.
//b. Validar que sea un valor par.
//c. Sumar todos los números impares desde el 0 hasta el valor de x.


/*
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
*/
