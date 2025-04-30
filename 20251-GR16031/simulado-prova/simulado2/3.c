/*
Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em
centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5
dias e exiba:
a) O deslocamento total ao longo do período.
b) O maior deslocamento registrado.
c) A média de deslocamento diário.

*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int deslocamento[5];
    int total = 0, maior_deslocamento = 0;
    float media = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o deslocamento do dia %d (em cm): ", i + 1);
        scanf("%d", &deslocamento[i]);
        total += deslocamento[i];

        if (deslocamento[i] > maior_deslocamento) {
            maior_deslocamento = deslocamento[i];
        }
    }

    media = (float)total / 5;

    printf("\nDeslocamento total ao longo do período: %d cm\n", total);
    printf("Maior deslocamento registrado: %d cm\n", maior_deslocamento);
    printf("Média de deslocamento diário: %.2f cm\n", media);

    return 0;
}



