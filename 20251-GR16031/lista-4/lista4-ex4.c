/*
4. Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int divisor, valor_inicial, valor_final;
    char resposta;
    bool controle = true;

    while (controle == true) {
        printf("Digite o divisor: ");
        scanf("%i", &divisor);

        printf("Digite o valor inicial do intervalo: ");
        scanf("%i", &valor_inicial);

        printf("Digite o valor final do intervalo: ");
        scanf("%i", &valor_final);

        printf("Os números divisíveis por %i no intervalo de %i a %i são:\n", divisor, valor_inicial, valor_final);
        for (int i = valor_inicial; i <= valor_final; i++) {
            if (i % divisor == 0) {
                printf("%i ", i);
            }
        }
        printf("\n");

        printf("Deseja calcular outro intervalo? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's') {
            controle = true;
        } else if (resposta == 'N' || resposta == 'n') {
            controle = false;
        } else {
            printf("Resposta inválida. Saindo do programa.\n");
            controle = false;
        }
    }

    return 0;
}