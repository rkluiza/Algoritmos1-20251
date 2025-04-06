//Lista de exercicios dois da disciplina de Algoritmos e Programação: Fundamentos

/*
1. Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo equivalente em
segundos na tela.
*/
#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
int main() { 
    int minuto, segundo; 
    printf("Digite a quantidade de minutos: "); 
    scanf("%i", &minuto); 
    segundo = minuto * 60; 
    printf("O tempo em segundos e: %i\n", segundo); 
    return 0; 
}