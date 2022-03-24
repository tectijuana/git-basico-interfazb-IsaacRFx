/**
 * Problema 30
 * 
 * Un número con N dígitos es un número de Armstron si la suma de las potencias N-ésimas de los dígitos que lo forman es igual
 * al propio número. Por ejemplo, 407 es un número de Armstrong pues tiene tres digitos tales que 4^3 + 0^3 + 7^3 = 407. Determinar
 * todos los números de Armstrong con tres dígitos
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num = 100, originalNum, remainder, result = 0;
    cout << "Armstrong Numbers: ";
    
    while(num < 1000){
        result = 0;
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }
        if (result == num)
            cout << num << ", ";
        num++;
    }
}