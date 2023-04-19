#ifndef COLA_H
#define COLA_H
#include "ColaVacia.h"
#include "Nodo.h"


using namespace std;

template <class T>
class Cola
{
public:
         Cola() {
            tamanho=0;
            primero=NULL;
            ultimo =NULL;
        }

        virtual ~Cola(){}

        void insertar(T _dato){
            if(estaVacio()){
                primero=new Nodo<T> (_dato);
                ultimo = primero;
            }else{
                Nodo<T> *aux=new Nodo<T>(_dato);
                ultimo->setSiguiente(aux);
                ultimo = aux;
            }
            tamanho++;
        }

        T eliminar() throw (ColaVacia){
            if(estaVacio()){
                throw ColaVacia();
            }
            T aux=primero->dato;
            Nodo<T> *aux2=primero;///**OPCIONAL
            primero=primero->siguiente;
            tamanho--;
            aux2=NULL;///**OPCIONAL
            delete aux2;///**OPCIONAL
            return aux;
        }

        T ver() throw (ColaVacia){
            if(estaVacio()){
                throw ColaVacia();
            }
            return primero->dato;
        }

         int buscar(T _dato) const {
            Nodo<T> *aux=primero;
            int cont=0;
            while(aux!=NULL){
                if(aux->dato==_dato){
                    return cont;
                }
                cont++;
                aux=aux->siguiente;
            }
            return -1;
        }

        int getTamanho() const {
            return tamanho;
        }

        bool estaVacio() const {
            return tamanho==0;
        }

    private:
        Nodo<T> *primero;
        Nodo<T> *ultimo;
        int tamanho;
};

#endif // COLA_H
