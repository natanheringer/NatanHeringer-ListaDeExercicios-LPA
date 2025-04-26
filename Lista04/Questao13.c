#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // exibir a soma de todos os números naturais abaixo de 1.000 que
    // são múltiplos de 3 ou 5.

    
    int i, soma = 0;

    // loop para verificar os números de 1 a 999
    for (i = 1; i < 1000; i++) {
        // verifica se o número é múltiplo de 3 ou 5
        if(i % 3 == 0 || i % 5 == 0) { 
            // soma o número à variável soma
            soma += i; 
        }
    }
    // imprime a soma total
    printf("\n\nA soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d\n\n", soma);





    
    
    system("pause");
    return 0;

}