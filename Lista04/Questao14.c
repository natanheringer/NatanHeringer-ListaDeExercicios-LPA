#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    

    //  leia um número inteiro, maior ou igual a zero, do usuário.
    // Imprimir o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
    // ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
    // anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34


    int num, a = 0, b = 1, fib = 0; 

    // lê o numero que seja maior ou igual a zero
    printf("\n\nDigite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &num);

    // verifica se o numero é igual ou maior que zero
    if(num < 0) {
        printf("\n\nNumero invalido!\n\n");

        return 0;
    }

    //calcula o enesimo termo da sequencia de Fibonacci
    if(num == 0) {
        printf("\n\nO termo %d da sequencia de Fibonacci eh: 0\n\n", num);
    } else if(num == 1) {
        printf("\n\nO termo %d da sequencia de Fibonacci eh: 1\n\n", num);
    } else {
        
        // inicializa o calculo da sequencia para num >= 2
        for(int i = 2; i <= num; i++) {
            // calcula o próximo termo da sequência
            fib = a + b; 
            a = b;
            b = fib; 
        }
        printf("\n\nO termo %d da sequencia de Fibonacci eh: %d\n\n", num, fib);

    }




    system("pause");
    return 0;

}