#include "Buscar.h"

Buscar::Buscar()
{
}

Buscar::~Buscar()
{
}

std::vector<int> Buscar::operator()(const std::vector<int>& datos, int inicio, int final1, int dato)
{
	if (inicio < 0 || final1 < 0 || inicio >= final1) 
		throw std::out_of_range("Fuera de rango!");
	
	if (datos.empty())
		throw std::length_error("Vector vacio!");

	std::vector<int> posiciones = {};

	for (int i = inicio; i < final1; i++)
	{
		if (datos.at(i) == dato)
			posiciones.push_back(i);
	}
	return posiciones;
}
