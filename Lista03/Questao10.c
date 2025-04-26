#include <stdlib.h>
#include <stdio.h>


int main() {
    //  leia três números inteiros positivos e efetue o cálculo de
    //  uma das seguintes médias de acordo com um valor numérico digitado pelo usuário
    //  e mostrado na tabela a seguir:
    //  1 - média geométrica = x * y * z
    //  2 - média ponderada = (x + 2y + 3 * z) / 6
    //  3 - média harmônica = 1 / (1/x + 1/y + 1/z)
    //  4 - média aritmética = (x + y + z) / 3


    float x, y, z, resultado, mediaG, mediaP, mediaH, mediaA;
    int opcao;

    printf("\n\nDigite o primeiro numero: ");
    scanf("%f", &x);
    printf("\n\nDigite o segundo numero: ");
    scanf("%f", &y);
    printf("\n\nDigite o terceiro numero: ");
    scanf("%f", &z);

    mediaG = x * y * z;
    mediaP = (x + 2 * y + 3 * z) / 6;
    mediaH = 1 / (1/x + 1/y + 1/z);
    mediaA = (x + y + z) / 3;

    printf("\n\nEscolha a media desejada: \n\n");
    printf("1 - media geometrica\n");
    printf("2 - media ponderada\n");
    printf("3 - media harmonica\n");
    printf("4 - media aritmetica\n");
    printf("Digite o numero da media desejada: ");
    scanf("%d", &opcao);

    // Calcula a média com base na opção do usuário
    if (opcao == 1) {
        resultado = mediaG; // Média geométrica *De acordo com a fórmula da tabela*
    } else if (opcao == 2) {
        resultado = mediaP; // Média ponderada
    } else if (opcao == 3) {
        resultado = mediaH; // Média harmônica
    } else if (opcao == 4) {
        resultado = mediaA; // Média aritmética
    } else {
        printf("Opcao invalida.\n");
        return 1; // Finaliza o programa se a opção for inválida
    }

    // Exibe o resultado
    printf("\n\nO resultado eh: %.2f \n\n", resultado);






    
    system("pause");
    return 0;

}