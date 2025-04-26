#include <stdio.h>
#include <stdlib.h>

int main (){
    
    //ler um numero inteiro e mostre o complemento bit a bit desse numero
    //complemento bit a bit = inverte os bits do numero 
    //exemplo: 5 = 0000 0101 (em binario)
    //complemento bit a bit = 1111 1010 (em binario = -6 (em decimal)
    
    int numero, complemento;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    //complemtento bit a bit 
    complemento = ~numero; // ~ inverte os bits do numero 

    printf("O complemento bit a bit do numero %d eh: %d\n", numero, complemento);


    system("pause");
    return 0;




}