#include<iostream>
#include "clase cliente.cpp"
using namespace std;
class Consumo : public Cliente {///clase cliente//Aquí se define la clase Consumo, que hereda de la clase Cliente
private:
    string producto;
    int cantidad;
public:
    Consumo(string _nombre,int _dni, string _producto, int _cantidad);//consumo constructor 
    Consumo(){}
    string getProducto();
    int getCantidad();//devuelve los productos 
};
Consumo::Consumo(string _nombre,int _dni, string _producto, int _cantidad) : Cliente(_nombre, _dni) {//El constructor utiliza el constructor de la clase base 
    producto = _producto;
    cantidad = _cantidad;
}
string Consumo::getProducto() {
    return producto;//devuelve el valor 
}

int Consumo::getCantidad() {
    return cantidad;//devuelve el valor 
}

