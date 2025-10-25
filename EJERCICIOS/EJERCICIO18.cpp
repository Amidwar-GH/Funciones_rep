/*Escriba una funcion en C++ llamada mayor() que devuelva la fecha mas reciente
de cualquier par de fechas que se le transmitan. Por ejemplo, si se le transmiten
las fechas 10/9/2005 y 11/3/2015 a mayor() será devuelta la segunda fecha*/

#include<iostream>
using namespace std;

struct Fecha{
	int dia,mes,anio;
}fech1,fech2;


void pedirDatos();
Fecha mayor(Fecha, Fecha);

int main(){
	pedirDatos();
	Fecha May = mayor(fech1, fech2);
	cout<<May.dia<<"/"<<May.mes<<"/"<<May.anio;
	
	return 0;
}

void pedirDatos(){
	cout<<"1. Digite el dia: ";
	cin>>fech1.dia;
	cout<<"1. Digite el mes: ";
	cin>>fech1.mes;
	cout<<"1. Digite el anio: ";
	cin>>fech1.anio;
	
	cout<<"\n2. Digite el dia: ";
	cin>>fech2.dia;
	cout<<"2. Digite el mes: ";
	cin>>fech2.mes;
	cout<<"2. Digite el anio: ";
	cin>>fech2.anio;
}

Fecha mayor(Fecha fech1, Fecha fech2){
	Fecha mayor;
	//menor=fech1;
	
	if(fech1.anio>fech2.anio){
		mayor=fech1;
	}else if(fech1.anio<fech2.anio){
		mayor=fech2;
	}else if(fech1.mes>fech2.mes){
		mayor=fech1;
	}else if(fech1.mes<fech2.mes){
		mayor=fech2;
	}else if(fech1.dia>fech2.dia){
		mayor=fech1;
	}else{
		mayor=fech2;
	}
	
	
	return mayor;
}
