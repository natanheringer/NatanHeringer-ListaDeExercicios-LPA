#include <stdlib.h>
#include <stdio.h>


int main() {
    // escreva um programa que leia um inteiro entre 1 e 7
    // imprima o dia da semana correspondente a esse número.


    int dia; 

    printf("\n\nDigite um numero entre 1 e 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:  printf("Domingo\n"); break;
        case 2:  printf("Segunda-feira\n"); break;
        case 3:  printf("Terca-feira\n"); break;
        case 4:  printf("Quarta-feira\n"); break;
        case 5:  printf("Quinta-feira\n"); break;
        case 6:  printf("Sexta-feira\n"); break;
        case 7:  printf("Sabado\n"); break;
        default: printf("Numero invalido!\n");
    }



    
    system("pause");
    return 0;

}