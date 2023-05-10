#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "Moneda.h"
#include <vector>

using namespace std;

void prueba1() {
    Moneda m;
    cout << m << endl;
    cin >> m;
    cout << m << endl;
}

void prueba2(){
    //diferentes maneras de construir una Moneda
    Moneda m(100);
    Moneda m2=100;
    Moneda m3(m2);
    Moneda m4 ( 50 );
    cout << "m2++ " << m2++ << endl;
    cout << "m2 " << m2 << endl;
    cout << "++m2 " << ++m2 << endl;
    cout << "m3 " << m3 << endl;

    cout << (m++ == ++m2 ?  "m++ es igual a ++m2" :
                     "m++ no es igual a ++m2") << endl;
    cout << "m:  " << m << endl;
    cout << "m2: " << m2 << endl;
    cout << "++m4:" << ++m4 << endl;
    cout << "m4:    " << m4 << endl;
}

Moneda procesar(string linea) {
    int pos = linea.find(";");
    int valor;
    stringstream (linea.substr(0,pos)) >> valor;
    Moneda m = valor;
    return m;
}
void leerMonedas() {
   vector<Moneda> monedero;
   ifstream f("monedas.txt", ifstream::in);
   while(!f.eof()) {
        string linea;
        getline(f, linea);
        Moneda m = procesar(linea);
        monedero.push_back(m);
   }
   int total = 0;
   for(int unsigned i=0; i<monedero.size();i++){
     Moneda m = monedero.at(i);
     cout<<m<<endl;
     total += m.Getvalor();
   }
   cout << "Total en monedero: " << total;
}

int main()
{
    cout << "Prueba de la clase Moneda" << endl;

    prueba1();
    //prueba2();

    /* lee un archivo txt que contiene monedas
       imprime las monedas y el total de monedas
    */
    //leerMonedas();

    return 0;
}
