//LABORATORIO 2 BUCLES

//1.-Sumar todos los enteros pares desde 2 hasta 100.

/*
#include <iostream>
using namespace std;

int main()
{
    int suma=0;

    for (int i=2; i<101; i++)
    {
        if (i%2==0)
          suma+=i;       
    }

    cout<<"La suma total es: "<<suma<<endl;

    return 0;
}
*/


//2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.

/*
#include <iostream>
using namespace std;

bool esprimo(int);

int main()
{
    int c=0, i=1;
    while (c<50)
    {
        if (esprimo(i))
        {
          cout<<i<<"-";
          c++; 
        }
        i++;
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


//3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100.

/*
#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<100; i++)
    {
        if (i%5==0)
           cout<<i<<"-";
    }

    return 0;
}
*/


//4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. 
//Muestre todos los números primos que se encuentren entre el rango de valores, de no encontrarse,
//mostrar el primo más cercano a 𝑥 o 𝑦.

/*
#include <iostream>
using namespace std;

bool esprimo(int);
int cercanoprimo(int);

int main()
{
    int x, y;
    bool com=false;

    do
    {
        cout<<"Ingrese el valor de x: "; cin>>x;
        cout<<"Ingrese el valor de y (debe ser mayor a x): ";cin>>y;
        if (x>y)
          cout<<"'y'debe ser mayor a 'x'";

    } while (x>y);

    for (int i=x+1; i<y; i++)
    {
        if (esprimo(i))
           cout<<i<<"-";
           com=true;
    }

    if (com==false)
    {
        cout<<"El numero primo mas cercano a 'x' es: "<<cercanoprimo(x)<<endl;
        cout<<"El numero primo mas cercano a 'y' es: "<<cercanoprimo(y)<<endl;
    }
    
    return 0;
}

bool esprimo(int n)
{
    int c=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==2)
      return true;
    return false;
}

int cercanoprimo(int n)
{
    int dife=1;
    if (esprimo(n))
      return n;
    else
     while (esprimo(n-dife)==false||esprimo(n+dife)==false)
     {
        dife++;
     } 
    if (esprimo(n-dife))
       return n-dife;
    else 
       return n+dife;
}
*/


//5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la media de los números leídos

/*
#include <iostream>
using namespace std;

int main()
{
    int n, num, menor=999999, mayor=0,suma=0;

    cout<<"Ingrese la cantidad de numeros que desee: "; cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"Ingrese un numero ("<<i+1<<"): "; cin>>num;
        if (menor>num)
          menor=num;
        if (mayor<num)
          mayor=num;
        suma+=num/n;
    }
    cout<<"La media de los numeros es: "<<suma<<endl;
    cout<<"El mayor numero ingresado es: "<<mayor<<endl;
    cout<<"El menor numero ingresado es: "<<menor<<endl;

    return 0;
}
*/


//6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números:
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando los dos anteriores a él.

/*
#include <iostream>
using namespace std;

int main() {
  long int aux = 1, fib = 0, lim, init;

  cout << "Ingrese un numero para la sucesion de fibonacci: "; cin >> lim;

  if(lim > 0) 
  {
    for(init = 1; init <= lim; init++) 
    {
      cout << "[" << fib << "] ";
      aux += fib; 
      fib = aux - fib;
    }
  } 

  else 
  {
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";
  return 0;
}

*/


//7. Calcula el promedio de 3 notas para n estudiantes.
/*
#include <iostream>
using namespace std;

int main()
{
    float notas[3], suma=0;

    for (int i=0; i<3; i++)
    {
        cout<<"Ingrese la nota del estudiante Nro"<<i+1<<": "; cin>>notas[i];
        suma+=notas[i]/3;
    }
    cout<<"El promedio de los 3 estudiantes es: "<<suma<<endl;

    return 0;
}
*/


//8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado.
/*
#include <iostream>
using namespace std;

int main()
{
    int num, n;
    cout<<"Ingrese el numero del que quiere generar su tabla de multiplicar: "; cin>>num;
    cout<<"Hasta que numero quiere multiplicarlo?: "; cin>>n;

    cout<<"***TABLA DE MULTIPLICAR DEL NUMERO "<<num<<"***"<<endl;
    for (int i=1; i<n+1; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    
    return 0;
}

*/


//9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo 
//rectángulo como el de más abajo, de altura el número introducido.

/*
#include <iostream>
using namespace std;

int main()
{
    int altura;

    cout<<"Ingrese la altura del triangulo: "; cin>>altura; 

    for (int i = 0; i < altura; i++) 
    { 
       for (int j = 0; j < altura; j++)  
       {
           if(i>=j)                   
           {
            cout<<"*";
           }
       }
       cout<<endl; 
    }
    cout<<endl;
    return 0;
}
*/


//10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla 
//una a una las letras de la palabra introducida empezando por la última.


/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string palabra;
    int tiempo=0;
    cout<<"Ingrese una palabra cualquiera: "; cin>>palabra;

    for (int i=palabra.length()-1; i>-1; i--)
    {
        cout<<palabra[i];
    }
    
    return 0;
}
*/