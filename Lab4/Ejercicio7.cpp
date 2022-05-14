//7. Escribe un programa, que trabajando mediante funciones, presente un menú al
//usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
//arriba o para abajo.

#include <iostream>
using namespace std;

int crearmatriz(int, int, int M[100][100]);
void mostrarmatriz(int, int ,int M[100][100]);
void movercolumnas(int,int,int M[100][100],int, int);
void moverfilas(int,int,int M[100][100],int, int);

int main()
{
    int opcion;
    int fila, columna, Matriz[100][100], x, y;

    cout<<"Ingrese el numero de fila: "; cin>>fila;
    cout<<"Ingrese el numero de columnas: "; cin>>columna;

    cout<<"MENU DE MATRISES.\n\n";
    cout<<"1. Ingresar datos.\n";
    cout<<"2. Mostrar datos.\n";
    cout<<"3. Mover Filas.\n";
    cout<<"4. Mover Columnas.\n";
    cout<<"5. Salir.\n";

    do
    {
      cout<<"Que accion desea hacer?:  "; cin>>opcion;

      if (opcion==1)
      {
        Matriz[100][100]=crearmatriz(fila,columna,Matriz);
      }

      if (opcion==2)
      {
          mostrarmatriz(fila,columna,Matriz);
      }

      if (opcion==3)
      {
        cout<<"Ingrese la posicion de la FILA que quiere mover: "; cin>>x;
        cout<<"Ingrese la posicion a donde se va mover: "; cin>>y;
        moverfilas(fila,columna,Matriz,x,y);
      }

      if (opcion==4)
      { 
        cout<<"Ingrese la posicion de la COLUMNA que quiere mover: "; cin>>y;
        cout<<"Ingrese la posicion a donde se va mover: "; cin>>x; 
        movercolumnas(fila,columna,Matriz,y,x);
      }

      else if (opcion>5 || opcion<1)
       {
           cout<<"Ingrese un valor dentro de la opciones!\n";
       }

    } while (opcion!=5);

    return 0;
}
int crearmatriz(int f, int c, int M[100][100]){

    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<"Ingrese un valor a la matriz: "; cin>>M[i][j];
        }
    }
    return M[100][100];
}
void mostrarmatriz(int f, int c, int M[100][100]){

    for (int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n\n";
    }
}
void moverfilas(int f,int c,int M[100][100],int x, int y)
{
    int aux;
    for (int i=0; i<f; i++)
    {
       for (int j=0; j<c; j++)
       {
           if(i==x)
           {
               aux=M[i][j];
               M[i][j]=M[y][j];
               M[y][j]=aux;
           } 
       }     
    }
}
void movercolumnas(int f,int c,int M[100][100],int y, int x)
{
    int aux;
    for (int i=0; i<f; i++)
    {
       for (int j=0; j<c; j++)
       {
           if(j==y)
           {
               aux=M[i][j];
               M[i][j]=M[i][x];
               M[i][x]=aux;
           } 
       }     
    }
}