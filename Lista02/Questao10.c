#include <stdio.h>
#include <stdlib.h>


int main (){

    //780.000 reais em premios
    //primeiro lugar leva 46% do premio
    //segundo lugar leva 32% do premio 
    //terceiro lugar leva 22% do premio 


   float premio = 780000.00, firstW, secondW, thirdW;

   printf("\nOs vencedores do premio de 780000.00 reais!\n");
   printf("Confira quanto cada um deles ganhou!\n\n"); 


    firstW = premio * 0.46;
    secondW = premio * 0.32;
    thirdW = premio * 0.22; 

    printf("Primeiro lugar leva a bolada de %.2f reais\n", firstW);
    printf("Segundo lugar leva a bolada de %.2f reais\n", secondW);
    printf("Terceiro lugar leva a bolada de %.2f reais\n\n", thirdW);

    system("pause");
    return 0;
   


}