#include<iostream>
using namespace std;

void datos();
void funpot(int numero, int exp);

int numero ,exp;

int main(){
	
	datos();
	funpot(numero,exp);
	
	return 0;
}

void datos(){
	cout<<"Digite el numero: "; cin>>numero;
	cout<<"Digite el exponente: "; cin>>exp;
}

void funpot(int numero, int exp){
	
	long resultado=1;
	for(int i=0; i<exp; i++){
		resultado *= numero;
	}
	
	cout<<"El resultado es: "<<resultado;
}
