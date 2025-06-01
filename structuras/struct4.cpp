// Practica 3: Ingresa los datos de n personas y muestra quién es mayor (nombre y edad).

#include<iostream>
using namespace std;

struct Persona{
	string nombre;
	int edad;
};

int main(){
	int n, mayor, p=0;
	cout<<"Cantidad de personas: ";
	cin>>n;
	cin.ignore();
	
	Persona personas[n];
	
	for(int i=0;i<n;i++){
		
		cout<<"\n"<<i+1<<". Nombre: ";
		getline(cin, personas[i].nombre);
		
		cout<<i+1<<". Edad: ";
		cin>>personas[i].edad;
		
		cin.ignore();
	}
	
	mayor = personas[0].edad;
	
	for(int i=0;i<n;i++){
		if (personas[i].edad > mayor){
			mayor = personas[i].edad;
			p = i;
			
			cout<<p;
		}
	}
	
	cout<<"\n La persona con mayor edad es: "<<personas[p].nombre<<" con "<<personas[p].edad<<" anios.";
	
	return 0;
}
