#ifndef NODO_H
#define NODO_H
#include <cstdlib>

template<typename T>
class Nodo {
public:
    Nodo(){siguiente=NULL;}
    Nodo(T valor_input){ valor = valor_input; siguiente = nullptr; }
    T getValor(){ return valor; }
    Nodo<T>* getSiguiente(){ return siguiente; }
    void setValor(T new_valor) { valor = new_valor; }
    void setSiguiente(Nodo<T>* new_siguiente) { siguiente = new_siguiente; }
private:
    T valor;
    Nodo<T>* siguiente;
};

#endif // NODO_H
