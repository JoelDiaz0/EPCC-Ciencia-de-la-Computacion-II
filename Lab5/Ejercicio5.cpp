//5. Implemente su propia función de concatenación de cadenas de texto especial (¡no es
//la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
//caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
//puntero. La función no retorna ningún valor.

#include <iostream>
using namespace std;

void concatenacion(char *,char *);

int main()
{
    char *palabra1Ptr = "Mundo", *palabra2Ptr = "Hola", *aux;

    concatenacion(palabra1Ptr,palabra2Ptr);

    return 0;
}

void concatenacion(char *nPtr,char *n2Ptr)
{
    char *aux;
    int tam = sizeof(nPtr)/sizeof(nPtr[0])+sizeof(n2Ptr)/sizeof(n2Ptr[0]), cont = 0;

    aux = new char[tam];

    for (int i=0; n2Ptr[i]!='\0'; i++)
    {
        aux[i] = n2Ptr[i];
        cont++;
    }

    for (int i=0; nPtr[i]!='\0'; i++)
    {
        aux[i+cont] = nPtr[i];
    }

    nPtr = new char[tam];

    for (int i=0; i<tam; i++)
    {
        nPtr[i] = aux[i];
    }

    for (int i=0; i<tam; i++)
    {
        cout<<nPtr[i];
    }

    delete aux, nPtr;
}

