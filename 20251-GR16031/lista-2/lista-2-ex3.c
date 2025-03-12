/*Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o peso do
prato do cliente e calcule o valor a ser pago.*/

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <locale.h> // Inclusão da biblioteca para formatação de números decimais
#include <limits.h> // Inclusão da biblioteca para limites de variáveis

int main(){
    float peso, valor;
    printf("Digite o peso do prato do cliente em gramas: ");
    scanf("%f", &peso);
    valor = peso * 40 / 1000;
    printf("O valor a ser pago é: %.2f\n", valor);

    return 0;
}