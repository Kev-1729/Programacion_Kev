// Nota: Este ejemplo muestra cómo usar punteros para modificar directamente los valores
// de dos variables desde una función. Esto permite ahorrar memoria y tiempo de ejecución
// al no tener que devolver valores ni trabajar con copias.

#include <iostream>
using namespace std;

// Función que intercambia los valores de dos variables usando punteros
void intercambiar(int* a, int* b) {
    int temp = *a;  // Guardamos el valor al que apunta 'a' en una variable temporal
    *a = *b;        // Asignamos al valor de 'a' el valor al que apunta 'b'
    *b = temp;      // Asignamos al valor de 'b' el valor original de 'a'
}

int main() {
    int x = 5, y = 10; // Dos variables enteras con valores distintos
    
    cout << "Antes del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Pasamos las direcciones de memoria de x e y a la función
    intercambiar(&x, &y); // &x y &y obtienen las direcciones de memoria de las variables

    cout << "Después del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
