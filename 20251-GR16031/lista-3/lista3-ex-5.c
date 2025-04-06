/*
Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar
*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h> 

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int a, b;

    printf("Escreva um número: ");
    scanf("%i", &a);

    if (a%2==0){
        printf("Esse número é par!");
    } else {
        printf("Esse número é ímpar!");
    }

    return 0;

}