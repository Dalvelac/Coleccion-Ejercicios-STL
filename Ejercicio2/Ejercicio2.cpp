#include "Ejercicio2a.cpp"
#include "Ejercicio2b.cpp"
#include <iostream>

int main () {

    std::cout << "El area de un triangulo de base 5 y altura 3 es: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "El area de un circulo de radio 5 es: " << Geometria::calcularAreaCirculo(5) << std::endl;

    return 0;

}