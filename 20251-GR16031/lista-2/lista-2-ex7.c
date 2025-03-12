/*7. Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus
pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número
de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia.*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    int passaros;
    float total;

    printf("Digite o número de pássaros que o criador possui: ");
    scanf("%i", &passaros);
    total = passaros * 30;
    if (total>1000){
        printf("A quantidade total de ração necessária por dia é de: %.2f kg\n", total/1000);
    }
    else {
        printf("A quantidade total de ração necessária por dia é de: %.2f gramas\n", total);
    }

    return 0;
}

//fiz uma conversão para kgs, caso seja o caso de a quantidade de ração ser maior que 1kg