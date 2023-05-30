#include <iostream>
#include <string>
#include <fstream>
#include "Automoviles.cpp"
#include "Motocicleta.cpp"
using namespace std;
int main()
{
    // crear automoviles
    Vehiculo autos1("4", 6, 4, 4, true);
    Vehiculo autos2("4", 6, 4, 4, true);
    Vehiculo autos3("4", 6, 4, 4, true);
    Vehiculo autos4("4", 6, 4, 4, true);
    Vehiculo autos5("4", 6, 4, 4, true);
    Vehiculo autos6("4", 6, 4, 4, true);
    Vehiculo autos7("4", 6, 4, 4, true);
    Vehiculo autos8("4", 6, 4, 4, true);
    Vehiculo autos9("4", 6, 4, 4, true);
    Vehiculo autos10("4", 6, 4, 4, true);

    // Crear departamentos
    Automoviles automoviles1("Departamento de Ventas", "DV");

    // creamos lista de autos 
    Vehiculo autos[10] = {autos1, autos2, autos3, autos4, autos5, autos6, autos7, autos8, autos9, autos10};

    // declaramos variable 
    ofstream archivo("GAAAAAAA.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // F
    archivo << "--------------------------------------------------------" << endl;
    archivo << "Tienda de vehiculos " << endl;
    archivo << "--------------------------------------------------------" << endl;
    archivo << "Datos de los empleados: \n ";
    // imprimimos los empleados
    for (int i = 0; i < 10; i++)
    {
        archivo << autos[i].toString() << endl;
    }

    archivo.close();
};