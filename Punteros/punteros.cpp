#include<iostream>

using namespace std;

int main(){
	int casa = 2; // Valor de la variable, en este caso el numero: 2
  
	int* p;		// Creamos un puntero vacio, osea una variable que guarda direccion de memoria, el cual es valor hexadecimal.
  
	cout<<p<<endl; // p como no esta vacio muestra el valor: 0x1
	
	p = &casa; 	// El puntero guarda la dirección de la casa,
	
	cout<<p; // Muestra la direccion de memoria: 0x6ffe14
  
  cout<<*p; // Muesta el valor de la variable porque se le agrego *, en este caso: 2
	return 0;
}
