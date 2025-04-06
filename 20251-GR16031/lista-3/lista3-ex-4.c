/*

Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int num, resto;

    printf("Escreva um número: ");
    scanf ("%i", &num);

    if (num % 3 == 0){
        printf("O número %i é divisível por 3", num);
    } else {
        printf("o número %i não é divisível por 3", num);
    }

    return 0;

}