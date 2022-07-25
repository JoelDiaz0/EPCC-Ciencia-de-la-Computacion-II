#pragma once
#include "CocheBuilder.h"

class Camion : public CocheBuilder //Builder Especifico
{
public:
	Camion();
	~Camion();

	void buildNombre() override;
	void buildPuertas() override;
	void buildVidrios() override;
	void buildEspejos() override;
	void buildLlanta() override;
	void buildMotor() override;
	void buildTimon() override;
	void buildAsientos() override;
	void buildColor() override;

private:
};



