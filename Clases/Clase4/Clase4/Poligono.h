#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include <sstream>
using namespace std;

class Poligono
{
    public:
        Poligono() {

            forma = "poligono";
            color = "-";

        }
        Poligono(string _color) {

            forma = "poligono";
            color = _color;

        }


        virtual ~Poligono() {}

        string Getforma() { return forma; }
        string Getcolor() { return color; }

        void Setcolor(string val) { color = val; }

        float calcularArea(){

            return 0;

        }
        float calcularPerimetro(){

            return 0;

        }
        string toString(){

            ostringstream aux;
            aux<<"Soy un "<<forma
            <<" de color "<<color;
            return aux.str();

        }

    protected:
        string forma;
        string color;
};

#endif // POLIGONO_H
