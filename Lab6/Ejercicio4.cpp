/*4. Implemente una aplicación con clases donde una clase contiene un arreglo en el que
se pueden almacenar como máximo 5 datos. Debe tener un nuevo dato para
almacenarlo, debe existir un método que verifique que el arreglo tenga espacio
disponible para guardar el dato. En caso contrario se debe mostrar un mensaje
indicando que el arreglo está lleno. Asimismo, debe tener un método para retirar un
dato del arreglo, este método debe verificar que, si haya algo para sacar del arreglo,
es decir que el arreglo no vaya a estar vacío, en cuyo caso debe desplegar un mensaje
diciendo que no hay nada para sacar de arreglo.*/

#include <iostream>
#include "Ejem.h"
using namespace std;

int main()
{
    Ejem aux;

    aux.eliminar(11);
    aux.ingresar(10);
    aux.mostrar();
    aux.ingresar(15);
    aux.ingresar(17);
    aux.ingresar(20);
    aux.ingresar(21);
    aux.mostrar();
    aux.ingresar(30);
    aux.mostrar();
    aux.eliminar(15);
    aux.mostrar();
    aux.eliminar(11);

    return 0;
}
