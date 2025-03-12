/*9. Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras feitas pelos
clientes. Faça um programa que leia o valor da compra e escreva o valor da compra com o desconto.*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    float compra, c_desconto;
    printf("Digite o valor da sua compra: ");
    scanf("%f", &compra);
    c_desconto = compra - (compra * 15 / 100);
    printf("O valor da compra com o desconto é: %.2f\n", c_desconto);

    return 0;
}