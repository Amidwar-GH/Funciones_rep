//Devolver valores multiples

#include<iostream>
using namespace std;

void Calcular(int, int, int&, int&);

int main(){
	int n1,n2,suma,producto;
	
	cout<<"Digite el primer numero: "; cin>>n1;
	cout<<"Digite el segundo numero: "; cin>>n2;
	
	Calcular(n1,n2,suma,producto);
	
	cout<<"El valor de la suma es: "<<suma;
	cout<<endl;
	cout<<"El valor del producto es: "<<producto;
	
	return 0;
}

void Calcular(int n1, int n2, int&suma, int&producto){
	suma = n1+n2;
	producto = n1*n2;
}
