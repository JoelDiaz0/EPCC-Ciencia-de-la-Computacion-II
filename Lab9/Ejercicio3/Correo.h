
//Correo.h

#include <iostream>
using namespace std;

template<class T1, class T2>
class Correo
{
private:
    T1 letra;
    T2 palabra;
    const string correo = "@unsa.edu.pe.";
public:
    Correo();
    Correo(T1,T2);
    ~Correo();
    const void mostrar();
};

