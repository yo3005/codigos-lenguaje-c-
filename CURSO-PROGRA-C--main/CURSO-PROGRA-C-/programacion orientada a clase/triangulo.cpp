#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// crear clase
class Triangulo
{
    // atributos
private:
    float base;
    float altura;

    // metodos y funciones
public:
    // constructor
    Triangulo(float _altura, float _base)
    {
        base = _base;
        altura = _altura;
    }

    Triangulo()
    {
        base = 0;
        altura = 0;
    }

    float getBase()
    {
        return base;
    }
    void setBase(float _base)
    {
        base = _base;
    }

    float getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }

    // FUNCIONES

    // CALCULAR LA HIPOTENUSA
    float cal_hipotenusa()
    {
        float hipotenusa = sqrt((base * base) + (altura * altura)); // El sqrt permite poner todo dentro de una raiz cuadrada
        return hipotenusa;
    }
    // CALCULAR EL PERIMETRO
    float perimetro()
    {
        float perimetro = altura + base + hipotenusa;
        return perimetro;
    }

    // CALCULAR AREA
    float area()
    {
        float area = (base * altura) / 2;
        return area;
    }
};

int main()
{
    Triangulo triangulo_1(5, 4);
    Triangulo triangulo_2(14, 15);
    // CAMBIAR LA BASE DEL TRIANGULO 1
    triangulo_1.setBase(20);
    // IMPRIMIMOS LOS VALORES DE LA BASE DE LOS TRIANGULOS
    cout << triangulo_1.getBase();
    cout << "\n";
    cout << triangulo_2.getBase();

    //  .  