//2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.

#include <iostream>
using namespace std;

bool esprimo(int);

int main()
{
    int c=0, i=1;
    while (c<50)
    {
        if (esprimo(i))
        {
          cout<<i<<"-";
          c++; 
        }
        i++;
    }
    
    return 0;
}

bool esprimo(int num)
{
    int count=0;
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count==2)
       return true;
    return false;
}

