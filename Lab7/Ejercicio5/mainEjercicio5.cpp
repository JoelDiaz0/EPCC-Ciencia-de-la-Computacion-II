
//5. Escribe un programa que implemente la siguiente jerarquía de clases.


#include <iostream>
#include "OperacionFactorial.h"
using namespace std;

int main()
{
    OperacionFactorial p1(5);
    cout<<p1.getFactorial()<<endl;

    p1.setOperador(3);
    cout<<p1.getFactorial()<<endl;

    return 0;
}