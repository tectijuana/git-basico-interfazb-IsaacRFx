/**
 * Problema 27
 * 
 * Un número perfecto es un entero tal que la suma de sus divisores propios es igual a él mismo.
 * Por ejemplo, 6 es un número perfecto pues 1 + 2 + 3 = 6. Ver cuántos números perfectos pueden encontrarse.
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int getPerfectNumbers(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int number = 1, perfectNumbers = 0, numberChecked;
    cout << "Perfect Numbers:";
    while(number < 10000){
        numberChecked = getPerfectNumbers(number);
        if(numberChecked == number){
            cout << ", " << number;
            perfectNumbers++;
        }
        number++;
    }
    cout << endl;
    cout << "Quantity: " << perfectNumbers << endl;
}