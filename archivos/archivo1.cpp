#include <fstream>
using namespace std;

int main() {
	
    ofstream archivo("datos.txt");	// Creando archivo
    
    archivo << "Hola mundo\n";
    archivo << "Esto es C++\n";
    
    archivo.close();	// Cerrando archivo
    return 0;
}
