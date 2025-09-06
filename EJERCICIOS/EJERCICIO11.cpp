/*Realice una funcion que tome como parámetros un vector de numeros enteros 
y devuelva la suma de sus elementos*/ 

#include<iostream>
using namespace std;

//Prototipo de la funcion
void suma(int arr[], int); 

int sumaArr=0; //<- Declarando una variable global 

int main(){
	const int TAM=7;
	int vector[TAM]={5,8,9,7,4,5,3};
	
	suma(vector,TAM);
	cout<<"La suma del vector es: "<<sumaArr;
	
	return 0;
}

//Desarrollando la funcion de la suma del arreglo
void suma(int arr[], int tam){
	//int sumaArr=0;
	for(int i=0; i<tam; i++){
		sumaArr += arr[i]; 
	}
}
