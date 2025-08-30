/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite 
y despliegue el resultado. La funcion debera ser capaz de elevar al cuadrado numeros flotantes.*/


#include<iostream>
using namespace std;

void Pedirdatos();
template<class TIPOD>
void al_cuadrado(TIPOD numero);

float num1;

int main(){
	
	Pedirdatos();
	al_cuadrado(num1);	
	
	return 0;
}

void Pedirdatos(){
	cout<<".:Peticion de datos:.\n";
	cout<<"Digite el numero: ";cin>>num1;
}

template<class TIPOD>
void al_cuadrado(TIPOD numero){
	float cuadrado = numero * numero;
	cout<<"EL numero "<<numero<<" elevado al cuadrado es: "<<cuadrado;
}
