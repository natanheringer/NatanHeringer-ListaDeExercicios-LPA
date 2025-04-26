#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    //calculadora de hipotenusa
    //ler os catetos e calcular a hipotenusa
    //formula: h = sqrt(a² + b²)


    float catetoA, catetoB, hipotenusa, catetoQuadradoA, catetoQuadradoB;

    printf("Digite o valor do cateto A: ");
    scanf("%f", &catetoA);

    printf("Digite o valor do cateto B: ");
    scanf("%f", &catetoB);

    catetoQuadradoA = catetoA * catetoA;
    catetoQuadradoB = catetoB * catetoB;

    hipotenusa = sqrt(catetoQuadradoA + catetoQuadradoB);

    printf("a hipotenusa eh: %.2f\n", hipotenusa);

    system("pause");
    return 0; 


}