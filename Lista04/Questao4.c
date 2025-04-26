#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // determinar e mostrar os cinco primeiros múltiplos de 3
    // considerando números maiores que 0.
    // Exemplo: 3, 6, 9, 12, 15.

    int contador = 0;
    int num = 1;

    printf("\n\nOs cinco primeiros multiplos de 3 sao:\n\n");

    while(contador < 5) {
        if(num % 3 == 0) {
            contador++; 
            // incrementa o contador se o número for múltiplo de 3
            printf("%d\n", num);
        }
        num++; 
    }

    
    system("pause");
    return 0;

}