#ifndef CLIENTE_H
#define CLIENTE_H
#define enter '\n'

#include <iostream>
using namespace std;

class Cliente {

    public:
        /** Default constructor */
        Cliente(int ced=0, string nom="nn",
                int c=0) {
                cedula = ced;
                nombre = nom;
                cuenta = c;
        }
        /** Default destructor */
        virtual ~Cliente();
        /** Access cedula;
         * \return The current value of cedula;
         */
        int Getcedula() { return cedula; }
        /** Set cedula;
         * \param val New value to set
         */
        void Setcedula(int val) { cedula = val; }
        /** Access nombre;
         * \return The current value of nombre;
         */
        string Getnombre() { return nombre; }
        /** Set nombre;
         * \param val New value to set
         */
        void Setnombre(string val) { nombre = val; }
        /** Access cuenta
         * \return The current value of cuenta
         */
        int Getcuenta() { return cuenta; }
        /** Set cuenta
         * \param val New value to set
         */
        void Setcuenta(int val) { cuenta = val; }

        friend ostream& operator<<(ostream& os, const Cliente& s)
	    {
		// write out individual members of s with an end of line between each one
		   os << s.cedula << " " << s.nombre << " "
		      << s.cuenta << enter;
		   return os;
	    }

        // Extraction operator
        friend istream& operator>>(istream& is, Cliente& c)
        {
            // read in individual members of s
            is >> c.cedula >> c.nombre >> c.cuenta;
            return is;
        }

    private:
        int cedula;; //!< Member variable "cedula;"
        string nombre;; //!< Member variable "nombre;"
        int cuenta; //!< Member variable "cuenta"
};

#endif // CLIENTE_H
