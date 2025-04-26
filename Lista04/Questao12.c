#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // leia um número inteiro e calcule a soma de todos os divisores
    // desse número, com exceção dele próprio. 
    // Exemplo: A soma dos divisores do número 12 é 1 + 2 + 3 + 4 + 6 = 16
    // Exemplo: A soma dos divisores do numero 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

    int num, i, soma = 0;
    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    printf("\n\nOs divisores de %d sao:\n\n", num);

    // loop para verificar os divisores do número
    for (i = 1; i < num; i++) {
        // verifica se o número é divisor do número lido
        if(num % i == 0) { 
            // imprime o divisor
            printf("\n%d \n", i); 
            // soma o divisor à variável soma
            soma += i; 
        }
    }
    // imprime a soma dos divisores
    printf("\n\nA soma dos divisores de %d (exceto ele mesmo) eh: %d\n\n", num, soma);
    
    
    system("pause");
    return 0;

}