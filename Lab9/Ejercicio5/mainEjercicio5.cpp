/*5. Realizar la implementación de un programa que haga uso de plantillas, para
elaborar una función que permita ordenar ascendentemente y descendentemente
los elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.*/

//mainEjercicio5.cpp

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
        miarray1.ingresar_elemento(1);
        miarray1.ingresar_elemento(7);
        miarray1.ingresar_elemento(5);
        cout<<"***ARREGLO 1***"<<endl;
        miarray1.mostrar();
        miarray1.orden_ascendente();
        cout<<"***ASCENDENTE***"<<endl;
        miarray1.mostrar();
        cout<<"***DESCENDENTE***"<<endl;
        miarray1.orden_descendete();
        miarray1.mostrar();

        miarray2.ingresar_elemento(5.2);
        miarray2.ingresar_elemento(4.1);
        miarray2.ingresar_elemento(4.6);
        miarray2.ingresar_elemento(5.5);
        miarray2.ingresar_elemento(5.9);

        cout<<"\n\n***ARREGLO 2***"<<endl;
        miarray2.mostrar();
        miarray2.orden_ascendente();
        cout<<"***ASCENDENTE***"<<endl;
        miarray2.mostrar();
        cout<<"***DESCENDENTE***"<<endl;
        miarray2.orden_descendete();
        miarray2.mostrar();

        cout<<"\n\n***ARREGLO 3***"<<endl;
        miarray3.orden_ascendente();
        miarray3.mostrar();
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}

