#include "Persona.h"

Persona::Persona() {
cedula = 0;
nombre = "";
apellido = "";
}

Persona::~Persona() {}

Persona::Persona(int _cedula, string _nombre, string _apellido) {
cedula = _cedula;
nombre = _nombre;
apellido = _apellido;
}

int Persona::getCedula() {
return cedula;
}

string Persona::getNombre() {
return nombre;
}

string Persona::getApellido() {
return apellido;
}

void Persona::setCedula(int _cedula) {
cedula = _cedula;
}

void Persona::setNombre(string _nombre) {
nombre = _nombre;
}

void Persona::setApellido(string _apellido) {
apellido = _apellido;
}

string Persona::toString(){
    ostringstream aux;
    aux<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nCedula: "<<cedula;
    return aux.str();

}
