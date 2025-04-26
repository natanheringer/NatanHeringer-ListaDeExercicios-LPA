#include <stdlib.h>
#include <stdio.h>


int main() {
    
    // Ler a idade de um nadador e o coloque nas determinadas categorias:
    // - Infantil A: 5 a 7 anos
    // - Infantil B: 8 a 10 anos 
    // - Juvenil A: 11 a 13 anos
    // - Juvenil B: 14 a 17 anos
    // - Sênior: maiores de 18 anos
    // e imprima a categoria correspondente.

    int idade; 



    printf("\n\nDigite a idade do nadador: ");
    scanf("%d", &idade);

    // verifica a idade e imprime a categoria correspondente
    if(idade >= 5 && idade <= 7) {
        printf("\n\nA categoria eh: Infantil A\n\n");
    } else if(idade >= 8 && idade <= 10) {
        printf("\n\nA categoria eh: Infantil B\n\n");
    } else if(idade >= 11 && idade <= 13) {
        printf("\n\nA categoria eh: Juvenil A\n\n");
    } else if(idade >= 14 && idade <= 17) {
        printf("\n\nA categoria eh: Juvenil B\n\n");
    } else if(idade >= 18 && idade <= 130) {
        printf("\n\nA categoria eh: Senior\n\n");
    } else {
        printf("\n\nIdade invalida!\n\n");
    }




    
    system("pause");
    return 0;

}