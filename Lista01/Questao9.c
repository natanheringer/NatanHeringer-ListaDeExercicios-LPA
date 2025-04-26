#include <stdlib.h>
#include <stdio.h>

int main (){


    float num1, num2;

    printf("Digite dois numeros reais: "); 
    scanf("%f %f", &num1, &num2);
    printf("Ordem inversa: %.2f %.2f\n", num2, num1);

    system("pause");
    return 0;
}