#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* siguiente;
};

void push(Nodo*& cima, int valor) {
    Nodo* nuevo = new Nodo{valor, cima};
    cima = nuevo;
}

void pop(Nodo*& cima) {
    if (cima) {
        Nodo* temp = cima;
        cima = cima->siguiente;
        delete temp;
    }
}

void mostrarPila(Nodo* cima) {
    while (cima) {
        cout << cima->valor << endl;
        cima = cima->siguiente;
    }
}

int main() {
    Nodo* pila = nullptr;

    push(pila, 5);
    push(pila, 10);
    push(pila, 15);

    cout << "Contenido de la pila:\n";
    mostrarPila(pila);

    pop(pila);
    cout << "Después de hacer pop:\n";
    mostrarPila(pila);

    return 0;
}
