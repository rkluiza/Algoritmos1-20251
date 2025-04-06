/*

3) Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
o resultado.

*/

    #include <stdio.h> // funções de entrada e saída
    #include <locale.h> 
    #include <limits.h>
    #include <stdlib.h>

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Define o idioma para português do Brasil

    float num = 0;
    num = rand ();
    
    printf("O número definido é: %f", num);
    
    if (num>0){
        printf("O número é positivo e o seu dobro é: %f", 2*num);
    } else {
        printf("O número é negativo e o seu triplo é: %f", 3*num);
    }
    
    return 0;
}
