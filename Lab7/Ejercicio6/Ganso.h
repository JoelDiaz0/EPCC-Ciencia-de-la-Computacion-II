//Ganso.h

#include <iostream>
#include "Ave.h"
using namespace std;

class Ganso : public Ave
{
public:
    Ganso();
    Ganso(string);
    ~Ganso();
    void nadar();
};




