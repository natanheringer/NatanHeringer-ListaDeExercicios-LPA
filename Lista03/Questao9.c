#include <stdlib.h>
#include <stdio.h>


int main() {
    
    // ler a altura e o peso de uma pessoa e a classifique de acordo com os parametros da tabela abaixo:
    // altura < 1,20 e peso < 60: A
    // altura < 1,20 e peso <= 60 e >= 90: B
    // altura < 1,20 e peso > 90: C
    // altura <= 1,20 e >= 1,70 e peso < 60: D
    // altura <= 1,20 e >= 1,70 e peso <= 60 e >= 90: E
    // altura <= 1,20 e >= 1,70 e peso > 90: F
    // altura > 1,70 e peso < 60: G
    // altura > 1,70 e peso <= 60 e >= 90: H
    // altura > 1,70 e peso > 90: I
    // e imprima a classificação correspondente.

    float altura, peso;

    printf("\n\nDigite a altura da pessoa em metros (Ex: 1.80): ");
    scanf("%f", &altura);
    printf("\n\nDigite o peso da pessoa em quilos (Ex: 70.5): ");
    scanf("%f", &peso);

    // verifica a altura e o peso e imprime a classificação correspondente
    if(altura < 1.20 && peso < 60) {
        printf("\n\nA classificacao eh: A\n\n");
    } else if(altura < 1.20 && peso >= 60 && peso <= 90) {
        printf("\n\nA classificacao eh: B\n\n");
    } else if(altura < 1.20 && peso > 90) {
        printf("\n\nA classificacao eh: C\n\n");
    } else if(altura >= 1.20 && altura <= 1.70 && peso < 60) {
        printf("\n\nA classificacao eh: D\n\n");
    } else if(altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90) {
        printf("\n\nA classificacao eh: E\n\n");
    } else if(altura >= 1.20 && altura <= 1.70 && peso > 90) {
        printf("\n\nA classificacao eh: F\n\n");
    } else if(altura > 1.70 && peso < 60) {
        printf("\n\nA classificacao eh: G\n\n");
    } else if(altura > 1.70 && peso >= 60 && peso <= 90) {
        printf("\n\nA classificacao eh: H\n\n");
    } else if(altura > 1.70 && peso > 90) {
        printf("\n\nA classificacao eh: I\n\n");
    } else {
        printf("\n\nDados invalidos!\n");
    }




    
    system("pause");
    return 0;

}