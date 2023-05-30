#include <iostream>
#include <math.h>
#include <string>
using namespace std;
//clase curso
class curso
{
private:
    string codigo;
    string descripcion;
    int credito;
    float nota1 = 0;
    float nota2  =0;
    float nota3  =0;
    // metodos y funciones
public:
    curso(string _codigo, string _descripcion, int _credito)
    { // constructor  dar valor a los atributos
        codigo = _codigo;
        descripcion = _descripcion;
        credito = _credito;
    }
    // geter(es para obtener ) and setter(actualizar o modificar) se usa para manipular o agarrar a sus atributos
    string getcodigo()
    {
        return codigo;
    }
    void setcodigo(string _codigo)
    { // pongo void para que no reetorne
        codigo = _codigo;
    }

    string getdescripcion()
    {
        return descripcion;
    }
    void setdescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }

    int getcredito()
    {
        return credito;
    }
    void setcredito(int _credito)
    {
        credito = _credito;
    }
    float getNota1()
    {
        return nota1;
    }
    void setNota1(float _nota1)
    {
        nota1 = _nota1;
    }

    float getNota2()
    {
        return nota2;
    }
    void setNota2(float _nota2)
    {
        nota2 = _nota2;
    }

    float getNota3()
    {
        return nota3;
    }
    void setNota3(float _nota3)
    {
        nota3 = _nota3;
    }

    float promedio()
    {
        float pr = 0; 
         pr = (nota1 + nota2 + nota3) / 3;
            return pr;
        /*try
        {
          
        }
        catch
        {
            return 0;
        }*/
    }
    void getstring();
     string curso = "curso: "
};
