/*2. Utilizando Functores, elabore una clase que simule el proceso de la función
estándar FIND. Se debe trabajar enviando como parámetros el índice de inicio, el
índice final de la búsqueda y el dato a buscar. Retorne todas las ocurrencias
iguales dentro del rango indicado (debe devolver un vector con los índices de
todas las ocurrencias)*/

#include <iostream>
#include "Buscar.h"

using std::cout;
using std::endl;

int main()
{
	std::vector<int> my_vector = {1,5,2,5,9,3,5,5,7};
	std::vector<int> pos = {};
	try
	{
		Buscar b1;
		pos = b1(my_vector, 1, 6, 5);	
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		abort();
	}

	for (const auto& v : my_vector)
		cout << v << " ";

	cout << "\n\nRango de 1 a 6\n\n";

	for (const auto& p : pos)
		cout << "Posicion en donde se encuentra 5: " << p << endl;

	return 0;
}


