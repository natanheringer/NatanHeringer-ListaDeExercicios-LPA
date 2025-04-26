#include <stdio.h>
#include <stdlib.h>


int main (){


    float num1, num2, num3, num4; 

    printf("Digite quatro numeros reais: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    printf("A media aritmetica dos numeros eh: %.2f\n", (num1 + num2 + num3 + num4) / 4);


}