#pragma once
#include <vector>
#include <iostream>
class Buscar
{
public:
	Buscar();
	~Buscar();
	std::vector<int> operator()(const std::vector<int>& datos, int inicio, int final1, int dato);
};



