/*Implemente un programa utilizando puntero a punteros que gestione los datos de
stock de una tienda de ropa, la información a recoger será: código, nombre y
precio del producto, asimismo la cantidad en stock. La tienda dispone de 10
productos distintos. El programa debe ser capaz de:
1. Dar de alta un producto nuevo.
2. Dar de baja a un producto. (No hay stock).
3. Buscar un producto por su nombre o código.
4. Modificar el nombre, precio o cantidad de un producto dado.*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

struct Stock
{
	friend void suspender_elemento(Stock**&, int, int, string);
	friend void ingresar_elemento(Stock**&, int, int);
	friend void mostrar(Stock**& matriz, int, int);
	friend void modificar_stock(Stock**&, int, int, const string&);
	string codigo{};
	string nombre{};
	int precio{};
	int cantidad{};
private:
	string estado = "Desactivo";
};

void ingresar_elemento(Stock**&, int, int);
void suspender_elemento(Stock**&, int, int, string);
bool buscar_elemento_codigo(Stock**&, int, int, const string&);
bool buscar_elemento_nombre(Stock**&, int, int, const string&);
void modificar_stock(Stock**&, int, int , const string&);
void mostrar(Stock**& matriz, int f, int c);

int main()
{
	int fila{}, columna{};
	int opcion{};
	string aux{}, aux2{};

	cout << "Ingrese el numero de filas a crear: "; cin >> fila;
	cout << "Ingrese el numero de columnas a crear: "; cin >> columna;

	Stock** M = new Stock * [fila];
	for (int i = 0; i < fila; i++)
		M[i] = new Stock[columna];

	cout << "****MENU****\n1. Ingresar productos\n2. Dar de baja un producto\n"
		<< "3. Buscar por nombre\n4. Modificar Stock\n" <<"5. Mostrar\n" << "6. Salir\n";
	do
	{
		cout << "Ingrese una opcion: "; cin >> opcion;
	
		switch (opcion)
		{
		case 1:
		{
			ingresar_elemento(M,fila,columna);
			break;
		}
		case 2:
		{
			cout << "Ingrese el nombre del Stock que quiera suspender: "; cin >> aux;

			if (!buscar_elemento_nombre(M, fila, columna, aux))
				cout << "No se encontro un Stock con el nombre ingresado\n";
			else
				suspender_elemento(M, fila, columna, aux);
			break;
		}
		case 3:
		{
			cout << "Ingrese el nombre del Stock que quiera buscar: "; cin >> aux;
			if (buscar_elemento_nombre(M, fila, columna, aux))
				cout << "Se encontro el elemento\n";
			else
				cout << "No se encontro el elemento\n";
			break;
		}
		case 4:
		{
			cout << "Ingrese el codigo del Stock que quiera modificar: "; cin >> aux;
			if (!buscar_elemento_codigo(M, fila, columna, aux))
				cout << "Codigo invalido!\n";
			else
				modificar_stock(M, fila, columna, aux);	
			break;
		}
		case 5:
		{
			mostrar(M, fila, columna);
			break;
		}

		case 6:
		{
			break;
		}

		default:
			cout << "Opcion Invalida, Ingrese una opcion valida: "; cin >> opcion;
			  break;
		}
	} while (opcion != 6);


	for (int i = 0; i < fila; i++)
		delete[] M[i];
	delete[] M;

	return 0;
}

void ingresar_elemento(Stock**& matriz, int f, int c)
{
	string aux{};
	int aux_num{}, num{0};
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++, num++)
		{
			cout << "Ingrese el nombre del Stock "<< num << ": "; cin >> aux;
			matriz[i][j].nombre = aux;
			cout << "Ingrese el precio del Stock: " << num << ": ";cin >> aux_num;
			matriz[i][j].precio = aux_num;		
			cout << "Ingrese la cantidad del Stock: " << num << ": ";cin >> aux_num;
			matriz[i][j].cantidad = aux_num;
			aux = "00" + std::to_string(num);
			cout << "El codigo del Stock " << num << " es: " << aux << endl << endl;
			matriz[i][j].codigo = aux;
			if (matriz[i][j].cantidad > 0)
				matriz[i][j].estado = "Activado";
			else
				matriz[i][j].estado = "Desactivado";
		}
	}
}

bool buscar_elemento_codigo(Stock**& matriz, int f, int c, const string& codigo)
{
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matriz[i][j].codigo == codigo)
				return true;
		}
	}
	return false;
}

bool buscar_elemento_nombre(Stock**& matriz, int f, int c, const string& nombre)
{
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matriz[i][j].nombre == nombre)
				return true;
		}
	}
	return false;
}


void suspender_elemento(Stock**& matriz, int f, int c, string nombre)
{
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matriz[i][j].nombre == nombre)
			{
				matriz[i][j].cantidad = 0;
				matriz[i][j].estado = "Desactivado";
			}
		}
	}
}

void modificar_stock(Stock**& matriz, int f, int c, const string& codigo)
{
	string aux{};
	int aux_num{};
	char opc{};
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matriz[i][j].codigo == codigo)
			{
				do
				{
					cout << "Modificar nombre? (Y/N): "; cin >> opc;
					if (opc == 'Y')
					{
						cout << "Ingrese un nuevo nombre: "; cin >> aux;
						matriz[i][j].nombre = aux;
						break;
					}					
				} while (opc != 'N');
				do
				{
					cout << "Modificar precio? (Y/N): "; cin >> opc;
					if (opc == 'Y')
					{
						cout << "Ingrese un nuevo precio: "; cin >> aux_num;
						matriz[i][j].precio = aux_num;
						break;
					}

				} while (opc != 'N');
				do
				{
					cout << "Modificar cantidad? (Y/N): "; cin >> opc;
					if (opc == 'Y')
					{
						cout << "Ingrese una nueva cantidad: "; cin >> aux_num;
						matriz[i][j].cantidad = aux_num;
						if (matriz[i][j].cantidad > 0)
							matriz[i][j].estado = "Activado";
						else
							matriz[i][j].estado = "Descativado";
						break;
					}
				} while (opc != 'N');
				break;
			}
		}
	}
}

void mostrar(Stock**& matriz, int f, int c)
{
	int num{ 0 };
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++, num++)
		{
			cout << "STOCK " << num << ": \n"
				<< "Nombre: " << matriz[i][j].nombre << endl
				<< "Precio: " << matriz[i][j].precio << endl
				<< "Cantidad: " << matriz[i][j].cantidad << endl
				<< "Codigo: " << matriz[i][j].codigo << endl
				<< "Estado: " << matriz[i][j].estado << endl << endl;
		}
	}
}

