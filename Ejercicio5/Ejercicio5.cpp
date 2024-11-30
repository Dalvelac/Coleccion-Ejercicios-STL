#include "Ejercicio5a.h"
#include <iostream>

using namespace std;

int main() {
    // Muestra el inventario
    Tienda::Inventario::mostrarInventario();

    // Muestra el stock
    cout << "\nStock actual:" << endl;
    Tienda::StockManagement::mostrarStock();

    // Muestra las categorías
    cout << "\nCategorias:" << endl;
    Tienda::Categorias::mostrarCategorias();

    // Agregar una nueva categoría
    cout << "\nIntentando agregar nueva categoria: 'Snacks'" << endl;
    Tienda::Categorias::agregarCategoria("Snacks");

    // Intentar agregar una categoría existente
    cout << "\nIntentando agregar categoria existente: 'Frutas'" << endl;
    Tienda::Categorias::agregarCategoria("Frutas");

    return 0;
}
