#include "Concesionario.h"

Concesionario::Concesionario()
{
}

Concesionario::~Concesionario()
{
}

void Concesionario::setBuilder(CocheBuilder* cochebuilder)
{
	this->cochebuilder = cochebuilder;
}

void Concesionario::construirCoche()
{
	this->cochebuilder->buildNombre();
	this->cochebuilder->buildAsientos();
	this->cochebuilder->buildVidrios();
	this->cochebuilder->buildColor();
	this->cochebuilder->buildEspejos();
	this->cochebuilder->buildLlanta();
	this->cochebuilder->buildMotor();
	this->cochebuilder->buildPuertas();
	this->cochebuilder->buildTimon();
}

const void Concesionario::mostrarCoche()
{
	cochebuilder->resultado();
}


