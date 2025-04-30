/*

Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o
número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou
correto. O programa termina quando o usuário acerta o número.

*/

/*

A função rand() gera um número pseudoaleatório inteiro entre 0 e RAND_MAX (um valor definido pela implementação da biblioteca padrão C, geralmente um número grande como 32767).
rand() % (100 + 1):
O operador % (módulo) é usado para obter o resto da divisão do número gerado por rand() por 101 (pois 100 + 1 = 101).
Isso faz com que o resultado esteja no intervalo de 0 a 100, já que o resto de uma divisão por 101 nunca será maior que 100.

*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int num, aposta;
    bool controlador = true;
    num = rand() % (100 + 1);

    while (controlador==true){
        printf("Escreva a sua aposta no número sorteado: \n");
        scanf("%d", &aposta);

        if (num>aposta){
            printf("É um número maior que sua aposta!\n");
        }
        if (num<aposta){
            printf("É um número menor que a sua aposta\n");
        }
        if(num==aposta){
            printf("Você acertou!");
            controlador = false;
        }

    }


    return 0;
}