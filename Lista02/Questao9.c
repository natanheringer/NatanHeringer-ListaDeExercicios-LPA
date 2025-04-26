#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main (){

    //conversor de angulos em graus para radianos 
    //formula: R = G * (pi) 3.14159/180.0

    float graus, radianos; 


    printf("Digite um angulo em graus: "); 
    scanf("%f", &graus);

    radianos = graus * PI / 180.0;

    printf("O angulo em radianos eh: %.2f\n", radianos);

    system("pause");
    return 0; 


}