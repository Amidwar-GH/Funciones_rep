/*Ejercicio 13: Realiza una funcion que tome como parámetros un vector de numeros
y su tamaño y cambie el signo de los elementos del vector.*/

#include<iostream>
using namespace std;

//Prototipos de funciones
void pedirDatos(int arr[], int tam);

int arr[100], tamaño;

int main(){
	pedirDatos(arr,tamaño);
	
	
	return 0;
}

void pedirDatos(int arr[], int tam){
	for(int i=0; i<tamaño; i++){
		cout<<"Digite un numero: "; cin>>arr[i];
	}
}
