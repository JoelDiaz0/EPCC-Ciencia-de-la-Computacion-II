#include <iostream>
#include <vector>
using namespace std;

class Ejem
{
private:
    vector <int> vec;
public:
    Ejem();
    ~Ejem();
    bool espacio();
    void ingresar(int);
    void eliminar(int);
    void mostrar();
};

Ejem::Ejem(){}

Ejem::~Ejem(){}


bool Ejem::espacio()
{
    if (vec.size() < 5)
        return true;
    return false;
}

void Ejem::ingresar(int num)
{
    if (espacio())
        vec.push_back(num);
    else
       cout<<"Sin espacio\n";
}

void Ejem::mostrar()
{
    for (auto i = vec.begin(); i != vec.end(); i++)
        cout<<*i<<" ";
    cout<<endl;
}

void Ejem::eliminar(int num)
{
    bool m = false;
    if (vec.size() == 0)
       cout<<"Sin Elementos\n";
    else
    {
        for (auto i = vec.begin(); i != vec.end(); i++)
        {
            if (*i == num)
            {
                vec.erase(i);
                m = true;
            }                             
        }
        if (m == false)
           cout<<"Elemento no encontrado\n";   
    }
}








