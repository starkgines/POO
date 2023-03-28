#include <iostream>
#include "Nodo.h"
#include <exception>
#include <string>
using namespace std;

class ConversionNoValida: public exception{
public:
    const char * what() const throw(){
    return "Error al convertir el dato";
    }
};


class Herramientas{
public:
    static int stringAint(string val) throw(ConversionNoValida){
    for (int i=0;i<val.length();i++){
        int caracter = val[i];
        if(caracter<48 | caracter>57){
            throw ConversionNoValida();
        }
    }
    return stoi(val);
    }
};


int main() {
    Nodo<int>* nodo1 = new Nodo<int>(10);
    Nodo<int>* nodo2 = new Nodo<int>(20);
    nodo1->setSiguiente(nodo2);
    cout << "El valor del primer nodo es: " << nodo1->getValor() << endl;
    cout << "El valor del segundo nodo es: " << nodo2->getValor() << endl;
    cout << "El valor del siguiente nodo al primer nodo es: " << nodo1->getSiguiente()->getValor() << endl;

    string valor1 = "133";
    string valor2 = "3478.";
    try{
        int numero1 = Herramientas::stringAint(valor1);
        cout<<"\nNumero 1: "<<numero1<<endl;
        int numero2 = Herramientas::stringAint(valor2);
        cout<<"\nNumero 2: "<<numero2<<endl;
    }catch(ConversionNoValida& er){
    cerr<<er.what();
    }


    return 0;
}
