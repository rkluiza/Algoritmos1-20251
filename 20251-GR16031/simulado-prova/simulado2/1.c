/* 

1. Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
subitens abaixo:
a) Sorteie um número entre -50 e 50.
b) Sorteie um número par entre 20 e 100.
c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.

*/

#include <stdio.h>
#include <stdlib.h>



int main() {

    int num_inteiro;
    int num_par;
    float num_decimal;

    num_inteiro = -50 + rand() % (101); 
    printf("Número sorteado entre -50 e 50: %d\n", num_inteiro);

    num_par = 20 + (rand() % ((100 - 20) / 2 + 1)) * 2; 
    printf("Número par sorteado entre 20 e 100: %d\n", num_par);


    num_decimal = (float)(rand() % 101) / 100; // Garante duas casas decimais
    printf("Número decimal sorteado entre 0 e 1: %.2f\n", num_decimal);

    return 0;
}