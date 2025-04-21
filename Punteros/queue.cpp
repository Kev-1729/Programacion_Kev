#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* siguiente;
};

void encolar(Nodo*& frente, Nodo*& fin, int valor) {
    Nodo* nuevo = new Nodo{valor, nullptr};
    if (!frente) {
        frente = fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }
}

void desencolar(Nodo*& frente) {
    if (frente) {
        Nodo* temp = frente;
        frente = frente->siguiente;
        delete temp;
    }
}

void mostrarCola(Nodo* frente) {
    while (frente) {
        cout << frente->valor << " <- ";
        frente = frente->siguiente;
    }
    cout << "NULL\n";
}

int main() {
    Nodo* frente = nullptr;
    Nodo* fin = nullptr;

    encolar(frente, fin, 1);
    encolar(frente, fin, 2);
    encolar(frente, fin, 3);

    cout << "Contenido de la cola:\n";
    mostrarCola(frente);

    desencolar(frente);
    cout << "Después de hacer dequeue:\n";
    mostrarCola(frente);

    return 0;
}
