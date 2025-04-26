#include <stdio.h>
#include <stdlib.h>

int main (){
    
    //ler dois numeros inteiros 
    //exibir o resultado de "ou esclusivo" e "ou bit a bit" e "e bit a bit" entre eles
    // // ou esclusivo = 1 se os bits forem diferentes 
    // // ou bit a bit = 1 se pelo menos um dos bits for 1
    // // e bit a bit = 1 se os bits forem iguais 
    // ou esclusivo é representado por ^ e significa que os bits sao diferentes de 1
    // ou bit a bit é representado por | e significa que os bits sao iguais a 1
    // e bit a bit é representado por & e significa que os bits sao iguais a 1
    // exemplo: 5 = 0000 0101, ^ 5 = 0000 0101, | 5 = 0000 0101,  & 5 = 0000 0101 
    // 5 ^ 3 = 0000 0101 ^ 0000 0011 = 0000 0110 = 6 
    // 5 | 3 = 0000 0101 | 0000 0011 = 0000 0111 = 7
    // 5 & 3 = 0000 0101 & 0000 0011 = 0000 0001 = 1
    //explicando: a operacao ou esclusivo é realizada bit a bit 
    //ou seja, cada bit do primeiro numero é comparado com o segundo numero
    //se os bits forem diferentes a resposta é 1, se forem iguais a resposta é 0.
    
    
    int num1, num2, ouExc, ouBit, eBit;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("digite o segundo numero inteiro: ");    
    scanf("%d", &num2);

    //ou exclusivo 
    ouExc = num1 ^ num2; 
    //ou bit a bit 
    ouBit = num1 | num2;
    //e bit a bit 
    eBit = num1 & num2;
    
    printf("O resultado do ou exclusivo entre %d e %d eh: %d\n", num1, num2, ouExc);
    printf("O resultado do ou bit a bit entre %d e %d eh: %d\n", num1, num2, ouBit);
    printf("O resultado do e bit a bit entre %d e %d eh: %d\n", num1, num2, eBit);


    system("pause");
    return 0;




}