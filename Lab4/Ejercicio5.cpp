/*5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo.
b. Buscar un producto por su nombre.
c. Modificar el stock y precio de un producto dado.*/

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
