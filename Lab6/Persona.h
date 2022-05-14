#include <iostream>
using namespace std;

class Persona
{
private:
   string nombre;
   int n_dia;
   int n_mes;
   int n_year;
   int f_dia;
   int f_mes;
   int f_year;

public:
    Persona();
    Persona(string,int,int,int,int,int,int);
    ~Persona();
    void mostrar();
};


Persona::Persona()
{
    nombre = "Vacio";
    n_year=0;
    n_mes=0;
    n_dia=0;
    f_year=0;
    f_mes=0;
    f_dia=0;
}

Persona::Persona(string nombre, int n_dia, int n_mes, int n_year, int f_dia, int f_mes, int f_year)
{
    if (n_year < 1900 || f_year < 1900)
      throw logic_error("El año no debe ser menor a 1900");
    else
    {
        this->n_year = n_year;
        this->f_year = f_year;
    }
    if (n_mes < 0 || n_mes >12 || f_mes < 0 || f_mes >12)
       throw logic_error("Los meses solo pueden estar entre 1 y 12");
    else
    {
        this->n_mes = n_mes;
        this->f_mes = f_mes;
    }   
    if (n_dia > 31 || n_dia < 0 || f_dia > 31 || f_dia < 0)
       throw logic_error("Los dias solo pueden estar entre 1 y 31");
    else
    {
        this->n_dia = n_dia;
        this->f_dia = f_dia;
    }

    this->nombre = nombre;
}

Persona::~Persona(){}

void Persona::mostrar()
{
    cout<<"NOMBRE: "<<nombre<<" EDAD: ";

    if (f_mes > n_mes)
      cout<<f_year-n_year<<endl;
    else if (f_mes < n_mes)
      cout<<(f_year-n_year)-1<<endl;
    else
    {
        if (f_dia >= n_dia)
           cout<<(f_year-n_year)<<endl;
        else 
           cout<<(f_year-n_year)-1<<endl;
    }
}
