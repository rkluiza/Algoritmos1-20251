/*

7) Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>


int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float salario, desconto;
    
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    
    desconto = salario * 0.11;
    
    if (desconto < 318.20){
        printf("O valor do desconto é: %.2f", desconto);
    } else {
        printf("O valor do desconto é: R$318,20");
    }
    
    return 0;

}