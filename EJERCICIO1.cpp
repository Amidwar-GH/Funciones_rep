#include<iostream>
using namespace std;

void PedirDatos();
void Mult();

int num1, num2;

int main(){
	
	PedirDatos();
	
	
	return 0;
}

void PedirDatos(){
	/* int num1,num2;  -> Esto estaría mal, porque estas variables
	solo viven dentro de esta funcion, la solucion es declararlas como variables GLOBALES*/ 
	
	cout<<"Digite el primer numero: "; cin>>num1;
	cout<<"Digite el segundo numero: "; cin>>num2;
}
