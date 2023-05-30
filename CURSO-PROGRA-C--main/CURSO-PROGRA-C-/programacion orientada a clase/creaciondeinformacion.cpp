#include <iostream>
#include <string>

class Persona {
public:
    // Constructor para establecer el nombre y apellido
    Persona(std::string nombre, std::string apellido) : nombre_(nombre), apellido_(apellido) {}
    
    // Función miembro para imprimir el nombre completo
    void imprimirNombreCompleto() const {
        std::cout << apellido_ << ", " << nombre_ << std::endl;
    }

private:
    std::string nombre_;
    std::string apellido_;
};

int main() {
    // Crear una persona y luego imprimir su nombre completo
    Persona persona("Juan", "Pérez");
    persona.imprimirNombreCompleto();

    return 0;
}
