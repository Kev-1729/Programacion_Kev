// Practica : Crea una estructura Persona con nombre y edad. Lee los datos e imprímelos.

#include<iostream>
using namespace std;

struct Persona{
	string nombre;
	int edad;
};


struct Carro{
	string marca;
	string placa;
	string modelo;
	string color;
	bool soat;
	int multas;
	float kilometros;
};

struct Producto{
	
	string nombre;
	string precio;
	int stock;
	bool garantia;
	
};

struct Alumno{
	
	string nombre;
	string apellido_paterno;
	string apellido_materno;
	string facultad;
	int grado;
	int cantidad_cursos;
	int codigo_estudiante;
	float promedio_general;
	string escuela;
	
	float nota1;
	float nota2;
	float nota3;
	float promedio;
};




int main(){
	
	Persona persona;
	
	persona.nombre = "Eduardo";
	persona.edad = 20;
	
	cout<<persona.nombre<<endl;
	cout<<persona.edad;
	
	return 0;
}
