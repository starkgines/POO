#ifndef MONEDA_H
#define MONEDA_H
#include <sstream>
#include <iostream>

using namespace std;

class Moneda
{
    public:
        /** Default constructor */
        Moneda();

        Moneda(unsigned int);
       // Moneda(string);

        /** Default destructor */
        virtual ~Moneda();
        /** Access valor
         * \return The current value of valor
         */
        unsigned int Getvalor() { return valor; }
        /** Set valor
         * \param val New value to set
         */
        void Setvalor(unsigned int val);
        /** Access denominacion
         * \return The current value of denominacion
         */
        string Getdenominacion() {
            return denominacion; }
        /** Set denominacion
         * \param val New value to set
         */
        /**Sobrecarga de operadores*/
        bool operator<  (const Moneda &m) const;
        bool operator==  (const Moneda &m) const;
        //preincremento
        Moneda& operator++ ();
        //postincremento
        Moneda operator++(int);
        Moneda& operator=(const Moneda&);

        friend ostream& operator << (ostream &o, const Moneda& m);
        friend istream& operator >> (istream &i, Moneda &m);

        static const unsigned int MONEDAS[4];
        static const string DENOMINACION[4];
    private:
        unsigned int valor; //!< Member variable "valor"
        string denominacion; //!< Member variable "denominacion"
};

#endif // MONEDA_H
