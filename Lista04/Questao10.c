#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // ler 10 numeros positivos, ignorando negativos e imprima a media entre eles
    // somar 10 numeros e dividir por 10 para calcular a media
    // se o numero for negativo, ignorar e continuar a leitura


    int num, soma = 0, contador = 0;
    float media;

    printf("\n\nDigite 10 numeros:\n\n");

    // loop para ler 10 números
    // para int é igual a 10, para float é menor ou igual a 10, o i incrementa 1 a cada iteração
    while (contador < 10) {
        // imprime o número que está sendo lido
        printf("numero %d: ", contador + 1);
        scanf("%d", &num); 
        
        // verifica se o número é positivo
        if(num >= 0) { 
            // soma o número à variável soma
            soma += num; 
            // incrementa o contador de números positivos
            contador++; 
        } else {
            // imprime mensagem de ignorar o número negativo
            printf("\n\nNumero negativo, ignorando...\n\n"); 
        }
    }
    // calcula a média
    media = (float)soma / contador;
    // imprime a média com duas casas decimais
    printf("\n\nA media dos %d numeros positivos eh: %.2f\n\n", contador, media); 










    
    
    system("pause");
    return 0;

}