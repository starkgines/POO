#include "Enemigo.h"

Enemigo::Enemigo():Personaje()
{
    arma = Arma();
    srand(time(NULL));
}

Enemigo::~Enemigo()
{
    //dtor
}
Enemigo::Enemigo(string _name, int _vida, Arma _arma):Personaje(_name,_vida){
    arma = _arma;
    srand(time(NULL));
}
void Enemigo::atacar(Personaje *Atacado){

int numero_random = 15 + rand()%100;

int nueva_vida = Atacado->getVida() - numero_random;

if(nueva_vida < 0 ){
    Atacado->setVida(0);
}
else{
    Atacado->setVida(nueva_vida);
}

}
string Enemigo::toString(){

ostringstream aux;

aux<<Personaje::toString()<<"\nFuerza: "<<arma.getFuerza()<<"\n Tipo: "<<arma.getTipo();
return aux.str();


}
