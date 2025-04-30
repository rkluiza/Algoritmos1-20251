/* 7. Escreva um programa que leia 10 caracteres inseridos pelo usuário. Para cada caractere, o
programa deve informar se é uma letra, um número, ou um símbolo especial. Utilize a função
isalpha() da biblioteca ctype.h para verificar se o caractere é uma letra, e isdigit() para
números.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char caracteres[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o caractere %d: ", i + 1);
        scanf(" %c", &caracteres[i]);
    }

    for (i = 0; i < 10; i++) {
        if (isalpha(caracteres[i])) {
            printf("O caractere '%c' é uma letra.\n", caracteres[i]);
        } else if (isdigit(caracteres[i])) {
            printf("O caractere '%c' é um número.\n", caracteres[i]);
        } else {
            printf("O caractere '%c' é um símbolo especial.\n", caracteres[i]);
        }
    }

    return 0;
}






