/* EJERCICIO 16
Realize una funcion que dada una matriz y un numero de fila de la matriz
devuelva el menor de los elementos almacenados en dicha fila*/

#include<iostream>
using namespace std;

void pedirDatos();


int arr[100][100], nfilas, ncol, xfila;

int main(){
	
	pedirDatos();
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: "; cin>>nfilas;
	cout<<"Digite el numero de columnas: "; cin>>ncol;
	cout<<"Digite la fila para encontrar el menor numero: "; cin>>xfila;
	
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; 
			cin>>arr[i][j];
		}
	}
}
