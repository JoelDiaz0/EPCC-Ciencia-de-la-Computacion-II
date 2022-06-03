#include <iostream>
using namespace std;

template <class T>
class Numero
{
private:
    T num1;
    T num2;
public:
    Numero();
    Numero(T,T);
    ~Numero();
    T suma();
    T resta();
    T producto();
    T division();
    void mostrar();
};

