//Color.h

#include <iostream>
using namespace std;

class Color
{
protected:
    int R;
    int G;
    int B;
    
public:
    Color();
    Color(int,int,int);
    ~Color();
};