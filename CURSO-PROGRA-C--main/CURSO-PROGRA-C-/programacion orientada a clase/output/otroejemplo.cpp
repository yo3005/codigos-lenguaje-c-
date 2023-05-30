#include<iostream>
#include <iostream>

int main() {
  // Crear una nueva persona y establecer sus datos
  persona persona1("Juan", 25, "Calle 123");
  
  // Acceder y mostrar los datos de la persona
  std::cout << "Nombre: " << persona1.getNombre() << std::endl;
  std::cout << "Edad: " << persona1.getEdad() << std::endl;
  std::cout << "Dirección: " << persona1.getDireccion() << std::endl;
  
  // Modificar los datos de la persona
  persona1.setNombre("Pedro");
  persona1.setEdad(30);
  persona1.setDireccion("Avenida 456");
  
  // Acceder y mostrar los datos de la persona modificados
  std::cout << "Nombre: " << persona1.getNombre() << std::endl;
  std::cout << "Edad: " << persona1.getEdad() << std::endl;
  std::cout << "Dirección: " << persona1.getDireccion() << std::endl;
  
  return 0;
}
