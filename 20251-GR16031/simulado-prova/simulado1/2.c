/*

2. Escreva um programa que sorteie:
a. Um número entre 130 e 670.
b. Um número entre -20 e -5.
c. Um número entre -10 e 10.
d. Um número entre 10.5 e 50.2, com uma casa decimal.
e. Um número entre 0 e 100, que seja múltiplo de 5.
f. Um caractere entre 'A' (65) e 'Z' (90)

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int num;
    double num2;
    char letra;


    printf("SORTEIO\n");

    printf("Um número entre 130 e 670\n");
    num = 130 + rand() % (670 - 130 + 1);
    printf("%d\n", num);

    printf(" Um número entre -20 e -5\n");
    num = -20 + rand() % (-20 + 15 + 1);
    printf("%d\n", num);

    printf(" Um número entre -10 e 10\n");
    num = -10 + rand() % (-10 + 20 + 1);
    printf("%d\n", num);

    printf(" Um número entre 10.5 e 50.2\n");
    num = 105 + rand() % (502 - 105 + 1); 
    num2 = num/10.0;
    printf("%.1f\n", num2);

    printf("Um número entre 0 e 100, que seja múltiplo de 5.\n");
    num = 1 + rand() % (21 -1 + 1);
    printf("%d\n", num*5);

    printf("Um caractere entre 'A' (65) e 'Z' (90)\n");
    num = 65 + rand() % (90 -65 + 1);
    letra = (char)num;
    printf("%c\n", letra);

    return 0;

}