// Arquivo: 2.c

#include <stdio.h> // Necessário para operações de entrada/saída como printf

int main() {
    // Define uma matriz 5x5 preenchida com valores entre 0 e 4, conforme especificado no problema
    int matriz[5][5] = {
        {0, 4, 3, 2, 1},
        {1, 0, 2, 4, 0},
        {3, 2, 4, 4, 0},
        {1, 2, 3, 4, 0},
        {0, 0, 0, 1, 2}
    }; //

    // Cria um array para armazenar as contagens de cada número de 0 a 4.
    // O índice 0 armazenará a contagem de '0', o índice 1 para '1', e assim por diante.
    int contagem[5] = {0}; // Inicializa todas as contagens para 0

    // Itera por cada elemento da matriz 5x5
    for (int i = 0; i < 5; i++) { // Loop para as linhas
        for (int j = 0; j < 5; j++) { // Loop para as colunas
            // Obtém o valor na posição atual da matriz
            int valor = matriz[i][j];
            
            // Verifica se o valor está dentro do intervalo esperado (0-4)
            if (valor >= 0 && valor <= 4) {
                contagem[valor]++; // Incrementa o contador para o valor correspondente
            }
        }
    }

    // Imprime as contagens finais para cada número
    printf("Contagem dos valores na matriz:\n");
    for (int i = 0; i < 5; i++) {
        printf("Quantidade de valores %d: %d\n", i, contagem[i]); //
    }

    return 0; // Indica que o programa foi executado com sucesso
}