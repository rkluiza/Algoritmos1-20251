/*
3 - Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    int controle = true;
    char resposta;

    while (controle==true){
        int num, i;
        printf("Digite um numero de 1 a 9: ");
        scanf("%i", &num);

        if (num < 1 || num > 9) {
            printf("Numero invalido. Digite um numero entre 1 e 9.\n");
            return 1;
        }

        printf("Tabuada do %i:\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%i x %i = %i\n", num, i, num * i);
        }

        printf("Deseja calcular outro número? (S/N): \n");
        scanf(" %c", &resposta);

        if(resposta=='S' || resposta=='s'){
            controle=true;
        }else if(resposta=='N' || resposta=='n'){
            controle=false;
        }else{
            printf("Resposta inválida. Saindo do programa.\n");
            controle=false;
        }

    }

    return 0;
}
