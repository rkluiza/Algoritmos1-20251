/*

Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
exibir uma mensagem indicando o sensor que disparou a ação.

*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int umidade[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a umidade do solo medida pelo sensor %d (em %%): ", i + 1);
        scanf("%d", &umidade[i]);
    }

    for (i = 0; i < 5; i++) {
        if (umidade[i] < 30) {
            printf("Irrigação ativada pelo sensor %d com umidade de %d%%.\n", i + 1, umidade[i]);
        }
    }

    return 0;
}