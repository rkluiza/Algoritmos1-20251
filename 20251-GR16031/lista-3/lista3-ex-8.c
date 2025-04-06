/*

8) Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
tela o valor de venda.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
     
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float venda, compra;
    
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &compra);
    
    
    if (compra <= 20) {
        venda = compra + (compra *0.45);
    } else if (compra <= 50) {
        venda = compra + (compra *0.35);
    } else if (compra > 50) {
        venda = compra + (compra *0.25);
    } 
    
    printf ("O valor de venda do produto é: %f ", venda);
    
    return 0;

}