#include "Integer.h"

Integer::Integer() {
    this->value = 2020;
}
Integer::Integer(TipoEntero value) {
    this->value = value;
}
Integer::Integer(const Integer &other) {
    this->value = other.value;
}

Integer::~Integer(){}

//Operadores
Integer Integer::operator=(const Integer &other) {
    return this->value = other.value;
}
Integer Integer::operator+(TipoEntero value) {
    return this->value + value;
}
Integer Integer::operator^(TipoEntero value) {
    TipoEntero temp = 1;
    for(TipoEntero i = 0; i < value; i++){
        temp *= this->value;
    }
    return Integer(temp);
}
Integer::operator TipoEntero(){
    return this->value;
}
std::ostream& operator <<(std::ostream& os, const Integer& other){
    os << other.value;
    return os;
}

std::istream& operator >>(std::istream& os, Integer& other){
    os >> other.value;
    return os;
}