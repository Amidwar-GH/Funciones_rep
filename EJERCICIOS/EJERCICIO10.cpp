//Ejercicio 10

#include<iostream>
using namespace std;

void calc_años(int, int&, in&, int&);

int main(){
	int num, anio=2000, mes=1, dia=1;
	cout<<"Digite un numero de dias: "; cin>>num;
	calc_años(num,anio,mes,dia);
	
	return 0;
}

void calc_años(int, int&anio, in&mes, int&dia){
	anio = num / 365;
	num %= 365;
	mes = num / 30
	dia = num % 30;
}
