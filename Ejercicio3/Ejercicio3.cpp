#include "Ejercicio3a.cpp"
#include <iostream>

int main() {
    Geometria::Circulo circulo;

    std::cout << "El area de un circulo de radio 5 es: " << circulo.CalcularAreaCirculo(5) << std::endl;
    std::cout << "El perimetro de un circulo de radio 5 es: " << circulo.CalcularPerimetroCirculo(5) << std::endl;

    return 0;

}
