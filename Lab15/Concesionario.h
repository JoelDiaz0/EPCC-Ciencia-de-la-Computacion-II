#pragma once
#include "CocheBuilder.h"

class Concesionario //Director
{
public:
	Concesionario();
	~Concesionario();

	void setBuilder(CocheBuilder* cochebuilder);
	void construirCoche();
	const void mostrarCoche();

private:
	CocheBuilder* cochebuilder;
};



