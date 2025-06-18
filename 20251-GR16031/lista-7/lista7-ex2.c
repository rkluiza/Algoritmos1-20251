/*
2. Implemente uma função tabuada que receba como parâmetro um número inteiro e escreva a tabuada
desse número

*/

#include <stdio.h>

void Tabuada (double numero){ // usar void quando nao retorna nada

    for(int i=0; i<10; i++){
        double resultado[10]; 
        resultado[i]= numero * (i+1);
        printf("%d X %.2f = %.2f\n", i+1, numero, resultado[i]);
    }

    return 0;
}

int main(){

    double numero = 0.0;
    printf("Escreva um número: \n");
    scanf("%lf", &numero);

    Tabuada(numero);


}