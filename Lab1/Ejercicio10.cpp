//10. Escribir un programa que almacene la cadena de caracteres contraseña en una variable,
//pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.

#include <iostream>

using namespace std;

int main()
{
    const string contrasena="mugiwara";
    string intento;

    do
    {
        cout<<"Ingrese la contrasena para poder continuar: "; cin>>intento;
        if (intento!=contrasena)
          cout<<"Error, contrasena incorrecta!\n";
        
    } while (intento!=contrasena);

    cout<<"CORECCTO!!, ingresando al sistema...\n";
    

    return 0;
}
