/*2. Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a cotação
do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o valor total em
reais que ele precisará pagar.
*/

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <locale.h> // Inclusão da biblioteca para formatação de números decimais
#include <limits.h> // Inclusão da biblioteca para limites de variáveis

int main(){

    setlocale(LC_ALL, "Portuguese"); // Configuração para a língua portuguesa para exibir assentos
    //Depois dessa configuração, o programa passa a exibir corretamente os caracteres especiais da língua portuguesa. É necessário, dentro do 
    //VSCode ir em CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1


    float cotacao, quantidade, total; // Declaração de variáveis
    printf("Digite a cotação do dólar atualmente: "); // Solicita a entrada de dados
    scanf("%f", &cotacao); // Lê a entrada de dados
    printf("Digite a quantidade de dólares que deseja comprar:"); // Solicita a entrada de dados
    scanf("%f", &quantidade); // Lê a entrada de dados
    total = cotacao * quantidade; // Calculo do valor total em reais
    printf("O valor total em reais que o turista precisará pagar é: %.2f\n", total); // Saída de dados

    return 0; // fim da função principal    
}

// O programa irá exibir o valor total em reais com duas casas decimais. Para isso, utilizamos %.2f no printf.
// é "%f" para simbolizar a entrada de um float
// é "%i" para simbolizar a entrada de um inteiro
// é "%c" para simbolizar a entrada de um caractere e etc
