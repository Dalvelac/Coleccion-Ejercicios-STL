https://github.com/Dalvelac/Coleccion-Ejercicios-STL/

# Enunciado de los ejercicios

## Ejercicio 1: Utilización completa de un espacio de nombres Escribe un programa que defina un espacio de nombres "Matemáticas" que contenga dos funciones: suma y resta. Luego, desde la función main, utiliza estas funciones.

## Ejercicio 2: Espacio de nombres repartido entre diferentes archivos Crea un programa donde defines un espacio de nombres "Geometría" en dos archivos de código separados (por ejemplo, "triángulo.cpp" y "círculo.cpp"). Cada archivo debe contener una función (por ejemplo, "calcularArea") correspondiente a la geometría específica. Finalmente, desde la función main en otro archivo, utiliza estas funciones.

## Ejercicio 3: Relación entre clase y espacio de nombres Define una clase "Círculo" dentro de un espacio de nombres "Geometría". Incluye al menos dos métodos en esta clase, como "calcularArea" y "calcularPerímetro". Utiliza esta clase desde la función main.

## Ejercicio 4: Declaración de subespacios de nombres Crea un espacio de nombres "Ciencia" que contenga un subespacio de nombres "Física". En "Física", define una constante para la velocidad de la luz y una función para calcular la energía a partir de la masa (E=mc^2). Utiliza la constante y la función desde la función main.

## Ejercicio 5: Presentación de la STL Escribe un programa que utilice al menos tres diferentes contenedores de la STL (por ejemplo, vector, map y set). Para cada contenedor, realiza al menos una operación (como agregar elementos, eliminar elementos o buscar elementos).


# Contenido del repositorio

## Ejercicio1
- Archivo principal: `Ejercicio1.cpp`

## Ejercicio2
- Archivos incluidos:
  - `Ejercicio2.cpp`
  - `Ejercicio2a.cpp`
  - `Ejercicio2b.cpp`
  - `CMakeLists.txt`

## Ejercicio3
- Archivos incluidos:
  - `Ejercicio3.cpp`
  - `Ejercicio3a.cpp`
  - `CMakeLists.txt`

## Ejercicio4
- Archivos incluidos:
  - `Ejercicio4.cpp`
  - `Ejercicio4a.cpp`
  - `CMakeLists.txt`

## Ejercicio5
- Archivos incluidos:
  - `Ejercicio5.cpp`
  - `Ejercicio5a.cpp`
  - `Ejercicio5a.h`
  - `CMakeLists.txt`

## Instrucciones de compilación

Cada ejercicio incluye un archivo `CMakeLists.txt` que puedes usar para configurar y compilar el proyecto utilizando CMake. Sigue estos pasos:

1. Navega al directorio del ejercicio deseado.
2. Crea un directorio de compilación:
```
bash
mkdir build && cd build
```
Genera los archivos de construcción con CMake:

cmake ..

Compila el proyecto:

    make

Ejecuta el binario generado.


# Ejercicio 1
```
#include <iostream>
namespace Matematicas {
    void suma(int a, int b) { /* Código para sumar */ }
    void resta(int a, int b) { /* Código para restar */ }
}
int main() { /* Llama a las funciones suma y resta */ }
```

Este ejercicio demuestra cómo usar un namespace para organizar funciones matemáticas básicas como suma y resta.

# Ejercicio 2
```
// Archivos separados para áreas de triángulos y círculos.
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
}
```

Este ejercicio divide el cálculo del área de un triángulo y un círculo en archivos separados, destacando la modularidad del código.

# Ejercicio 3
```
// Clase Circulo con métodos para calcular área y perímetro.
namespace Geometria {
    class Circulo {
        double CalcularAreaCirculo(double radio);
        double CalcularPerimetroCirculo(double radio);
    };
}
```

Implementa una clase Circulo con métodos para calcular área y perímetro, usando programación orientada a objetos.

# Ejercicio 4
```
// Cálculo de energía con la fórmula E=mc^2.
namespace Ciencia::Fisica {
    void CalcularEnergia(double masa);
}
```

Este ejercicio calcula la energía de un objeto usando la fórmula de Einstein, mostrando cómo usar namespaces anidados.
# Ejercicio 5
```
// Gestión de inventarios, stock y categorías de productos.
namespace Tienda {
    namespace Inventario { /* Mostrar inventario */ }
    namespace StockManagement { /* Mostrar y obtener stock */ }
    namespace Categorias { /* Mostrar y agregar categorías */ }
}
```
Simula un sistema de gestión de tienda con inventario, stock y categorías, destacando estructuras de datos como vector, map y set.
