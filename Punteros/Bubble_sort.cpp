#include <iostream>
using namespace std;

// Prototipo
void bubbleSortReferencia(int arr[], int size);
void swapReferencia(int &a, int &b);
void mostrarArreglo(int arr[], int size);

int main() {
    int arreglo[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Arreglo original: ";
    mostrarArreglo(arreglo, size);
    
    bubbleSortReferencia(arreglo, size);  // Ordenar usando Bubble Sort con referencias

    cout << "Arreglo ordenado: ";
    mostrarArreglo(arreglo, size);

    return 0;
}

// Función para realizar el Bubble Sort utilizando referencias
void bubbleSortReferencia(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swapReferencia(arr[j], arr[j+1]);  // Intercambiar usando referencia
            }
        }
    }
}

// Función para intercambiar elementos usando referencias
void swapReferencia(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para mostrar los elementos de un arreglo
void mostrarArreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
