//2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
//de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
//por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los punteros. 
//Repita este proceso de asignación y retiro de memoria dentro de un for de 1 000 000 veces.

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    int tam;
    long double multi1=1,multi2=1;
    double *n1Ptr=NULL, *n2Ptr=NULL;

    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<> distr(10,100);

    cout<<"Ingrese la cantidad de elementos que se van a generar en los vectores: "; cin>>tam;

    for (int i=0; i<1000000; i++)
    {
        n1Ptr = new double[tam];
        n2Ptr = new double[tam];

        for (int i=0; i<tam; i++)
        {
            n1Ptr[i]=distr(eng);
            n2Ptr[i]=distr(eng);
        }

        for (int i=0; i<tam; i++)
        {
            multi1*=n1Ptr[i];
            multi2*=n2Ptr[i];
        }
        
        cout<<"***"<<i+1<<"***"<<endl;
        cout<<"La multiplicaion de todos los elementos de vector 1 es: "<<setprecision(3)<<fixed<<multi1<<endl;
        cout<<"La multiplicaion de todos los elementos de vector 2 es: "<<setprecision(3)<<fixed<<multi2<<endl<<endl;

        delete n1Ptr, n2Ptr;
        multi1 = 1, multi2 = 1;
    }
    return 0;
}
