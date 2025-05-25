#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int dias[30];
    double soma = 0.0, media = 0;
    int maior = 100, menor = 500;
    int dia_menor = 0, dia_maior = 0;

    printf("Escreva o consumo de agua durante 30 dias\n");

    for(int i = 0; i<30; i++){
        dias[i] = 100 + rand() % 400 ; // valores de 100 a 500
        printf("Dia %d: %d\n", i+1, dias[i]);

        soma += dias[i];

        if (maior<dias[i]){
            maior = dias[i];
            dia_maior = i+1;
        }
        if(menor>dias[i]){
            menor = dias[i];
            dia_menor = i+1;
        }

    }

    media = soma/30;

    printf("O consumo total é: %.1f\n", soma);
    printf("A média do consumo por dia é: %.1f\n", media);
    printf("O menor consumo foi no dia %d\n", dia_menor);
    printf("O maior consumo foi no dia %d\n", dia_maior);




}