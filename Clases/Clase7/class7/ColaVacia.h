#ifndef COLAVACIA_H
#define COLAVACIA_H

#include <exception>
using namespace std;
class ColaVacia: public exception
{
    public:
        const char* what() const throw(){
            return "La cola esta vacia";
        }
};

#endif // COLAVACIA_H

