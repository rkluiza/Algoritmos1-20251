/* Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a
porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.*/

#include <stdio.h>
#include <stdbool.h> //biblioteca para números booleanos
#include <math.h>

int main() {

    //não consegui identificar o porque não está funcionando a porcentagem.

    int inteiro;
    int porcentagem_positivos = 0;
    int porcentagem_negativos = 0;
    int negativos = 0;
    int positivos = 0;
    int total = 0;
    int div2 = 0;
    int div5 = 0;
    int num = 0;

    bool controlador=true;


    printf("O programa irá receber números inteiros e, caso você digite 0, ele irá encerrar e apresentar os dados propostos. \n");
    
    
    while (controlador=true){

    printf("Escreva um número inteiro: \n");
    scanf("%d", num);
        if (num%1!=0){
            printf("Por gentileza, digite um número inteiro");
        } else {
            inteiro = num;
        }

    }
            while (controlador==true){    
            scanf("%i", &inteiro);

            if(inteiro!=0){

                if (inteiro>=0){
                    positivos++; 
                }

                if (inteiro<=0){
                    negativos++;
                }

                if(inteiro%2==0){
                    div2++;
                }

                if (inteiro%5==0){
                    div5++;
                }
            
                total++;
            }
            else{
                controlador=false;
            }


        }
    

    porcentagem_positivos = ((positivos/total)*100);
    porcentagem_negativos = ((negativos/total)*100);

    printf("Fim do programa\n");
    printf("A porcentagem de números positivos é: %d\n", porcentagem_positivos);
    printf("A porcentagem de números negativos é: %d\n", porcentagem_negativos);
    printf("%d dos %d números são divisíveis por 2\n", div2, total);
    printf("%d dos %d números são dividíveis por 5\n", div5, total);

}