#include <stdlib.h>
#include <stdio.h>


int main() {
    // leia o salário de um trabalhador e o valor da prestação de um empréstimo
    // se a prestação for maior que 20% do salário, imprima "empréstimo não concedido"
    // caso contrário, imprima "empréstimo concedido"

    float salario, prestacao, limite;

    printf("\nDigite o salario do trabalhador: ");
    scanf("%f", &salario);

    printf("\nDigite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    limite = salario * 0.2; // calcula 20% do salário

    if (prestacao > limite){
        printf("\nEmprestimo nao concedido!\n\n");
    } else {
        printf("\nEmprestimo concedido!\n\n");
    }




    
    system("pause");
    return 0;

}