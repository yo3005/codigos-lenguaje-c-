#include<iostream>
#include "clasemoto.cpp"
using namespace std;
class Repuesto{ //incluir clase moto
    private:
    string nombre;
    int stockr;
    public:
    Repuesto(string,int);
    Repuesto(){}
    string getnombre();
    int getstockr();
    //void mostrar_repuestos();
};
class Producto : public Moto, public Repuesto {
    public://herencia publica 
    Producto(string _modelo, int _stock, string _nombre, int _stockr): Moto(_modelo, _stock), Repuesto(_nombre, _stockr) {}
};
Repuesto::Repuesto(string _nombre,int _stockr){//constructor de la clase 
    nombre=_nombre;
    stockr=stockr;
}
string Repuesto:: getnombre(){
    return nombre;
}
int Repuesto::getstockr(){
    return stockr;
}
