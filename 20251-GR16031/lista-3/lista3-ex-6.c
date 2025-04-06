/*

6) Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu


*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h> 

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, num, min, max, soma, aposta;

    min = 0; // min deve começar de 0
    max = min + 5; // max é min + 5
    num = min + rand() % (max - min + 1); // Número aleatório entre min e max


    printf("Você deseja apostar no par ou ímpar?\n 1 - Par \n 2 - Impar\n");
    scanf ("%i", &aposta);
        if (aposta !=1 && aposta !=2) {
            printf("Escreva um número válido para apostar \n");
        } else {

            printf("Escreva um número: ");
            scanf("%i", &a);

            soma = num + a;

            if (soma%2==0  && aposta==1){
                printf("A soma foi: %i \n Você venceu a aposta!",soma);
            } else if (soma%2==1  && aposta==2) {
                printf("A soma foi: %i \n Você venceu a aposta!", soma);
            } else {
                printf("A soma foi: %i \n Eu ganhei a aposta", soma);
            }
        }

    return 0;
}