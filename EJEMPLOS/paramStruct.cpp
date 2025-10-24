#include<iostream>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
}p1;

void pedirDatos();
void mostrarDatos(persona);



int main(){
	pedirDatos();	
	mostrarDatos(p1);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>p1.edad;
}

void mostrarDatos(persona p){
	cout<<"\n\nNOMBRE: "<<p.nombre<<endl;
	cout<<"EDAD: "<<p.edad<<endl;
}
