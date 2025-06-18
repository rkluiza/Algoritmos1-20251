/*

Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e
4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém.

*/

#include <stdio.h>  // Necessário para operações de entrada/saída como printf
#include <stdlib.h> // Necessário para as funções srand() e rand()
#include <time.h> 

int main(){

    int matriz[5][5];
    int cont0 = 0, cont1 = 0, cont2=0, cont3=0, cont4=0;
    // Preenche a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 5;
        }
    }

    // Imprime a matriz identidade
    printf("Matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
            if (matriz[i][j] == 0){
                cont0 ++;
            }
            
            if (matriz[i][j] == 1){
                cont1 ++;
            }

            if (matriz[i][j] == 2){
                cont2 ++;
            }
            
            if (matriz[i][j] == 3){
                cont3 ++;
            }
            if (matriz[i][j] == 4){
                cont4 ++;
            }
            
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Quantidade de digitos 0: %d\n", cont0);
    printf("Quantidade de digitos 1: %d\n", cont1);
    printf("Quantidade de digitos 2: %d\n", cont2);
    printf("Quantidade de digitos 3: %d\n", cont3);
    printf("Quantidade de digitos 4: %d\n", cont4);


}