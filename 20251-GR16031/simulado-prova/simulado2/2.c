/*
2. Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve
continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja
menor que o terceiro. Não use o comando break.
Regras:
a) A cada iteração, o programa deve exibir os números sorteados.
b) Quando a condição for atendida (primeiro < e segundo e segundo < terceiro), o
programa deve imprimir uma mensagem indicando que os números satisfazem a
condição.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main() {

    int num1, num2, num3;
    bool condicao_atendida = false;

    while (!condicao_atendida) { 
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1; 
        num3 = rand() % 10 + 1; 

        printf("Números sorteados: %d, %d, %d\n", num1, num2, num3); 

        if (num1 < num2 && num2 < num3) { 
            condicao_atendida = true; 
        }
    }

    printf("Condição atendida: %d < %d < %d\n", num1, num2, num3); // Exibe a mensagem final

    return 0;
}