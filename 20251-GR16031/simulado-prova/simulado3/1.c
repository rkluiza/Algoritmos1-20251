// Arquivo: 1.c

#include <stdio.h>  // Necessário para operações de entrada/saída como printf
#include <stdlib.h> // Necessário para as funções srand() e rand()
#include <time.h>   // Necessário para a função time(), usada para semear o gerador de números aleatórios

// Função para sortear e retornar um número inteiro dentro do intervalo fechado [inicio, fim]
int sortear(int inicio, int fim) {
    // Calcula o tamanho do intervalo (inclusive)
    int range = fim - inicio + 1;
    // Gera um número aleatório dentro do intervalo e adiciona 'inicio' para deslocá-lo
    return inicio + (rand() % range);
}

int main() {
    // Semeia o gerador de números aleatórios usando o tempo atual.
    // Isso garante que sequências diferentes de números aleatórios sejam geradas a cada execução do programa.
    srand(time(NULL));

    // Exemplo de uso da função sortear
    int nroSorteado = sortear(1, 10); // Sorteia um número entre 1 e 10 (inclusive)
    printf("Numero sorteado (1-10): %d\n", nroSorteado); // Imprime o número sorteado

    nroSorteado = sortear(50, 100); // Sorteia um número entre 50 e 100 (inclusive)
    printf("Numero sorteado (50-100): %d\n", nroSorteado); // Imprime o número sorteado

    return 0; // Indica que o programa foi executado com sucesso
}