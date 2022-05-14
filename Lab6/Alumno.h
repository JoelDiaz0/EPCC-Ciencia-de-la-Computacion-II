#include <iostream>
using namespace std;

class Alumno
{
private:
    string CUI;
    string nombre;
    float nota1, nota2, nota3;
public:
    Alumno();
    Alumno(string,string,float,float,float);
    ~Alumno();
    void mostrar();
    double promedio();
    bool aprovar();
};

Alumno::Alumno()
{
    nombre = "Vacio";
    CUI="00000000";
    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
}

Alumno::Alumno(string CUI, string nombre, float nota1, float nota2, float nota3)
{

    if (CUI.length() < 8 || CUI.length() > 8)
       throw logic_error("EL CUI DEBE TENER 8 CARACTERES!");
    else
       this->CUI = CUI;
    if (nota1 > 20 || nota1 < 0)
       throw logic_error("LA NOTA DEBE SER DE 0 A 20!");
    else
        this->nota1 = nota1;
    if (nota2 > 20 || nota2 < 0)
       throw logic_error("LA NOTA DEBE SER DE 0 A 20!");
    else
        this->nota2 = nota2;
    if (nota3 > 20 || nota3 < 0)
       throw logic_error("LA NOTA DEBE SER DE 0 A 20!");
    else
        this->nota3 = nota3;      
    
    int c = 0; 

    for (int i = 0; i < nombre.length(); i++)
    {
        if (' '== nombre[i])
          c++;
    }
    if (c > 6 || c < 2)
       throw logic_error("DEBE INGRESAR SUS 2 APELLIDOS Y MINIMO UN NOMBRE!");
    else
       this->nombre = nombre;
}

Alumno::~Alumno(){};


bool Alumno::aprovar()
{
    if ((nota1+nota2+nota3)/3 >= 10.5)
       return true;
    return false; 
}

double Alumno::promedio()
{
    return ((nota1+nota2+nota3)/3);
}

void Alumno::mostrar()
{
    cout<<"ALUMNO: "<<nombre<<endl<<"CUI: "<<CUI<<endl<<"NOTA1: "<<nota1<<endl<<"NOTA2: "<<nota2<<endl<<"NOTA3: "<<nota3;

    cout<<endl<<"PROMEDIO: "<<promedio();

    if (aprovar())
      cout<<endl<<"APROVO CIENCIA DE LA COMPUTACION II"<<endl;
    else
      cout<<endl<<"NO APROVO"<<endl;
}

