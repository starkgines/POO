#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Poligono.h"

class Rectangulo : public Poligono
{
    public:
        Rectangulo();
        Rectangulo(string _color, float _largo, float _ancho);
        virtual ~Rectangulo();

        float Getancho() { return ancho; }
        void Setancho(float val) { ancho = val; }
        float Getlargo() { return largo; }
        void Setlargo(float val) { largo = val; }

        float calcularArea();
        float calcularPerimetro();
        string toString();

    protected:

    private:
        float ancho;
        float largo;
};

#endif // RECTANGULO_H
