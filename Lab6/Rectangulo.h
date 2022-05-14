#include <iostream>
using namespace std;

class Rectangulo
{
private:
    double lado;
public:
    Rectangulo();
    Rectangulo(double);
    ~Rectangulo(); 
    void setLado(double);
    double getLado();
    double area();
    double perimetro();
};

Rectangulo::Rectangulo()
{
    lado = 0;
}

Rectangulo::Rectangulo(double lado)
{
    this->lado = lado;
}

Rectangulo::~Rectangulo(){}


void Rectangulo::setLado(double lado)
{
    this->lado = lado;
}

double Rectangulo::getLado()
{
    return lado;
}

double Rectangulo::area()
{
    return lado*lado;
}

double Rectangulo::perimetro()
{
    return lado*4;
}
