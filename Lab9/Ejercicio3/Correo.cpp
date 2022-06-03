
//Correo.cpp

#include <iostream>
#include "Correo.h"
using namespace std;

template<class T1, class T2>
Correo<T1,T2>::Correo()
{
    letra = "";
    palabra = "";
}

template<class T1, class T2> 
Correo<T1,T2>::Correo(T1 letra,T2 palabra)
{
    this -> letra = letra;
    this -> palabra = palabra;
}

template<class T1, class T2> 
Correo<T1,T2>::~Correo()
{
}

template<class T1, class T2> 
const void Correo<T1,T2>::mostrar()
{
    cout<<letra<<palabra<<correo<<endl;
}