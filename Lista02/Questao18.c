#include <stdio.h>
#include <stdlib.h>

int main (){
    //ler dois numeros inteiros e exibir 0 deslocamento a esquerda e a direita do primeiro pelo segundo numero 
    //deslocamento de 2 por 1 = 2 << 1 = 4 (em binario = 0000 0100 << 1 = 0000 1000) 
    
    int num1, num2, deslocamentoEsquerda, deslocamentoDireita;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    //deslocamento a esquerda 
    deslocamentoEsquerda = num1 << num2;
    //deslocamento a direita 
    deslocamentoDireita = num1 >> num2;

    printf("O resultado do deslocamento a esquerda e direita do numero %d pelo numero %d eh: %d e %d\n", num1, num2, deslocamentoEsquerda, deslocamentoDireita);

       

    system("pause");
    return 0;




}