#include <stdlib.h>
#include <stdio.h>



int main() { 
    //ler dois numeros e imprimir qual deles é o maior
    //adicionar o else para o caso de serem iguais
    
    // declaração das variáveis em float para permitir números decimais
    float num1, num2;

    // leitura dos números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // comparação e impressão do maior número
    if (num1 < num2) {
        printf("O maior numero eh: %.2f\n", num2);
    } else if (num1 > num2) {
        printf("O maior numero eh: %.2f\n", num1);
    // caso os números sejam iguais
    }else {
        printf("Os numeros sao iguais: %.2f\n", num1);
    } 

    // espera o usuário pressionar uma tecla antes de fechar o programa
    system("pause");
    return 0;
}