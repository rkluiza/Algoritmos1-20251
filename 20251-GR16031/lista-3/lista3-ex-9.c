/*

Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main() {
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float c_euro, c_dolar, convert, valor;
    int sucesso, operacao;
 
    sucesso = 1;

    printf("ESCREVA A COTAÇÃO DAS MOEDAS SOLICITADAS ABAIXO EM RELAÇÃO AO REAL: ");

    printf("Escreva a cotação do Euro:");
    scanf ("%f", &c_euro);
    printf("Escreva a cotação do Dólar:");
    scanf ("%f", &c_dolar);

    printf("Certo, agora coloque o número da operação que deseja executar:\n");
    printf("1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dólar\n");
    printf("3) Converter de Euro para Dólar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dólar para Euro\n");
    printf("6) Converter de Dólar para Real\n");

    scanf("%i", &operacao);
    printf("Agora, digite o valor que deseja converter");
    scanf ("%f", &valor);

    if (operacao == 1){
        convert = valor/c_euro;
    }
    else if (operacao == 2){
        convert = valor/c_dolar;
    } else if (operacao ==3 ){
        convert = (valor/c_euro)*c_dolar;
    } else if (operacao == 4){
        convert = valor/c_euro;
    } else if (operacao == 5) {
        convert = (valor/c_dolar)*c_euro;
    } else if (operacao ==6){
        convert = valor/c_dolar;
    } else {
        printf("Operação inválida!");
        sucesso = 0;
    }

    if (sucesso == 1){
        printf("O valor da conversão foi: %.2f", convert);
    } else {
        printf("Dados inválidos");
    }

    return 0;


}