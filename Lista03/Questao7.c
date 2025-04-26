#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    // ler o valor do produto, o estado de destino e imprimir o valor acrescido do imposto 

    float valorProduto, impostoMG, impostoSP, impostoRJ, impostoMS;
    char estadoDestino[3];

    printf("\n\nDigite o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("\n\nDigite o estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estadoDestino); 

    // calcular o imposto de acordo com o estado de destino
    impostoMG = valorProduto * 0.07; // 7% de imposto para MG
    impostoSP = valorProduto * 0.12; // 12% de imposto para SP
    impostoRJ = valorProduto * 0.15; // 15% de imposto para RJ
    impostoMS = valorProduto * 0.08; // 8% de imposto para MS


    // verificar o estado de destino e imprimir o valor final do produto
    if(strcmp(estadoDestino, "MG") == 0 || strcmp(estadoDestino, "mg") == 0){

        printf("\n\nO valor final do produto em minas gerais eh: %.2f\n\n", impostoMG); 
    
    } else if(strcmp(estadoDestino, "SP") == 0 || strcmp(estadoDestino, "sp") == 0){
    
        printf("\n\nO valor final do produto em sao paulo eh: %.2f\n\n", impostoSP); 
    
    } else if(strcmp(estadoDestino, "RJ") == 0 || strcmp(estadoDestino, "rj") == 0){
    
        printf("\n\nO valor final do produto no rio de janeiro eh: %.2f\n\n", impostoRJ); 
    
    } else if(strcmp(estadoDestino, "MS") == 0 || strcmp(estadoDestino, "ms") == 0){
    
        printf("\n\nO valor final do produto em mato grosso do sul eh: %.2f\n\n", impostoMS); 
    
    } else {
    
        printf("\n\nEstado de destino invalido!\n");
    
    }
    
    system("pause");
    return 0;

}