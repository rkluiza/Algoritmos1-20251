/*
8. Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.


*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int numero, fatorial, i;
    char resposta;
    bool controle = true;

    while (controle == true) {
        printf("Digite um número inteiro positivo: ");
        scanf("%i", &numero);

        if (numero < 0) {
            printf("Número inválido. O número deve ser inteiro e positivo.\n");
            return 1;
        }

        fatorial = 1; 

        for (i = numero; i > 0; i--) {
            fatorial *= i;
        }

        printf("O fatorial de %i é: %i\n", numero, fatorial);

        printf("Deseja calcular outro fatorial? (S/N): ");
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