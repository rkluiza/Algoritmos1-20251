/*

Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    
    int matriz[4][6];
    int soma_linha2 = 0, soma_coluna5 = 0, soma_mult_linha1_4 = 0;
    int soma_colunas_pares = 0, soma_linhas_impares = 0;

    // Preenchendo a matriz com valores aleatórios entre -10 e 10
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            matriz[i][j] = -10 + rand() % 21; // Valores entre -10 e 10
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculando as somas
    for(int j = 0; j < 6; j++) {
        soma_linha2 += matriz[1][j]; // Soma da segunda linha
        if (j == 4) {
            soma_coluna5 += matriz[0][j]; // Soma da quinta coluna
        }
        if (j % 2 == 0) {
            for(int i = 0; i < 4; i++) {
                soma_colunas_pares += matriz[i][j]; // Soma das colunas pares
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if (i % 2 != 0) { // Linhas ímpares
            for(int j = 0; j < 6; j++) {
                soma_linhas_impares += matriz[i][j];
            }
        }
        soma_mult_linha1_4 += matriz[i][0] * matriz[i][3]; // Multiplicação da primeira linha pela quarta linha
    }

    // Exibindo os resultados
    printf("Soma dos elementos da segunda linha: %d\n", soma_linha2);
    printf("Soma dos elementos da quinta coluna: %d\n", soma_coluna5);
    printf("Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %d\n", soma_mult_linha1_4);
    printf("Soma dos elementos só das colunas com índices pares: %d\n", soma_colunas_pares);
    printf("Soma dos elementos só das linhas com índices ímpares: %d\n", soma_linhas_impares);
    return 0;

}