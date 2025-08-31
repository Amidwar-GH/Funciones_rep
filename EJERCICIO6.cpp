/*Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de 3
argumentos que se transmitan a la funcion cuando sea llamada. Suponga que los 3 argumentos
seran del mismo tipo de datos*/

#include<iostream>
using namespace std;

template<class T>
T maximo(T a , T b, T c){
	T mayor = a;
	if(b>mayor){
		mayor=b;
	}
	if(c>mayor){
		mayor=c;
	}
	return mayor;
}

int main(){
	
	//Para enteros
	cout<<"Maximo (int): "<<maximo(10,25,15)<<endl;
	
	//Para flotantes
	cout<<"Maximo (float): "<<maximo(21.2,14.2,55.35)<<endl;
	
	//Para caracteres
	cout<<"Maximo (char): "<<maximo('a','x','X')<<endl;
	
	//cout<<"EXP: "<<maximo(9999,'X',21.2);  -> No se puede combinar variables 
	
	return 0;
}

