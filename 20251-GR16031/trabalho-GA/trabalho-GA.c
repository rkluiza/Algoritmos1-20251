#include <stdio.h> //Funções de entrada e saída do sistema
#include <locale.h> // Funções de formatação de texto (ou tentativa da mesma)
#include <stdbool.h> // Funções de manipulação de variáveis booleanas 
#include <stdlib.h> // Funções de manipulação de variáveis aleatórias

int main() {

    /*
    Resumo do que deve conter o programa para melhor organização pessoal:

    - Menu inicial;
    - Entrada de dados: População total, pessoas inicialmente infectadas, taxa de contágio,
    porcentagem da população vacinada, efetividade da vacina e número de dias da simulação;
    - Simulação de crescimento: novos infectados * (taxa de contagio / 100)
    - O número de novos infectados não pode ultrapassar o de pessoas sucetiveís;
    - Eventos aleatórios que podem ocorrer durante a simulação:
        - Aglomeração: aumenta a taxa de contágio em 25%;
        - Isolamento voluntário: diminui a taxa de contágio em 20%;
        - Mídia gera alerta: diminui a taxa de contágio em 30%;
        - Mutação mais contagiosa: aumenta a taxa de contágio em 50%;
    - O Loop pode terminar antes, se todos os sucetíveis forem infectados;
    - Exibição de Resultados:
        População total;
        Infectados iniciais;
        Taxa de contágio;
        População vacinada;
        Efetividade da vacina;
        Dias simulados;

        Dia 1: X infectados
        Dia 2: X infectados (+2) (evento: Aglomeração!)
        Dia 3: X infectados (+3) (evento: Mutação mais contagiosa!)
        Dia 4: X infectados (+5)
        Dia 5: X infectados (+8)

        Total infectados;
        População vacinada;
        Vacinados infectados;
        População saudável;
    
    */
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Define o idioma para português do Brasil

    //Declaração das variáveis utilizadas no programa
    int simul, populacao_total, n_infectados, dias_simulacao,sucetiveis, vacinados_infectados;
    float taxa_contagio, porcentagem_vacinada, efetividade_vacina;

    int saida_dia = 1;
    int novos_infectados = 0;
    bool controle = true;

    //Menu de escolha inicial
    printf("Simulação de contágio de uma doença\n");

    while (controle == true){
        printf("Você deseja iniciar uma simulação? \n");
        printf("1 - Nova simulação \n2 - Sair do programa \n");
        scanf("%i", &simul);

        if (simul == 1){
            printf("Simulação iniciada\n");

            printf("Digite a população total da região: \n");
            scanf("%i", &populacao_total); // recebe a váriavel populacao_total
            while (populacao_total <= 0) {
                printf("Número inválido. Digite novamente: ");
                scanf("%i", &populacao_total); // tratamento simples de erro para a variável populacao_total
            }

            printf("Digite o número de pessoas inicialmente infectadas: \n");
            scanf("%i", &n_infectados); // recebe a variável n_infectados
            while (n_infectados < 0 || n_infectados > populacao_total) {
                printf("Número inválido. Digite novamente: ");
                scanf("%i", &n_infectados); // tratamento simples de erro para a variável n_infectados
            }

            printf("Digite a taxa de contágio (0 a 100%%): \n");
            scanf("%f", &taxa_contagio); // recebe a variável taxa_contagio
            while (taxa_contagio < 0 || taxa_contagio > 100) {
                printf("Número inválido. Digite novamente: ");
                scanf("%f", &taxa_contagio); // tratamento simples de erro para a variável taxa_contagio
            }

            printf("Digite a porcentagem da população vacinada (0 a 100%%): \n");
            scanf("%f", &porcentagem_vacinada); // recebe a variável porcentagem_vacinada
            while (porcentagem_vacinada < 0 || porcentagem_vacinada > 100) {
                printf("Número inválido. Digite novamente: ");
                scanf("%f", &porcentagem_vacinada); // tratamento simples de erro para a variável porcentagem_vacinada
            }

            printf("Digite a efetividade da vacina (0 a 100%%): \n");
            scanf("%f", &efetividade_vacina); // recebe a variável efetividade_vacina
            while (efetividade_vacina < 0 || efetividade_vacina > 100) {
                printf("Número inválido. Digite novamente: ");
                scanf("%f", &efetividade_vacina); // tratamento simples de erro para a variável efetividade_vacina
            }

            printf("Digite o número de dias da simulação: \n");
            scanf("%i", &dias_simulacao); // recebe a variável dias_simulacao
            while (dias_simulacao <= 0) {
                printf("Número inválido. Digite novamente: ");
                scanf("%i", &dias_simulacao); // tratamento simples de erro para a variável dias_simulacao
            }

            // saída das entradas, primeira saída de informações da opção Sim do menu
            printf("População total: %i\n", populacao_total);
            printf("Número de pessoas inicialmente infectadas: %i\n", n_infectados);
            printf("Taxa de contágio: %.2f%%\n", taxa_contagio);
            printf("População vacinada: %f\n", (porcentagem_vacinada * populacao_total) /100);
            printf("Efetividade da vacina: %.2f%%\n", efetividade_vacina);
            printf("Número de dias da simulação: %i\n", dias_simulacao);

            //Cálculo de sucetiveis 
            sucetiveis = ((100 - porcentagem_vacinada) * populacao_total / 100) + (porcentagem_vacinada * populacao_total / 100) * (1 - efetividade_vacina / 100);

            //Exibição dos sucetiveis
            printf("O número de sucetiveis é: %i;\n\n", sucetiveis);
            
            //Dia 1 da simulação, fora do loop para apresentar o valor incial
            printf("Dia 1: %i infectados \n", n_infectados);
            
            dias_simulacao = dias_simulacao - 1; // decrementa o número de dias da simulação para o loop
            
            //Loop de simulação
            for (dias_simulacao; dias_simulacao > 0 && novos_infectados<= sucetiveis; dias_simulacao--){
                
                // Sorteio de evento aleatório
                int evento = rand() % 100 + 1;

                if (evento <= 15) { // Aglomeração
                    taxa_contagio += 25;
                    printf("Evento: Aglomeração ocorreu. Taxa de contágio aumentada em 25%%.\n");
                } else if (evento <=25 && evento > 15 ) { // Isolamento voluntário
                    taxa_contagio -= 20;
                    printf("Evento: Isolamento voluntário ocorreu. Taxa de contágio reduzida em 20%%.\n");
                } else if (evento <= 30 && evento > 25) { // Mídia gera alerta
                    taxa_contagio -= 30;
                    printf("Evento: Mídia gera alerta. Taxa de contágio reduzida em 30%%.\n");
                } else if (evento <= 35 && evento > 30) { // Mutação mais contagiosa
                    taxa_contagio += 50;
                    printf("Evento: Mutação mais contagiosa ocorreu. Taxa de contágio aumentada em 50%%.\n");
                }

                // Cálculo do número de novos infectados
                novos_infectados = n_infectados + (n_infectados * taxa_contagio / 100); 
                saida_dia = saida_dia + 1;
                n_infectados = novos_infectados; // Atualiza o número de infectados
                
                printf("Dia %i: infectados: %i.      Taxa de contágio: %f\n", saida_dia, novos_infectados, taxa_contagio);
                

                // Verifica se o número de novos infectados ultrapassa o número de suscetíveis
                if (novos_infectados >= sucetiveis) {
                    printf("Todos os suscetíveis foram infectados. Simulação encerrada.\n");
                    controle= false;
                }

            }

            //Saída de dados

                float vacinados = (porcentagem_vacinada * populacao_total) / 100;
                float vacinados_suscetiveis = vacinados * (1 - efetividade_vacina / 100);
                float proporcao_vacinados_suscetiveis = vacinados_suscetiveis / sucetiveis;
    
                vacinados_infectados = proporcao_vacinados_suscetiveis * novos_infectados;
    
                printf("\n\nNúmero total de infectados: %i\n", novos_infectados);
                printf("População vacinada: %.0f\n", vacinados);
                printf("Vacinados infectados: %i\n", (int)vacinados_infectados);
                printf("População saudável: %i\n", populacao_total - novos_infectados);
                

            printf("Simulação encerrada\n");

        } else if (simul == 2){
            printf("Simulação encerrada\n");
            controle = false;
        } else {
            printf("Opção inválida\n");
        }

    }

}

