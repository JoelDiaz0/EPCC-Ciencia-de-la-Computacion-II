#include <iostream>
#include "Multimedia.h"
using namespace std;

Multimedia::Multimedia()
{
    id = 0;
}

Multimedia::Multimedia(int id)
{
    this->id=id;
}

Multimedia::~Multimedia()
{
}

void Multimedia::setID(int id)
{
    this -> id = id;
}