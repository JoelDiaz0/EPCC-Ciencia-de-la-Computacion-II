/*1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/

//mainEjercicio1.cpp

#include <iostream>
#include "Numero.h"
using namespace std;

int main()
{
   Numero<int> n1(15,12,18);
   Numero<float> n2(5.3,4.7,4.2);
   Numero<double> n3(1.4111,1.4111,1.4111);

   try
   {
      n1.mostrar();
      cout<<"MAYOR 1: "<<n1.mayor()<<endl;
      cout<<"MENOR 1: "<<n1.menor()<<endl;
      n2.mostrar();
      cout<<"MAYOR 2: "<<n2.mayor()<<endl;
      cout<<"MENOR 2: "<<n2.menor()<<endl;
      
      n3.mostrar();
      cout<<n3.mayor()<<endl;
   }
   catch(exception& e)
   {
      cout << e.what() << '\n';
   }

   return 0;
}



