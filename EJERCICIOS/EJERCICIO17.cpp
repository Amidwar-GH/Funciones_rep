#include<iostream>
using namespace std;

struct Complejo{
	float real,imaginario;
}z1,z2;

//prototipo de funcion
void pedirDatos();
Complejo suma(Complejo, Complejo);
void mostrar(Complejo x);

int main(){
	
	pedirDatos();
	Complejo x = suma(z1,z2);
	mostrar(x);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite la parte real del primer sumando: ";
	cin>>z1.real;
	cout<<"Digite la parte imaginaria del primer sumando: ";
	cin>>z1.imaginario;
	
	cout<<"\nDigite la parte real del segundo sumando: ";
	cin>>z2.real;
	cout<<"Digite la parte imaginaria del segundo sumando: ";
	cin>>z2.imaginario;
}


Complejo suma(Complejo z1, Complejo z2){
	z1.real=z1.real+z2.real;
	z1.imaginario=z1.imaginario+z2.imaginario;
	return z1;
}

void mostrar(Complejo x){
	cout<<"El resultado es: "<<x.real<<" ; "<<x.imaginario;
}
