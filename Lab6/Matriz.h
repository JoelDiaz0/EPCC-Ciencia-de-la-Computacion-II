#include <iostream>
#include <time.h>
using namespace std;

class Matriz
{
private:
    int fila;
    int columna;
    int **M;
public:
    Matriz();
    Matriz(int ,int);
    ~Matriz();
    void buscar(int);
    void mostrar();
    void liberar_memoria();
};

Matriz::Matriz()
{
    fila = 3;
    columna = 3;

    M = new int *[fila];
    for (int i = 0; i < fila; i++)
       M[i] = new int [columna];

    srand(time(NULL));

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
            M[i][j] = 1 + rand()%(9 - 1);
    }
}

Matriz::Matriz(int fila, int columna)
{
    if (fila < 0)
      throw logic_error("El numero de filas de la matriz deben ser positivos");
    else
      this->fila = fila;
    if (columna < 0)
     throw logic_error("El numero de columnas de la matriz deben ser positivos");
    else
      this->columna = columna;

    M = new int *[fila];
    for (int i = 0; i < fila; i++)
       M[i] = new int [columna];

    srand(time(NULL));

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
            M[i][j] = 1 + rand()%10 - 1;
    }
}

Matriz::~Matriz()
{
}

void Matriz::buscar(int num)
{
    bool c = false;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (M[i][j] == num)
            {
              cout<<"Se encontro el numero\nUbicacion: "<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
              c = true;
            }
        }
    }
    if (c == false)
      cout<<"No se encontro el numero\n";
}

void Matriz::mostrar()
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
           cout<<M[i][j]<<" ";
        cout<<endl<<endl;
    }
}

void Matriz::liberar_memoria()
{
    for (int i = 0; i < fila; i++)
       delete [] M[i];
    delete [] M;
}