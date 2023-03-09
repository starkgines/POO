#ifndef ARMA_H
#define ARMA_H

#include <sstream>
using namespace std;
class Arma
{
    public:
        Arma();
        virtual ~Arma();
        Arma(string _tipo);
        int  getFuerza();
        string getTipo();
        void subirFuerza(int aumento);

    private:
        string tipo;
        int fuerza;
        int FUERZA_MAX = 1000;
};

#endif // ARMA_H
