#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // ler 10 numeros e somar todos e imprimir o resultado


    int num, soma = 0; 

    printf("\n\nDigite 10 numeros:\n\n");
    
    // loop para ler 10 números
    // para int é igual a 10, para float é menor que 10, o i incrementa 1 a cada iteração
    for (int i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        // lê o número
        scanf("%d", &num); 
        // soma o número à variável soma
        soma += num; 
    }
    // imprime a soma total
    printf("\n\nA soma dos 10 numeros eh: %d\n\n", soma); 
    
    system("pause");
    return 0;

}