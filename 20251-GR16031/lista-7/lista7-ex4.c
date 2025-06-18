/*

4. Implemente uma função sorteio que receba o intervalo de valores inteiros início e fim como parâmetro
e sorteie um número dentro do intervalo (considerando intervalo fechado [início, fim])

*/

#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

int Sortear(int inicio, int fim) {
    int range = fim - inicio + 1;
    return inicio + (rand() % range);
}

int main() {

    int num1, num2;

    srand(time(NULL));

    printf("Escreva dois números para utilizarmos como início e fim do intervalo:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int nroSorteado = Sortear(num1, num2);
    printf("Numero sorteado (%d - %d): %d\n", num1, num2, nroSorteado);

    return 0; // Indica que o programa foi executado com sucesso
}