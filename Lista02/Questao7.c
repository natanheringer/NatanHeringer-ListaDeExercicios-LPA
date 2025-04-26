#include <stdio.h>
#include <stdlib.h>


int main (){
    //conversor de reais em dolares 
    //cotação do dolar 05/04/2025: 1 dolar = 5.84 reais

    float reais, dolares, cotacao;

    printf("Digite a cotacao do dolar: "); 
    scanf("%f", &cotacao);

    printf("Digite um valor em reais: "); 
    scanf("%f", &reais); 

    dolares = reais / cotacao;

    printf("O valor em dolares eh: %.2f\n", dolares); 

    

}