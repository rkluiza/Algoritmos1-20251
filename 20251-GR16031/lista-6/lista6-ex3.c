/*

Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int identidade[4][4];

    // Preenche a matriz identidade
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j)
                identidade[i][j] = 1;
            else
                identidade[i][j] = 0;
        }
    }

    // Imprime a matriz identidade
    printf("Matriz identidade 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }






}