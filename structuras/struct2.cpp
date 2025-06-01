// Practica 2: Usa un array de 5 Estudiante (con nombre, edad y promedio) y muestra los datos ingresados.

#include<iostream>
using namespace std;

struct Estudiante{
	
	string nombre;
	int edad;
	float promedio;
	
};

int main(){
	
	Estudiante alumnos[2];
	
	for(int i=0; i<2; i++){
		
		cout<<"\n["<<i+1<<"]"<<"Nombre: ";
		getline(cin, alumnos[i].nombre);
		
		cout<<"["<<i+1<<"]"<<"Edad: ";
		cin>>alumnos[i].edad;
		
		cout<<"["<<i+1<<"]"<<"Promedio: ";
		cin>>alumnos[i].promedio;
		
		cin.ignore();
	}
	
	for(int i=0; i<2; i++){
		cout<<"| Nombre: "<<alumnos[i].nombre<<"| Edad "<<alumnos[i].edad <<"| Promedio"<<alumnos[i].promedio;
	}

	return 0;
}
