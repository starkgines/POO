#ifndef MATERIA_H
#define MATERIA_H
#include <sstream>
using namespace std;
class Materia
{
    public:
        Materia();
        virtual ~Materia();
    Materia(string nombre);
    string getNombre();
    void setNombre(string nombre);
    int getNota();
    void setNota(int nota);
    string toString();


    private:
    string nombre;
    int nota;
};

#endif // MATERIA_H
