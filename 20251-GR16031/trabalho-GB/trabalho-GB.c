
/*

Requisitos principais
− Representar cada personagem com uma struct Personagem contendo:
o classe, vida, ataque, defesa, habilidade_ativa
− Usar arrays de structs para representar os dois times
− Implementar funções para evitar repetição de código em ações bem definidas, como inicializar as
equipes, calcular dano etc..

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_STR 50

//Fazer a definição da struct como se fosse um novo tipo de dado
typedef struct {
    
    char classe[MAX_STR];
    int vida;
    int ataque;
    int defesa;
    double hab_especial;


} Personagem;

int Sortear(int num_max)
{
    srand(time(NULL));
    int resultado = (rand() % num_max + 1);
    return resultado;
}



int main(){

    int contador = 0;
    int atacante, defensor;

    Personagem time1[5] = {
        {"Guerreiro", 100, 20, 10, 0.0}, // Habilidade especial aleatória entre 1 e 5
        {"Mago", 100, 30, 5, 0.0},
        {"Caçador", 100, 18, 8, 0.0}, //Verificar se a habilidade especial é um valor entre 1 e 15 
        {"Paladino", 100, 15, 12, 0.0}, //Verificar se a habilidade especial é um valor entre 1 e 30
        {"Bárbaro", 100, 25, 6, 1,}
    };
    Personagem time2[5] = {   
        {"Guerreiro", 100, 20, 10, 0.0}, // Habilidade especial aleatória entre 1 e 5
        {"Mago", 100, 30, 5, 0.0},
        {"Caçador", 100, 18, 8, 0.0}, //Verificar se a habilidade especial é um valor entre 1 e 15 
        {"Paladino", 100, 15, 12, 0.0}, //Verificar se a habilidade especial é um valor entre 1 e 30
        {"Bárbaro", 100, 25, 6, 1,}
    };


    printf("QUE COMEÇEM OS JOGOS\n");

    while (contador!=1){

        Sortear(2); // Sorteio para verificar quem inica a batalha
        if (Sortear(2) == 1) {
            printf("Time 1 começa atacando!\n");
            
            // Selecionar o atacante com base no vida/ataque
            for (int i=0; i < 5; i++){
                int maior_vida = 0;

                if(maior_vida<(time1[i].vida/time1[i].ataque)){
                    maior_vida = time1[i].vida/time1[i].ataque;
                    atacante = i;
                }
            }

            printf("%c (Vida: %d) ataca ", time1[atacante].classe, time1[atacante].vida);

            // sorteio do defensor
            defensor = Sortear(5) - 1;

            printf("%c (Vida: %d)", time2[defensor].classe, time2[defensor].vida);
            contador = 1;

        } else {
            printf("Time 2 ataca!\n");
            defensor = Sortear(5) - 1; // -1 para ajustar o índice do array
            contador = 1;
        }

    }



    return 0;
}