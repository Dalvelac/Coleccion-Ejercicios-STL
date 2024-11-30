#include "Ejercicio5a.h"
#include <iostream>

using namespace std;

namespace Tienda {

    namespace Inventario {
        vector<int> v = {1, 4, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

        void mostrarInventario() {
            cout << "Inventario: ";
            for (int producto : v) {
                cout << producto << " ";
            }
            cout << endl;
        }
    }

    namespace StockManagement {
        map<string, int> stock = {
            {"Papas", 10}, {"Manzanas", 5}, {"Peras", 3}, {"Naranjas", 7},
            {"Platanos", 2}, {"Uvas", 4}, {"Tomates", 6}, {"Zanahorias", 8},
            {"Lechuga", 9}, {"Espinaca", 11}, {"Carne", 12}, {"Pollo", 13},
            {"Pescado", 14}, {"CocaCola", 15}, {"Sprite", 16}, {"Fanta", 17}, {"Agua", 18}
        };

        void mostrarStock() {
            for (const auto& item : stock) {
                cout << item.first << " => " << item.second << endl;
            }
        }

        int obtenerStock(const string& producto) {
            if (stock.find(producto) != stock.end()) {
                return stock[producto];
            }
            return -1;
        }
    }

    namespace Categorias {
        set<string> categorias = {"Frutas", "Verduras", "Carnes", "Lacteos", "Bebidas"};

        void mostrarCategorias() {
            cout << "Categorias disponibles:" << endl;
            for (const string& categoria : categorias) {
                cout << "- " << categoria << endl;
            }
        }

        void agregarCategoria(const string& categoria) {
            if (categorias.insert(categoria).second) {
                cout << "Categoria '" << categoria << "' agregada correctamente." << endl;
            } else {
                cout << "La categoria '" << categoria << "' ya existe." << endl;
            }
        }
    }
}
