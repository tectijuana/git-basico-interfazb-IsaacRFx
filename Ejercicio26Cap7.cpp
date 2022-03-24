/**
 * Problema 26
 * 
 * Imprimir los primeros cincuenta números de Lucas. Los números de Lucas son similares a los de Fibonacci,
 * aunque la secuencia principia diferentemente: 1, 3, 4, 7, 11, 18, 29, 47, 76,...
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int lucas(int n){
    if(n == 0) return 2;
    if(n == 1) return 1;
    return lucas(n-1) + lucas(n-2);
}

int main(){
    int n = 50;
    for(int i = 0; i < n; i++){
        cout << i << "\t = \t" << lucas(i) << endl;
    }
}