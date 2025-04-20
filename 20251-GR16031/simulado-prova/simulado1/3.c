/*

Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
e exiba a população ao final de cada mês, considerando a migração

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int meses, populacao;

    printf("Escreva o número de meses da simulação da colmeia: \n");
    scanf("%i", &meses);
    printf("Escreva a população inicial da colmeia: \n");
    scanf("%i", &populacao);

    for(int num=1; num < meses; num++){
        populacao = populacao*2 - ((populacao*2)*0.03);
        printf("Mês: %d\nPopulação da colmeia: %d\n", num, populacao);

    }

    return 0;

}