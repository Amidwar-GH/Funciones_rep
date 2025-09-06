/*Realize una funcion que tome como parámetros un vector y su tamaño y diga si el vector esta ordenado
crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento
del vector es mayor o igual que el elemento que le precede en el vector*/

#include<iostream>
using namespace std;

//Declarando el prototipo de funcion
void orden(int arr[], int);

bool bandera = false;
int main(){
	const int TAM=5;
	int vector[TAM]={2,1,4,3,5}; // <- Vector de numeros desordenado
	//int vector[TAM]={1,2,3,4,5}; <- Vector de numeros ordenado
	
	orden(vector,TAM); 
	if(bandera == true){
		cout<<"El vector de numeros esta desordenado";
	}
	if(bandera == false){
		cout<<"El vector de numeros esta ordenado";
	}
	
	return 0;
}

void orden(int arr[], int tam){
	for(int i=0; i<tam-1; i++){
		if(arr[i] > arr[i+1]){
			bandera = true;
			break;
		}
	}
}
