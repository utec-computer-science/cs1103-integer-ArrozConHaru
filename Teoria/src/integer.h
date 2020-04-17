#ifndef TEORIA_INTEGER_H
#define TEORIA_INTEGER_H

#include <iostream>
using namespace std;
typedef int TipoEntero;
class Integer{
    TipoEntero value;
public:
    Integer();
    Integer(TipoEntero value );
    Integer(const Integer& other);

    ~Integer();

    Integer operator=(const Integer & other); //Sirve para poder igualar los objetos de la clase Integer como si fuesen variables
    Integer operator+(TipoEntero value);
    Integer operator^(TipoEntero value);
    operator TipoEntero();  //Si se elimina esta linea, no se podra realizar la conversion entre tipos primitivos (casting)
    friend ostream&operator << (ostream& os, const Integer& other);
    friend istream&operator >> (istream& os, Integer& other);


};




#endif //TEORIA_INTEGER_H
