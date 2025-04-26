#include <stdlib.h>
#include <stdio.h>


int main() {
    //  Faça um programa para verificar se determinado número inteiro lido é divisível por
    // 3 ou 5, mas não simultaneamente pelos dois.

    //  Se o número for divisível por 3, imprimir "Divisível por 3".
    //  Se o número for divisível por 5, imprimir "Divisível por 5".

    // numero inteiro lido
    int num; 

    // variaveis para verificar se o numero é divisivel por 3 ou 5
    int checkdiv3, checkdiv5;

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    // verifica se o número é divisível por 3 ou 5
    checkdiv3 = num % 3 == 0; // verifica se o número é divisível por 3
    checkdiv5 = num % 5 == 0; // verifica se o número é divisível por 5

    // condicional para imprimir o resultado
    if (checkdiv3 && !checkdiv5) {
        printf("\nO numero %d eh divisivel por 3\n", num);
    } else if (checkdiv5 && !checkdiv3) {
        printf("\nO numero %d eh divisivel por 5\n", num);
    } else {
        printf("\nO numero %d nao atende a condicao (divisivel por 3 OU 5, mas nao ambos)\n", num);
    }


    
    system("pause");
    return 0;

}