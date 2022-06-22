/*1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct fecha
{
	int dia{};
	int mes{};
	int anio{};
};

struct persona
{
	std::string nombre{};
	std::string apellido{};
	fecha nacimiento{};
};

void mostrar_persona(const persona&);
void mostrar_fecha(const fecha&);
bool cumple_anio_mes(const fecha&, const fecha&);

int main()
{
	int tam{}, auxn{};
	std::string aux{};
	cout << "Ingrese el numero de companieros a generar: "; cin >> tam;
	persona* companieros = new persona[tam];

	for (int i = 0; i < tam; i++)
	{
		cout << "Ingrese el nombre de la persona " << i + 1 << ": "; cin >> aux;
		companieros[i].nombre = aux;
		cout << "Ingrese el apellido de la persona " << i + 1 << ": "; cin >> aux;
		companieros[i].apellido = aux;
		cout << "Ingrese el dia de nacimiento de la persona " << i + 1 << ": "; cin >> auxn;
		companieros[i].nacimiento.dia = auxn;
		cout << "Ingrese el mes de nacimiento de la persona " << i + 1 << ": "; cin >> auxn;
		companieros[i].nacimiento.mes = auxn;
		cout << "Ingrese el anio de nacimiento de la persona " << i + 1 << ": "; cin >> auxn;
		companieros[i].nacimiento.anio = auxn;
	}

	const fecha hoy = { 21,06,2022 };
	bool cumple = false;

	cout << "Cumplen anios: " << endl;
	for (int i = 0; i < tam; i++)
	{
		if (cumple_anio_mes(companieros[i].nacimiento, hoy))
		{
			mostrar_persona(companieros[i]);
			cumple = true;
		}		
	}
	if (!cumple)
		cout << "Nadie" << endl;

	delete[] companieros;
}

bool cumple_anio_mes(const fecha& f1, const fecha& f2) 
{
	if (f1.mes == f2.mes)
		return true;
	return false;
}

void mostrar_persona(const persona& p1)
{
	cout << "Nombre: " << p1.nombre << " " << p1.apellido << " " << "Nacimiento: "; mostrar_fecha(p1.nacimiento);
}

void mostrar_fecha(const fecha& f1)
{
	cout << f1.dia << "/" << f1.mes << "/" << f1.anio << endl;
}