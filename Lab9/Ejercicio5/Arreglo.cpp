
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
void Arreglo<T>::orden_descendete()
{
    if (vacio())
      throw logic_error("ARREGLO VACIO!!");
    else
    {
        T aux;
        for (int i = 0; i < vec.size(); i++)
        {
            
            for (int j = i+1; j < vec.size(); j++)
            {
                if (vec.at(i) < vec.at(j))
                {
                   aux = vec.at(i);
                   vec.at(i) = vec.at(j);
                   vec.at(j) = aux;
                }
            }
        }      
    }
}

template<class T>
void Arreglo<T>::orden_ascendente()
{
    if (vacio())
      throw logic_error("ARREGLO VACIO!!");
    else
    {
        T aux;
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = i+1; j < vec.size(); j++)
            {
                if (vec.at(i) > vec.at(j))
                {
                   aux = vec.at(i);
                   vec.at(i) = vec.at(j);
                   vec.at(j) = aux;
                }
            }
        }      
    }
}

template<class T>
const void Arreglo<T>::mostrar()
{
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout<<"("<<*i<<")";
        if (i+1 != vec.end())
           cout<<"-";
    }
    cout<<endl;
}