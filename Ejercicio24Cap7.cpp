/**
 * Problema 24
 * 
 * Supóngase que se juntan dos conejos, macho y hembra, para cruzarse. Supóngase que una pareja de conejos procrea otra cada mes,
 * comenzando dos meses después de su propio nacimiento y que cada pareja producida así consiste de un macho y una hembra.
 * ¿Cuántos conejos habrá al cabo de 24 meses?
 * 
 */

//Autor         @IsaacRFx
//Fecha         23 Mar 2022

#include <iostream>
using namespace std;

int getConejos(int months){
    if(months == 0) return 0;
    if(months == 1) return 1;
    return getConejos(months-1) + getConejos(months-2);
}

int main(){
    int months = 24;
        cout << "Conejos al cabo de 24 meses: " << getConejos(24) << endl;
}