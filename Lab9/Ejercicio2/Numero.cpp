
//Numero.cpp

#include <iostream>
#include "Numero.h"
using namespace std;

template <class T>
Numero<T>::Numero()
{
    num1 = 0;
    num2 = 0;
}

template <class T>
Numero<T>::Numero(T num1, T num2)
{
    this -> num1 = num1;
    this -> num2 = num2;
}

template <class T>
Numero<T>::~Numero()
{
}

template<class T>
void Numero<T>::mostrar()
{
    cout<<"("<<num1<<")-("<<num2<<")"<<endl;
}

template<class T>
T Numero<T>::suma()
{
   return num1+num2;
}

template<class T>
T Numero<T>::resta()
{
   return num1-num2;
}

template<class T>
T Numero<T>::producto()
{
   return num1*num2;
}

template<class T>
T Numero<T>::division()
{
   if (num2 == 0)
       throw logic_error("El denominador no puede ser 0");
   else 
       return num1/num2;
}