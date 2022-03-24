/**
 * Problema 29
 * 
 * Algunas parejas de números pares se llaman "números amigables" si la suma de los factores de uno de ellos es igual al otro.
 * Por ejemplo, 220 y 284 son números amigalbes, pues la suma de los factores de 220 es 284 y la de los factores de 284 es 220.
 * Los factores de 220 son: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110.
 * (Suma = 284). Factores de 284: 1, 2, 4, 71, 142 (Suma = 220).
 * (Suma = 220). Encontrar todas las parejas de números amigables menores que 10,000.
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;


// GET FACTORS
int getFactors(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum;
}

// GET AMIGABLE NUMBERS
int main(){
    int iterations = 10000, n1, n2;
    for(int i = 0; i < iterations; i++){
        n1 = i;
        n2 = getFactors(i);
        if(n1 == getFactors(n2) && n1 != n2){
            cout << n1 << " = " << n2 << endl;
        }
    }
}