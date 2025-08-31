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
	
	cambio(numero,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"\n.:Cambio a billetes:.\n";
	cout<<"Dinero: "<<numero<<endl;
	cout<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	
	return 0;
}

void cambio(int numero, int&cien, int&cincuenta, int&veinte, int&diez, int&cinco, int&uno){
	int resto;
	cien = numero / 100;
	resto=numero%100;
	numero=resto;
	
	cincuenta = numero / 50;
	resto = numero % 50;
	numero = resto;
	
	veinte = numero / 20;
	resto = numero % 20;
	numero = resto;
	
	diez = numero / 10;
	resto = numero % 10;
	numero = resto;
	
	cinco = numero / 5;
	resto = numero % 5;
	numero = resto;
	
	uno = numero / 1;
	resto = numero % 1;
	numero = resto;
}
