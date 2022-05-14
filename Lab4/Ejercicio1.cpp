//1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
//nombre, apellido, edad y DNI y luego lo muestre por pantalla.

#include <iostream>
using namespace std;

struct Persona
{
    string nombre;
    string apellido;
    int edad;
    string DNI;
}; 

int main()

{
    Persona p1[3];
    
    for (int i=0; i<3; i++)
    {
        cout<<"Ingrese el nombre de la persona "<<i+1<<": "; cin>>p1[i].nombre;
        cout<<"Ingrese el apellido de la persona "<<i+1<<": "; cin>>p1[i].apellido;

        do
        {
            cout<<"Ingrese la edad de la persona "<<i+1<<": "; cin>>p1[i].edad;
            if (p1[i].edad<0)
              cout<<"La edad debe ser positiva\n";
        } while (p1[i].edad<0);

        do
        {
            cout<<"Ingrese el DNI de la persona "<<i+1<<": "; cin>>p1[i].DNI;
            if ((p1[i].DNI).length()<8||(p1[i].DNI).length()>8)
              cout<<"El DNI tiene 8 caracteres\n";
        } while ((p1[i].DNI).length()<8||(p1[i].DNI).length()>8);
    }

    for (int i=0; i<3; i++)
    {
        cout<<"***PERSONA "<<i+1<<endl;
        cout<<"Nombre: "<<p1[i].nombre<<" ";
        cout<<"Apellido: "<<p1[i].apellido<<" ";
        cout<<"Edad: "<<p1[i].edad<<" ";
        cout<<"DNI: "<<p1[i].DNI<<endl;
    }

    return 0;
}
