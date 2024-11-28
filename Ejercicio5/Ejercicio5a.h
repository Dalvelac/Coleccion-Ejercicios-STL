#ifndef EJERCICIO5A_H
#define EJERCICIO5A_H

#include <vector>
#include <map>
#include <set>
#include <string>

namespace Tienda {

    namespace Inventario {
        void mostrarInventario();
    }

    namespace StockManagement {
        void mostrarStock();
        int obtenerStock(const std::string& producto);
    }

    namespace Categorias {
        void mostrarCategorias();
        void agregarCategoria(const std::string& categoria);
    }
}

#endif // EJERCICIO5A_H
