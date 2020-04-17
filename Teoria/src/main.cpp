#include "integer.h"
int main(){
    cout<<"Ejercicio 5a:"<<endl;
    cout<<"Tests:"<<endl;
    Integer Numero0;
    cout<<Numero0<<endl;
    Integer Numero1(1010);
    cout<<Numero1<<endl;
    Integer Numero2(Numero1);
    cout<<Numero2<<endl;
    // Probamos los operadores:
    Numero0 = Numero1;
    cout<<Numero0<<endl;
    Integer Numero3(0);
    Numero3=Numero0 + 100 + Numero2;
    cout<<Numero3<<endl;
    Integer Numero4(5);
    Numero4= Numero4^2;
    cout<<Numero4<<endl;
    return 0;
}