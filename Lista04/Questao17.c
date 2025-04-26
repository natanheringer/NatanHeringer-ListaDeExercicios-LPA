#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // ler um numero inteiro positivo 
    // e em seguida imprimir N linhas do chamado triangulo de Floyd


    int num, contador = 1;

    // lê o número inteiro positivo
    printf("\n\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    // verifica se o número lido é maior que 0
    if(num <= 0) {
        printf("\n\nNumero invalido!\n\n");
        return 0;
    }

    printf("\n\nO triangulo de Floyd com %d linhas:\n\n", num);

    // loop para imprimir o triângulo de Floyd
    for (int i = 1; i <= num; i++) {
        // loop para imprimir os números em cada linha
        for (int j = 1; j <= i; j++) {
            // imprime o número atual
            printf("%d ", contador); 
            // incrementa o contador
            contador++; 
        }
        // pula para a próxima linha após imprimir os números da linha atual
        printf("\n"); 
    }
    
    system("pause");
    return 0;

}