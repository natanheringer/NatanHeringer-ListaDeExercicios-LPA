#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    // imprimir a contagem regressiva de 10 a 0 e depois "FIM!""

    // inicializa o contador com 10
    int contador = 10; 

    // loop para imprimir a contagem regressiva
    while(contador >= 0) {
        printf("\n%d\n\n", contador); // imprime o contador
        contador--; // decrementa o contador
    }
    printf("FIM!\n"); // imprime "FIM!" após a contagem regressiva
    
    
    system("pause");
    return 0;

}