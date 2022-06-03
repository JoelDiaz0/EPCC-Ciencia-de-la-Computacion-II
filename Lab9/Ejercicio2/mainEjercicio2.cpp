/*2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.*/

//mainEjercicio2.cpp

#include <iostream>
#include "Numero.h"
using namespace std;
 
int main()
{
    try
    {
        Numero<int> n1(14,7);
        Numero<float> n2(27.3,3.6);
        Numero<double> n3(50.4324,5.2341);

        cout<<"***ENTEROS***"<<endl;
        n1.mostrar();
        cout<<"SUMA: "<<n1.suma()<<endl;
        cout<<"RESTA: "<<n1.resta()<<endl;
        cout<<"PRODUCTO: "<<n1.producto()<<endl;
        cout<<"DIVISION: "<<n1.division()<<endl;

        cout<<"\n\n***FLOTANTE***"<<endl;
        n2.mostrar();
        cout<<"SUMA: "<<n2.suma()<<endl;
        cout<<"RESTA: "<<n2.resta()<<endl;
        cout<<"PRODUCTO: "<<n2.producto()<<endl;
        cout<<"DIVISION: "<<n2.division()<<endl;

        cout<<"\n\n***DOUBLE***"<<endl;
        n3.mostrar();
        cout<<"SUMA: "<<n3.suma()<<endl;
        cout<<"RESTA: "<<n3.resta()<<endl;
        cout<<"PRODUCTO: "<<n3.producto()<<endl;
        cout<<"DIVISION: "<<n3.division()<<endl;

        cout<<"\n\n***DIVION ENTRE 0***"<<endl;
        Numero<int> n4(0,12), n5(6,0);
        n4.mostrar();
        cout<<"DIVISION: "<<n4.division()<<endl;
        n5.mostrar();
        cout<<"DIVISION: "<<n5.division()<<endl;
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    
    return 0;
}

