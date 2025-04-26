#include <stdlib.h>
#include <stdio.h>
#include <math.h>


// Função que calcula o fatorial de um número
long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N;
    double E = 0.0;

    // Solicita o valor de N
    printf("\n\nDigite um valor inteiro positivo N: ");
    scanf("%d", &N);

    // Calcula o valor de E conforme a fórmula
    for (int i = 1; i <= N; i++) {
        // Adiciona 1/i! ao valor de E
        E += 1.0 / fatorial(i);  
    }

    // Exibe o resultado
    printf("\n\nO valor de E para N = %d eh: %.10f\n", N, E);

    system("pause");
    return 0;
}