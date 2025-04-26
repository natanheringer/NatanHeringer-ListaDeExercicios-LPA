#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // ler 10 numeros e escrever o menor valor lido e o maior valor lido 

    int num, maior, menor;

    printf("\n\nDigite 10 numeros:\n\n");

    // lê o primeiro número e inicializa as variáveis maior e menor com esse número
    printf("numero 1: ");
    scanf("%d", &num);
    maior = num; // inicializa maior com o primeiro número lido
    menor = num; // inicializa menor com o primeiro número lido

    // loop para ler os próximos 9 números
    for (int i = 2; i <= 10; i++) {
        printf("numero %d: ", i);
        scanf("%d", &num); // lê o número

        // verifica se o número lido é maior que o maior atual
        if(num > maior) {
            maior = num; // atualiza o maior
        }
        // verifica se o número lido é menor que o menor atual
        if(num < menor) {
            menor = num; // atualiza o menor
        }
    }
    // imprime o maior e o menor número lido
    printf("\n\nO maior numero lido eh: %d\n", maior);
    printf("O menor numero lido eh: %d\n\n", menor);
    
    
    system("pause");
    return 0;

}