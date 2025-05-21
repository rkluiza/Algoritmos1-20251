/*

2. Escreva um programa que leia dois números inteiros: um representando a base e outro
representando o expoente. O programa deve calcular a potência da base elevada ao
expoente, sem utilizar bibliotecas matemáticas (não pode usar a função pow()). Ao final, o
programa deve exibir o valor da potência.

• Caso o expoente seja zero, o resultado deve ser 1 (por definição matemática).
• Caso o expoente seja negativo, o programa deve calcular a potência normalmente (como
se fosse positivo), e depois exibir o inverso (1 dividido pelo resultado).
• A saída deve ser exibida com 2 casas decimais.
• Base e expoente devem ser do tipo inteiro. O resultado pode ser armazenado em uma
variável do tipo double.

*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

// int main() {

//     int base, expoente;
//     double resultado = 1.0;

//     printf("Escreva o número que irá ser a BASE: \n");
//     scanf("%d", &base);
//     printf("Escreva o número que irá ser o EXPOENTE\n");
//     scanf("%d", &expoente);

//     if (expoente==0){
//         resultado = 1;

//     } else {
//         for (int i=1; i<=expoente; i++){

//             resultado = resultado*base;
//             printf("%.2d\n", resultado);
            
//         }

//         if(expoente<0){
//             resultado = 1/resultado;
//         }


//         printf("O resultado é %.2f", resultado);

//     }


// }

int main() {

    int base, expoente;
    double resultado = 1.0;

    printf("Escreva o número que irá ser a BASE: \n");
    scanf("%d", &base);
    printf("Escreva o número que irá ser o EXPOENTE\n");
    scanf("%d", &expoente);

    if (expoente==0){
        resultado = 1;

    } else {
        if(expoente>0){
            
            for (int i=1; i<=expoente; i++){
                resultado = resultado*base;

            }

        } else if (expoente<0) {
            for (int i=-1; i>=expoente; i--){
                resultado = resultado*base;

            }

             resultado = 1.0/resultado;
        }

    }
        printf("O resultado é %.2f", resultado);

}