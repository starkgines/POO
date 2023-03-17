#include "Alumno.h"

Alumno::Alumno() : Persona() {
carrera = "";
materias = nullptr;
cantMateria = 0;
}

Alumno::~Alumno() {
delete[] materias;
}

Alumno::Alumno(int _cedula, string _nombre, string _apellido, string _carrera) : Persona(_cedula, _nombre, _apellido) {
carrera = _carrera;
materias = nullptr;
cantMateria = 0;
}

string Alumno::getCarrera() {
return carrera;
}

string Alumno::getMaterias() {
stringstream ss;
for (unsigned int i = 0; i < cantMateria; i++) {
ss << (materias+i)->toString() << endl;
}
return ss.str();
}

void Alumno::setCarrera(string new_carrera) {
carrera = new_carrera;
}

void Alumno::setMaterias(Materia *p, unsigned int new_cantMateria) {
cantMateria = new_cantMateria;
materias = p;
}

string Alumno::toString() {
stringstream ss;
ss << "Alumno: " << Persona::toString()<< "\nCarrera: " << carrera << "\nMaterias: " << endl << getMaterias();
return ss.str();
}
