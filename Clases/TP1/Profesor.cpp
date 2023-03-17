#include "Profesor.h"
using namespace std;
Profesor::Profesor(): Persona() {
     departamento = "";
    cantMat = 0;
    materias = nullptr;
    srand(time(NULL));
}

Profesor::~Profesor() {}

Profesor::Profesor(int _cedula, string _nombre, string _apellido, string _departamento) : Persona(_cedula, _nombre, _apellido) {
    departamento = _departamento;
    cantMat = 0;
    materias = nullptr;
    srand(time(NULL));
}

string Profesor::getDepartamento() {
    return departamento;
}

void Profesor::setDepartamento(string new_departamento) {
    departamento = new_departamento;
}

string Profesor::getMaterias() {
    stringstream ss;
    for (unsigned int i = 0; i < cantMat; i++) {
        ss << (materias+i)->getNombre() << endl;
    }
    return ss.str();
}

void Profesor::setMaterias(Materia *P, unsigned int new_cantMateria) {

}

void Profesor::tomarExamen(string mat) {
    for (unsigned int i = 0; i < cantMat; i++) {
        if ((materias+i)->getNombre() == mat) {
            int nota = 1+rand() % 5;
            (materias+i)->setNota(nota);
            cout << "El examen de " << mat << " ha sido tomado, la nota del estudiante es: " << nota << endl;
            return;
        }
    }
    cout << "La materia " << mat << " no existe" << endl;
}

string Profesor::toString() {
    stringstream ss;
    ss << "Profesor: " << Persona::toString() << "\ndepartamento: " << departamento << endl<<"\nMaterias\n"<< getMaterias();
    return ss.str();
}
