#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main (){

    //calculadora de area de circulo
    //ler o raio e calcular a area 
    //formula da area: A = pi * raio²

    float raio, area, raioQuadrado;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    raioQuadrado = raio * raio;

    area = PI * raioQuadrado; 

    printf("A area do circulo eh: %.2f\n", area);


    
    system("pause");
    return 0; 


}