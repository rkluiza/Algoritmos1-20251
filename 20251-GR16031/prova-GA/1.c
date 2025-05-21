/*
1. Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
subitens abaixo:
a) Sortear um número inteiro positivo entre 1 e 100 (inclusive)
b) Sortear um número inteiro negativo entre -100 e -1 (inclusive)
c) Sortear um número inteiro entre -50 e 50 (inclusive)
d) Sortear um número real entre -1.0 e 1.0, com 1 casa decimal
e) Sortear um número inteiro entre 50 e 150, divisível por 5
*/



 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main () {

    int num;
    float numf;

    printf("SORTEIO\n");

    printf("Um número entre 1 e 100\n");
    num = 1 + rand() % (100 + 1);
    printf("%d\n", num);

    printf(" Um número entre -100 e -1\n");
    num = -100 + rand() % (99);
    printf("%d\n", num);

    printf(" Um número entre -50 e 50\n");
    num = -50 + rand() % (-50 + 100 + 1 );
    printf("%d\n", num);

    printf(" Um número entre -1.0 e 1.0\n");
    num = -10 + rand() % (10 + 1);
    numf = (num/10.0);
    printf("%.1f\n", numf);

    printf("Um número entre 50 e 150, que seja divisível de 5.\n");
    num = 1 + rand() % (20 + 1);
    int num_d = (num*5)+5;
    printf("%d\n", num_d);

    return 0;

}