#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main()
{


    Triangulo t = Triangulo("verde", 12, 8);
    Rectangulo r = Rectangulo("rojo", 12, 30);
    cout<<r.toString();
    cout<<t.toString()<<endl;

    Poligono *p[2];
    p[0] = &r;
    p[1] = &t;
    cout<<p[1]->toString();

    return 0;
}
