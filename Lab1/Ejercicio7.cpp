//7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es divisor del otro.


#include <iostream>
using namespace std;

bool esdivisor(int,int);

int main()
{
    int num1, num2;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    if (esdivisor(num1,num2)&&esdivisor(num2,num1))
       cout<<"Ambos son divisibles entre si\n";
    else if (esdivisor(num1,num2))
       cout<<num1<<" es divisible entre "<<num2<<endl;
    else if (esdivisor(num2,num1))
       cout<<num2<<" es divisible entre "<<num1<<endl;
    else
       cout<<"No son divisores\n";

    return 0;
}

bool esdivisor(int n1,int n2)
{
    if (n1%n2==0)
       return true;
    return false;
}
