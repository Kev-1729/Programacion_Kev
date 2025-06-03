#include <iostream>
using namespace std;

const int MAX_CLIENTES = 3;
const int MAX_CUENTAS = 3;

struct Cuenta {
    string tipo;
    double saldo;
};

struct Cliente {
    string nombre;
    string dni;
    Cuenta cuentas[MAX_CUENTAS];
    int cantidadCuentas;
};

int main() {
    Cliente clientes[MAX_CLIENTES];
    int totalClientes;

    cout << "¿Cuántos clientes desea registrar? (máx " << MAX_CLIENTES << "): ";
    cin >> totalClientes;

    if (totalClientes > MAX_CLIENTES) {
        cout << "Error: excede el número máximo de clientes permitidos." << endl;
        return 1;
    }

    cin.ignore();

    for (int i = 0; i < totalClientes; ++i) {
        cout << "\n--- Cliente #" << (i + 1) << " ---" << endl;

        cout << "Nombre: ";
        getline(cin, clientes[i].nombre);

        cout << "DNI: ";
        getline(cin, clientes[i].dni);

        cout << "¿Cuántas cuentas tiene? (máx " << MAX_CUENTAS << "): ";
        cin >> clientes[i].cantidadCuentas;
        cin.ignore();

        if (clientes[i].cantidadCuentas > MAX_CUENTAS) {
            cout << "Error: excede el máximo de cuentas por cliente." << endl;
            return 1;
        }

        for (int j = 0; j < clientes[i].cantidadCuentas; ++j) {
            cout << "\nCuenta #" << (j + 1) << ":\n";

            cout << "Tipo de cuenta (Ahorros/Corriente): ";
            getline(cin, clientes[i].cuentas[j].tipo);

            cout << "Saldo inicial: ";
            cin >> clientes[i].cuentas[j].saldo;
            cin.ignore();
        }
    }

    cout << "\n=== RESUMEN DE CLIENTES REGISTRADOS ===\n";
    for (int i = 0; i < totalClientes; ++i) {
        cout << "\nCliente #" << (i + 1) << endl;
        cout << "Nombre: " << clientes[i].nombre << endl;
        cout << "DNI: " << clientes[i].dni << endl;
        cout << "Cuentas:\n";
        for (int j = 0; j < clientes[i].cantidadCuentas; ++j) {
            cout << "- Tipo: " << clientes[i].cuentas[j].tipo
                 << " | Saldo: S/ " << clientes[i].cuentas[j].saldo << endl;
        }
    }

    return 0;
}
