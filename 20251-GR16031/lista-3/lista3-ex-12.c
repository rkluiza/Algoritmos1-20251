/*

12) A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:

*/

#include <stdio.h>
#include <locale.h>
    
int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int idade;
    
    
    printf("Escreva a idade do jogador que irá participar das Olimpíadas: ");
    scanf("%i", &idade);
    
    if(idade<5){
        printf("Ele não pode participar das Olimpíadas");
    } else if (idade>=5 && idade<=7) {
        printf("Ele está na categoria Infantil A");
    } else if(idade>=8 && idade<=10) {
        printf("Ele está na categoria Infantil B");
    } else if (idade>=11 && idade<=13) {
        printf("Ele está na categoria Juvenil A");
    } else if (idade>=14 && idade<=17) {
        printf("Ele está na categoria Juvenil A");
    } else if (idade>=18){
        printf("Ele está na categoria Senior");
    } else {
        printf("Idade inválida");
    }
    
    return 0;
}