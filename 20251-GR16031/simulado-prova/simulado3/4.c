// Arquivo: 4.c

#include <stdio.h>  // Necessário para operações de entrada/saída como printf e fgets
#include <string.h> // Necessário para strlen()
#include <ctype.h>  // Necessário para tolower() (opcional, mas bom para insensibilidade a maiúsculas/minúsculas)

int main() {
    char myString[100]; // Declara um array de caracteres (string) para armazenar a entrada, com tamanho 100 

    printf("Digite uma palavra ou frase: "); // 
    // Usa fgets para ler uma linha de texto, incluindo espaços.
    // fgets(buffer, tamanho, stream)
    // myString: o buffer para armazenar a entrada
    // sizeof(myString): o número máximo de caracteres a ler (incluindo o terminador nulo)
    // stdin: o fluxo de entrada padrão (teclado)
    fgets(myString, sizeof(myString), stdin); // 

    // Remove o caractere de nova linha final que fgets frequentemente inclui
    // Verifica se o último caractere antes do terminador nulo é uma nova linha.
    // strlen(myString) retorna o comprimento da string, então strlen(myString) - 1 é o índice do último caractere.
    if (strlen(myString) > 0 && myString[strlen(myString) - 1] == '\n') {
        myString[strlen(myString) - 1] = '\0'; // Substitui a nova linha por um terminador nulo
    }

    printf("String digitada (original): %s\n", myString); // Imprime a string original

    // Itera pela string caractere por caractere
    for (int i = 0; myString[i] != '\0'; i++) { // O loop continua até que o terminador nulo seja alcançado
        // Verifica se o caractere atual é 'r' ou 'R'
        if (myString[i] == 'r' || myString[i] == 'R') {
            myString[i] = 'l'; // Substitui 'r' ou 'R' por 'l' 
        }
    }

    printf("Saida (Cebolinha): %s\n", myString); // Imprime a string modificada 

    return 0; // Indica que o programa foi executado com sucesso
}