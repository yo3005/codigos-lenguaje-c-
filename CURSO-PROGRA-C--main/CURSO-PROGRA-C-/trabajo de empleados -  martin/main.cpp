#include <iostream>
#include <fstream>
#include "empleado.cpp"

int main()
{
    // Crear departamentos
    Departamento departamento1("Departamento de comunicaciones", "DS");
    Departamento departamento2("Departamento de letras", "DC");
    Departamento departamento3("Departamento de Matematicas", "DM");

    // Crear empleados
    Empleado empleado1("Jefe de Departamento", "S/. 5000", "10 años", "Juan", "Perez", "12345678", "01/01/1990", "30");
    Empleado empleado2("Tecnico", "S/. 1000", "5 años", "Jose", "Gonzales", "87654321", "01/01/1990", "30");
    Empleado empleado3("Tecnico", "S/. 1000", "2 años", "Luis", "Pes", "87654321", "01/01/1990", "30");
    Empleado empleado4("Tecnico", "S/. 1000", "5 años", "Ana", "Sep", "87654321", "01/01/1990", "30");
    
    Empleado empleado5("Jefe de Departamento", "S/. 5000", "10 años", "Maria", "Lopez", "87654321", "01/01/1990", "30");
    Empleado empleado6("Tecnico", "S/. 2000", "5 años", "Ana", "Gutierrez", "87654321", "01/01/1990", "30");
    Empleado empleado7("Tecnico", "S/. 2000", "5 años", "Luis", "Gutierrez", "87654321", "01/01/1990", "30");
    Empleado empleado8("Tecnico", "S/. 2000", "5 años", "Ana", "Gutierrez", "87654321", "01/01/1990", "30");

    Empleado empleado9("Jefe de Departamento", "S/. 5000", "10 años", "Pedro", "Garcia", "12345678", "01/01/1990", "30");
    Empleado empleado10("Tecnico", "S/. 2000", "5 años", "Luis", "Gutierrez", "87654321", "01/01/1990", "30");
    Empleado empleado11("Tecnico", "S/. 2000", "5 años", "Ana", "Gutierrez", "87654321", "01/01/1990", "30");
    Empleado empleado12("Tecnico", "S/. 2000", "5 años", "Juan", "Gutierrez", "87654321", "01/01/1990", "30");

    // Asignar departamento a empleados
    empleado1.setDepartamento(departamento1);
    empleado2.setDepartamento(departamento1);
    empleado3.setDepartamento(departamento1);
    empleado4.setDepartamento(departamento1);
    empleado5.setDepartamento(departamento2);
    empleado6.setDepartamento(departamento2);
    empleado7.setDepartamento(departamento2);
    empleado8.setDepartamento(departamento2);
    empleado9.setDepartamento(departamento3);
    empleado10.setDepartamento(departamento3);
    empleado11.setDepartamento(departamento3);
    empleado12.setDepartamento(departamento3);

    // Creando arreglo
    Empleado lista_empleado[12] = {empleado1, empleado2, empleado3, empleado4, empleado5, empleado6, empleado7, empleado8, empleado9, empleado10, empleado11, empleado12};
    int maximo = sizeof(lista_empleado) / sizeof(lista_empleado[0]);

    // Crear archivo empleados.txt
    ofstream empleados;
    empleados.open("empleados.txt");

    // Recorriendo arreglo y asignando a cada departamento
    empleados << ".- Departamento de Sistemas"
              << "\n";
    for (int i = 0; i < maximo; i++)
    {
        if (lista_empleado[i].getDepartamento().getSiglas() == "DS")
        {
            empleados << lista_empleado[i].datoString() << endl;
        }
    }
    empleados << ".- Departamento de Ciencias"
              << "\n";
    for (int i = 0; i < maximo; i++)
    {
        if (lista_empleado[i].getDepartamento().getSiglas() == "DC")
        {
            empleados << lista_empleado[i].datoString() << endl;
        }
    }
    empleados << ".- Departamento de Matematicas"
              << "\n";
    for (int i = 0; i < maximo; i++)
    {
        if (lista_empleado[i].getDepartamento().getSiglas() == "DM")
        {
            empleados << lista_empleado[i].datoString() << endl;
        }
    }
    empleados.close();

    return 0;
}