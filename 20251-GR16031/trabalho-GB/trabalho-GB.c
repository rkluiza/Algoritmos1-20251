
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

#define TAM_EQUIPE 5

// Define os tipos de classe como enumeração
typedef enum {GUERREIRO, MAGO, CACADOR, PALADINO, BARBARO} Classe;

// Struct do personagem
typedef struct {
    char nome[20];      
    Classe classe;      
    int vida;           
    int ataque;         
    int defesa;         
    int habilidade_ativa; 
} Personagem;

// Nomes das classes para os prints
const char* nomes_classes[] = {"Guerreiro", "Mago", "Caçador", "Paladino", "Bárbaro"};

// Descrição do cabeçalho
int Calcular_chance(int porcentagem);
void inicializarPersonagem(Personagem* p, Classe c);
void inicializarEquipe(Personagem time[]);
int vivos(Personagem time[]);
int escolherAtacante(Personagem time[]);
int escolherAlvo(Personagem time[]);
int calcularDano(Personagem atacante, Personagem defensor);
void aplicarDano(Personagem* defensor, int dano);
void imprimirTime(Personagem time[], int numero);

int main() {
    srand(time(NULL));  
    Personagem time1[TAM_EQUIPE], time2[TAM_EQUIPE];
    inicializarEquipe(time1);
    inicializarEquipe(time2);

    int turno = rand() % 2; // Decide quem começa
    int rodada = 1;

    while (vivos(time1) > 0 && vivos(time2) > 0) {

        printf("\n>>> Rodada %d:\n", rodada);
        
        if (turno == 0) {
            int a = escolherAtacante(time1);
            int d = escolherAlvo(time2);

            printf("Time 1 — %s (Vida: %d) ataca %s do Time 2 (Vida: %d)\n",
                 time1[a].nome, time1[a].vida, time2[d].nome, time2[d].vida);

            int dano = calcularDano(time1[a], time2[d]);
            printf("→ Dano causado: %d\n", dano);
            aplicarDano(&time2[d], dano);
        
        } else {
            int a = escolherAtacante(time2);
            int d = escolherAlvo(time1);
            printf("Time 2 — %s (Vida: %d) ataca %s do Time 1 (Vida: %d)\n",
                time2[a].nome, time2[a].vida, time1[d].nome, time1[d].vida);
            int dano = calcularDano(time2[a], time1[d]);
            printf("→ Dano causado: %d\n", dano);
            aplicarDano(&time1[d], dano);
        }

        printf("Estado Atual: \n");
        imprimirTime(time1, 1);
        imprimirTime(time2, 2);
        turno = 1 - turno;
        rodada++;
    }

    // Resultado final
    if (vivos(time1) > 0)
        printf("\n>>> Vitória do Time 1!\n");
    else if (vivos(time2) > 0)
        printf("\n>>> Vitória do Time 2!\n");
    else
        printf("\n>>> Empate!\n");

    return 0;
}

// Calcular Calcular_
int Calcular_chance(int porcentagem) {
    return (rand() % 100) < porcentagem;
}

// Inicializa um personagem com atributos padrão de acordo com sua classe
void inicializarPersonagem(Personagem* p, Classe c) {
    p->classe = c;
    p->vida = 100;
    p->habilidade_ativa = 0;

    switch(c) {
        case GUERREIRO:
            p->ataque = 20; p->defesa = 10; strcpy(p->nome, "Guerreiro"); break;
        case MAGO:
            p->ataque = 30; p->defesa = 5; strcpy(p->nome, "Mago"); break;
        case CACADOR:
            p->ataque = 18; p->defesa = 8; strcpy(p->nome, "Caçador"); break;
        case PALADINO:
            p->ataque = 15; p->defesa = 12; strcpy(p->nome, "Paladino"); break;
        case BARBARO:
            p->ataque = 25; p->defesa = 6; strcpy(p->nome, "Bárbaro"); break;
    }
}

void inicializarEquipe(Personagem time[]) {
    for (int i = 0; i < TAM_EQUIPE; i++) {
        inicializarPersonagem(&time[i], i);
    }
}

// Contagem quantos personagens estão vivos no time
int vivos(Personagem time[]) {
    int cont = 0;
    for (int i = 0; i < TAM_EQUIPE; i++)
        if (time[i].vida > 0)
            cont++;
    return cont;
}

// Melhor razão
int escolherAtacante(Personagem time[]) {
    int melhor = -1;
    float melhorRazao = -1;
    for (int i = 0; i < TAM_EQUIPE; i++) {
        if (time[i].vida > 0) {
            float razao = (float)time[i].vida / time[i].ataque;
            if (razao > melhorRazao) {
                melhorRazao = razao;
                melhor = i;
            }
        }
    }
    return melhor;
}

// Escolhe um alvo aleatoriamente, verifica a vida dos alvos com um IF
int escolherAlvo(Personagem time[]) {
    int v[TAM_EQUIPE], qtd = 0;
    for (int i = 0; i < TAM_EQUIPE; i++)
        if (time[i].vida > 0)
            v[qtd++] = i;
    if (qtd == 0) return -1;
    return v[rand() % qtd];
}

// Calcula o dano aplicando regras de chance de erro e habilidades
int calcularDano(Personagem atacante, Personagem defensor) {
    int dano_base = atacante.ataque;
    int defesa = defensor.defesa;
    int dano = 0;

    // Habilidade do atacante
    switch (atacante.classe) {
        case GUERREIRO:
            if (Calcular_chance(20)) {
                printf("→ Habilidade especial do Guerreiro ativada: Dano X2!\n");
                dano_base *= 2;
            }
            break;
        case MAGO:
            if (Calcular_chance(25)) {
                printf("→ Habilidade especial do Mago ativada: Ignora defesa!\n");
                defesa = 0;
            }
            break;
        case CACADOR:
            if (Calcular_chance(15)) {
                printf("→ Habilidade especial do Caçador ativada: Ataque Duplo!\n");
                return calcularDano(atacante, defensor) + calcularDano(atacante, defensor);
            }
            break;
        case BARBARO:
            // Nunca erra
            break;
        default: break;
    }

    // Calcular_ de erro (20%) exceto Bárbaro
    if (atacante.classe != BARBARO && Calcular_chance(20)) {
        printf("→ Ataque errou!\n");
        return 0;
    }

    // Calcular_ de falha da defesa
    if (Calcular_chance(20)) {
        printf("→ Defesa falhou! Ignorando defesa.\n");
        defesa = 0;
    }

    dano = dano_base - defesa;
    return dano < 0 ? 0 : dano;
}

// Aplica o dano no defensor verifica habilidades como regeneração
void aplicarDano(Personagem* defensor, int dano) {
    if (defensor->vida <= 0) return; //acessando membros de uma estrutura através de um ponteiro.

    defensor->vida -= dano;
    if (defensor->vida < 0) defensor->vida = 0;

    if (defensor->classe == PALADINO && defensor->vida > 0 && Calcular_chance(30)) {
        int vida_perdida = 100 - defensor->vida;
        int cura = vida_perdida * 0.2;
        defensor->vida += cura;
        printf("→ Regeneração do Paladino: +%d de vida!\n", cura);
    }
}

// Imprime o status atual do time
void imprimirTime(Personagem time[], int numero) {
    printf("\nTime %d:\n", numero);
    for (int i = 0; i < TAM_EQUIPE; i++) {
        printf("  %s - Vida: %d\n", time[i].nome, time[i].vida);
    }
}
