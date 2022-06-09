/*7. Desarrolle un algoritmo de ordenamiento que permita ordenar los elementos de forma
ascendente de acuerdo a la elección del usuario. Se debe poder simular
el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor tiempo
posible ( < 2 seg).*/

//mainEjercicio7.cpp

#include <iostream>
#include "Lista.h"
#include <random>
#include <chrono>

//Uso de la libreria random para generar numeros aleatorios entre 0 a 999
//Uso de la libreria chrono para calcular el tiempo de ejecucion en el proceso 
//de generacion de numeros aleatorias y la ordenacion ASCENDENTE

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<>rand_digits(0, 999);

int main()
{
	try
	{
		Lista* mylist = new Lista();

		auto star = std::chrono::steady_clock::now();

		for (int i = 1; i <= 10000; i++)
			mylist->insertar_elem_final(rand_digits(gen));
		
		mylist->ordenar_ascendente();

		auto end = std::chrono::steady_clock::now();
		auto time_final = std::chrono::duration_cast<std::chrono::milliseconds>(end - star);

		mylist->mostrar();
		std::cout << "La generacion de numeros aleatorios y ordenacion tardo: " << time_final.count() << " milisegundos\n";

		delete mylist;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}


