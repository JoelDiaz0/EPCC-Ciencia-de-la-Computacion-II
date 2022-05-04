
//LAB 4 ARRAY Y MATRICES


//1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
//nombre, apellido, edad y DNI y luego lo muestre por pantalla.

/*
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
*/


//2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
//pregunte al usuario que ingrese un número a buscar, implementar una función que
//busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
//contrario, retornar falso.

/*
#include <iostream>
using namespace std;

bool buscar(int [],int);
void mostrar(int []);

int main()
{
    int array[8], num;
    int n;

    for (int i=0; i<8; i++)
    {
        cout<<"Ingrese 8 numeros al arreglo ("<<i+1<<"): "; cin>>num;
        array[i]=num;
    }

    cout<<"Ingrese un numero para buscarlo en el vector: "; cin>>n;

    mostrar(array);
    
    if (buscar(array,n))
      cout<<"Se encontro el numero en el arreglo\n";
    else
      cout<<"No se encontro el numero en el arreglo\n";

    return 0;
}

bool buscar(int a[],int num)
{
    //int tam=(sizeof(a)/sizeof(a[0]));

    for (int i=0; i<8; i++)
    {
        if (num==a[i])
         return true;
    }
    return false;
}

void mostrar(int a[])
{
    //int tam=(sizeof(a)/sizeof(a[0]));

    for (int i=0; i<8; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
}
*/


//3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
//debe mostrar la suma de todos los números que estén en una fila par.


/*
#include <iostream>
using namespace std;


int main()
{
    int M[5][3], suma=0;

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<"Ingrese un numero a la matriz ["<<i<<"]"<<"["<<j<<"]: "; cin>>M[i][j];
       }     
    }

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           if (i%2==0)
            suma+=M[i][j];        
       }     
    }

    for (int i=0; i<5; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<M[i][j]<<" ";
       }
       cout<<endl;     
    }

    cout<<"La suma de las filas pares es: "<<suma<<endl;
    
    return 0;
}
*/

//4. Implementar un programa que rellene un array con los números primos
//comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

/*
#include <iostream>
using namespace std;

bool esprimo(int);

int main()
{
    int tam=0, c=0;

    for (int i=1; i<101; i++)
    {
        if (esprimo(i))
          tam++;
    }

    int A[tam];

    for (int i=1; i<101; i++)
    {
        if (esprimo(i))
        {
          A[c]=i;
          c++;
        }
    }

    for (int i=tam-1; i>-1; i--)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}

bool esprimo(int num)
{
    int count=0;
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count==2)
       return true;
    return false;
}
*/


/*5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo.
b. Buscar un producto por su nombre.
c. Modificar el stock y precio de un producto dado.*/

/*
#include <iostream>
using namespace std;

struct Producto
{
    string nombre;
    float precio;
    int cantidad;
};

string convetirminusculas(string);

int main()
{
    Producto p1[10];
    int opcion, c=0;
    string nom;

    cout<<"***MENU***\n";
    cout<<"1. Ingresar producto\n";
    cout<<"2. Buscar producto\n";
    cout<<"3. Modificar stock y precio\n";
    cout<<"4. Mostrar\n";
    cout<<"5. Salir \n";
    
    do
    {
        cout<<"Ingrese una opcion: "; cin>>opcion;
        if(opcion==1)
        {
          if (c<10)
          {
            cout<<"Ingrese el nombre del producto: "; cin>>p1[c].nombre;
            cout<<"Ingrese el precio del produco: "; cin>>p1[c].precio;
            cout<<"Ingrese la cantidad del producto: "; cin>>p1[c].cantidad;
            c++;
          }
          else
            cout<<"Se llego al maximo del arreglo!\n";
        }
        else if (opcion==2)
        {
            cout<<"Ingrese el nombre del producto a buscar: "; cin>>nom;
            for (int i=0; i<10; i++)
            {
               if (convetirminusculas(nom)==convetirminusculas(p1[i].nombre))
               {
                cout<<"Se encontro el producto\n";
                break;
               }               
            }
            //cout<<"No se encontro el producto\n";
        }

        else if (opcion==3)
        {
           cout<<"Ingrese el nombre del producto a modificar: "; cin>>nom;
           for (int i=0; i<10; i++)
           {
               if (convetirminusculas(nom)==convetirminusculas(p1[i].nombre))
               {
                   cout<<"Ingrese el nuevo precio: "; cin>>p1[i].precio;
                   cout<<"Ingrese el nuevo stock: "; cin>>p1[i].cantidad;
                   break;
               }
           }
           //cout<<"No se encontro el producto\n";
        }
        else if (opcion==4)
           for (int i=0; i<c; i++)
           {
               cout<<"Producto Nro "<<i+1<<": "<<p1[i].nombre<<" Precio: "<<p1[i].precio<<" Cantidad: "<<p1[i].cantidad<<endl;
           }
           
        else if (opcion==5)
           cout<<"Saliendo...\n";
        else
           cout<<"Ingrese una opcion valida!\n";
     
    } while (opcion!=5);
    
    return 0;
}

string convetirminusculas(string palabra)
{
    for (int i=0; i<palabra.length(); i++)
    {
        palabra[i]=tolower(palabra[i]);
    }
    return palabra;
}
*/


/*6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.*/

/*
#include <iostream>
using namespace std;

int main()
{
    int M[3][3], suma=0, mayor=0;

    for (int i=0; i<3; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<"Ingrese un numero a la matriz ["<<i<<"]"<<"["<<j<<"]: "; cin>>M[i][j];
       }     
    }

    for (int i=0; i<3; i++)
    {
       for (int j=0; j<3; j++)
       {
           cout<<M[i][j]<<" ";
       }
       cout<<endl;     
    }

    for (int i=0; i<3; i++)
    {
       suma=0;
       for (int j=0; j<3; j++)
       {
           suma+=M[i][j];
           if (mayor<suma)
              mayor=suma;
       }     
    }

    cout<<"La suma de la mayor fila es: "<<mayor<<endl;

    return 0;
}
*/

//7. Escribe un programa, que trabajando mediante funciones, presente un menú al
//usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
//arriba o para abajo.


/*
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

*/