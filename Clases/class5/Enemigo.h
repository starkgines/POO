#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <sstream>
#include <time.h>

#include "Personaje.h"
#include "Arma.h"



using namespace std;
class Enemigo : public Personaje
{
    public:
        Enemigo();
        virtual ~Enemigo();
        Enemigo(string _name, int _vida, Arma _arma);
        void atacar(Personaje *Atacado);
        string toString();


    private:
        Arma arma;


};

#endif // ENEMIGO_H
