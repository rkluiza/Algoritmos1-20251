/*5. Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para ler o
preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. Calcule quantos
litros ele conseguiu colocar no tanque e exiba na tela.*/

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <locale.h> // Inclusão da biblioteca para formatação de números decimais
#include <limits.h> // Inclusão da biblioteca para limites de variáveis

int main(){
    float preco_litro, valor, litros;
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &preco_litro);
    printf("Digite o valor que o motorista tem disponível para abastecer: ");
    scanf("%f", &valor);
    litros = valor / preco_litro;
    printf("O motorista conseguiu colocar %.2f litros no tanque\n", litros);

    return 0;
}