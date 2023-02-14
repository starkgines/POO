#include "Automovil.h"

Automovil::Automovil()
{
        marca= "";
        modelo= "";
        tipoCombustible="";
        kilometraje= 0;
        tanque= 0;
        capacidad= 45;
}

Automovil::Automovil(string _marca, string _modelo, float _tanque)
{
        marca= _marca;
        modelo= _modelo;
        tipoCombustible= "";
        kilometraje= 0;
        tanque= _tanque;
        capacidad= 45;
}

Automovil::~Automovil()
{
    //dtor
}

string Automovil::getMarca()
{
    return marca;

}
string Automovil::getModelo()
{
    return modelo;
}
float Automovil::getKilometraje()
{
    return kilometraje;
}


void Automovil::setMarca(string new_marca)
{
    marca = new_marca;
}
void Automovil::setModelo(string new_modelo)
{
    modelo = new_modelo;
}

string Automovil::toString()
{
    ostringstream aux;
    aux<<"Marca: "<<marca<<"\nModelo: "<<modelo<<"\nTipo Combustible: "<<tipoCombustible;
    return aux.str();
}







