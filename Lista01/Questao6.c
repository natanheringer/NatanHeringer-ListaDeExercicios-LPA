#include <stdio.h>
#include <stdlib.h>


int main (){

   double num;

   printf("Digite um numero real: ");
   scanf("%lf", &num);

   printf("Numero em notacao cientifica: %e\n", num);


    system("pause");
    return 0;

}