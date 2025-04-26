#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // Faça um programa que leia um número inteiro N e depois imprima os N primeiros
    // números naturais ímpares.

    // inicializa o contador e o número ímpar
    int num, contador = 0; 

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    printf("\n\nOs %d primeiros numeros naturais impares sao:\n\n", num);
    for (int i = 1; contador < num; i++) {
        // verifica se o número é ímpar
        if(i % 2 != 0) { 
            // imprime o número ímpar
            printf(" %d \n\n", i); 
            // incrementa o contador
            contador++; 
        }
    }
    
    system("pause");
    return 0;

}