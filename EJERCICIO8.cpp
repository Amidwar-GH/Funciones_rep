/*Ejercicio 8: Escriba una funcion nombrada cambio() que tenga un parámetro en numero
entero y seis parametros de referencia en numero entero nombrados cien, cincuenta,
veinte, diez, cinco y uno, respectivamente. La funcion tiene que considerar el valor
entero transmitido como una cantidad en dolares y convertir el valor en el numero menor 
de billetes equivalentes*/

#include<iostream>
using namespace std;

//Prototipo de la funcion
void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
	int numero;
	int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	
	cout<<"Digite la cantidad de dinero: "; cin>>numero;
	
	
	return 0;
}
