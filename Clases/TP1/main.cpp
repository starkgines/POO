#include <iostream>
#include "Persona.h"
#include "Materia.h"
#include "Alumno.h"
#include "Profesor.h"
using namespace std;

int main()
{

    cout<<"CLASE PERSONA"<<endl;
    Persona Persona_1(1234,"Carlos","Silva");
    cout<<Persona_1.toString()<<endl;

    cout<<"\n\nCLASE MATERIA"<<endl;
    Materia M1("POO");
    cout<<M1.toString()<<endl;

    unsigned int cantMaterias = 5;
    Materia arr_materias[cantMaterias];
    Materia *P;
    P = &arr_materias[0];
    string nombres[5] = {"POO","Calculo","MN","Robotica","Algebra Lineal"};
    for(int i=0;i<cantMaterias;i++){

        (P+i)->setNombre(nombres[i]);
    }

    cout<<"\n\nCLASE ALUMNO"<<endl;

    Alumno A1(1234,"Peter","Parker","Spiderman");
    A1.setMaterias(P,cantMaterias);

    cout<<A1.toString()<<endl;


    cout<<"\n\n Clase Profesor"<<endl;

     Profesor P1(1234,"Ruben","Juanez","Heroes");
    P1.setMaterias(P,cantMaterias);

    cout<<P1.toString()<<endl;




}
