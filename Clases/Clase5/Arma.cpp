#include "Arma.h"

Arma::Arma()
{
    tipo="";
    fuerza=0;
}
Arma::~Arma()
{
    //dtor
}
Arma::Arma(string _tipo){
    tipo=_tipo;
    fuerza=10;
}
int  Arma::getFuerza(){
return fuerza;
}
string Arma::getTipo(){
return tipo;
}
void Arma::subirFuerza(int aumento){

int nueva_fuerza = fuerza+aumento;
if(nueva_fuerza>FUERZA_MAX){
    fuerza=FUERZA_MAX;
}
else{
    fuerza = nueva_fuerza;
}

}
