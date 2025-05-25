#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int passos[7];
    double soma= 0.0;

    printf("Escreva os passos dados em cada dia da semana: \n");

    for (int i=0; i<7; i++){
        printf("Dia %d: ", i+1);
        scanf("%d", &passos[i]);

        soma += passos[i];

        if (passos[i] >= 10000){
            printf("Você bateu a meta de 10.000 passos no dia %d\n", i+1);
        } 

    }

    double media = soma/7;

    printf("O total de passos na semana foi: %.2f\n", soma);
    printf("A média de passos foi: %.2f \n", media);


}