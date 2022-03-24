/**
 * Problema 25
 * 
 * Encontrar el primer término de la serie Fibonacci mayor que 10,000. Sólo este término se imprimirá en el programa
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
    int fibonacciValue, i = 0;
    do{
        fibonacciValue = fibonacci(i);
        if (fibonacciValue > 10000){
            cout << "El primer termino de la serie Fibonacci mayor que 10,000 es: " << fibonacciValue << endl;
            break;
        }
        i++;
    }while(fibonacciValue < 10000);
}