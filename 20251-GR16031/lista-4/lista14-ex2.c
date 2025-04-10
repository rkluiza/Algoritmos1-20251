/*
 Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroSorteado, tentativa, i;
    srand(time(NULL)); 
    numeroSorteado = rand() % 10 + 1; 

    printf("Tente adivinhar o número sorteado (entre 1 e 10). Você tem 3 tentativas.\n");

    for (i = 0; i < 3; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%i", &tentativa);

        if (tentativa == numeroSorteado) {
            printf("Parabéns! Você acertou o número!\n");
            break;
        } else if (tentativa < numeroSorteado) {
            printf("O número sorteado é maior que %i.\n", tentativa);
        } else {
            printf("O número sorteado é menor que %i.\n", tentativa);
        }
    }

    if (i == 3) {
        printf("Você não acertou. O número sorteado era %i.\n", numeroSorteado);
    }

    return 0;
}