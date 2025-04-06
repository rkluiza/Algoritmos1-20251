/*

1) Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n_a, n_b, resultado;

    printf("Escreva um número para ser o dividendo: ");
    scanf("%i", &n_a);

    printf("Escreva um outro número para ser o divisor: S");
    scanf("%i", &n_b);

    if (n_b != 0){
        resultado = (n_a/n_b);
        printf("O resultado é: %.3f", resultado);
    } else {
        printf("Por gentileza, escreva o divisor com um número diferente de 0");
    }
    
    return 0;
}