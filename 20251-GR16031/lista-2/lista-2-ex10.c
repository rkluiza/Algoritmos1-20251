/* 10. O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer que você
calcule quanto cada cliente gastou na loja apenas informando o número de camisetas, calças e cintos
comprados. As camisetas custam R$ 25,00, as calças R$ 100,00 e os cintos R$ 40,00. Some o valor da
compra e ao final dê um desconto de 10 por cento sobre o total. Exiba na tela o valor do desconto e
o valor da compra.*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    int camisetas, calcas, cintos, total, desconto;

    printf("Digite o número de camisetas compradas: ");
    scanf("%i", &camisetas);

    printf("Digite o número de calças compradas: ");
    scanf("%i", &calcas);

    printf("Digite o número de cintos comprados: ");
    scanf("%i", &cintos);

    total = (camisetas * 25) + (calcas * 100) + (cintos * 40);
    desconto = total * 10 / 100;
    total = total - desconto;
    printf("Você gastou com camisetas: R$ %i\n", camisetas * 25);
    printf("Você gastou com calças: R$ %i\n", calcas * 100);
    printf("Você gastou com cintos: R$ %i\n", cintos * 40);

    printf("O valor da compra é: R$ %i\n", total);
    printf("O valor do desconto é: R$ %i\n", desconto);
    

    return 0;
}