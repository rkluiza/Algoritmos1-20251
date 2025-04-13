/*
Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
teclado.
Exemplo de tela de saída, para n = 5 e caracter = `*`:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n, i, j;
    char caracter;
    bool controle = true;

    printf("Digite o número de linhas: ");
    scanf("%i", &n);

    printf("Digite o caractere: ");
    scanf(" %c", &caracter);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", caracter);
        }
        printf("\n");
    }

    return 0;
}
