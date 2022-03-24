/**
 * Problema 28
 * 
 * Determinar si un número dado es perfecto, abundante o deficiente. Un número es perfecto cuando la suma de sus divisores es igual a él;
 * es abundanete cuando esa suma lo excede y es deficiente cuando esa suma es menor que él.
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int evaluateNumber(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int number = 1, numberChecked;
    
    cout << "Enter a number: ";
    cin >> number;

    numberChecked = evaluateNumber(number);
    if(numberChecked == number){
        cout << number << " is a perfect number";
    }else if(numberChecked > number){
        cout << number << " is an abundant number";
    }
    else if (numberChecked < number){
        cout << number << " is a deficient number";
    }
    number++;
}