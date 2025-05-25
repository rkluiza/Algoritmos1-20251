/*
1. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
Depois disso, implemente algoritmos para:
a. Imprimir o vetor
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
c. Verificar o número de ocorrências do valor 50 neste vetor.
d. Calcular a média dos valores do vetor
e. Encontrar o maior e o menor valor dos elementos do vetor.
f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
g. Imprimir o vetor em ordem inversa
h. Copiar os elementos em ordem inversa para outro vetor.
i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
acessar os vetores depois).

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int vetor[10];

    for (int i=0; i<10; i++){
        vetor[i] = 10 + rand() % (90 + 1);
    }

    printf("O vetor é: \n");
    for (int i=0; i<10; i++){
        printf("%d ", vetor[i]); //A
    }

    printf("\n");

    int existe = 0;
    for (int i=0; i<10; i++){
        if (vetor[i] == 50){
            existe = 1;
            break; //B
        }
    }
    printf("O número 50 %s encontrado no vetor.\n", existe ? "foi" : "não foi");

    int soma = 0;

    for (int i=0; i<10; i++){
        soma += vetor[i]; //D
    }

    int media = soma/10;
    printf("A média dos valores do vetor é: %d\n", media); //C

    int maior = 10;
    int menor = 90;

    for(int i=0; i<10; i++){
        
        if(vetor[i] > maior ){
            maior = vetor[i];               //E
        } 

        if(vetor[i] < menor ){
            menor = vetor[i];
        }

    }

    printf("O maior valor do vetor é: %d\n", maior);
    printf("O menor valor do vetor é: %d\n", menor);

    printf("A soma dos valores é %d\n", soma);

    double produto = 1;
    for(int i=0; i<10; i++){
        produto = produto*vetor[i];
    }

    printf("O produto dos valores é: %d\n", produto); //G

    int vetorInverso[10];
    printf("O novo vetor é: \n");

    for (int i=0; i<10; i++){
        vetorInverso[i] = vetor[9-i];
        printf("%d ", vetorInverso[i]); //H
    }

    return 0;
}
