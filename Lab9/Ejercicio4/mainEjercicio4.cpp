/*4. Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.*/

//mainEjercicio4.cpp

#include <iostream>
#include "Arreglo.h"
using namespace std;

int main()
{
    Arreglo<int> miarray1;
    Arreglo<float> miarray2;
    Arreglo<double> miarray3;

    try
    {
        miarray1.ingresar_elemento(3);
        miarray1.ingresar_elemento(10);
        miarray1.ingresar_elemento(6);
        miarray1.mostrar();
        cout<<"MAYOR ELEMENTO ARREGLO 1: "<<miarray1.mayor_elemento()<<endl;
        cout<<"MENOR ELEMENTO ARREGLO 1: "<<miarray1.menor_elemento()<<endl;

        miarray2.ingresar_elemento(13.4);
        miarray2.ingresar_elemento(6.4);
        miarray2.ingresar_elemento(13.7);
        miarray2.mostrar();
        cout<<"MAYOR ELEMENTO ARREGLO 2: "<<miarray2.mayor_elemento()<<endl;
        cout<<"MENOR ELEMENTO ARREGLO 2: "<<miarray2.menor_elemento()<<endl;

        cout<<"\nMAYOR ELEMENTO ARREGLO 3: "<<miarray3.mayor_elemento()<<endl;
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}