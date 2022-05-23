//OperacionFactorial.h

#include <iostream>
#include "OperacionBase.h"
using namespace std;

class OperacionFactorial : public OperacionBase
{
public:
    OperacionFactorial();
    OperacionFactorial(int);
    ~OperacionFactorial();
    int getFactorial();
};
