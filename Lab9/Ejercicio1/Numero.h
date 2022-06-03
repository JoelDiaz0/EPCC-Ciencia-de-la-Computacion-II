//Numero.h

#include <iostream>
using namespace std;

template <class T>
class Numero
{
private:
    T num1;
    T num2;
    T num3;
public:
    Numero();
    Numero(T,T,T);
    ~Numero();
    T mayor();
    T menor();
    void mostrar();
};