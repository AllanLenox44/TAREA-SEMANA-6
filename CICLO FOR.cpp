#include <iostream>  // Librería para entrada y salida (cout, endl)
#include <vector>    // Librería para usar vectores dinámicos

using namespace std; // Evita escribir "std::" antes de cada función

int main() {
    int filas = 3, columnas = 4; // Define el tamaño de la matriz

    // Crea la matriz de 3x4 (un vector de vectores) llena de ceros
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    for (int i = 0; i < filas; i++) { // Recorre cada fila (de 0 a 2)
        for (int j = 0; j < columnas; j++) { // Recorre cada columna (de 0 a 3)
            matriz[i][j] = (i + 1) * (j + 1); // Guarda el resultado de la multiplicación
        } // Fin bucle columnas
    } // Fin bucle filas

    for (const auto& fila : matriz) { // Recorre la matriz fila por fila
        for (int valor : fila) { // Recorre cada número dentro de la fila actual
            cout << valor << "\t"; // Imprime el número y un espacio de tabulación
        } // Fin de impresión de la fila actual
        cout << endl; // Hace un salto de línea al terminar la fila
    } // Fin bucle de la matriz

    return 0; // Indica que el programa terminó con éxito
}