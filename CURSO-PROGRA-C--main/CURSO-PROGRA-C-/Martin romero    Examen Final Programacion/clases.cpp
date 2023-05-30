#include<iostream>
using namespace std;
class Moto{
    private:
    string modelo;
    int stock;
    public:
    Moto(){}
    Moto(string, int);
    //void mostrar_moto();
    string getmodelo();
    int getstock();
};
class Repuesto{
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
    public:
    Producto(string _modelo, int _stock, string _nombre, int _stockr): Moto(_modelo, _stock), Repuesto(_nombre, _stockr) {}
};
class Taller{
    private:
    string nom_servicio;
    string realizador;
    int tiempo_h,tiempo_m;
    public:
    Taller(){}
    Taller(string,string,int,int);
    Taller(string,string);
    string getnom_servicio();
    string getrealizador();
    int gettiempo_h();
    int gettiempo_m();
    void mostrarserv();
};
class Cliente {
private:
    string nombrec;
    int dni;
public:
	Cliente(){}
    Cliente(string _nombrec,int _dni);
    string getnombrec();
    int getdni();
};

class Consumo : public Cliente {
private:
    string producto;
    int cantidad;
public:
    Consumo(string _nombre,int _dni, string _producto, int _cantidad);
    Consumo(){}
    string getProducto();
    int getCantidad();
};


Moto::Moto(string _modelo,int _stock){
    modelo=_modelo;
    stock=_stock;
}
Repuesto::Repuesto(string _nombre,int _stockr){
    nombre=_nombre;
    stockr=stockr;
}
Taller::Taller(string _nom_servicio,string _realizador,int _tiempo_h,int _tiempo_m){
    nom_servicio=_nom_servicio;
    realizador=_realizador;
    tiempo_h=_tiempo_h;
    tiempo_m=_tiempo_m;
}
Taller::Taller(string _nom_servicio ,string _realizador){
	nom_servicio=_nom_servicio;
    realizador=_realizador;
}
Cliente::Cliente(string _nombrec, int _dni) {
    nombrec = _nombrec;
    dni=_dni;
}
Consumo::Consumo(string _nombre,int _dni, string _producto, int _cantidad) : Cliente(_nombre, _dni) {
    producto = _producto;
    cantidad = _cantidad;
}

void Taller::mostrarserv(){
	cout<<"servicio: "<<nom_servicio<<endl;
	cout<<"realizador: "<<realizador<<endl;
	cout<<"..............................."<<endl;
}


string Moto:: getmodelo(){
    return modelo;
}
int Moto::getstock(){
    return stock;
}

string Repuesto:: getnombre(){
    return nombre;
}
int Repuesto::getstockr(){
    return stockr;
}

string Taller:: getnom_servicio(){
    return nom_servicio;
}
string Taller:: getrealizador(){
    return realizador;
}
int Taller::gettiempo_h(){
    return tiempo_h;
}
int Taller::gettiempo_m(){
    return tiempo_m;
}


string Cliente::getnombrec(){
	return nombrec;
}
int Cliente::getdni(){
	return dni;
}
string Consumo::getProducto() {
    return producto;
}

int Consumo::getCantidad() {
    return cantidad;
}