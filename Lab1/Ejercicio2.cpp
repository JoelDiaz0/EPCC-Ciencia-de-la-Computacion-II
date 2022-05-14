//2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno y el apellido materno. 
//Retornar su correo UNSA generado, el cual consiste de la primera letra del nombre, el apellido paterno completo, 
//y la primera letra del apellido materno. (se agrega el dominio de la universidad al final).

#include <iostream>
using namespace std;

string correounsa(string,string,string);

int main()
{
    string nombre, apelli1, apelli2;
    cout<<"Ingrese su nombre: "; cin>>nombre;
    cout<<"Ingrese su apellido paterno: "; cin>>apelli1;
    cout<<"Ingrese su apellido materno: "; cin>>apelli2;

    cout<<"Su correo universitario es: "<<correounsa(nombre,apelli1,apelli2)<<endl;

    return 0;
}

string correounsa(string nom,string ape1,string ape2)
{
    string correo;
    correo=nom[0]+ape1+ape2[0]+"@unsa.edu.pe";
    return correo;
}

