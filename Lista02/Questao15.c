#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //inversor de numeros: 321 -> 123
    //ler o numero de tres digitos e inverter
    //usando variaveis auxiliares, extrair os digitos e inverter 
    //dividir em unidade, dezena e centena 
    //e inverter a ordem 
    
    int numero, invertido;

    printf("digite um numero de tres digitos: ");
    scanf("%d", &numero);

    int unidade = numero % 10; // ultimo digito 
    int dezena = (numero / 10) % 10; // penultimo digito
    int centena = numero / 100; //antepenultimoo digito

    invertido = unidade * 100 + dezena * 10 + centena;

    printf("O numero invertido eh: %d\n", invertido);



    system("pause");
    return 0; 


}