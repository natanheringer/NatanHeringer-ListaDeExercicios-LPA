#include <stdlib.h>
#include <stdio.h>


int main (){


    char caracter1, caracter2, caracter3;

    printf("Digite 3 caracteres: ");
    scanf("%c %c %c", &caracter1, &caracter2, &caracter3);
    
    printf("Os tres caracteres digitados, um em cada linha: \n%c\n%c\n%c\n", caracter1, caracter2, caracter3);


    system("pause");
    return 0;
}