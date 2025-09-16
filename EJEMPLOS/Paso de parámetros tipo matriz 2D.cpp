/* Paso de parámetros tipo matriz

Elevar al cuadrado todos los elementos de una matriz */

#include<iostream>
using namespace std;
//Es obligatorio poner las columnas [][3] pero opcional seria el [2][3]
void mostrarMatriz(int arr[][3], int, int);
void calcularCuadrado(int m[][3], int, int);
void mostrarCuadrado(int arr[][3],int ,int);

int main(){
	const int NFILAS=2;
	const int NCOL=3;
	
	int arr[NFILAS][NCOL]={{1,2,3},{2,3,1}};
	
	mostrarMatriz(arr,NFILAS,NCOL);
	calcularCuadrado(arr,NFILAS,NCOL);
	cout<<endl;
	mostrarCuadrado(arr,NFILAS,NCOL);
	
	
	
	return 0;
}

void mostrarMatriz(int arr[][3], int nfilas, int ncolumnas){
	cout<<"\nMostrando matriz original\n";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncolumnas; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void calcularCuadrado(int arr[][3], int nfilas, int ncolumnas){
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncolumnas; j++){
			arr[i][j]=arr[i][j]*arr[i][j];
		}
	}
}

void mostrarCuadrado(int arr[][3], int nfilas, int ncolumnas){
	cout<<"Mostrando la matriz elevada al cuadrado."<<endl;
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncolumnas; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
