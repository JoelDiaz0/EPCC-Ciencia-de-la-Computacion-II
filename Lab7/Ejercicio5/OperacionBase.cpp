#include <iostream>
#include "OperacionBase.h"
using namespace std;

OperacionBase::OperacionBase()
{
    num = 0;
}

OperacionBase::OperacionBase(int num)
{
    this -> num = num;
}

OperacionBase::~OperacionBase()
{
}

void OperacionBase::setOperador(int num)
{
    this -> num = num;
}

int OperacionBase::getOperador()
{
    return num;
}
