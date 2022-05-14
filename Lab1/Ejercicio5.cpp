//5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene 
//un numero flotante y retorne el número redondeado.

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

