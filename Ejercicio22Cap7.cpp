/**
 * Problema 22 
 * 
 * Algunos números primos pueden expresarse en la forma n! + 1. De hecho, se ha conjeturado
 * que existe un número infinito de primos de esa forma. Determinar qué números primos (menores de 2,000)
 * pueden expresarse como n! + 1.
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int isPrime(int number){
    int i;
    for(i = 2; i < number; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int fact(int n){
     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

int main(){
    int number=2, calculated;
    cout << "Numeros primos n! + 1 (menores a 2,000)" << endl;
    while(calculated < 2000){
        calculated = fact(number) + 1;
        if(isPrime(calculated)){
            cout << number << "! + 1 = " << calculated << endl;
        }
        number++;
    }

}