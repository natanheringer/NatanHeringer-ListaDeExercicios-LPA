#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Função para calcular a raiz quadrada
// eu poderia usar a função sqrt() da biblioteca math.h
// mas eu quis entender como funciona a raiz quadrada
// na logica de programação, pois na matematica é mais simples
// então pesquisei e criei uma função que calcula a raiz quadrada
// utilizando a aproximação do resultadoo usando o método de Newton

double raizQuadrada(float n) {
    if (n < 0) {
        return -1; // Retorna -1 para indicar erro se o número for negativo
    }

    // Inicializa a variável x com o valor de n
    float x = n; 
    // Precisão desejada
    float epsilon = 0.00001; 

    while(1){

        float raizNova = 0.5 * (x + n / x); // Aproximação da raiz quadrada
        if (fabs(raizNova - x) < epsilon) { // Verifica se a diferença é menor que a precisão
            return raizNova; // Retorna a raiz quadrada aproximada
        }

        x = raizNova; // Atualiza o valor de x para a próxima iteração

    }

}


int main() {
    // Ler um número e, caso ele seja positivo, calcule e mostre:
    // - O número digitado ao quadrado.
    // - A raiz quadrada do número digitado.

    float num, quadrado, raiz, checkpositivo; 

    printf("\n\nDigite um numero: ");
    scanf("%f", &num);

    // verifica se o número é positivo
    checkpositivo = num > 0;
    // calcula o quadrado do número e a raiz quadrada
    quadrado = num * num;
    // usando a função anterior, calcula-se a raiz quadrada da variavel num
    raiz = raizQuadrada(num);;

    // condicional para mostrar o numero ao quadrado e a raiz quadrada
    if(checkpositivo){
        printf("\nO numero %.2f ao quadrado eh: %.2f\n\n", num, quadrado);
        printf("\nA raiz quadrada do numero %.2f eh: %.2f\n\n", num, raiz);
    } else {
        printf("\nO numero eh negativo ou zero!\n");
    }

    system("pause");
    return 0;
}