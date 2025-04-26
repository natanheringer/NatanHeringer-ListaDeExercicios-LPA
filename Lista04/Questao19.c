#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // Faça um programa que calcule e escreva o valor de S:
    // S = 1/1 + 2/3 + 5/3 + 7/4 ... + 99/50

    // tirando o primeiro numerador, incremento de +2 e +3 
    // pois 1, 2 (+3), 5 (+2), 7(+3), 10(+2), 12...
    // denominador 1 até 50 

    float S = 0.0;

    // inicializa o numerador e denominador
    int numerador = 1, incremento = 1; 

    printf("\n\nO valor de S eh:\n\n");

    // loop para calcular a soma S
    // o loop vai de 1 a 50, pois o denominador vai de 1 a 50
    for (int denominador = 1; denominador <= 50; denominador++) {

        // imprime o numerador e denominador
        printf("%d/%d ", numerador, denominador);
       

        // soma o numerador dividido pelo denominador
        S += (float)numerador / denominador; 

         // imprime o sinal de +, exceto no último termo
         if (denominador <= 50) {
            printf("+ ");
        }

        numerador += incremento; 

        // alterna o incremento entre +2 e +3
        if (incremento == 1 || incremento == 2) {
            incremento = 3; // incrementa +2
        } else {
            incremento = 2; // incrementa +3
        }

    }

    // imprime o resultado com 2 casas decimais
    printf("\n\nO valor de S eh: %.2f\n\n", S);
    
    
    system("pause");
    return 0;

}