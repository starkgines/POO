#ifndef FECHANOVALIDA_H
#define FECHANOVALIDA_H

#include <exception>
using namespace std;

class FechaNoValida : public exception
{
    public:
        const char* what() const throw(){
            return "Fecha no valida";
        }

};

#endif // FECHANOVALIDA_H
