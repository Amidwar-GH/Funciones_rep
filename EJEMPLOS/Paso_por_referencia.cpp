//Paso de parametros por referencia

#include<iostream>
using namespace std;

//Escribimos el prototipo de la funcion;
void ValNuevo(int&, int&);

int main(){
	
	int n1,n2;
	cout<<"Digite el primer numero: "; cin>>n1;
	cout<<"Digite el segundo numero: "; cin>>n2;
	
	//Llamada de la funcion ValNuevo
	ValNuevo(n1,n2);
	cout<<endl;
	cout<<"EL nuevo valor del primer numero es: "<<n1<<endl;
	cout<<"EL nuevo valor del segundo numero es: "<<n2<<endl;
	return 0;
}

void ValNuevo(int& xnum, int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl; // <- Aca estamos imprimiendo el valor inicial
	cout<<"El valor del segundo numero es: "<<ynum<<endl; // <- Aca estamos imprimiendo el valor inicial
	
	xnum=48; // <- aca estamos alterando la direccion de memoria de xnum
	ynum=24; // <- aca estamos alterando la direccion de memoria de ynum
}
