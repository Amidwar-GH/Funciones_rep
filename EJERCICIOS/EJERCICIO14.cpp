//Realiza una funcion que tome como par�metros un vector de enteros y su tama�o e imprima
//un vector con los elementos impares del vector recibido;

#include<iostream>
using namespace std;

//Prototipos de funcion
void imp(int arr[], int n);

int main(){
	int n;
	cout<<"Digite el tama�o del arreglo: "; cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>arr[i];
	}
	
	cout<<endl;
	
	imp(arr,n);
	
	return 0; 
}

void imp(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i] % 2 != 0){
			cout<<arr[i]<<" ";
		}
	}
}
