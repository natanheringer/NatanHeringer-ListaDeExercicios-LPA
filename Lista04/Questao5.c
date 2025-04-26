#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    
    // calcular e mostrar a soma dos 50 primeiros numeros pares 
    

    // contador para contar os números pares
    int contador = 1; 

    // variável para armazenar a soma dos números pares
    int soma = 0;

    printf("\n\nOs 50 primeiros numeros pares sao:\n\n");

    // loop para calcular a soma dos 50 primeiros números pares
    while (contador <= 50) {
        // verifica se o número é par
        int num_par = contador * 2;
        
        // imprime o número par
        printf("%d\n", num_par);

        // adiciona o número par à soma
        soma += num_par; 
        
        // incrementa o contador para o próximo número
        contador++; 
    }

    // imprime a soma dos números pares
    printf("\n\nA soma dos 50 primeiros numeros pares eh: %d\n\n", soma);

    system("pause");
    return 0;
}

