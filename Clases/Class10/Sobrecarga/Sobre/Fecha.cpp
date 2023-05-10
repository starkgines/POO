#include "Fecha.h"

Fecha::Fecha()
{
    dia=1;
    mes=1;
    anho=1900;
}

Fecha::Fecha(int d,int m,int a) throw (FechaNoValida)
{
    if(!fechaValida(d,m,a)){
        throw FechaNoValida();
    }
    dia=d;
    mes=m;
    anho=a;
}

Fecha::~Fecha()
{
    //dtor
}

int Fecha::getDia() const
{
    return dia;
}

int Fecha::getMes() const
{
    return mes;
}

int Fecha::getAnho() const
{
    return anho;
}

void Fecha::establecerFecha(int d,int m,int a)
throw (FechaNoValida){
    if(!fechaValida(d,m,a)){
        throw FechaNoValida();
    }
    dia=d;
    mes=m;
    anho=a;
}

bool Fecha::anhoBisiesto(int a){
    return ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0);
}

int Fecha::cantidadDeDias(int m,int a){
    if(m==4 || m==6 || m==9 || m==11){
        return 30;
    }else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        return 31;
    }else if(anhoBisiesto(a) && m==2){
        return 29;
    }else if(!anhoBisiesto(a) && m==2){
        return 28;
    }

    return 0;
}

bool Fecha::fechaValida(int d,int m,int a){
    return (d<=cantidadDeDias(m,a) && d>0 && m>0 && a>0);
}

void Fecha::aumentarDias(){
    if(fechaValida(this->dia+1,this->mes,this->anho)){
        dia++;
    }else if(fechaValida(1,this->mes+1,this->anho)){
        mes++;
        dia=1;
    }else{
        anho++;
        mes=1;
        dia=1;
    }
}

void Fecha::disminuirDias(){
    if(fechaValida(this->dia-1,this->mes,this->anho)){
        dia--;
    }else if(fechaValida(1,this->mes-1,this->anho)){
        mes--;
        dia=cantidadDeDias(this->mes,this->anho);
    }else{
        mes=12;
        dia=31;
        anho--;
    }
}

string Fecha::getFecha() const
{
    ostringstream a;
    a<<dia<<"/"<<mes<<"/"<<anho;
    return a.str();
}

Fecha& Fecha::operator--(){
    this->disminuirDias();
    return *this;
}

Fecha Fecha::operator--(int a){
    Fecha aux=*this;
    this->disminuirDias();
    return aux;
}

const Fecha& Fecha::operator-=(int d){
    for(int i=0;i<d;i++){
        disminuirDias();
    }
    return *this;
}

bool Fecha::operator ==(const Fecha &f) const{
    return (this->dia==f.dia && this->mes==f.mes && this->anho==f.anho);
}

istream& operator>>(istream &i,Fecha &f){
    int dd,mm,yy;
    cout<<"Introduzca la fecha "<<endl;
    i>>dd>>mm>>yy;
    f.establecerFecha(dd,mm,yy);
    return i;
}

ostream& operator << (ostream& os,Fecha &f){
    os<<f.getFecha();
    return os;
}
