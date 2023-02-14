#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <iostream>
#include <sstream>

using namespace std;

class Automovil
{
    public:
        Automovil();
        Automovil(string _marca, string _modelo, float _tanque);
        virtual ~Automovil();

        string getMarca();
        string getModelo();
        float getKilometraje();

        void setMarca(string new_marca);
        void setModelo(string new_modelo);

        void cargarCombustible(float cantidad_combustible);


        string toString();

    private:
        string marca;
        string modelo;
        string tipoCombustible;
        float kilometraje;
        float tanque;
        float capacidad;

};

#endif // AUTOMOVIL_H
