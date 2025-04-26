#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    // ler um numero positivo e impirimir os seus divisores
    // exemplo: 66 = 1, 2, 3, 6, 11, 22, 33, 66
    // exemplo: 12 = 1, 2, 3, 4, 6, 12
    // exemplo: 7 = 1, 7


    int num, i; 
    printf("\n\nDigite um numero positivo: ");
    scanf("%d", &num);

    printf("\n\nOs divisores de %d sao:\n\n", num);

    // loop para verificar os divisores do número
    for (i = 1; i <= num; i++) {
        // verifica se o número é divisor do número lido
        if(num % i == 0) { 
            // imprime o divisor
            printf("\n%d \n", i); 
        }
    }
    
    system("pause");
    return 0;

}