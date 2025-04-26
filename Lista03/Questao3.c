#include <stdlib.h>
#include <stdio.h>


int main() {
    // ler um numero e imprimir se ele é par ou impar 

    int num, checkpar, checkimpar; 

    printf("Digite um numero: ");
    scanf("%d", &num);

    // verificar se o número é par ou ímpar
    // verifica se o número é par a partir do resto da divisão por 2
    // se o resto da divisão for 0, o número é par
    checkpar = num % 2 == 0; 
    checkimpar = num % 2 == 1; // verifica se o número é ímpar

    // estrutura condicional para imprimir o resultado
    if (checkpar) {
        printf("\n O numero %d eh par\n", num);
    } else if (checkimpar) {
        printf("\n O numero %d eh impar\n", num);
    
      // caso o numero seja 0  
    } else {
        printf("O numero eh zero\n"); 
    }



    system("pause");
    return 0;

}