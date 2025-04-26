#include <stdio.h>
#include <stdlib.h>

int main (){
    //programa que le numero inteiro e mostre multiplicação e a divisao desse numero por 2
    //utilizando operadores de deslocamento de bits
    //multiplicaçao por 2 = desloca 1 bit para a esquerda 
    //divisão por 2 = desloca 1 bit para a direita
    //exemplo: 5 = 0000 0101 (em binario) 
    //5 * 2 = 0000 1010 (em binario) = 10 (em decimal)
    //5 / 2 = 0000 0010 (em binario) = 2 (em decimal)


    int numero, multiplicacao, divisao;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    //multiplicacao por 2 
    multiplicacao = numero << 1; //desloca 1 bit para a esquerda 
    divisao = numero >> 1; //desloca um bit para a direita 

    printf("O resultado da multiplicacao por 2 eh: %d\n", multiplicacao);
    printf("O resultado da divisao por 2 eh: %d\n", divisao);


    system("pause");
    return 0;




}