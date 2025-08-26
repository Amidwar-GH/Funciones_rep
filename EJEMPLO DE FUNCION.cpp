//Ejemplo: encontrar el mayor de dos numeros

#include<iostream>
using namespace std;

//prototipo de funcion

int encontrarMax(int x, int y);

int main(){
	int n1, n2;
	int mayor;
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	mayor = encontrarMax(n1,n2);
	cout<<"El mayor de los dos numeros es: "<<mayor;
	return 0;
}

//definicion de funcion
int encontrarMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}
	else{
		numMax = y;
	}
	
	return numMax;
}
