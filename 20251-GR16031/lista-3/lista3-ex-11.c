/*

Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1.

*/


#include <locale.h>
#include <stdio.h>
    
int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int cont, quant_100, quant_50, quant_20, quant_10, quant_5, quant_1, d;
    int valor;
    
    cont = 1;
    quant_1 = 0;
    quant_5 = 0;
    quant_10 = 0;
    quant_20 = 0;
    quant_50 = 0;
    quant_100 = 0;
        
        printf("Digite o valor que deseja verificar a quantidade de notas: ");
        scanf("%i", &valor);
        
            while(valor>=100){
                valor = valor-100;
                quant_100 = quant_100 + 1;
            }
            while (valor>=50){
                valor = valor-50;
                quant_50 = quant_50 +1;
            }
            while(valor>=20){
                valor = valor-20;
                quant_20 = quant_20 +1;
            }
            while(valor>=10){
            valor = valor-10;
            quant_10 = quant_10 +1;
            }
            while(valor>=5){
            valor = valor-5;
            quant_5 = quant_5 +1;
            }
            while(valor>=1){
            valor = valor-1;
                quant_1 = quant_1 +1;
            }
        
    
        if (quant_100>0){
            printf("%i nota(s) de R$100\n", quant_100);
        }
        if (quant_50>0){
            printf("%i nota(s) de R$50\n", quant_50);
        }
        if (quant_20>0){
            printf("%i nota(s) de R$20\n", quant_20);
        }
        if (quant_10>0){
            printf("%i nota(s) de R$10\n", quant_10);
        }
        if (quant_5>0){
            printf("%i nota(s) de R$5\n", quant_5);
        }
        if (quant_1>0){
            printf("%i nota(s) de R$1\n", quant_1);
        }

return 0;

}