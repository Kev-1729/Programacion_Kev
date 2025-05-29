// Practica 3: Ingresa los datos de n personas y muestra quién es mayor.

#include<iostream>
using namespace std;

struct Persona{
	int edad;
};

int main(){
	int n, mayor;
	cout<<"Cantidad de personas: ";
	cin>>n;
	Persona personas[n];
	
	for(int i=0;i<n;i++){

		cout<<i+1<<". Edad: ";
		cin>>personas[i].edad;
		
	}
	
	mayor = personas[0].edad;
	
	for(int i=0;i<n;i++){
		if (personas[i].edad > mayor){
			mayor = personas[i].edad;
		}
	}
	
	cout<<"\nLa mayor edad es: "<<mayor;
	
	return 0;
}
