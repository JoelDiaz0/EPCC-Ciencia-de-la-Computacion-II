#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::endl;


class Coche //Producto
{
public:
	Coche();
	~Coche();

	friend class CocheBuilder;

	void setNombre(std::string nombre);
	void setPuerta(bool puertas);
	void setLlanta(std::string material_llanta);
	void setTimon(std::string material_timon);
	void setAsiento(int asientos);
	void setMotor(std::string modelo_motor);
	void setEspejo(bool espejos);
	void setVidrio(bool vidrios);
	void setColor(std::string color);

private:
	bool validarColor(std::string color);
private:
	bool puertas, espejos, vidrios;
	std::string material_llanta, material_timon, modelo_motor, color, nombre;
	unsigned int asientos;
	static const std::vector<std::string> colores;
};



