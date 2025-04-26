#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    // ler um numero inteiro e positivo e imprimir os numeros de 0 ao numero lido
    
    int num; 

    printf("\n\nDigite um numero inteiro e positivo: ");
    scanf("%d", &num);

    // verifica se o número lido é maior que 0
    if(num > 0) {
        printf("\n\nOs numeros de 0 a %d sao:\n\n", num);
        // loop para imprimir os números de 0 ao número lido
        for (int i = 0; i <= num; i++) {
            printf("%d \n", i);
        }
        printf("\n\n");
    } else {
        printf("\n\nNumero invalido!\n\n");
    }

    system("pause");
    return 0;

}