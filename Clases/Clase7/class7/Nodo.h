#ifndef NODO_H
#define NODO_H


template<typename T>
class Nodo {
public:
    Nodo(){siguiente=nullptr;}
    Nodo(T valor_input){ dato = valor_input; siguiente = nullptr; }
    T getValor(){ return dato; }
    Nodo<T>* getSiguiente(){ return siguiente; }
    void setValor(T new_valor) { dato = new_valor; }
    void setSiguiente(Nodo<T>* new_siguiente) { siguiente = new_siguiente; }

private:
    T dato;
    Nodo<T>* siguiente;

template <class T2> friend class Cola;
};

#endif // NODO_H
