/**
 * Problema 23
 * 
 * En el siglo XIII, Leonardo Fibonacci, un mercader próspero de Italia, a quien le fascinaban los números,
 * descubrió lo que se conoce ahora como serie númerica de Fibonacci. Cada número de esta serie es la suma de
 * de los dos números que lo preceden inmediatamente. Los primeros números de esa secuencia son:
 * 
 * 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, ...
 * 
 * Encontrar los primeros treinta números en esta secuencia
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 30;
    for(int i = 0; i < n; i++){
        cout << i << "\t = \t" << fibonacci(i) << endl;
    }
}