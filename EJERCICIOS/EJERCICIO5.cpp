#include<iostream>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD x);

int main(){
	int d1 = 1;
	double d2 = 25.154;
	float d3 = 124.21589;
	char d4 = 'b';
	
	despliegue(d1);
	cout<<endl;
	despliegue(d2);
	cout<<endl;
	despliegue(d3);
	cout<<endl;
	despliegue(d4);
	cout<<endl;
	
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD x){
	cout<<"El dato es: "<<x<<endl;
}
