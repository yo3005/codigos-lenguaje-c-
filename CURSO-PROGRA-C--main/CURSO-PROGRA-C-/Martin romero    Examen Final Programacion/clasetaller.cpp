#include<iostream>
using namespace std;
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
void Taller::mostrarserv(){
	cout<<"servicio: "<<nom_servicio<<endl;
	cout<<"realizador: "<<realizador<<endl;
	cout<<"..............................."<<endl;
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
