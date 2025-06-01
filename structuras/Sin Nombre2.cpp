// Caso 2: Caso de ingreso de datos
#include <iostream>
using namespace std;

struct Pers	ona {
    string nombre;
    int edad;
};

int main() {
    Persona p;

    cout << "Ingrese nombre: ";
    getline(cin, p.nombre);

    cout << "Ingrese edad: ";
    cin >> p.edad;

    cout << "\nNombre: " << p.nombre << ", Edad: " << p.edad << endl;
    return 0;
}

