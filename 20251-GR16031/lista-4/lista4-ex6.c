/*
6. Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
dos valores sorteados.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num, menor, maior;
    float media, soma = 0.0;
    int valores[5];

    // Semente para o gerador de números aleatórios
    srand(time(NULL)); 

    // Sorteio de 5 valores entre 0 e 100
    for (i = 0; i < 5; i++) {
        num = rand() % 101; // Gera um número entre 0 e 100
        valores[i] = num;
        printf("Valor sorteado %d: %d\n", i + 1, num);
        soma += num; // Soma os valores para calcular a média
    }

    // Inicializa menor e maior com o primeiro valor sorteado
    menor = maior = valores[0];

    // Encontra o menor e o maior valor
    for (i = 1; i < 5; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    // Calcula a média
    media = soma / 5.0;

    // Exibe os resultados
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}