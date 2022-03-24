/**
 * Problema 31
 * 
 * Generar e imprimir las primeras quince filas del triángulo de Pascal. Imprimir los resultados en la distribución tabular siguiente:
 * 
 * 1
 * 1    1
 * 1    2   1
 * 1    3   3   1
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int main()
{
    int rows, calc;
    cout << "Rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++){
        calc = 1;
        for (int k = 0; k <= i; k++){
            cout << calc << "\t";
            calc = (calc * (i - k)) / (k + 1);
        }
        cout << endl;
    }
    cout << endl;
}