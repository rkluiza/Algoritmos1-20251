/*

3. Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int faces[6];
int i, valor;
int N;

printf("Escreva a quantidade de vezes que o dado deve ser lançado: \n");
scanf("%d", &N);

srand(time(NULL));

for(i = 0; i < N; i++) {
    valor = rand() % 6; // valores de 0 a 5
    faces[valor]++;
}

printf("\nPercentual de cada face:\n");
for(i = 0; i < 6; i++) {
    printf("Face %d: %.2f%%\n", i+1, (faces[i] * 100.0) / N);
}

}