#ifndef JUGADOR_H
#define JUGADOR_H
#include <sstream>
#include <time.h>

#include "Personaje.h"
#include "Arma.h"

using namespace std;
class Jugador : public Personaje
{
    public:
        Jugador();
        virtual ~Jugador();
        Jugador(string _nombre,int _vida,Arma _arma);
        void setArma(Arma new_arma);
        void atacar(Personaje *);
        string toString();

    private:
        Arma arma;


};

#endif // JUGADOR_H
