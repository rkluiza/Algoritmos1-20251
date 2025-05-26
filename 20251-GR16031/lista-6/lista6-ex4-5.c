#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int matriz[4][6];
    int seg_linha =0, qui_coluna =0;

    printf("Escreva os números de uma matriz 4x6");
    
    for (int i=0; i<4; i++){
        for (int j=0; j<6; j++){
            matriz[i][j] = -10 + rand() % 21; // valores de -10 a 10;
            printf("%d, ", matriz[i][j]);
        
        if(i==1){
            seg_linha += matriz[i][j];
        }
    
        if(j==4){
            qui_coluna += matriz[i][j];
        }


        
        }

        printf("\n");
    }

    
//incompleto

}