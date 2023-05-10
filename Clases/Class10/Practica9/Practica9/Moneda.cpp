#include "Moneda.h"

Moneda::Moneda()
{
    valor=0;
    denominacion = "sin valor";
}

Moneda::Moneda(unsigned int val) {
    Setvalor(val);
}

Moneda::~Moneda()
{
    //dtor
}

void Moneda::Setvalor(unsigned int val){
    int i = 0;
    for (; i<4; i++) {
        if (val==MONEDAS[i]) {
            valor = val;
            denominacion = DENOMINACION[i];
            break;
        }
    }
    if(i==4) {
       valor = 0;
       denominacion = "sin valor";
    }
}

bool Moneda::operator < (const Moneda &m) const {
    return this->valor < m.valor;
}
bool Moneda::operator == (const Moneda &m) const {
    return this->valor == m.valor;
}
//preincremento
Moneda &Moneda::operator++ () {
    switch(valor) {
      case 0:
        Setvalor(50);
        break;
      case 50:
        Setvalor(100);
        break;
      case 100:
        Setvalor(500);
        break;
      case 500:
        Setvalor(1000);
        break;
    }
    return *this;
}
Moneda Moneda::operator++ (int) {
    Moneda aux = *this;
    switch(valor) {
      case 0:
        Setvalor(50);
        break;
      case 50:
        Setvalor(100);
        break;
      case 100:
        Setvalor(500);
        break;
      case 500:
        Setvalor(1000);
        break;
    }
    return aux;
}

Moneda& Moneda::operator= (const Moneda &m)
{
    if(this!=&m){ //Comprueba que no se esté intentando igualar un objeto a sí mismo
        this->valor=m.valor;
        this->denominacion=m.denominacion;
    }
    return *this;
}

ostream& operator << (ostream &o, const Moneda& m) {
    o << m.valor << " " << m.denominacion;
    return o;
}
istream& operator >> (istream &i, Moneda& m){
    cout << "Ingrese el valor de la moneda: " ;
    i >> m.valor;
    m.Setvalor(m.valor);
    return i;
}

const unsigned int Moneda::MONEDAS[] =
                      {50, 100, 500, 1000};
const string Moneda::DENOMINACION[] =
   { "cincuenta", "cien", "quinientos", "mil"};
