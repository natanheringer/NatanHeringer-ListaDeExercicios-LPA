#include <stdio.h>
#include <stdlib.h>


int main (){

    //leia uma velocidade em km/h e converta para m/s 
    //formula: M = K/3.6 

    float kilometroHora, metroSegundos;

    printf("Digite a velocidade em km/h: "); 
    scanf("%f", &kilometroHora);

    metroSegundos = kilometroHora / 3.6;

    printf("A velocidade em m/s eh: %.2f\n", metroSegundos);


}