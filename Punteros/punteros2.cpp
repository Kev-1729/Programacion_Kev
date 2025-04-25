	/*
		int* direccion --> vacia;
		& asignar --> direccion;
		*direccion --> variable;
    void nombre(int& a) --> pasa direccion para actuar con el valor dentro
    nombre(&a) --> pasa la direccion de memoria
	*/

#include<iostream>
using namespace std;

// Función que recibe una referencia a 'a' y modifica su valor directamente
void sumar_referencia(int& a);

// Función que recibe un puntero a 'b' y modifica su valor accediendo a la dirección de memoria
void sumar_puntero(int* b);

// Función que recibe una copia del valor 'c' y retorna el resultado sin modificar el original directamente
int sumar(int c);

int main(){
	
	int a = 5;
	int b = 6;
	int c = 7;
	
	// Pasamos 'a' por referencia, por lo que su valor original se modifica directamente
	sumar_referencia(a);
	cout << a << endl; // Imprime 15

	// Pasamos la dirección de 'b' usando '&b', para que su valor pueda ser modificado a través del puntero
	sumar_puntero(&b);
	cout << b << endl; // Imprime 16
	
	// Pasamos 'c' por valor, por lo que su valor original no cambia a menos que lo reasignemos
	c = sumar(c);
	cout << c << endl; // Imprime 17

	return 0;
}

// Función que modifica directamente el valor de 'a' mediante referencia
void sumar_referencia(int& a){
	
	a = a + 10; // Se accede y modifica directamente el valor original de 'a'
	
}

// Función que modifica directamente el valor de 'b' mediante puntero
void sumar_puntero(int* b){ 

	*b = *b + 10; // Se accede y modifica el valor original usando la dirección de memoria
	
}

// Función que modifica una **copia local** de 'c' y retorna el resultado
int sumar(int c){ 

	c = c + 10; // Solo se modifica la copia local dentro de la función
	return c;   // Se retorna el nuevo valor, pero la variable original no cambia si no se reasigna
	
}
