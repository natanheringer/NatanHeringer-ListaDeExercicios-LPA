#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    //  ler os coeficientes da equação do segundo grau e calcule suas raízes de acordo com o discriminante (delta)

    // verificar se a equação é do segundo grau:
    // a = 0 => equação não é do segundo grau

    // calcular o disciminante: 
    // delta = b^2 - 4ac

    // verificar as possibilidades para o valor de delta:
    // 1 - delta < 0: não existem raízes reais
    // 2 - delta = 0: existe uma raiz real (raiz dupla)
    // 3 - delta > 0: existem duas raízes reais distintas

    float a, b, c, delta, x1, x2;

    printf("\n\nDigite o coeficiente a: ");
    scanf("%f", &a);
    printf("\n\nDigite o coeficiente b: ");
    scanf("%f", &b);
    printf("\n\nDigite o coeficiente c: ");
    scanf("%f", &c);

    // verifica se a equação é do segundo grau
    if (a == 0) {
        printf("\n\nA equacao nao eh do segundo grau!\n\n");
        return 1; 
    } else {
        // calcula o discriminante
        delta = b * b - 4 * a * c;

        // verifica o valor de delta e calcula as raízes
        if(delta < 0){
            printf("\n\nNao existem raizes reais!\n\n");
        } else if(delta == 0){
            // raiz unica
            x1 = -b / (2 * a);
            printf("\n\nA raiz eh: %.2f\n\n", x1);
        } else {
            // duas raizes reais 
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\n\nAs raizes sao: 1 = %.2f e 2 = %.2f\n\n", x1, x2);


        }
   
    }
    
    system("pause");
    return 0;

}