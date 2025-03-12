//Lista de exercicios dois da disciplina de Algoritmos e Programação: Fundamentos

/*
1. Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo equivalente em
segundos na tela.
*/
#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
int main() { // função principal
    int minuto, segundo; // Declaração de variáveis
    printf("Digite a quantidade de minutos: "); // Solicita a entrada de dados
    scanf("%i", &minuto); // Lê a entrada de dados
    segundo = minuto * 60; // Calculo da conversão de minutos para segundos
    printf("O tempo em segundos e: %i\n", segundo); // Saída de dados
    return 0; // fim da função principal
}