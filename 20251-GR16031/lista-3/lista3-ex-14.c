/*

14) Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
conforme a seguinte tabela:

a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395;
d) dependentes com mais de 60 anos pagam R$ 480.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>


int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade, dependentes, valor, idadeDependentes, temdependentes, controle= 0;
    float adicional;


    printf("Para o plano de saúde, o valor fixo do convêniado é de R$ 300\n");
    printf("Você tem dependentes? (1 - sim, 2 - não): ");
    scanf("%i", &temdependentes);

    if(temdependentes == 2) {
        printf("O valor a ser pago pelo plano de saúde é: R$ 300\n");
    } else {

        printf("Digite o número de dependentes: ");
        scanf("%i", &dependentes);

        for (int i = 0; i < dependentes; i++) {
            printf("Digite a idade do dependente %i: ", i + 1);
            scanf("%i", &idadeDependentes);

            if (idadeDependentes < 10) {
                adicional = 100;
            } else if (idadeDependentes >= 10 && idadeDependentes <= 30) {
                adicional = 220;
            } else if (idadeDependentes >= 31 && idadeDependentes <= 60) {
                adicional = 395;
            } else {
                adicional = 480;
            }

            adicional += adicional;
        }

        valor = 300 + adicional;
        printf("O valor a ser pago pelo plano de saúde é: R$ %i\n", valor);
}
    return 0;
}