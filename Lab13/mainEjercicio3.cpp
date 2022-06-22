/*3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.*/

#include <iostream>
#include <random>
using std::cout;
using std::endl;
using std::cin;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<>rand_altura(1.60, 1.90);
std::uniform_int_distribution<>rand_edad(10, 30);

struct jugador
{
	std::string nombre{};
	int edad{};
	double talla{};
};

int main()
{
	const int tam = 10;
	jugador* juga = new jugador[tam];

	juga[0].nombre = "John";
	juga[1].nombre = "Andre";
	juga[2].nombre = "Mike";
	juga[3].nombre = "Juan";
	juga[4].nombre = "Arturo";
	juga[5].nombre = "Joel";
	juga[6].nombre = "Gabriel";
	juga[7].nombre = "Cesar";
	juga[8].nombre = "Diego";
	juga[9].nombre = "Jorge";

	for (int i = 0; i < tam; i++)
	{
		juga[i].edad = rand_edad(gen);
		juga[i].talla = rand_altura(gen);
	}

	cout << "Son mayores a 1.70 metros y menores de 20 anios: " << endl;
	bool nin = false;

	for (int i = 0; i < tam; i++)
	{
		if (juga[i].talla > 1.70 && juga[i].edad < 20)
		{
			cout << juga[i].nombre << " " << juga[i].talla << " " << juga[i].edad << endl;
			nin = true;
		}
	}

	if (nin == false)
		cout << "Ninguno" << endl;

	delete[] juga;
}

