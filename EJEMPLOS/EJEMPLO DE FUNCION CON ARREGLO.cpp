/*Paso de parametros de tipo vector

Parametros de la funcion :
	nombre de la funcion(nombreArreglo, tamañoArreglo)
*/

//Cuadrado de los elementos de un vector

#include<iostream>
using namespace std;

void cuadrado(int vec[], int);

int main(){
	const int TAM=5;
	int vec[TAM] = {1,2,3,4,5};
	
	
	
	
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] = vec[i] * vec[i];
	}
	
}
