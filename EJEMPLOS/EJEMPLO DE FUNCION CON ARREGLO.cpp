/*Paso de parametros de tipo vector

Parametros de la funcion :
	nombre de la funcion(nombreArreglo, tamañoArreglo)
*/

//Cuadrado de los elementos de un vector

#include<iostream>
using namespace std;

//prototipos de funcion
void cuadrado(int vec[], int);
void Mostrar(int arr[], int );

int main(){
	const int TAM=5;
	int vec[TAM] = {1,2,3,4,5};
	
	//Llamado de la funcion
	cuadrado(vec,TAM); // <- No es necesario poner vec[], omitir los corchetes
	
	//Mostrando los elementos de la funcion
	Mostrar(vec, TAM);
	
	return 0;
}

//Funcion para elevar los elementos del vector al cuadrado
void cuadrado(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] = vec[i] * vec[i];
	}
	
}

//Funcion para mostrar los elementos del arreglo
void Mostrar(int arr[], int tam){
	for(int i=0; i<tam; i++){
		cout<<arr[i]<<" ";
	}
}
