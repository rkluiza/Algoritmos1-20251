/*
2) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
+ C.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {

    float a, b, c, soma;

    printf("Escreva o valor de A: ");
    scanf("%f", &a);

    printf("Escreva o valor de B: ");
    scanf("%f", &b);

    printf("Escreva o valor de C: ");
    scanf("%f", &c);

    if (a+b<a+c){
        printf("A soma de A + C é maior do que a soma de A + B");
    } else {
        printf("A soma de A + C é menor do que a soma de A + B");
    }

    return 0;
}
