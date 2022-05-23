#include <iostream>
#include "OperacionFactorial.h"
using namespace std;

OperacionFactorial::OperacionFactorial() : OperacionBase()
{
}

OperacionFactorial::OperacionFactorial(int num1) : OperacionBase(num1)
{
}

OperacionFactorial::~OperacionFactorial()
{
}

int OperacionFactorial::getFactorial()
{
    int c = 1;
    for (int i = 1; i <= num; i++)
    {
        c *= i;
    }
    return c;
}
