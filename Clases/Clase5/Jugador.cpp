#include "Jugador.h"

Jugador::Jugador():Personaje()
{
    arma = Arma();
    srand(time(NULL));
}

Jugador::~Jugador()
{
    //dtor
}
Jugador::Jugador(string _nombre,int _vida,Arma _arma):Personaje(_nombre,_vida){

    arma = _arma;

}
void Jugador::setArma(Arma new_arma){

    arma = new_arma;
    srand(time(NULL));

}
void Jugador::atacar(Personaje *Atacado){

int numero_random = rand()%10;

int nueva_vida = Atacado->getVida() - numero_random;
if(nueva_vida < 0 ){
    Atacado->setVida(0);
}
else{
    Atacado->setVida(nueva_vida);
}


}
string Jugador::toString(){

    ostringstream aux;
    aux<<Personaje::toString()<<"\nArma:"<<"\nTipo: "<<arma.getTipo()<<"\nFuerza: "<<arma.getFuerza();
    return aux.str();
}
