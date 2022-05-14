/*5. Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.*/

#include <iostream>
#include <time.h>
#include "Matriz.h"
using namespace std;

int main()
{
    Matriz Mimatriz(4,3);
    Mimatriz.mostrar();
    Mimatriz.buscar(5);
    Mimatriz.liberar_memoria();
    
    return 0;
}