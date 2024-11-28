#include <cmath>

namespace Geometria {

    class  Circulo {

    public:
        double CalcularAreaCirculo(double radio) { // A = πr^2
            return M_PI * pow(radio, 2);
        }

        double CalcularPerimetroCirculo (double radio) { // P = 2πr
            return 2 * M_PI * radio;
        };

    private:
        double radio;
    };

}