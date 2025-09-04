/*Ejercicio 9: Escriba una funcion llamada tiempo() que tenga parámetros en numero entero 
llamada totalseg y tres parámetros de referencia enteros nombrados horas, min y seg. La funcion 
es convertir el numero de segundos transmitidos en un número equivalente de horas, minutos y segundos*/

#include<iostream>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	int totalSeg,horas,min,seg;
	
	cout<<"Digite el numero total de segundos: "; cin>>totalSeg;
	tiempo(totalSeg,horas,min,seg);
	
	cout<<"\n.:Tiempo equivalente a la cantidad de segundos digitados:.\n";
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	return 0;
}

void tiempo(int totalSeg, int&horas, int&min, int&seg){
	horas = totalSeg / 3600;
	totalSeg %= 3600;
	min = totalSeg / 60;
	seg = totalSeg % 60;
}
