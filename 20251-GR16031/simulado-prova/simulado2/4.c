/*

4. Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em
uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8
medições (um dia completo) e determine:
a) A média de poluição diária.
b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de
alerta sobre qualidade do ar.
c) Ao final, exiba o número total de medições que geraram um alerta

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
    int poluicao[8];
    int total = 0, acima_150 = 0;
    bool alerta = false;

    for (int i = 0; i < 8; i++) {
        printf("Digite o nível de poluição do ar (em ppm) na medição %d: ", i + 1);
        scanf("%d", &poluicao[i]);
        total += poluicao[i];

        if (poluicao[i] > 150) {
            alerta = true;
            acima_150++;
        }
    }

    float media = total / 8.0;

    printf("\nMédia de poluição diária: %.2f ppm\n", media);

    if (alerta) {
        printf("Alerta: Algumas medições excederam 150 ppm, indicando baixa qualidade do ar.\n");
    } else {
        printf("Todas as medições estão dentro dos limites aceitáveis.\n");
    }

    printf("Número total de medições que geraram alerta: %d\n", acima_150);

    return 0;
}