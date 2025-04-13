/*

5. Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num_alunos, i;
    float nota_a, nota_b, nota_c, media, media_geral = 0.0;
    char grau_substituido;
    bool controle = true;

    printf("Digite o número de alunos: ");
    scanf("%i", &num_alunos);

    for (i = 0; i < num_alunos; i++) {
        printf("Aluno %i:\n", i + 1);
        printf("Digite a nota do grau A: ");
        scanf("%f", &nota_a);
        printf("Digite a nota do grau B: ");
        scanf("%f", &nota_b);

        media = (nota_a/3 + (nota_b/3)*2);
        media_geral += media;

        if (media >= 7.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
            printf("Digite a nota do grau C: ");
            scanf("%f", &nota_c);
            printf("Qual grau deve ser substituído? (A/B): ");
            scanf(" %c", &grau_substituido);

            if (grau_substituido == 'A' || grau_substituido == 'a') {
                media = (nota_c/3 + (nota_b/3)*2);
            } else if (grau_substituido == 'B' || grau_substituido == 'b') {
                media = (nota_a/3 + (nota_c/3)*2);
            } else {
                printf("Grau inválido. Saindo do programa.\n");
                controle = false;
            }

            if (media >= 7.0) {
                printf("APROVADO\n");
            } else {
                printf("REPROVADO\n");
            }
        }
    }

    if (controle) {
        media_geral /= num_alunos;
        printf("Média geral dos alunos: %.2f\n", media_geral);
    }

    return 0;
}