#include<iostream>
using namespace std;

void PedirDatos();
void Mult(float x, float y);

float num1, num2;

int main(){
	
	PedirDatos();
	Mult(num1, num2);
	
	return 0;
}

void PedirDatos(){
	/* int num1,num2;  -> Esto estaría mal, porque estas variables
	solo viven dentro de esta funcion, la solucion es declararlas como variables GLOBALES*/ 
	
	cout<<"Digite el primer numero: "; cin>>num1;
	cout<<"Digite el segundo numero: "; cin>>num2;
}

void Mult(float x, float y){
	float multiplicacion = x * y;
	cout<<"\n.:RESULTADO:.\n";
	cout<<"La multiplicacion de "<<x<<" * "<<y<<" es: "<<multiplicacion;
}
