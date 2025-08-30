/*Plantillas de funcion*/

/*Ejemplo: Sacar el valor absoluto de un numero*/

#include<iostream>
using namespace std;

//prototipo de funcion
template<class TIPOD>
void mostrarAbs(TIPOD numero);


int main(){
    
    int num1 = -4;
    double num2 = -21.85;
    float num3 = -215.545486;

    mostrarAbs(num1);
    cout<<endl;
    mostrarAbs(num2);
    cout<<endl;
    mostrarAbs(num3);
    
    return 0;
}

template<class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero *= -1;
    }

    cout<<"El valor absoluto del numero es: "<<numero;
}