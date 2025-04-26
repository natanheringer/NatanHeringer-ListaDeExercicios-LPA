#include <stdlib.h>
#include <stdio.h>


int main() {
    


// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
// seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
// - Homens: (72,7 * h) – 58
// - Mulheres: (62,1 * h) – 44,7


    float altura, pesoIdealM, pesoIdealF; 
    char sexo; 

    printf("Digite a altura da pessoa em metros (Ex: 1.80): ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa (M/F): ");
    scanf(" %c", &sexo); 

    // verifica o sexo da pessoa e calcula o peso ideal
    pesoIdealM = 77.7 * altura - 58;
    pesoIdealF = 62.1 * altura - 44.7;

    if (sexo == 'M' || sexo == 'm') {
        printf("O peso ideal do homem eh: %.2f\n", pesoIdealM);
    } else if (sexo == 'F' || sexo == 'f') {
        printf("O peso ideal da mulher eh: %.2f\n", pesoIdealF);
    } else {
        printf("Sexo invalido!\n");
    }

    
    system("pause");
    return 0;

}