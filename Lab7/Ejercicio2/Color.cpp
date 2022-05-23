//Color.cpp
#include <iostream>
#include "Color.h"
using namespace std;

Color::Color()
{
    R = 255;
    G = 255;
    B = 255;
}

Color::Color(int R,int G,int B)
{
    if (R > 255 || R < 0 || G > 255 || G < 0 || B > 255 || B < 0)
       throw logic_error("RGB solo admite valores entre 0 y 255");
    else
    {
       this->R=R;
       this->G=G;
       this->B=B; 
    }
 
}

Color::~Color()
{

}
