#include <iostream>

namespace Matematicas {

    void suma (int a, int b) {
        std::cout << "La suma de " << a << " + " << b << " es: " << a + b << std::endl;
    }

    void resta (int a, int b) {
        std::cout << "La resta de " << a << " - " << b << " es: " << a - b << std::endl;
    }

}


int main() {
    //Llamamos a el namespace de matematicas, y usamos las funciones de suma y resta dentro de este namespace.
    Matematicas::suma (5, 3);
    Matematicas::resta (5, 3);

    return 0;
}