/*4. Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.*/

#include <iostream>
using std::cout;
using std::endl;

struct empleado
{
	std::string nombre{};
	char sexo{};
	int sueldo{};
};

int menor_sueldo(empleado*&, int tam);
int mayor_sueldo(empleado*&, int tam);

int main()
{
	const int tam = 5;
	empleado* emple = new empleado[tam];

	emple[0] = { "Andre",'M',2000 };
	emple[1] = { "Juan",'M',2600 };
	emple[2] = { "Veronica",'F',2000 };
	emple[3] = { "Maria",'F',3000 };
	emple[4] = { "Josue",'M',3200 };

	cout << "El menor sueldo es de: " << menor_sueldo(emple, tam) << endl;
	cout << "El mayor sueldo es de: " << mayor_sueldo(emple, tam) << endl;

	delete[] emple;
}

int mayor_sueldo(empleado*& e1, int tam)
{
	int mayor = e1[0].sueldo;

	for (int i = 1; i < tam; i++)
	{
		if (mayor < e1[i].sueldo)
			mayor = e1[i].sueldo;
	}
	return mayor;
}

int menor_sueldo(empleado*& e1, int tam)
{
	int menor = e1[0].sueldo;

	for (int i = 1; i < tam; i++)
	{
		if (menor > e1[i].sueldo)
			menor = e1[i].sueldo;
	}
	return menor;
}