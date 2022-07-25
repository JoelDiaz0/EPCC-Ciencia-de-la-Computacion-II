#include "Camion.h"

Camion::Camion() : CocheBuilder()
{
}

Camion::~Camion()
{
}

void Camion::buildNombre()
{
	coche->setNombre("Camion");
}

void Camion::buildPuertas()
{
	coche->setPuerta(true);
}


void Camion::buildVidrios()
{
	coche->setVidrio(true);
}

void Camion::buildEspejos()
{
	coche->setEspejo(true);
}

void Camion::buildLlanta()
{
	coche->setLlanta("Fibra de Carbono");
}

void Camion::buildMotor()
{
	coche->setMotor("Combustion Interna");
}

void Camion::buildTimon()
{
	coche->setTimon("Magnecio");
}

void Camion::buildAsientos()
{
	coche->setAsiento(2);
}

void Camion::buildColor()
{
	coche->setColor("rojo");
}
