/* 6. A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma quantidade de
tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 1500,00. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos smartphones e dos tablets. Escreva um
programa que leia o número de smartphones e tablets vendidos em um dia e calcule o total
arrecadado. */

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    int smartphone, tablet;
    float total;
    printf("Digite o número de smartphones vendidos no dia: ");
    scanf("%i", &smartphone);
    printf("Digite o número de tablets vendidos no dia: ");
    scanf("%i", &tablet);
    total = (smartphone * 1000) + (tablet * 1500);
    printf("O total arrecadado com a venda dos smartphones e tablets foi de: R$ %.2f\n", total);

    return 0;
}