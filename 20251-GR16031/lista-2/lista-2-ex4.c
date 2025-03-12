/*Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A
e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3.*/


#include <stdio.h>
#include <locale.h>
#include <limits.h> 

int main(){
    float grauA, grauB, media;

    printf("Digite a nota do aluno no grau A: ");
    scanf("%f", &grauA);
    
    printf("Digite a nota do aluno no grau B: ");
    scanf("%f", &grauB);
    media = (grauA/3) + (grauB*2/3);
    printf("A média final é: %.2f\n", media);

    if(media >= 6){
        printf("O aluno foi aprovado\n");
    }else{
        printf("O aluno foi reprovado\n");
    }

    return 0;
}

//Por algum motivo, quando eu coloco virgula ele ignora os proximos scanf e n?o deixa eu digitar o valor. Isso acontece apenas quando a virgula é
// na primeira váriavel
//Coloquei o ponto na entrada de dados e funcionou ?