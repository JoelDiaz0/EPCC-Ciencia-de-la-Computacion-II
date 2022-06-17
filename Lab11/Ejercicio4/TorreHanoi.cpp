//TorreHanoi.cpp

#include "TorreHanoi.h"

TorreHanoi::TorreHanoi()
{
    discos = 3;
    movimientos = 0;
}

TorreHanoi::~TorreHanoi()
{

}

void TorreHanoi::numero_de_discos(int discos)
{
    if (discos < 3)
    {
        std::cerr << "Debe ingresar mas de 3 discos" << endl;
        exit(1);
    }
    this->discos = discos;
}

void TorreHanoi::iniciar()
{

    int aux_disco = discos;
    for (int i = discos; i > 0; i--)
        A.insertar_elem(i);
    A.setNombre("A");
    B.setNombre("B");
    C.setNombre("C");

    cout << "INICIO\n";
    mostrar();
    mover(aux_disco, A, C, B);
}

void TorreHanoi::mover(int auxdiscos, Pila& a, Pila& c, Pila& b)
{
    int aux{};

    if (auxdiscos == 1)
    {
        cout << "Disco " << auxdiscos << " del poste " << a.nombre << " al poste " << c.nombre << endl;

        aux = a.retornarPrimerValor();
        a.eliminar_elem();
        c.insertar_elem(aux);
        movimientos++;
        mostrar();
    }

    else
    {
        mover(auxdiscos - 1, a, b, c);
        cout << "Disco " << auxdiscos << " del poste " << a.nombre << " al poste " << c.nombre << endl;

        aux = a.retornarPrimerValor();
        a.eliminar_elem();
        c.insertar_elem(aux);
        movimientos++;
        mostrar();

        mover(auxdiscos - 1, b, c, a);
    }
}

const void TorreHanoi::mostrar()
{
    cout << A.nombre << ": ";
    A.mostrar();
    cout << endl;
    cout << B.nombre << ": ";
    B.mostrar();
    cout << endl;
    cout << C.nombre << ": ";
    C.mostrar();
    cout << endl;
}

int TorreHanoi::retornarMovimientos()
{
    return movimientos;
}

