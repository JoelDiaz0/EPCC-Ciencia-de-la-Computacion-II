/*7. Utilice la técnica de las funciones virtuales para arreglar los comportamientos
anómalos detectados en el ejercicio anterior.*/

//mainEjercicio7.cpp

#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main()
{
    Forma *fs[6];
    Cuadrado c1("Rojo",0,1,10), c2("verde",0,0,5), c3("Negro",2,2,12);
    Rectangulo r1("Negro",1,4,6,9), r2("Rojo",3,4,5,10), r3("Verde",1,1,2,4);

    fs[0] = &c1;
    fs[1] = &c2;
    fs[2] = &c3;
    fs[3] = &r1;
    fs[4] = &r2;
    fs[5] = &r3;

    for (int i = 0; i < 6; i++)
    {
        fs[i]->imprimir();
        cout<<"AREA: "<<fs[i]->area()<<endl;
        cout<<"PERIMETRO: "<<fs[i]->perimetro()<<endl;
    } 

    return 0;
}