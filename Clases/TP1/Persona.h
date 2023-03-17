#ifndef PERSONA_H
#define PERSONA_H
#include <sstream>

using namespace std;
class Persona
{
    public:
        Persona();
        virtual ~Persona();
        Persona(int _cedula, string _nombre, string _apellido);

        int getCedula();
        string getNombre();
        string getApellido();

        void setCedula(int _cedula);
        void setNombre(string _nombre);
        void setApellido(string _apellido);


        string toString();


    private:
    int cedula;
    string nombre;
    string apellido;
};

#endif // PERSONA_H
