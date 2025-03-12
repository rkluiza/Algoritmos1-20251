/*2. Um turista deseja comprar d�lares em uma casa de c�mbio. Escreva um programa que leia a cota��o
do d�lar para real, a quantidade de d�lares que o turista deseja comprar, e calcule o valor total em
reais que ele precisar� pagar.
*/

#include <stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da
#include <locale.h> // Inclus�o da biblioteca para formata��o de n�meros decimais
#include <limits.h> // Inclus�o da biblioteca para limites de vari�veis

int main(){

    setlocale(LC_ALL, "Portuguese"); // Configura��o para a l�ngua portuguesa para exibir assentos
    //Depois dessa configura��o, o programa passa a exibir corretamente os caracteres especiais da l�ngua portuguesa. � necess�rio, dentro do 
    //VSCode ir em CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1


    float cotacao, quantidade, total; // Declara��o de vari�veis
    printf("Digite a cota��o do d�lar atualmente: "); // Solicita a entrada de dados
    scanf("%f", &cotacao); // L� a entrada de dados
    printf("Digite a quantidade de d�lares que deseja comprar:"); // Solicita a entrada de dados
    scanf("%f", &quantidade); // L� a entrada de dados
    total = cotacao * quantidade; // Calculo do valor total em reais
    printf("O valor total em reais que o turista precisar� pagar �: %.2f\n", total); // Sa�da de dados

    return 0; // fim da fun��o principal    
}

// O programa ir� exibir o valor total em reais com duas casas decimais. Para isso, utilizamos %.2f no printf.
// � "%f" para simbolizar a entrada de um float
// � "%i" para simbolizar a entrada de um inteiro
// � "%c" para simbolizar a entrada de um caractere e etc
