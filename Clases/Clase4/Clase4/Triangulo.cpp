#include "Triangulo.h"

Triangulo::Triangulo():Poligono(){

    forma = "triangulo";

}

Triangulo::Triangulo(string _color, float _base, float _altura):Poligono(_color){

    forma = "triangulo";
    base = _base;
    altura = _altura;

}

float Triangulo::calcularArea(){

    return (base*altura)/2;

}

string Triangulo::toString(){

    ostringstream aux;
    aux<<"****"<<endl
    << Poligono::toString() <<endl
    << "Base: " <<base<<endl
    << "Altura: " <<altura<<endl
    <<"****";;
    return aux.str();

}

Triangulo::~Triangulo()
{
    //dtor
}
