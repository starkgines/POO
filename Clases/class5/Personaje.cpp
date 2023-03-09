#include "Personaje.h"

Personaje::Personaje()
{
    nombre = "";
    vida = 0;
    srand(time(NULL));

}

Personaje::~Personaje()
{
    //dtor
}
Personaje::Personaje(string _nombre, int _vida){
nombre = _nombre;
vida = _vida;
srand(time(NULL));

}
void Personaje::setVida(int new_vida){
vida = new_vida;
}
int Personaje::getVida(){
return vida;
}
void Personaje::atacar(Personaje *Atacado){

int numero_random = rand()%10;

int nueva_vida = Atacado->getVida() - numero_random;
if(nueva_vida < 0 ){
    Atacado->setVida(0);
}
else{
    Atacado->setVida(nueva_vida);
}

}
string Personaje::toString(){
    ostringstream aux;
    aux<<"Nombre: "<<nombre<<"\nVida: "<<vida;
    return aux.str();
}
