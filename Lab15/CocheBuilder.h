#pragma once
#include "Coche.h"

class CocheBuilder //IBuilder
{
public:
	CocheBuilder();
	~CocheBuilder();

	virtual void buildNombre() = 0;
	virtual void buildPuertas() = 0;
	virtual void buildVidrios() = 0;
	virtual void buildEspejos() = 0;
	virtual void buildLlanta() = 0;
	virtual void buildMotor() = 0;
	virtual void buildTimon() = 0;
	virtual void buildAsientos() = 0;
	virtual void buildColor() = 0;	

	void resultado();
protected:
	Coche* coche;
};


