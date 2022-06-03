
//Arreglo.h

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Arreglo
{
private:
    int tam;
    vector <T> vec;
public:
    Arreglo();
    ~Arreglo();
    bool vacio();
    void ingresar_elemento(T);
    T mayor_elemento();
    T menor_elemento();
    void orden_ascendente();
    void orden_descendete();
    const void mostrar();
};

