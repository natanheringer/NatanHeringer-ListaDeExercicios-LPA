#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    

    // ler 10 numeros e imprimir a media entre eles 
    // somar 10 numeros e dividir por 10 para calcular a media

    int num, soma = 0; 
    float media;

    printf("\n\nDigite 10 numeros:\n\n");

    // loop para ler 10 números
    // para int é igual a 10, para float é menor ou igual a 10, o i incrementa 1 a cada iteração
    for (int i = 1; i <= 10; i++) {
        printf("numero %d: ", i);
        scanf("%d", &num); 
        soma += num; 
    }
    
    // calcula a média
    media = soma / 10; 
    // imprime a média com duas casas decimais
    printf("\n\nA media dos 10 numeros eh: %.2f\n\n", media); 


    
    
    system("pause");
    return 0;

}