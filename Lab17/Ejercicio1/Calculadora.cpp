#include "Calculadora.h"
template<typename T, typename U>
Calculadora<T, U>::Calculadora()
{
    this->num_1 = 0;
    this->num_2 = 0;
}

template<typename T, typename U>
Calculadora<T, U>::Calculadora(T num_1, U num_2)
{
    this->num_1 = num_1;
    this->num_2 = num_2;
}

template<typename T, typename U>
Calculadora<T, U>::~Calculadora()
{
}

template<typename T, typename U>
void Calculadora<T, U>::setValores(T num_1,U num_2)
{
    this->num_1 = num_1;
    this->num_2 = num_2;
}

template<typename T, typename U>
auto Calculadora<T, U>::suma()
{
    return num_1+num_2;
}

template<typename T, typename U>
auto Calculadora<T, U>::resta()
{
    return num_1-num_2;
}

template<typename T, typename U>
auto Calculadora<T, U>::producto()
{
    return num_1*num_2;
}

template<typename T, typename U>
auto Calculadora<T, U>::division()
{
    if (num_2 == 0)
        throw std::invalid_argument("No se puede divir un numero entre 0!");
    return num_1/num_2;
}