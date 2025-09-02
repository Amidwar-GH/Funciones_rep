#include<iostream>
using namespace std;

//Prototipo de la funcion
void intercambio (int&,int&);

int main(){
	
	int num1=15, num2=19;
	
	cout<<"El valor del primer numero es: "<<num1<<endl;
	cout<<"El valor del segundo numero es: "<<num2<<endl;
	
	intercambio(num1,num2);
	cout<<"El nuevo valor del primer numero es: "<<num1;
	cout<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2;
	
	return 0;
}

void intercambio( int& num1, int& num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
}
