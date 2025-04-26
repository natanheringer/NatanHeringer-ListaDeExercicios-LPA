#include <stdlib.h>
#include <stdio.h>


int main (){


    int num1;
    float num2;
    char caracter;


    printf("digite um numero inteiro, um numero real e um caracter: ");
    scanf("%d %f %c", &num1, &num2, &caracter);
    printf("variaveis separadas por espacos: %d %.2f %c\n", num1, num2, caracter);
    printf("variaveis separadas em tabulacao horizontal: \t%d\t%.2f\t%c \n", num1, num2, caracter);
    printf("variaveis separadas por linhas: \n%d\n%.2f\n%c\n", num1, num2, caracter);


    system("pause");
    return 0;
}