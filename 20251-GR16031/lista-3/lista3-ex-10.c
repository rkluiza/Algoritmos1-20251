/*

Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main() {
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num, min, max, faces, sucesso;

    printf("Digite quantas faces você deseja que o dado tenha: \n");
    printf("Você pode escolher 4, 6, 8, 12 ou 16 faces \n");
    scanf("%i", &faces);

    if(faces ==4 ){
        min = 1; 
        max = min + 3; 
        num = min + rand() % (max - min + 1);
    } else if (faces == 6) {
        min = 1; 
        max = min + 5; 
        num = min + rand() % (max - min + 1);
    } else if (faces == 8){
        min = 1; 
        max = min + 7; 
        num = min + rand() % (max - min + 1);
    } else if (faces == 12){
        min = 1; 
        max = min + 11; 
        num = min + rand() % (max - min + 1);
    } else if (faces == 16){
        min = 1; 
        max = min + 15; 
        num = min + rand() % (max - min + 1);
    } else {
        printf("Esse dado não existe");
        sucesso = 0;
    }

    if (sucesso == 1){
        printf("O número sorteado foi %i", num);  
    }

    return 0;
}