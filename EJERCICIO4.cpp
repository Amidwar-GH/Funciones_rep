/* Escriba un programa en c++ que devuelva la parte fraccionaria de cualquier 
numero introducido por el usuario. Por ejemplo, si se introduce el numero 
256.879, debería desplegarse el numero 0.879*/

#include<iostream>
#include<cmath>
using namespace std;

float part(float x);

int main(){
	
	float numero,entera, resultado;
	cout<<"Digite el numero: ";cin>>numero;
	
	entera = part(numero);
	
	resultado = numero - entera;
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}

float part(float x){
	int entero = trunc(x);
	return entero;
}
