/*

O monitoramento de espécies é uma ferramenta fundamental para a conservação da
biodiversidade. No Brasil, animais como o Tatu-Canastra, o Gato-Maracajá e o TamanduáBandeira estão entre as espécies ameaçadas de extinção e são frequentemente monitorados
por pesquisadores. Implemente um programa em C para registrar a quantidade de
avistamentos dessas 3 espécies ao longo de 7 dias em uma determinada região de mata.
O programa deve:
a) Ler os números de avistamentos diários de cada espécie (um número por dia, durante
7 dias para cada uma).
b) Mostrar o total de avistamentos de cada espécie nestes 7 dias
c) Calcular e mostrar a média de avistamentos por espécie.
d) Informar qual foi a espécie mais avistada e qual foi a menos avistada no total da
semana.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int avist_tatu, avist_gato, avist_tamand;
    int total_tamand = 0;
    int total_gato = 0;
    int total_tatu =0;


    for (int i=1; i<=7; i++){
        printf("Dia %d: Tatu-Canastra:", i);
        scanf("%d", &avist_tatu);
        printf("Dia %d: Gato-Maracajá:", i);
        scanf("%d", &avist_gato);
        printf("Dia %d: Tamanduá Bandeira:", i);
        scanf("%d", &avist_tamand);

        total_tatu = avist_tatu + total_tatu;
        total_gato = avist_gato + total_gato;
        total_tamand = avist_tamand + total_tamand;

    }

    printf("Total de avistamentos do Tatu-Canastra: %d\n", total_tatu);
    printf("Total de avistamentos do Gato-Maracajá: %d\n", total_gato);
    printf("Total de avistamentos do Tamanduá Bandeira: %d\n", total_tamand);

    float total = total_gato + total_tamand + total_tatu;
    float media_tatu = total/total_tatu;
    float media_gato = total/total_gato;
    float media_tamand = total/total_tamand;

    printf("A média de avistamentos do Tatu-Canastra: %.2f\n", media_tatu);
    printf("A média avistamentos do Gato-Maracajá: %.2f\n", media_gato);
    printf("A média avistamentos do Tamanduá Bandeira: %.2f\n", media_tamand);

    if (total_gato>total_tamand && total_gato>total_tatu){
        printf("A espécie mais avistada foi Gato-Maracajá\n");
    }
    if(total_tamand>total_gato && total_tamand>total_tatu){
        printf("A espécie mais avistada foi Tamanduá Bandeira\n");
    }
    if(total_tatu>total_gato && total_tatu>total_tamand){
        printf("A espécie mais avistada foi Tatu-Canastra\n");
    }

    //menores

    if(total_gato<total_tamand && total_gato<total_tatu){
        printf("A espécie menos avistada foi Gato-Maracajá\n");
    }
    if(total_tamand<total_gato && total_tamand<total_tatu){
        printf("A espécie menos avistada foi Tamanduá Bandeira\n");
    }
    if(total_tatu<total_gato && total_tatu<total_tamand){
        printf("A espécie menos avistada foi Tatu-Canastra\n");
    }


}