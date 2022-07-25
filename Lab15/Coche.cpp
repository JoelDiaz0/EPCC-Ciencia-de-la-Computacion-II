#include "Coche.h"

Coche::Coche()
{
	nombre = "";
	puertas = false;
	vidrios = false;
	espejos = false;
	material_llanta = "";
	material_timon = "";
	modelo_motor = "";
	asientos = 0;
	color = "";
}

Coche::~Coche()
{
}

const std::vector<std::string> Coche::colores = { "rojo", "blanco", "verde", "amarillo", "negro" };

void Coche::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void Coche::setPuerta(bool puertas)
{
	this->puertas = puertas;
}

void Coche::setLlanta(std::string material_llanta)
{
	this->material_llanta = material_llanta;
}

void Coche::setTimon(std::string material_timon)
{
	this->material_timon = material_timon;
}

void Coche::setAsiento(int asientos)
{
	this->asientos = asientos;
}

void Coche::setMotor(std::string modelo_motor)
{
	this->modelo_motor = modelo_motor;
}

void Coche::setEspejo(bool espejos)
{
	this->espejos = espejos;
}

void Coche::setVidrio(bool vidrios)
{
	this->vidrios = vidrios;
}

void Coche::setColor(std::string color)
{
	if (validarColor(color))
		this->color = color;
	else
		throw std::logic_error("Color no valido");
}

bool Coche::validarColor(std::string color)
{
	for (auto& c : colores)
	{
		if (color == c)
			return true;
	}
	return false;
}
