/*8. Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia
a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    float celsius, fahrenheit;


    printf("A conversão de temperatura de Celsius para Fahrenheit é dada pela fórmula: F = (C * 9/5) + 32\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}