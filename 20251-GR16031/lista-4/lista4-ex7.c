/*
7. Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char nomes[5][50]; 
    char primeiro[50]; 
    int i, j;
    bool controle = true;

    printf("Digite 5 nomes:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    strcpy(primeiro, nomes[0]);

    for (i = 1; i < 5; i++) {
        if (strcmp(nomes[i], primeiro) < 0) { // compara os nomes, se o nome atual for maior q o primeiro, substitui
            strcpy(primeiro, nomes[i]); // funcão strcpy copia o nome
        }
    }

    printf("O primeiro nome em ordem alfabética é: %s\n", primeiro);

    return 0;
}





