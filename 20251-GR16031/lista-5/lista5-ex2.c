/*

2. Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
12 e 20.

*/



#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];
    int vetorFinal[5];

    for (int i = 0; i<5; i++){
        printf("Escreva o valor do vetor: ");
        scanf("%d", &vetor[i]);

        vetorFinal[i] = vetor[i]*i;
    }

    printf("O vetor final é: \n");
    for(int i = 0; i<5; i++){
        printf("%d * %d = %d\n", vetor[i], i, vetorFinal[i]);
    }

return 0;

}

