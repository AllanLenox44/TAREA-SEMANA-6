#include <iostream> 
using namespace std;

int main() {

	int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 };
	int clave;
	bool encontrado = false;

	cout << "Ingresa un numero a buscar:";
	cin >> clave;

	int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

	for (int i = 0; i < tamano; i++) {

		if (arreglo[i] == clave) {
			cout << "Numero encontrado en la posicion: " << i << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "Numero no encontrado en el array" << endl;
	}

	return 0;
}