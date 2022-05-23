//OperacionBase.h

#include <iostream>
using namespace std;

class OperacionBase
{
protected:
    int num;
public:
    OperacionBase();
    OperacionBase(int);
    ~OperacionBase();
    void setOperador(int);
    int getOperador();
};