/*2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct alumno
{
	std::string nombre{};
	char grupo{};
	double nota1{};
	double nota2{};
	double nota3{};
	double nota_proyecto{};
};

bool aprovo(const alumno&);
void mostrar_alumno(const alumno&);
double nota(const alumno&);

int main()
{
	int tam{}, auxn{};
	double auxd{};
	std::string aux;
	char auxc{};
	cout << "Ingrese el numero de companieros a generar: "; cin >> tam;
	alumno* alum = new alumno[tam];

	for (int i = 0; i < tam; i++)
	{
		cout << "Ingrese el nombre del alumno " << i + 1 << ": "; cin >> aux;
		alum[i].nombre = aux;
		cout << "Ingrese el grupo del alumno " << i + 1 << ": "; cin >> auxc;
		alum[i].grupo = auxc;
		cout << "Ingrese la nota 1 " << "del alumno " << i + 1 << ": "; cin >> auxd;
		alum[i].nota1 = auxd;
		cout << "Ingrese la nota 2 " << "del alumno " << i + 1 << ": "; cin >> auxd;
		alum[i].nota2 = auxd;
		cout << "Ingrese la nota 3 " << "del alumno " << i + 1 << ": "; cin >> auxd;
		alum[i].nota3 = auxd;
		cout << "Ingrese la nota del proyecto final " << "del alumno " << i + 1 << ": "; cin >> auxd;
		alum[i].nota_proyecto = auxd;
	}

	bool apro = false;

	cout << "Aprovados: " << endl;
	for (int i = 0; i < tam; i++)
	{
		if (aprovo(alum[i]))
		{
			mostrar_alumno(alum[i]);
			apro = true;
		}

	}

	if (apro == false)
		cout << "Ninguno" << endl;

	delete[] alum;
}


bool aprovo(const alumno& a1)
{
	if ((a1.nota1 * 0.15) + (a1.nota2 * 0.20) + (a1.nota3 * 0.25) + (a1.nota_proyecto * 0.40) < 10.5)
		return false;
	return true;
}

void mostrar_alumno(const alumno& a1)
{
	cout << "Nombre: " << a1.nombre << "Nota 1: " << a1.nota1 << " Nota 2: " << a1.nota2 << " Nota 3: " << a1.nota3 << " Nota Proyecto: " << a1.nota_proyecto << endl;
	cout << "Promedio: " << nota(a1) << endl;
}

double nota(const alumno& a1)
{
	return (a1.nota1 * 0.15) + (a1.nota2 * 0.20) + (a1.nota3 * 0.25) + (a1.nota_proyecto * 0.40);
}




