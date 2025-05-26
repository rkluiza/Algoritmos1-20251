#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int v1[5] = {1,5,9,2,5};
    int v2[5] = {7,4,13,21,6};
    int v3[5] = {8,-3,5,7,12};
    int mult_7[3][5];

    int matriz[3][5];

        for(int j=0; j<5; j++){
            matriz[0][j] = v1[j];
            printf("%d, ", matriz[0][j]);
        }

        printf("\n");

        for(int j=0; j<5; j++){
            matriz[1][j] = v2[j];
            printf("%d, ", matriz[1][j]);
        }


        printf("\n");

        for(int j=0; j<5; j++){
            matriz[2][j] = v3[j];
            printf("%d, ", matriz[2][j]);
        }

        printf("\n");
        //multiplicar por 7
        
        for(int i=0; i<3; i++){
            for(int j=0; j<5; j++){
                mult_7[i][j] = (matriz[i][j])*7;
                printf("%d, ", mult_7[i][j]);
            }
        }



    }



