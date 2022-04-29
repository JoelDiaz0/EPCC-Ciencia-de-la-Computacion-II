
//LABORATORIO 1 TIPOS DE DATOS, CONDICIONALES


//1. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre el producto de ambos.

/*
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;
    cout<<"El producto de los numeros es: "<<num1*num2<<endl;

    return 0;
}
*/


//2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno y el apellido materno. 
//Retornar su correo UNSA generado, el cual consiste de la primera letra del nombre, el apellido paterno completo, 
//y la primera letra del apellido materno. (se agrega el dominio de la universidad al final).


/*
#include <iostream>
using namespace std;

string correounsa(string,string,string);

int main()
{
    string nombre, apelli1, apelli2;
    cout<<"Ingrese su nombre: "; cin>>nombre;
    cout<<"Ingrese su apellido paterno: "; cin>>apelli1;
    cout<<"Ingrese su apellido materno: "; cin>>apelli2;

    cout<<"Su correo universitario es: "<<correounsa(nombre,apelli1,apelli2)<<endl;

    return 0;
}

string correounsa(string nom,string ape1,string ape2)
{
    string correo;
    correo=nom[0]+ape1+ape2[0]+"@unsa.edu.pe";
    return correo;
}
*/



//3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de cadena), 
//solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el formato de salida 
//debe de estar en AM o PM según corresponda).


/*
#include <iostream>
#include <string>
using namespace std;


string sumarhora(int,int,int,bool);

int main()
{
    string hora,h1,h2,h3;
    int num1, num2, extra;
    bool ho;

    cout<<"Ingrese una hora en formato HH:MM: "; cin>>hora;
    cout<<"AM o PM: "; cin>>h3;

    if (h3=="AM")
      ho=true;
    else
      ho=false;

    h1=hora[0]+hora[1];
    h2=hora[3]+hora[4];
    num1=stod(h1);
    num2=stod(h2);

    cout<<"Ingrese una cantidad de minutos a agregar: "; cin>>extra;

    cout<<sumarhora(num1,num2,extra,ho)<<endl;


    return 0;
}

string sumarhora(int n1,int n2,int extra,bool h)
{
    string b1, b2;
    while (n2+extra>59||n1>12)
    {
        if (n2+extra>59)
        {
            n1++;
            n2=n2+extra-60;
        }     
        if (n1>12)
        {
            n1=1;
            if (h==true)
               h=false;
            else
               h=true;                                
        }  
    }
    //b1=n1; b2=n2;
    return b1+":"+b2;
}
*/


//4. Escriba un código que solicite una cantidad de minutos específica y muestre como resultado la hora 
//y fecha resultante tomando como referencia la hora y fecha actual y restarle el tiempo indicado.





//5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene 
//un numero flotante y retorne el número redondeado.

/*
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    char num[10];

    cout<<"Ingrese un numero flotante cualquiera: "; cin.getline(num,10,'\n');
    string num1(num);
    float num2=stof(num1);

    cout<<"El numero redondeado es: "<<round(num2)<<endl;

    return 0;
}
*/

//6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado en binario.

/*
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
*/

//7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es divisor del otro.

/*
#include <iostream>
using namespace std;

bool esdivisor(int,int);

int main()
{
    int num1, num2;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    if (esdivisor(num1,num2)&&esdivisor(num2,num1))
       cout<<"Ambos son divisibles entre si\n";
    else if (esdivisor(num1,num2))
       cout<<num1<<" es divisible entre "<<num2<<endl;
    else if (esdivisor(num2,num1))
       cout<<num2<<" es divisible entre "<<num1<<endl;
    else
       cout<<"No son divisores\n";

    return 0;
}

bool esdivisor(int n1,int n2)
{
    if (n1%n2==0)
       return true;
    return false;
}
*/


//8. Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.


/*
#include <iostream>
using namespace std;

int main()
{
    int n; 
    float num, suma=0;
    cout<<"Ingrese la cantidad de numeros que desee: "; cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese un numero ("<<i+1<<"): "; cin>>num;
        suma+=num/n;
    }

    cout<<"La media es: "<<suma<<endl;
    
    return 0;
}
*/

//9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.


/*
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
*/


//10. Escribir un programa que almacene la cadena de caracteres contraseña en una variable,
//pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.


/*
#include <iostream>

using namespace std;

int main()
{
    const string contrasena="mugiwara";
    string intento;

    do
    {
        cout<<"Ingrese la contrasena para poder continuar: "; cin>>intento;
        if (intento!=contrasena)
          cout<<"Error, contrasena incorrecta!\n";
        
    } while (intento!=contrasena);

    cout<<"CORECCTO!!, ingresando al sistema...\n";
    

    return 0;
}
*/