#include <iostream>
#include <time.h>

// IMPORTAR LAS CLASES QUE SE UTILIZARAN
#include "Personaje.h"
#include "Arma.h"
#include "Jugador.h"


using namespace std;

int main()
{

    // Numero Random
    srand(time(NULL));
    int numero_random = rand()%10; // siempre es hasta n-1


    cout<<"\nPERSONAJE"<<endl;
    Personaje P1("Link",100);
    cout<<P1.toString()<<endl;


    cout<<"\nARMA"<<endl;
    Arma A1("Espada");
    A1.subirFuerza(20);
    cout<<"Tipo: "<<A1.getTipo()<<endl;
    cout<<"Fuerza: "<<A1.getFuerza()<<endl;


    cout<<"\nJugador"<<endl;
    Jugador J1("Link",50,A1);
    cout<<J1.toString()<<endl;

    //  atacar
    Jugador J2("Zelda",30,A1);
    Personaje *Atacado = new Personaje();
    Atacado = &J1;
    J2.atacar(Atacado);

    cout<<J1.toString()<<endl;

    return 0;
}
