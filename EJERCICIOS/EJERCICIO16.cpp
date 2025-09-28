/* EJERCICIO 16
Realize una funcion que dada una matriz y un numero de fila de la matriz
devuelva el menor de los elementos almacenados en dicha fila*/

#include<iostream>
using namespace std;

void pedirDatos();
void menor(int arr[][100], int nfilas, int ncol, int xfila);

int arr[100][100], nfilas, ncol, xfila;

int main(){
	//int numMenor;
	pedirDatos();
	menor(arr,nfilas,ncol,xfila);
	
	
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

void menor(int arr[][100], int nfilas, int ncol, int xfila){
	int menor = arr[0][0];
	if((xfila<nfilas) || (xfila>nfilas)){
		cout<<"Numero de fila invalido.";
	}else{
		for(int j=0; j<ncol; j++){
			if(arr[xfila][j]>menor){
				menor=arr[xfila][j];
			}
		}
		cout<<"El numero menor de la fila es: "<<menor;
	}
}
