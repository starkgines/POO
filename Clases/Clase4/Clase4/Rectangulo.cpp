#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
    forma = "rectangulo";
    largo = 0;
    ancho = 0;
}

Rectangulo::Rectangulo(string _color, float _largo, float _ancho):Poligono(_color)
{
    forma = "rectangulo";
    largo = _largo;
    ancho = _ancho;
}

float Rectangulo::calcularArea(){

    return largo*ancho;

}

float Rectangulo::calcularPerimetro(){

    return 2*(largo + ancho);

}

string Rectangulo::toString(){

    ostringstream aux;
    aux<<"****"<<endl
    <<Poligono::toString()<<endl
    <<"Largo: "<<largo<<endl
    <<"Ancho: "<<ancho<<endl
    <<"****";
    return aux.str();


}


Rectangulo::~Rectangulo()
{
    //dtor
}
