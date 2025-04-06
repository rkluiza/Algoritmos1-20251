/*

15) Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.

1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float preco, desconto, juros, valor_final;
    int pagamento;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Escolha a forma de pagamento:\n");
    printf("1 - À vista em dinheiro (15%% de desconto)\n");
    printf("2 - À vista no cartão de crédito (10%% de desconto)\n");
    printf("3 - Em duas vezes (sem juros)\n");
    printf("4 - Em três vezes (10%% de juros)\n");
    scanf("%i", &pagamento);

    if (pagamento == 1) {
        desconto = preco * 0.15;
        valor_final = preco - desconto;
        printf("Valor a ser pago: R$ %.2f\n", valor_final);
    } else if (pagamento == 2) {
        desconto = preco * 0.10;
        valor_final = preco - desconto;
        printf("Valor a ser pago: R$ %.2f\n", valor_final);
    } else if (pagamento == 3) {
        valor_final = preco / 2;
        printf("Valor a ser pago em duas vezes de: R$ %.2f\n", valor_final);
    } else if (pagamento == 4) {
        juros = preco * 0.10;
        valor_final = preco + juros;
        printf("Valor a ser pago em três vezes de: R$ %.2f\n", valor_final / 3);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}