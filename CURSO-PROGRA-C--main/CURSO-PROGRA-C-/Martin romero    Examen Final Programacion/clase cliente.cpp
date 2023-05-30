#include<iostream>
using namespace std;
class Cliente{
private:
    string nombrec;//nombre del cliente 
    int dni;
public:
	Cliente(){}//constructor determinado 
    Cliente(string _nombrec,int _dni);
    string getnombrec();
    int getdni();
};
// Implementación del constructor de la clase Cliente
Cliente::Cliente(string _nombrec, int _dni) {
    nombrec = _nombrec;
    dni=_dni;
}
//implementacion del metodo getnombre 
string Cliente::getnombrec(){
	return nombrec;
}
//implementacion del metodo getdni
int Cliente::getdni(){
	return dni;
}
