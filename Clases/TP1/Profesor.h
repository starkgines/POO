#ifndef PROFESOR_H
#define PROFESOR_H
#include <time.h>
#include <iostream>
#include "Persona.h"
#include "Materia.h"
#include <sstream>
using namespace std;
class Profesor : public Persona
{
    public:
        Profesor();
        virtual ~Profesor();
        Profesor(int _cedula,string _nombre,string _apellido,string _departamento);
        string getDepartamento();
        void setDepartamento(string new_departamento);
        string getMaterias();
        void setMaterias(Materia *P,unsigned int new_cantMateria); // falta :)
        void tomarExamen(string mat);
        string toString();
    private:
        Materia *materias;
        string departamento;
        unsigned int cantMat;

};

#endif // PROFESOR_H
