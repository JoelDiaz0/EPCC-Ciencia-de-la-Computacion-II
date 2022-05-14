//3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de una persona
//y por medio de una función calcule su edad en años, meses y días.

#include <iostream>
using namespace std;

void leer_fecha(int &,int &,int &);
void edad(int,int,int,int,int,int);

int main()
{
    int year, mouth, day;
    int y2, m2, d2;
    
    cout<<"***Ingrese la fecha actual***\n";
    leer_fecha(year,mouth,day);
    cout<<"***Ingrese la fecha de su nacimiento***\n";
    leer_fecha(y2,m2,d2);
    edad(year,mouth,day,y2,m2,d2);

    return 0;
}

void leer_fecha(int &y,int &m,int &d)
{
    do
    {
        cout<<"Ingrese un año: "; cin>>y;
        if (y<1)
           cout<<"Ingrese un fecha correcta!!\n";
    } while (y<1);

    do
    {
        cout<<"Ingrese un mes: "; cin>>m;
        if (m>12||m<1)
           cout<<"Ingrese un mes correcto!!\n";
    } while (m>12||m<1);

    do
    {
        cout<<"Ingrese un dia: "; cin>>d;
        if (d>31||d<1)
           cout<<"Ingrese un dia correcto!!\n";
    } while (d>31||d<1);

}

void edad(int y1,int m1,int d1, int y2, int m2, int d2)
{
    cout<<"Su edad son "<<y1-y2<<" años "<<m1-m2<<" meses "<<d1-d2<<" dias\n";
}
