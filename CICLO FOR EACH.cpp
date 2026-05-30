#include <iostream>  // Librería para entrada y salida (cout, endl)
#include <vector>    // Librería para usar vectores dinámicos

using namespace std; // Evita escribir "std::" antes de cada función

int main() {
    // Crea un vector de una dimensión con 5 números iniciales
    vector<int> numeros = { 1, 2, 3, 4, 5 };

    cout << "Elementos del vector: "; // Imprime un texto inicial
    for (const auto& num : numeros) {  // Recorre el vector en modo "solo lectura"
        cout << num << " ";            // Imprime cada número con un espacio
    } // Fin bucle de impresión
    cout << endl;                      // Hace un salto de línea

    for (auto& num : numeros) {        // Recorre el vector usando referencias (&) para poder modificarlo
        num += 1;                      // Suma 1 al valor de la posición actual
    } // Fin bucle de modificación

    cout << "Elementos modificados: "; // Imprime el texto de resultado
    for (const auto& num : numeros) {  // Recorre de nuevo el vector en modo "solo lectura"
        cout << num << " ";            // Imprime cada número modificado
    } // Fin bucle de impresión modificada
    cout << endl;                      // Hace un salto de línea final

    return 0; // Indica que el programa terminó con éxito
}