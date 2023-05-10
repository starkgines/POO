#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <sstream>
#include "FechaNoValida.h"

using namespace std;
class Fecha
{
    public:
        Fecha();
        Fecha(int d,int m,int a) throw (FechaNoValida);
        virtual ~Fecha();

        int getDia() const;
        int getMes() const;
        int getAnho() const;

        void establecerFecha(int d,int m,int a) throw (FechaNoValida);

        static bool anhoBisiesto(int a);
        static int cantidadDeDias(int m,int a);
        static bool fechaValida(int d,int m,int a);

        void aumentarDias();
        void disminuirDias();

        string getFecha() const;

        Fecha& operator --();///--f
        Fecha operator --(int a);///f--

        const Fecha& operator -=(int dias);

        bool operator ==(const Fecha &f) const;

        friend istream& operator>>(istream &is,Fecha& f);
        friend ostream& operator<<(ostream &os,Fecha& f);

    private:
        int dia;
        int mes;
        int anho;
};

#endif // FECHA_H
