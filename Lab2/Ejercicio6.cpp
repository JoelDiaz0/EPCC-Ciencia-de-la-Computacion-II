//6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números:
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando los dos anteriores a él.

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

