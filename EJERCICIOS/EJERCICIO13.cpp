/*Ejercicio 13: Realiza una funcion que tome como par�metros un vector de numeros
y su tama�o y cambie el signo de los elementos del vector.*/

#include<iostream>
using namespace std;

//Prototipos de funciones
void pedirDatos();
void cambiarSigno(int arr[], int tam);

int arr[100], tam; //No declarar variables de caracteres especiales, aqui declar� como tama�o

int main(){
	pedirDatos();
	cambiarSigno(arr,tam);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tama�o del arreglo: ";cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<"Digite un numero: "; cin>>arr[i];
	}
}

void cambiarSigno(int arr[], int tam){
	for(int i=0; i<tam; i++){
		if(arr[i]<0){
			arr[i] = arr[i]*-1;
		}
	}
}
