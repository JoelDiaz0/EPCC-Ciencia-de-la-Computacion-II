//Gallina.h

#include <iostream>
#include "Ave.h"
using namespace std;

class Gallina : public Ave
{
public:
    Gallina();
    Gallina(string);
    ~Gallina();
    void cacarear();
};