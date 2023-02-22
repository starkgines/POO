#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Poligono.h"


class Triangulo : public Poligono
{
    public:
        Triangulo();
        Triangulo(string _color, float _base, float _altura);
        virtual ~Triangulo();

        float Getbase() { return base; }
        void Setbase(float val) { base = val; }
        float Getaltura() { return altura; }
        void Setaltura(float val) { altura = val; }

        float calcularArea();
        float calcularPerimetro();
        string toString();

    protected:

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_H
