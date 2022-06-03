
//Numero.cpp

#include <iostream>
#include "Numero.h"
using namespace std;

template <class T>
Numero<T>::Numero()
{
    num1 = 0;
    num2 = 0;
    num3 = 0;
}

template <class T>
Numero<T>::Numero(T num1, T num2, T num3)
{
    this -> num1 = num1;
    this -> num2 = num2;
    this -> num3 = num3;
}

template <class T>
Numero<T>::~Numero()
{
}

template <class T>
T Numero<T>::mayor()
{
    if (num1 == num2 && num2 == num3)
       throw logic_error("Los 3 numeros son iguales");
    else if (num1 > num2 && num2 >= num3)
       return num1;
    else if (num1 > num3 && num3 >= num2)
       return num2; 
    else if (num2 > num1 && num1 >= num3)
       return num2;
    else if (num2 > num3 && num3 >= num1)
       return num2;
    else if (num3 > num1 && num1 >= num2)
       return num3;
    else if (num3 > num2 && num2 >= num1)
       return num3;
}

template <class T>
T Numero<T>::menor()
{
    if (num1 == num2 && num2 == num3)
       throw logic_error("Los 3 numeros son iguales");
    else if (num1 >= num2 && num2 > num3)
       return num3;
    else if (num1 >= num3 && num3 > num2)
       return num2; 
    else if (num2 >= num1 && num1 > num3)
       return num3;
    else if (num2 >= num3 && num3 > num1)
       return num1;
    else if (num3 >= num1 && num1 > num2)
       return num2;
    else if (num3 >= num2 && num2 > num1)
       return num1;    
}

template<class T>
void Numero<T>::mostrar()
{
    cout<<"("<<num1<<")-("<<num2<<")-("<<num3<<")"<<endl;
}