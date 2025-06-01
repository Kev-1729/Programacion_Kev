// Caso 3: Rellenar varias veces
#include<iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    int n;
    cout<<"¿Cuántas personas desea ingresar?: ";
    cin>>n;
    cin.ignore();

    
    const int MAX = 100;
    Persona personas[MAX];

    
    if (n>MAX){
        cout<<"Límite excedido (máximo "<<MAX<<" personas).\n";
        return 1;
    }

    for(int i=0;i<n;i++){
        cout<<"\nPersona "<<i+1<<":\n";
        
        cout<<"Nombre: ";
        getline(cin,personas[i].nombre);
        
        cout<<"Edad: ";
        cin>>personas[i].edad;
        
        cin.ignore();
    }

    cout<<"\nDatos ingresados:\n";
    for(int i = 0; i < n; i++){
        cout<<"Nombre: "<<personas[i].nombre <<", Edad: " <<personas[i].edad<<endl;
    }

    return 0;
}

