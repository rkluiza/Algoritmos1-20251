#include <stdio.h> 

// int main(){

//     int feliz;
//     double n, contador, soma;


    
//     for(contador = 1; contador<100; contador++){
//         while(feliz>1){
//                 double d = feliz % 10;
//                 feliz = feliz/10;
//                 printf("%d\n", d); //pega cada digito de vez

//                 soma = soma + (d*d);
//         }
//         if (soma!=1){
//             feliz = soma;
//         } else {
//             printf("O número é feliz!");
//             contador = 100;
//         }
//     }



// }

// #include <stdio.h>

int main() {

    int feliz;
    int copia = feliz;
    int digitos[10]; // Suporta até 10 dígitos
    int i = 0;
    int soma = 0;

    printf("Escreva um número para verificarmos se ele é feliz\n");
    scanf("%d", &feliz);


    while(int contador !=1){
    // Extrai os dígitos da direita para a esquerda
        while (copia > 0) {
            digitos[i] = copia % 10;
            copia /= 10;
            i++;
        }

        for(int j=0; j<i; j++){
            digitos[j] = (digitos[j])*(digitos[j]);
            int soma = soma + digitos[j];
        }

        if(soma==1){
            printf("O número é feliz!");
            break;
        } 

}
    return 0;
}
