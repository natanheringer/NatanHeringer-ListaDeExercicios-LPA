#include <stdio.h>
#include <stdlib.h>


int main (){


    //conversor de celsius para fahrenheit
    //formula: F = C * (9.0/5.0) + 32.0 

    float celsius, fahrenheit; 

    printf("Qual é a temperatura de hoje em celsius? ");
    scanf("%f", &celsius); 

    fahrenheit = celsius * (9.0/5.0) + 32.0;

    printf("A temperatura em fahrenheit eh: %.2f\n", fahrenheit);
    


}