/*

Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
dias consecutivos e calcule:
a. O total de tempo exercitado na semana.
b. A média de tempo diário.
c. O dia em que o paciente realizou o maior tempo de exercício. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int tempo[7];
    int total = 0, maior_tempo = 0, dia_maior_tempo = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite o tempo de exercício do dia %d (em minutos): ", i + 1);
        scanf("%d", &tempo[i]);
        total += tempo[i];

        if (tempo[i] > maior_tempo) {
            maior_tempo = tempo[i];
            dia_maior_tempo = i + 1;
        }
    }

    float media = total / 7.0;

    printf("\nTotal de tempo exercitado na semana: %d minutos\n", total);
    printf("Média de tempo diário: %.2f minutos\n", media);
    printf("Dia com maior tempo de exercício: Dia %d (%d minutos)\n", dia_maior_tempo, maior_tempo);

    return 0;

}