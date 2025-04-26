#include <stdio.h>
#include <stdlib.h>


int main (){

    //conversor de maiuscula para minuscula 
    //ler um char e adicionar 32
    //minusculas sao 32 unidades a mais que maiusculas na tabela ascii


    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);

    letraMinuscula = letraMaiuscula + 32;

    printf("\nA letra minuscula eh: %c\n\n", letraMinuscula);






    system("pause");
    return 0; 


}