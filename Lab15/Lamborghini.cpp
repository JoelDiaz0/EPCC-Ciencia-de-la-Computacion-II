#include "Lamborghini.h"

Lamborghini::Lamborghini() : CocheBuilder()
{
}

Lamborghini::~Lamborghini()
{
}

void Lamborghini::buildNombre()
{
	coche->setNombre("Lamborghini");
}

void Lamborghini::buildPuertas()
{
	coche->setPuerta(true);
}

void Lamborghini::buildVidrios()
{
	coche->setVidrio(true);
}

void Lamborghini::buildEspejos()
{
	coche->setEspejo(true);
}

void Lamborghini::buildLlanta()
{
	coche->setLlanta("Aleacion de Aluminio");
}

void Lamborghini::buildMotor()
{
	coche->setMotor("Cilindros Multiples");
}

void Lamborghini::buildTimon()
{
	coche->setTimon("Acero");
}

void Lamborghini::buildAsientos()
{
	coche->setAsiento(5);
}

void Lamborghini::buildColor()
{
	coche->setColor("negro");
}
