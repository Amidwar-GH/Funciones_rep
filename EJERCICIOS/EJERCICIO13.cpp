/*Ejercicio 13: Realiza una funcion que tome como par�metros un vector de numeros
y su tama�o y cambie el signo de los elementos del vector.*/

#include<iostream>
using namespace std;

//Prototipos de funciones
void pedirDatos(int arr[], int tam);

int arr[100], tama�o;

int main(){
	pedirDatos(arr,tama�o);
	
	
	return 0;
}

void pedirDatos(int arr[], int tam){
	for(int i=0; i<tama�o; i++){
		cout<<"Digite un numero: "; cin>>arr[i];
	}
}
