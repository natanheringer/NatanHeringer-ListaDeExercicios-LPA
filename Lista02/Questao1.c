#include <stdio.h>
#include <stdlib.h>


int main (){


    int numero, antecessor, sucessor;
    
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O antecessor e sucessor de %d eh %d e %d \n", numero, antecessor, sucessor);
    



}