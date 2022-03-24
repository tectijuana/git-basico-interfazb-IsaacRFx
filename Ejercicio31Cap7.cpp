/**
 * Problema 31
 *
 * El antiguo matemático griego Diofante se considera uno de los genios precursores de la teoría de los números. Sin embargo
 * soluciones de Diofante a ecuaciones algebraicas involucraron sólo números racionales positivos y, de hecho, el uso moderno
 * limita las ecuaciones diofantinas a enteros positivos. Una ecuación real, encontrada en los escritos de Diofante, establece:
 * "Encontrar tres números tales que su suma sea un cuadrado y la suma de dos cualesquiera de ellos también lo sea". Determinar
 * tres números así.
 *
 */

// Autor         @IsaacRFx
// Fecha         23 Mar 2022

#include <iostream>
using namespace std;

bool isSquare(int number){
    int squareRoot = sqrt(number);
    if (squareRoot * squareRoot == number){
        return true;
    }
    return false;
}

int main()
{
    for (int i = 1; i < 100; i++){
        for (int j = 1; j < 100; j++){
            for (int k = 1; k < 100; k++){
                bool isSquared = isSquare(i + j + k);
                if (isSquared){
                    if ((isSquare(i + j)) && (isSquare(i + k)) && (isSquare(k + j))){
                        cout << "i: " << i << " j: " << j << " k: " << k << endl;
                    }
                }
            }
        }
    }
}
