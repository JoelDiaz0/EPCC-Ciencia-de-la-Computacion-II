#include "Buggy.h"

Buggy::Buggy() : CocheBuilder()
{
}

Buggy::~Buggy()
{
}

void Buggy::buildNombre()
{
	coche->setNombre("Buggy");
}

void Buggy::buildPuertas()
{
	coche->setPuerta(false);
}

void Buggy::buildVidrios()
{
	coche->setVidrio(false);
}

void Buggy::buildEspejos()
{
	coche->setEspejo(false);
}

void Buggy::buildLlanta()
{
	coche->setLlanta("Aleacion");
}

void Buggy::buildMotor()
{
	coche->setMotor("Monocilindro");
}

void Buggy::buildTimon()
{
	coche->setTimon("Magnecio");
}

void Buggy::buildAsientos()
{
	coche->setAsiento(2);
}

void Buggy::buildColor()
{
	coche->setColor("blanco");
}
