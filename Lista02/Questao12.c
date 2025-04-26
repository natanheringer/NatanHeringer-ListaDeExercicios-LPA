#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main (){

    //calculadora de volume de cilindro circular 
    //ler o raio e a altura e calcular o volume 
    //formula: V = PI * raio² * altura 
    
    float raio, altura, volume, raioQuadrado;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    raioQuadrado = raio * raio;

    volume = PI * raioQuadrado * altura;
    
    printf("O volume do cilindro eh: %.2f\n", volume);
    

    system("pause");
    return 0; 


}