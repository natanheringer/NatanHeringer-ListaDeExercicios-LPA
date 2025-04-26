#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    

    // calcular o valor de qualquer numero harmonico 
    // designado por Hn, o qual se define como 
    // o enesimo termo da serie harmonica, dada por:
    // Hn = 1 + 1/2 + 1/3 + ... + 1/n

    int num;
    double harmonico = 0.0;

    printf("\n\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    // verifica se o número lido é maior que 0
    if (num <= 0) {
        printf("\n\nNumero invalido!\n\n");
        return 0;
    }

    // soma dos inversos 
    for (int i = 1; i <= num; i++) {
        // soma o inverso do número
        harmonico += 1.0 / i; 
    }

    // imprime o resultado com 2 casas decimais
    printf("\n\nO valor do numero harmonico H%d eh: %.2f\n\n", num, harmonico);


    system("pause");
    return 0;

}