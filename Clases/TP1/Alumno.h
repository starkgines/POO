#ifndef ALUMNO_H
#define ALUMNO_H
#include <sstream>
#include "Persona.h"
#include "Materia.h"

using namespace std;
class Alumno : public Persona
{
    public:
        Alumno();
        virtual ~Alumno();
        Alumno(int _cedula,string _nombre,string _apellido,string _carrera);
        string getCarrera();
        string getMaterias();
        void setCarrera(string new_carrera);
        void setMaterias(Materia *p, unsigned int new_cantMateria);

        void darExamen(string materia_a_rendir); // falta implementar :)
        string toString();



    private:
        string carrera;
        Materia *materias;
        unsigned int cantMateria;
};

#endif // ALUMNO_H
