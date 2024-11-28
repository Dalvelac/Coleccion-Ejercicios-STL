#include <cmath>

namespace Geometria {

    class  Circulo {

    public:
        double CalcularAreaCirculo(double radio) {
            return M_PI * pow(radio, 2);
        }

        double CalcularPerimetroCirculo (double radio) {
            return 2 * M_PI * radio;
        };

    private:
        double radio;
    };

}