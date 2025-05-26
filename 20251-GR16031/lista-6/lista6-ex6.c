#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    double notas[10][3];

    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            notas[i][j] = rand() % 11; // valores de -10 a 10;
            printf("%.1f, ", notas[i][j]);

        }
        printf("\n");
    }

    printf("Grau parcial dos alunos\n");

    for(int i=0; i<10; i++){

    }

    //incompleto

}