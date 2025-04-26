#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    // ler certa quantidade de números, imprima o maior
    // deles e quantas vezes o maior número foi lido. A quantidade de números a
    // serem lidos deve ser fornecida pelo usuário.

    float num, quantidade, maior, contador;


    // ler a quantidade de números a serem lidos
    printf("\n\nDigite a quantidade de numeros a serem lidos: ");
    scanf("%f", &quantidade);
    printf("\n\nDigite os numeros: \n\n");
    
    maior = num;
    contador = 1;

    for (int i = 0; i < quantidade; i++) {
        scanf("%f", &num);


        // verifica se o número lido é maior que o maior número encontrado até agora
        if(num > maior) {
            maior = num; // atualiza o maior numero 
            contador = 1; // reinicia o contador
        } else if(num == maior) {
            contador++; // incrementa o contador se o número lido for igual ao maior
        }
    }

    printf("\n\nO maior numero lido foi: %.2f\n", maior);
    printf("O maior numero foi lido %d vezes\n", (int)contador); // imprime o maior número e quantas vezes ele foi lido
    
    
    system("pause");
    return 0;

}