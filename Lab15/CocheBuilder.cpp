#include "CocheBuilder.h"

CocheBuilder::CocheBuilder()
{
	coche = new Coche();
}

CocheBuilder::~CocheBuilder()
{
	delete coche;
}

void CocheBuilder::resultado()
{
	cout << "Coche: " << coche->nombre << endl;
	cout << "Puertas: ";
	if (coche->puertas)
		cout << "Si\n";
	else
		cout << "No\n";
	cout << "Vidrios: ";
	if (coche->vidrios)
		cout << "Si\n";
	else
		cout << "No\n";
	cout << "Espejos: ";
	if (coche->espejos)
		cout << "Si\n";
	else
		cout << "No\n";
	cout << "Material LLanta: "<< coche->material_llanta << endl;
	cout << "Material Timon: "<< coche->material_timon << endl;
	cout << "Modelo Motor: " << coche->modelo_motor << endl;
	cout << "Cantidad de Asientos: " << coche->asientos << endl;
	cout << "Color: " << coche->color << endl;
}

