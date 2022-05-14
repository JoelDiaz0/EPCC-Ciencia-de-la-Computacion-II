//7. Calcula el promedio de 3 notas para n estudiantes.

#include <iostream>
using namespace std;

int main()
{
    float notas[3], suma=0;

    for (int i=0; i<3; i++)
    {
        cout<<"Ingrese la nota del estudiante Nro"<<i+1<<": "; cin>>notas[i];
        suma+=notas[i]/3;
    }
    cout<<"El promedio de los 3 estudiantes es: "<<suma<<endl;

    return 0;
}
