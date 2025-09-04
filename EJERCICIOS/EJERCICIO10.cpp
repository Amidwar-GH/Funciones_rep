//Ejercicio 10

#include<iostream>
using namespace std;

void calc_anios(int, int&, int&, int&);

int main(){
	int num, anio=2000, mes=1, dia=1;
	cout<<"Digite un numero de dias: "; cin>>num;
	calc_anios(num,anio,mes,dia);
	
	cout<<"La fecha actual es: 01/01/200\n";
	cout<<"La fecha nueva es: "<<dia<<" / "<<mes<<" / "<<anio;
	
	return 0;
}

void calc_anios(int num, int&anio, int&mes, int&dia){
	anio = anio + (num / 365);
	num %= 365;
	
	mes = mes + (num / 30);
	num = num % 30;
	
	dia = dia + num;
}
