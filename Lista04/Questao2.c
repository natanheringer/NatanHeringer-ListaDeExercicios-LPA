#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    

    // ler um numero inteiro e positivo e imprimir de 0 ao numero 
    // em ordem decrescente 


    int num; 

    printf("\n\nDigite um numero inteiro e positivo: ");
    scanf("%d", &num);

    // verifica se o número lido é maior que 0
    if(num > 0) {
        printf("\n\nOs numeros de %d a 0 sao:\n\n", num);
        // loop para imprimir os números de 0 ao número lido
        for (int i = num; i >= 0; i--) {
            printf("%d \n", i);
        }
        printf("\n\n");
    } else {
        printf("\n\nNumero invalido!\n\n");
    }
    
    
    system("pause");
    return 0;

}