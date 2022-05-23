#include <iostream>
using namespace std;

class Punto
{
private:
    int x, y;
public:
    Punto();
    Punto(int,int);
    ~Punto();
    void setCoordenada(int,int);
    void mostrar();
};