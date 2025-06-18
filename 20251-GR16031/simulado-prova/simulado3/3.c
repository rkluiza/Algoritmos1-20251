// Arquivo: 3.c

#include <stdio.h>  // Necessário para operações de entrada/saída como printf e scanf
#include <string.h> // Necessário para funções de manipulação de string como strcmp

int main() {
    // Declara um array para armazenar o gabarito da prova de 10 questões.
    // Cada elemento é um array de char (string) para armazenar respostas como 'a', 'b', 'c', etc.
    char gabarito[10][2]; // [numero_da_questao][caractere_da_resposta + terminador_nulo]

    // Declara um array para armazenar as respostas do estudante.
    char respostasEstudante[10][2];

    int acertos = 0; // Contador de respostas corretas

    // --- Parte 1: Cadastrar o gabarito ---
    printf("--- Cadastro do Gabarito da Prova ---\n");
    for (int i = 0; i < 10; i++) { //
        printf("Digite a resposta para a Questao %d (a-f): ", i + 1); //
        scanf(" %1s", gabarito[i]); // Lê um único caractere, %1s lê um caractere não-espaço + nulo
                                    // O espaço antes de %1s consome quaisquer caracteres de nova linha restantes
    }

    // --- Parte 2: Entrar com as respostas do estudante e corrigir a prova ---
    printf("\n--- Correcao da Prova do Estudante ---\n"); //
    printf("Digite as respostas do estudante:\n"); //
    for (int i = 0; i < 10; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %1s", respostasEstudante[i]); // Lê a resposta do estudante para cada questão

        // Compara a resposta do estudante com a resposta correta do gabarito
        // strcmp retorna 0 se as strings forem idênticas
        if (strcmp(respostasEstudante[i], gabarito[i]) == 0) {
            printf("Questao %d: resposta correta\n", i + 1); //
            acertos++; // Incrementa a contagem de respostas corretas
        } else {
            printf("Questao %d: resposta incorreta. A resposta correta e %s.\n", i + 1, gabarito[i]); //
        }
    }

    // --- Parte 3: Calcular e exibir a pontuação final ---
    printf("\n--- Resultado Final ---\n");
    printf("A pontuacao do estudante e %d/10.\n", acertos); //

    return 0; // Indica que o programa foi executado com sucesso
}