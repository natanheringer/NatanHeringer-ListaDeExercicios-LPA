#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    // ler vários números inteiros até que se digite um
    // número negativo. O programa tem de retornar o maior e o menor número lido
    // exemplo: 1, 2, 3, 4, 5, -1. O maior é 5 e o menor é 1.

    long int num, maior, menor;

    printf("\n\nDigite varios numeros inteiros (digite um numero negativo para parar):\n\n");

    // lê o primeiro número
    printf("numero: ");
    scanf("%ld", &num);
    


    // inicializa maior e menor com o primeiro número lido
    maior = num;
    menor = num; 
    
    // enquanto o numero nao for negativo
    while(num >= 0) {
        if (num > maior) {
            // atualiza o maior
            maior = num; 
        }
        if (num < menor) {
            // atualiza o menor
            menor = num; 
        }

        // lê o próximo número
        printf("numero: ");
        scanf("%ld", &num);

    }

    // imprime os resultados 
    printf("\n\nO maior numero lido eh: %ld\n", maior);
    printf("O menor numero lido eh: %ld\n\n", menor);
    
    
    system("pause");
    return 0;

}
