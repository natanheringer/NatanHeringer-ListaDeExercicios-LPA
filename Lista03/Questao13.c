#include <stdlib.h>
#include <stdio.h>


int main() {
    // mostre ao usuário um menu com quatro opções de
    // operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
    // uma das opções, e o seu programa pede dois valores numéricos e realiza a
    // operação, mostrando o resultado.

    int opcao;
    float num1, num2, soma, divisao, multiplicacao, subtracao; 


        printf("\n\nEscolha uma das opcoes:\n\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("\n\nDigite o numero da operacao desejada: ");
        scanf("%d", &opcao);

        printf("\n\nDigite o primeiro numero: ");
        scanf("%f", &num1);
        printf("\n\nDigite o segundo numero: ");
        scanf("%f", &num2);

    // verifica a opção escolhida e realiza a operação correspondente
    switch (opcao) {
    case 1:
        soma = num1 + num2;
        printf("\n\nA soma eh: %.2f\n\n", soma);
        break;
    case 2:
        subtracao = num1 - num2;
        printf("\n\nA subtracao eh: %.2f\n\n", subtracao);
        break;
    case 3:
        multiplicacao = num1 * num2;
        printf("\n\nA multiplicacao eh: %.2f\n\n", multiplicacao);
        break;
    case 4:
        if (num2 != 0) {
            divisao = num1 / num2;
            printf("\n\nA divisao eh: %.2f\n\n", divisao);
        } else {
            printf("\n\nDivisao por zero nao eh permitida!\n\n");
        }
        break;
    default:
        printf("\n\nOpcao invalida!\n\n");
        break;
    }





    
    system("pause");
    return 0;

}