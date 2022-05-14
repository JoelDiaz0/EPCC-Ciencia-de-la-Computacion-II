//4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. 
//Muestre todos los números primos que se encuentren entre el rango de valores, de no encontrarse,
//mostrar el primo más cercano a 𝑥 o 𝑦.

#include <iostream>
using namespace std;

bool esprimo(int);
int cercanoprimo(int);

int main()
{
    int x, y;
    bool com=false;

    do
    {
        cout<<"Ingrese el valor de x: "; cin>>x;
        cout<<"Ingrese el valor de y (debe ser mayor a x): ";cin>>y;
        if (x>y)
          cout<<"'y'debe ser mayor a 'x'";

    } while (x>y);

    for (int i=x+1; i<y; i++)
    {
        if (esprimo(i))
           cout<<i<<"-";
           com=true;
    }

    if (com==false)
    {
        cout<<"El numero primo mas cercano a 'x' es: "<<cercanoprimo(x)<<endl;
        cout<<"El numero primo mas cercano a 'y' es: "<<cercanoprimo(y)<<endl;
    }
    
    return 0;
}

bool esprimo(int n)
{
    int c=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==2)
      return true;
    return false;
}

int cercanoprimo(int n)
{
    int dife=1;
    if (esprimo(n))
      return n;
    else
     while (esprimo(n-dife)==false||esprimo(n+dife)==false)
     {
        dife++;
     } 
    if (esprimo(n-dife))
       return n-dife;
    else 
       return n+dife;
}

