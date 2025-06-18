/*

1. Implemente uma função cumprimentar que receba como parâmetro o nome de uma pessoa e escreva
a mensagem “Olá, <nome_da_pessoa>!”

*/
#include <stdio.h>


void cumprimentar(const char *nome) {
    printf("Olá, %s!\n", nome);

}
int main(){
    char nome[50]; // Declara um array de caracteres para armazenar o nome

    printf("Digite o seu nome: "); // Solicita ao usuário que digite o nome
    fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário, incluindo espaços

    cumprimentar(nome); // Chama a função cumprimentar com o nome fornecido

    return 0; 
}