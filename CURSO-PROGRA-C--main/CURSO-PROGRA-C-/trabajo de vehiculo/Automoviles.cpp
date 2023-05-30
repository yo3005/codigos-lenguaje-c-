#include <iostream>
#include <string>
#include "Vehiculo.cpp"
using namespace std;
class Automoviles : Vehiculo
{
protected:
    string color_automovil;
    string marca_automovil;
    Vehiculo autos[10];
    int num_vehiculos;

public:
    Automoviles(string _color_automovil = "", string _marca_automovil = "", string _cilindrica_motor = "", int _nun_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, bool _certificacion_seguridad) : Vehiculo(_cilindrica_motor, _nun_asientos, _num_ruedas, _num_puertas, _certificacion_seguridad)
    {
        color_automovil = _color_automovil;
        marca_automovil = _marca_automovil;
        num_vehiculos = 0;
    }
    string getColor_automovil()
    {
        return color_automovil;
    }
    void setColor_automovil(string _color_automovil)
    {
        color_automovil = _color_automovil;
    }
    string getMarca_automovil()
    {
        return marca_automovil;
    }
    void setmarca_automovil(string _marca_automovil)
    {
        marca_automovil = _marca_automovil;
    }
    string toStringAuto()
    {
        string resumen_Auto = "Color: " + color_automovil + "Marca: " + marca_automovil;
        return resumen_Auto;
    }
    
};
