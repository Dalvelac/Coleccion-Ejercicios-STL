#include <cmath>
#include <iostream>

namespace Ciencia {

    namespace Fisica {

        const int Luz = 299792458;

        void CalcularEnergia (double masa) {  // E = mc^2
            double energia = masa * pow(Luz, 2);
            std::cout << "La energia es: " << energia << std::endl;
        }

    }

}