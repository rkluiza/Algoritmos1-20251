/*

Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada
dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os
registros diários de chuva para uma semana e informe:
a. O total de chuva acumulada.
b. O dia com maior quantidade de chuva.
c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre
possível seca.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){

    int chuva[7];
    int total = 0, maior_chuva = 0, dia_maior_chuva = 0;
    bool alerta_seca = false;

    for (int i = 0; i < 7; i++) {
        printf("Digite a quantidade de chuva do dia %d (em mm): ", i + 1);
        scanf("%d", &chuva[i]);
        total += chuva[i];

        if (chuva[i] > maior_chuva) {
            maior_chuva = chuva[i];
            dia_maior_chuva = i + 1;
        }

        if (chuva[i] < 5) {
            alerta_seca = true;
        }
    }

    printf("\nTotal de chuva acumulada: %d mm\n", total);
    printf("Dia com maior quantidade de chuva: Dia %d (%d mm)\n", dia_maior_chuva, maior_chuva);

    if (alerta_seca) {
        printf("Alerta: Em algum dia a chuva foi menor que 5 mm, indicando possível seca.\n");
    } else {
        printf("Não houve dias com chuva menor que 5 mm.\n");
    }

    return 0;
}