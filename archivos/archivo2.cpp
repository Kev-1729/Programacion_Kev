#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    string linea;
    
    while (getline(archivo, linea)) { // lee el archivo y lo guarda en linea
        cout << linea << endl;
    }
    
    archivo.close();
    return 0;
}
