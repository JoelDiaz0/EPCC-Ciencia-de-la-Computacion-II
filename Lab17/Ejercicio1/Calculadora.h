#include <iostream>
template<typename T, typename U>
class Calculadora
{
public:
    Calculadora();
    Calculadora(T num_1, U num_2);
    ~Calculadora();
    void setValores(T num_1,U num_2);
    auto suma();
    auto resta();
    auto producto();
    auto division();
private:
    T num_1;
    U num_2;
};

