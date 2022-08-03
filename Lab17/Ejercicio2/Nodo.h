template<typename U>
class Nodo {
public:
    U dato;
    Nodo<U> *izq;
    Nodo<U> *der;
};