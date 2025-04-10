/*
1. Faça um algoritmo para:
a. Gerar e escrever todos os números inteiros do intervalo [0,100].
b. Gerar e escrever os números pares do intervalo [20,50].
c. Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente.
d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
e. Ler 15 números e escrever a soma e a média dos números lidos.
f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.
g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos.
h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
que deverão ser lidos e também deve ser lido do teclado)

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

//a
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

//b
    for (int i = 20; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

//c
    for (int i = 70; i >= 25; i--) {
        printf("%d ", i);
    }
    printf("\n\n");

//d
    for (int i = 95; i >= 25; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

//e
    int num, soma = 0;
    float media;
    for (int i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }
    media = (float)soma / 15;
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n\n", media);

//f
    int par = 0, impar = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n\n", impar);

//g
    int positivo = 0, negativo = 0;
    for (int i = 0; i < 20; i++) {
        num = rand() % 21 - 10; // Gera números entre -10 e 10
        if (num > 0) {
            printf("%d POSITIVO\n", num);
            positivo++;
        } else if (num < 0) {
            printf("%d NEGATIVO\n", num);
            negativo++;
        } else {
            printf("%d NULO\n", num);
        }
    }
    printf("Quantidade de positivos: %d\n", positivo);
    printf("Quantidade de negativos: %d\n\n", negativo);

//h
    int n, soma_n = 0;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma_n += num;
    }
    printf("Soma dos numeros lidos: %d\n", soma_n);


    return 0;
}
