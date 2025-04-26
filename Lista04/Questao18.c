#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    //ler um numero inteiro maior que um e verificar se ele é primo 
    // numero primo só é divisível por 1 e por ele mesmo


    int num, i, numprimo = 1;

    printf("\nDigite um numero inteiro maior que 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("\nNumero invalido! Digite um numero maior que 1.\n");
        system("pause");
        return 0;
    }

    // Verifica se o número tem algum divisor além de 1 e ele mesmo
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            numprimo = 0; // encontrou um divisor, não é primo
            break;
        }
    }

    if (numprimo) {
        printf("\nO numero %d eh primo.\n\n", num);
    } else {
        printf("\nO numero %d NAO eh primo.\n\n", num);
    }

    system("pause");
    return 0;

}