#include "Materia.h"

Materia::Materia() {
nombre = "";
nota = 0;
}

Materia::~Materia() {}

Materia::Materia(string _nombre) {
nombre = _nombre;
nota = 0;
}

string Materia::getNombre() {
return nombre;
}

void Materia::setNombre(string _nombre) {
nombre = _nombre;
}

int Materia::getNota() {
return nota;
}

void Materia::setNota(int _nota) {
nota = _nota;
}

string Materia::toString() {
ostringstream ss;
ss << "Nombre de la materia: " << nombre << ", Nota: " << nota;
return ss.str();
}
