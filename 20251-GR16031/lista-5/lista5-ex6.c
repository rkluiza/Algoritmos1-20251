/*

6. Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
programa que:
a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
acumulada de um jogador.
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
mensagem de "Rodada de Destaque" para esse jogador.
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(0));

    int pont_jogadores[4] = {0,0,0,0};
    int vetor[4];
    int pont_vencedor = 0, vencedor =0;

    for(int j=0; j<5; j++){
        printf("RODADA %d\n", j+1);

        for(int i=0; i<4; i++){
            vetor[i] = rand() % 101 ;
            printf("Jogador %d fez %d pontos\n", i+1, vetor[i]);

            pont_jogadores[i] += vetor[i];

            if(vetor[i]>80){
                printf("Rodada de destaque para o jogador %d\n", i+1);
        
            }

        }

        printf("PONTUAÇÃO FINAL DA RODADA:\n");
        for(int k=0; k<4; k++){
            printf("Jogador %d: %d\n", k+1, pont_jogadores[k]);
        }

    }

    for(int l=0; l<4; l++){
        if (pont_vencedor<pont_jogadores[l]){
            pont_vencedor = pont_jogadores[l];
            vencedor = l+1;
        }
    }

    printf("O vencedor foio Jogador de número %d\n", vencedor);

}