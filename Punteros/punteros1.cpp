#include<iostream>

using namespace std;

int main(){
	int a = 2;
	int b = 3;
	int c = 4;
	
	int* pa;
	int* pb;
	int* pc;
	
	cout<<"Vacio: "<<pa<<endl; // 0x20
	cout<<"Vacio: "<<pb<<endl; // 0
	cout<<"Vacio: "<<pc<<endl; // 0x40ed59
	cout<<endl;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	cout<<"Direccion: "<<pa<<endl;		// 0x6ffdf4
	cout<<"Valor por puntero: "<<*pa<<endl; // 2
	cout<<"Valor por variable: "<<a<<endl;	// 2
	cout<<endl;
	
	cout<<"Direccion: "<<pb<<endl;		// 0x6ffdf0
	cout<<"Valor por puntero: "<<*pb<<endl;	// 3
	cout<<"Valor por variable: "<<b<<endl;	// 3
	cout<<endl;
	
	cout<<"Direccion: "<<pc<<endl;		// 0x6ffdec
	cout<<"Valor por puntero: "<<*pc<<endl;	// 4
	cout<<"Valor por variable: "<<c<<endl;	// 4
	cout<<endl;
	
	return 0;
}
// +1 punto si lees esto
