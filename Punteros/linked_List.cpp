#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* siguiente;
};

void insertarAlFinal(Nodo*& cabeza, int valor) {
    Nodo* nuevo = new Nodo{valor, nullptr};
    if (!cabeza) {
        cabeza = nuevo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente)
            actual = actual->siguiente;
        actual->siguiente = nuevo;
    }
}

void mostrarLista(Nodo* cabeza) {
    while (cabeza) {
        cout << cabeza->valor << " -> ";
        cabeza = cabeza->siguiente;
    }
    cout << "NULL\n";
}

int main() {
    Nodo* lista = nullptr;

    insertarAlFinal(lista, 10);
    insertarAlFinal(lista, 20);
    insertarAlFinal(lista, 30);

    mostrarLista(lista);

    return 0;
}
