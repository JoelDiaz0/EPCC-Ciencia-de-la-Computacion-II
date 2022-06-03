
//Arreglo.cpp

#include <iostream>
#include <vector>
#include "Arreglo.h"
using namespace std;

template<class T>
Arreglo<T>::Arreglo()
{
}

template<class T>
Arreglo<T>::~Arreglo()
{
}

template<class T>
bool Arreglo<T>::vacio()
{
    if (vec.size() == 0)
       return true;
    return false;
}

template<class T>
void Arreglo<T>::ingresar_elemento(T num)
{
    vec.push_back(num);
}

template<class T>
T Arreglo<T>::mayor_elemento()
{
    if (vacio())
      throw logic_error("Arreglo Vacio");
    else
    {
        T mayor = vec.at(0);
        for (int i = 1; i < vec.size(); i++)
        {
            if (mayor < vec.at(i))
                mayor = vec.at(i);
        }
        return mayor;
    }
}

template<class T>
T Arreglo<T>::menor_elemento()
{
    if (vacio())
      throw logic_error("Arreglo Vacio");
    else
    {
        T menor = vec.at(0);
        for (int i = 1; i < vec.size(); i++)
        {
            if (menor > vec.at(i))
                menor = vec.at(i);
        }
        return menor;
    }
}

template<class T>
const void Arreglo<T>::mostrar()
{
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}