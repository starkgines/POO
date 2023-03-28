#ifndef PERSONAJE_H
#define PERSONAJE_H

// LIBRERIAS A UTILIZAR
#include <sstream>
#include <time.h>


using namespace std;
class Personaje
{
    public:
        Personaje();
        virtual ~Personaje();
        Personaje(string _nombre, int _vida);
        void setVida(int new_vida);
        int getVida();
        virtual void atacar(Personaje *Atacado);
        string toString();


    private:
        string nombre;
        int vida;

};

#endif // PERSONAJE_H
