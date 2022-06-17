/*4. Escribir un programa que permita comparar las edades de diferentes elementos.
Debe utilizar el formato de colas en clases. Se debe definir· inicialmente el
número de elementos y valores de cada cola (pudiendo ser de diferentes tamaños
ej. 2-3). Se evaluará el resultado de la comparación de los primeros elementos de
las colas, realizada en un número de iteraciones 'n', en cada iteración se debe
realizar el procedimiento de inserción y eliminación de elementos (rotando los
elementos definidos inicialmente)*/

//mainEjercicio4.cpp

#include <iostream>
#include "Cola.h"

bool comparar(Cola*&, Cola*&);

int main()
{
	Cola* hombres = new Cola();
	Cola* mujeres = new Cola();
	int n{};
	char m{};

	hombres->insertar_elemento(20);
	hombres->insertar_elemento(15);

	mujeres->insertar_elemento(13);
	mujeres->insertar_elemento(18);
	mujeres->insertar_elemento(23);

	std::cout << "Ingrese la cantidad de iteracion que se va a realizar: "; std::cin >> n;
	std::cout << "Edades Hombres: ";
	hombres->mostrar();
	std::cout << "Edades Mujeres: ";
	mujeres->mostrar();

	std::cout << "\n";

	for (int i = 0; i < n; i++)
	{
		if (comparar(hombres, mujeres))
			m = 'H';
		else
			m = 'M';
	}

	if (m == 'H')
		std::cout << "Los hombres son mayores despues de " << n << " iteraciones\n\n";
	else
		std::cout << "Las mujeres son mayores despues de " << n << " iteraciones\n\n";

	hombres->mostrar();
	mujeres->mostrar();

	delete hombres, mujeres;
	return 0;
}

bool comparar(Cola*& c1, Cola*& c2)
{
	int aux1{}, aux2{};

	aux1 = c1->get_primer_elemento();
	c1->eliminar_elemento();
	c1->insertar_elemento(aux1);

	aux2 = c2->get_primer_elemento();
	c2->eliminar_elemento();
	c2->insertar_elemento(aux2);

	if (aux1 > aux2)
		return true;
	return false;
}
